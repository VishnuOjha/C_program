#include <stdio.h>

int main()
{
    int r1, r2;
    printf("Enter a one side of Reactangle R1 : ");
    scanf("%d", &r1);
    printf("Enter a one side of Reactangle R2 : ");
    scanf("%d", &r2);

    int area = r1 * r2;
    printf("Area of Rectangle : %d", area);
    return 0;
}