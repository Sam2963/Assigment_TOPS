// 3. WAP to check if the given year is a leap year or not.
#include <stdio.h>
int main()
{
	int year;
    printf("Enter any year: ");
    scanf("%d", &year);

    if (year%4==0) 
	{
        printf("%d is a leap year.\n", year);
    }
    
    else 
	{
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

