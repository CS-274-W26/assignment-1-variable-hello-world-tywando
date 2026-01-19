#include <stdio.h> // Necessary for printf()
#include <time.h> // Provides time() for seeding
#include <stdlib.h> // Provides rand() and srand()

int main() {
	srand(time(NULL)); // Seed Pseudo-Random Number Generation (PRNG)

	int myrand; // Declare int myrand
	myrand = rand() % 11; // Intitialize myrand to between 0 and 10

	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand >= 5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n");
	}

	printf("The random number was: %d\n", myrand);
}
