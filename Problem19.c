// Sunday = 1, Monday = 2, Tuesday = 3 ...
// January = 1, February = 2, March = 3...
// Leap year if the year is divisible by 4
// Also not on centuries unless divisible by 400 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

	
	int month = 1, weekday = 3, year = 1901, day, max, counter = 0, isLeap;//weekday indicates mon tues ... maxday indicates the month day
	while(year != 2001)//Go up till the year 2001 
	{
		//			**Set leap year boolean**			//
		if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
		{
			isLeap = 1;//if the year is div by 4 and is a century and is div by 400
		}
		else if (year % 4 && year % 100 != 0)
		{
			isLeap = 1;//year divisible by 4 and not a century
		}
		else if(year % 4 && year % 100 == 0 && year % 400 != 0 )
		{
			isLeap = 0;// for years like 1900 or 2100 they are not leap years 
		}
		else 
		{
			isLeap = 0;//default to no leap year
		}
		
		//			**Set Month Length**			//
		if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			max = 30;
		}
		else if (month == 2 && isLeap == 0)
		{
			max = 28;
		}
		else if (month == 2 && isLeap == 1)
		{
			max = 29;
		}
		else 
		{
			max = 31;
		}
		
		for(day = 1; day <= max; day++)
		{
			//printf("year is %d, leap = %d  month is %d, max is %d, day is %d, counter is %d\n", year, isLeap, month, max, day, counter);
			if(weekday == 8)
			{
				weekday = 1;
				
			}
			if (weekday == 1 && day == 1)
			{
				counter++;
			}
			if(day == max)
			{
				month++;
				if (month == 13)
				{
					day = 1;
					month = 1;
					year++;
				}
				break;
			}
			weekday++;
		}
		
	}
	printf("%d", counter);
	return(0);
}