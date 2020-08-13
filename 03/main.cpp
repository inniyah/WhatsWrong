#include <stdio.h>

int main() {
	unsigned int speed = 2;
	int acceleration = -10;
	speed += acceleration;
	printf("%ld\n", speed);
}

// Result: 4294967288