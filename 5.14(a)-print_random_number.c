#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int set1[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
    int n1 = sizeof(set1) / sizeof(set1[0]);  // calculate the size of the set
    srand(time(0));                           // seed the random number generator with the current time
    int random_index1 = rand() % n1;          // generate a random index within the range of the set
    int random_number1 = set1[random_index1]; // select the number at the random index
    printf("Random number from the set 1: %d\n", random_number1);
    return 0;
}
