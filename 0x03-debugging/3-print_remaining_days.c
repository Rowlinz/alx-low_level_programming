#include "main.h"

/**
* print_remaining_days(int month, int day, int year)
* left in the year, taking lap years into consideration
* @month: month in the number format
* @day: day o month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

printf("day of the year: %d\n", day);
printf("Remaining days: %d\n, 366 - day);
}
else
{
if (main == 2 && day == 60)
{
printf("Invalid date: %0%d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n, day);
}
}
}
