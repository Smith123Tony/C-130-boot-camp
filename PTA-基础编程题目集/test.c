#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int hour = 0;
	int minute = 0;
	scanf("%d:%d", &hour, &minute);
	if (hour >= 13)
	{
		printf("%d:%d PM", hour - 12, minute);
	}
	else if (hour == 12)
	{
		if (minute == 0)
		{
			printf("12:0 PM");
		}
		else
		{
			printf("00:%d PM", minute);
		}
	}
	else
	{
		printf("%d:%d AM", hour, minute);
	}
	return 0;
}