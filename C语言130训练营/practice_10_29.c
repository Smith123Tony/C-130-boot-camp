#define _CRT_SECURE_NO_WARNINGS 1
//C语言刷题训练营1
//BC1 实践出真知
//#include<stdio.h>
//int main()
//{
//    printf("  *\n ***\n*****\n");
//    return 0;
//}


////BC6 小飞机
//#include<stdio.h>
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d", arr[i]);
//        printf("\n");
//    }
//    return 0;
//}


////BC3 有容乃大
//#include<stdio.h>
//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}



////BC7 缩短二进制
//#include<stdio.h>
//int main()
//{
//	printf("0%o 0X%X", 1234, 1234);
//	return 0;
//}


////BC19 反向输出一个四位数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}


//BC28 大小写转换
//法一
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n",ch+32);
//		getchar();
//	}
//	return 0;
//}
////法二
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() )!= EOF)
//	{
//		printf("%c\n", tolower(ch));
//		getchar();
//	}
//	return 0;
//}






















