// This function takes in three integers, a, b, and c, and returns 1 if they form a right-angled triangle, and 0 otherwise
int is_right_triangle(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter three non-zero integers (separated by spaces): ");

    // Loop until the user inputs invalid values or hits the end of the file
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        // Check if the values form a right-angled triangle using the is_right_triangle function
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

// This function takes in three integers, a, b, and c, and returns 1 if they form a right-angled triangle, and 0 otherwise
int is_right_triangle(int a, int b, int c)
{
    // Check if any of the three combinations of sides form a right-angled triangle
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
    {
        return 1; // If a right-angled triangle is formed, return 1
    }
    else
    {
        return 0; // If not, return 0
    }
}
