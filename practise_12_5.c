#define _CRT_SECURE_NO_WARNINGS 1
//C语言刷题训练营—11

//BC112 小乐乐求和
//#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    printf("%lld\n", (1 + n) * n / 2);
//    return 0;
//

//#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    long long i = 1;
//    long long sum = 0;
//    scanf("%lld", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%lld\n", sum);
//    return 0;
//}}


////BC113 小乐乐定闹钟
//#include<stdio.h>
//int main()
//{
//	return 0;
//}


////BC123 小乐乐找最大数
//#include<stdio.h>
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    max = arr[i];
//    for (i = 0; i < 4; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}


////BC125 小乐乐转换成绩
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    scanf("%d", &score);
//    if (score >= 90 && score <= 100)
//    {
//        printf("%c", 'A');
//    }
//    else if (score >= 80 && score <= 89)
//    {
//        printf("%c", 'B');
//    }
//    else if (score >= 70 && score <= 79)
//    {
//        printf("%c", 'C');
//    }
//    else if (score >= 60 && score <= 69)
//    {
//        printf("%c", 'D');
//    }
//    else if (score >= 0 && score <= 59)
//    {
//        printf("%c", 'E');
//    }
//    else
//    {
//        printf("%c", 'F');
//    }
//    return 0;
//}

//err
//#include<stdio.h>
//int max(int a, int b, int c)
//{
//    if (a >= b && a >= c)
//    {
//        return a;
//    }
//    else if (b >= a && b >= c)
//    {
//        return b;
//    }
//    else if (c >= a && c >= b)
//    {
//        return c;
//    }
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int max1 = 0;
//    int max2 = 0;
//    int max3 = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    max1 = max(a + b, b, c);
//    max2 = max(a, a + b, c);
//    max3 = max(a, b, b + c);
//    printf("")
//    return 0;
//}


////BC111 小乐乐与进制转换
//#include<stdio.h>
//int main()
//{
//    int arr[40] = { 0 };
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        arr[i] = n % 6;
//        i++;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}


////BC113 小乐乐定闹钟
//#include<stdio.h>
//int main()
//{
//    int h=0;
//    int m=0;
//    int k=0;
//    scanf("%d:%d %d",&h,&m,&k);
//    h=((m+k)/60+h)%24;
//    m=(m+k)%60;
//    printf("%02d:%02d",h,m);
//    return 0;
//}


////BC114 小乐乐排电梯
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", (n / 12) * 4 + 2);
//    return 0;
//}


//BC129 小乐乐计算函数
//#include<stdio.h>
//int max(int a, int b, int c)
//{
//    if (a >= b && a >= c)
//    {
//        return a;
//    }
//    else if (b >= a && b >= c)
//    {
//        return b;
//    }
//    else if (c >= a && c >= b)
//    {
//        return c;
//    }
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int max1 = 0;
//    int max2 = 0;
//    int max3 = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    max1 = max(a + b, b, c);
//    max2 = max(a, b + c, c);
//    max3 = max(a, b, b + c);
//    printf("%.2f", max1 * 1.0 / (max2 + max3));
//    return 0;
//}
//
//#include<stdio.h>
//int max3(int a, int b, int c)
//{
//	int max = a;
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	return max;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float ret = ((float)max3(a + b, b, c)) / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f", ret);
//	return 0;
//}


//BC111 小乐乐与进制转换
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[40] = { 0 };
//	int i = 0;
//	int k = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (k = i-1; k >= 0; k--)
//	{
//		printf("%d", arr[k]);
//	}
//	return 0;
//}


//BC115 小乐乐与欧几里得
//#include<stdio.h>
//int main()
//{
//	long long m = 0;
//	long long n = 0;
//	long long max = 0;
//	long long min = 0;
//	scanf("%lld %lld", &m, &n);
//	max = m > n ? n : m;
//	min = m > n ? m : n;
//	while (max)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//	while (min)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("%lld", max + min);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    long long m = 0;
//    long long n = 0;
//    long long tmp = 0;
//    scanf("%lld %lld", &m, &n);
//    long long a = m;
//    long long b = n;
//    while (tmp = a % b)
//    {
//        a = b;
//        b = tmp;
//    }
//    printf("%lld", b + m * n / b);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    int w = 0;
//    scanf("%d", &n);
//
//    while (n)
//    {
//        if (n % 10 % 2 == 1)
//        {
//            w = 1;
//        }
//        else
//        {
//            w = 0;
//        }
//        n /= 10;
//        sum += w * pow(10, i);
//        i++;
//    }
//    printf("%d", sum);
//    return 0;
//}


////BC117 小乐乐走台阶
//#include<stdio.h>
//int fib(int n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    else
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = fib(n);
//    printf("%d\n", ret);
//    return 0;
//}


////BC119 小乐乐与字符串
//#include<stdio.h>
//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    char* p = arr;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//        {
//            c++;
//        }
//        if (*p == 'H')
//        {
//            ch += c;
//        }
//        if (*p == 'N')
//        {
//            chn += ch;
//        }
//        p++;
//    }
//    printf("%lld", chn);
//    return 0;
//}










































































