#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Side 1 of a Triangle : ");
    scanf("%d", &a);
    printf("\nEnter Side 2 of a Triangle : ");
    scanf("%d", &b);
    printf("\nEnter Side 3 of a Triangle : ");
    scanf("%d", &c);

    if (a + b > c || b + c > a || c + a > b)  // Here, "||" means "OR"
    { 
        printf("Yipeee..!! It is a Valid triangle");
    }
    else
    {
        printf("Nopee..!! It is a NOT Valid triangle");
    }
}