#include <stdio.h>
#include <stdlib.h>

            

	Z = Y;
 	while (X) {
		Z++;
	}

	return Z;

}

int main(int argc, char *argv[]) {
	int provol2c = provolone2c(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	printf("Result -> %d\n", provol2c);
	return 0;
}