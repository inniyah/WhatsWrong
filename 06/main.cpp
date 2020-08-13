#include <stdio.h>
#include <string.h>

struct Classifier {
	Classifier() {
		strncpy(data[0], "type A", 10);
		strncpy(data[1], "subtype 2", 10);
		type = data[0];
		subtype = data[1];
	}
	const char* getType() { return type; }
	const char* getSubtype() { return subtype; }
	char data[2][10];
	char *type;
	char *subtype;
};

Classifier* redimension(Classifier* source, int source_size, int dest_size) {
	Classifier* dest = new Classifier[dest_size];
	memcpy(dest, source, (source_size < dest_size ? source_size : dest_size) * sizeof(Classifier));
	delete[] source;
	return dest;
}

int main() {
	Classifier* a = new Classifier[1];
	printf("Type: %s\n", a[0].getType());
	a = redimension(a, 1, 2);
	printf("Type: %s\n", a[0].getType());
	delete[] a;
}

// Result: No type for a[0] after redimension

