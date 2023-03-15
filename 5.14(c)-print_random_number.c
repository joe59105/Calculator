#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int set3[] = {3, 8, 13, 18, 23, 28, 33};
    int n3 = sizeof(set3) / sizeof(set3[0]);  // calculate the size of the set
    srand(time(0));                           // seed the random number generator with the current time
    int random_index3 = rand() % n3;          // generate a random index within the range of the set
    int random_number3 = set3[random_index3]; // select the number at the random index
    printf("Random number from the set 3: %d\n", random_number3);
    return 0;
}
