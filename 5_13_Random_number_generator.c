#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    // To generate random integers within a specified range, we can use the modulus operator(%) to limit the range of the output from rand().For example, to generate a random integer between 1 and 6, we can use rand() % 6 to get a value in the range[0, 5], and then add 1 to shift the range to[1, 6].
    //  To avoid getting the same sequence of random numbers every time the program is run,
    // we need to seed the random number generator using the srand() function.One common way to do this is to use the current time as the seed, as shown in the code using time(NULL) as the argument to srand().This sets the seed to the number of seconds since the Unix epoch(January 1, 1970), which is generally a different value each time the program is run.
    // Seed the random number generator
    srand(time(NULL));

    // Assign random integer values to n in specified ranges
    n = rand() % 6 + 1; // 1 <= n <= 6
    printf("Random number between 1 and 6: %d\n", n);

    n = rand() % 901 + 100; // 100 <= n <= 1000
    printf("Random number between 100 and 1000: %d\n", n);

    n = rand() % 20; // 0 <= n <= 19
    printf("Random number between 0 and 19: %d\n", n);

    n = rand() % 1223 + 1000; // 1000 <= n <= 2222
    printf("Random number between 1000 and 2222: %d\n", n);

    n = rand() % 3 - 1; // -1 <= n <= 1
    printf("Random number between -1 and 1: %d\n", n);

    n = rand() % 15 - 3; // -3 <= n <= 11
    printf("Random number between -3 and 11: %d\n", n);

    return 0;
};
