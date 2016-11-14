struct Database {
	char * path;
	char unitSizeInBytes;
};

struct Database * Database_construct(char * path);
struct Database * Database_constructNew(char * path, char unitSizeInBytes);

void Database_destruct(struct Database * database);

void Database_create(struct Database * database);
char Database_unitSizeInBytes(struct Database * database);
