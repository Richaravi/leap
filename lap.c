#include<stdio.h>
void main()
{
int year;
printf("\n Enter the year");
scanf("%d",&year);
if(year%400==0)
{
printf("%d the year is leap year",year);
elseif(year%100==0)
printf("%d the year is not leap year",year);
else(year%4==0)
printf("%d the year is leap year",year);
}
printf("%d the yyear not",year);
}

