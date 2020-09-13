#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	int i;
	srand(time(NULL));
	
    for (i = 1; i <= 10; i++){
        printf("%d ", (rand() % 100) + 1);
 	}
    printf("\n");
	
	return 0;
}
//46 17 99 96 85 51 91 32 6 17

