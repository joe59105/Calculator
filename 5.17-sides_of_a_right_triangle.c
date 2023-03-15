#include <stdio.h>

int is_right_triangle(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter three non-zero integers (separated by spaces): ");
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        if (is_right_triangle(a, b, c))
        {
            printf("%d, %d, and %d form a right-angled triangle.\n", a, b, c);
        }
        else
        {
            printf("%d, %d, and %d do not form a right-angled triangle.\n", a, b, c);
        }
        printf("Enter three non-zero integers (separated by spaces): ");
    }
    return 0;
}

int is_right_triangle(int a, int b, int c)
{
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
