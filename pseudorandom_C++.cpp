#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
    . . .
    srand(time(0));  // Initialize random number generator.
    . . .
    r = (rand() % 10) + 1;
