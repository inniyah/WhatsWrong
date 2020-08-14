#include <string.h>
#include <stdio.h>

struct Data {
	int v1;
	int v2;
	Data() : v1(-1), v2(-1) {}
	virtual ~Data() {}
};

Data data[3];

int main() {
	memset(data, 0, 2 * sizeof(data[0])); // Set the first two elements to zero
	for (int i = 0; i < sizeof(data)/sizeof(data[0]); i++) // Print all the elements
		printf("#%d = (%d, %d); ", i, data[i].v1, data[i].v2);
	printf("\n");
}

// Result: Segmentation Fault
