// 4. Find Area of Square formula : a = a2 in c program.
#include <stdio.h>

int main() {
    int side, area;

    printf("Enter the side of square: ");
    scanf("%d", &side);

    area = side * side;

    printf("Area of square with side %d is: %d\n", side, area);

    return 0;
}

