#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	/*int ret = printf("Hello world!");
//	printf("\n%d\n", ret);
//	return 0;*/
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%d;%f,%f,%f", &num, &a, &b, &c);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, a, b, c);
//	return 0;
//}

////多组输入判断字母
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();//处理\n
//	}
//	return 0;
//}

////isalpha用来专门判断一个字符是不是字母
////是字母则返回非0的值，不是字母则返回0
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();//处理\n
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	for (int i = 1; i <= 5; i++)
//	{
//		//先打印空格
//		for (int j = 1; j <= 5-i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= i; k++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d", ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}

























