#include "sqlite3.h"
#include <stdio.h>
#include <string.h>

int getIdFromTeam(sqlite3 *db, char team[]) {
	sqlite3_stmt *stmt;

	char sql[] = "select id from EQUIPOS where nombre = ?";

	int result = sqlite3_prepare_v2(db, sql, strlen(sql) +1, &stmt, NULL);
	if (result != SQLITE_OK) {
		printf("Error preparing statement (SELECT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("SQL query prepared (SELECT)\n");

	result = sqlite3_bind_text(stmt, 1, team, strlen(team), SQLITE_STATIC);
	if (result != SQLITE_OK) {
		printf("Error binding parameters\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	result = sqlite3_step(stmt);
	if (result != SQLITE_ROW) {
		printf("Error selecting data from EQUIPOS table\n");
		return result;
	}

	result = sqlite3_finalize(stmt);
	if (result != SQLITE_OK) {
		printf("Error finalizing statement (SELECT)\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}
	printf("Prepared statement finalized (SELECT)\n");

	return SQLITE_OK;

}

//int insertCampeonato(sqlite3 *db, char nombre[], int id_team) {
//	sqlite3_stmt *stmt;
//
//	char sql[] = "insert into CAMPEONATOS (nombre, campeon) values (?, ?)";
//	int result = sqlite3_prepare_v2(db, sql, strlen(sql) +1, &stmt, NULL);
//
//}

int main(void) {
	sqlite3 *db;

	int result = sqlite3_open("db/futbol.sqlite", &db);
	if (result != SQLITE_OK) {
		printf("Error opening database\n");
		return result;
	}

	printf("Database opened\n");

	int id_team = getIdFromTeam(db, "F.C. Barcelona");
	if (result != SQLITE_OK) {
		printf("Error selecting ID from EQUIPOS");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("%i\n", id_team);

	result = sqlite3_close(db);
	if (result != SQLITE_OK) {
		printf("Error closing database\n");
		printf("%s\n", sqlite3_errmsg(db));
		return result;
	}

	printf("Database closed\n");

	return 0;

}
