#include <string.h>
#include <stdio.h>

struct Data {
	int v1;
	int v2;
	Data() : v1(-1), v2(-1) {}
	virtual ~Data() {}
};

int main() {
	Data data[5];
	memset(data, 0, sizeof(data));
	for (int i=0; i<5; i++)
		printf("%d %d\n", data[i].v1, data[i].v2);
}

// Result: Segmentation Fault
