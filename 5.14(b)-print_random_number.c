#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int set2[] = {3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n2 = sizeof(set2) / sizeof(set2[0]);  // calculate the size of the set
    srand(time(0));                           // seed the random number generator with the current time
    int random_index2 = rand() % n2;          // generate a random index within the range of the set
    int random_number2 = set2[random_index2]; // select the number at the random index
    printf("Random number from the set 2: %d\n", random_number2);
    return 0;
}
