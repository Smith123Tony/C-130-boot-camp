#define _CRT_SECURE_NO_WARNINGS 1
//BC41 你是天才吗？
//#include<stdio.h>
//int main()
//{
//	int iq = 0;
//	
//	while (scanf("%d", &iq) != EOF)
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int iq = 0;
//	
//	while (~scanf("%d", &iq))
//	{
//		if (iq >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//			printf("Perfect\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	while (~scanf("%d %d %d", &n1, &n2, &n3))
//	{
//		int max = 0;
//		max = n1 > n2 ? n1 : n2;
//		max = max > n3 ? max : n3;
//		printf("%d\n", max);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	int arr[3] = { 0 };
//	while (~scanf("%d%d%d", &arr[0], &arr[1], &arr[2]))
//	{
//		int i = 0;
//		int max = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (arr[i] > max)
//				max = arr[i];
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch = 0;
//	char vowel[11] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		//判断
//		/*int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == vowel[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}*/
//		if (strchr(vowel, ch))
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch = 0;
//	char vowel[] = "AaEeIiOoUu";
//	while ((scanf(" %c",&ch)) != EOF)
//	{
//		//判断
//		if (strchr(vowel, ch))
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch = 0;
//	char vowel[] = "AaEeIiOoUu";
//	while ((scanf("%c\n", &ch)) != EOF)
//	{
//		//判断
//		if (strchr(vowel, ch))
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}


////BC47 判断是不是字母
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((scanf("%c\n", &ch)) != EOF)
//	{
//		if (ch >= 'a' && ch <= "z" || ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c is an alphabet.\n", ch);;
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (scanf("%c\n", &ch) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (scanf("%c\n", &ch) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while (~scanf("%c", &ch))
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while (~scanf("%c", &ch))
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", ch-32);
//		}
//		else if (isupper(ch))
//		{
//			printf("%c\n", ch+32);
//		}
//		getchar();
//	}
//	return 0;
//}


//BC50 计算单位阶跃函数
//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//			printf("1\n");
//		else if (t == 0)
//			printf("%.1f\n", 0.5f);
//		else
//			printf("0\n");
//		
//	}
//	return 0;
//}


//BC51 三角形判断
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		//判断是否为三角形
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			//判断是什么三角形
//			if (a == b && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (isupper(ch))
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}























































