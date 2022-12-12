#define _CRT_SECURE_NO_WARNINGS 1

////6-1 简单输出整数
//void PrintN(int N)
//{
//    int i = 0;
//    for (i = 1; i <= N; i++)
//    {
//        printf("%d\n", i);
//    }
//}


////6-2 多项式求值
//double f(int n, double a[], double x)
//{
//    double sum = 0;
//    double x0 = 1.0;
//    int i = 0;
//    for (i = 0; i <= n; i++)
//    {
//        if (a[i])
//        {
//            sum += x0 * a[i];
//            x0 *= x;
//        }
//    }
//    return sum;
//}


////6-3 简单求和
//int Sum(int list[], int n)
//{
//    int sum = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += list[i];
//    }
//    return sum;
//}


//6-4 求自定类型元素的平均
//ElementType Average(ElementType S[], int N)
//{
//    ElementType sum = 0;
//    ElementType ave = 0;
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        sum += S[i];
//    }
//    ave = sum / N;
//    return ave;
//}


////6-5 求自定类型元素的最大值
//ElementType Max(ElementType S[], int N)
//{
//    ElementType max = S[0];
//    int i = 0;
//    for (i = 1; i < N; i++)
//    {
//        if (S[i] > max)
//        {
//            max = S[i];
//        }
//    }
//    return max;
//}


////6 - 7 统计某类完全平方数
//int IsTheNumber(const int N)
//{
//    int m = (int)(sqrt)(N);
//    int n = m * m;
//    if (n == N)
//    {
//        int num[10] = { 0 };
//        int i = 0;
//        while (n)
//        {
//            for (i = 0; i <= 9; i++)
//            {
//                if (n % 10 == i)
//                {
//                    num[i] += 1;
//                }
//                if (num[i] == 2)
//                {
//                    return 1;
//                }
//            }
//            n /= 10;
//        }
//    }
//    return 0;
//}


////6-8 简单阶乘计算
//int Factorial(const int N)
//{
//    if (N < 0)
//    {
//        return 0;
//    }
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= N; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}


////6-9 统计个位数字
//int Count_Digit(const int N, const int D)
//{
//    if (N == 0)
//    {
//        return 1;
//    }
//    int tmp1 = N;
//    if (tmp1 < 0)
//    {
//        tmp1 = -tmp1;
//    }
//    int tmp2 = tmp1;
//    int tmp3 = tmp1;
//    int i = 0;
//    int k = 0;//k表示为几位数
//    while (tmp2)
//    {
//        k++;
//        tmp2 /= 10;
//    }
//    int count = 0;
//    for (i = 0; i < k; i++)
//    {
//        if (tmp3 % 10 == D)
//        {
//            count++;
//        }
//        tmp3 /= 10;
//    }
//    return count;
//}


////6-10 阶乘计算升级版
////N取大点的时候就超时了
//void Print_Factorial(const int N)
//{
//    if (N == 0)
//    {
//        printf("1");
//    }
//    else if (N > 0)
//    {
//        long long ret = 1;
//        int i = 0;
//        for (i = 1; i <= N; i++)
//        {
//            ret *= i;
//        }
//        printf("%lld", ret);
//    }
//    else
//    {
//        printf("Invalid input");
//    }
//}


////结果正确但超时了
//ElementType Median(ElementType A[], int N)
//{
//    ElementType i = 0;
//    for (i = 0; i < N - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < N - 1 - i; j++)
//        {
//            if (A[j] > A[j + 1])
//            {
//                ElementType tmp = 0;
//                tmp = A[j];
//                A[j] = A[j + 1];
//                A[j + 1] = tmp;
//            }
//        }
//    }
//    ElementType ret = 0;
//    if (N % 2 == 0)
//    {
//        return  ret = A[(N + 1) / 2];
//    }
//    else
//    {
//        return ret = A[(N + 1) / 2 - 1];
//    } 
//}


//复习冒泡排序
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,2,6,5,4,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////7-3 逆序的三位数
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    int k = 0;
//    scanf("%d", &n);
//    int g = n % 10;
//    int s = n / 10 % 10;
//    int b = n / 100;
//    printf("%d", g * 100 + s * 10 + b);
//    return 0;
//}


////7-5 表格输出
//#include<stdio.h>
//int main()
//{
//    printf("------------------------------------\n");
//    printf("Province      Area(km2)   Pop.(10K)\n");
//    printf("------------------------------------\n");
//    printf("Anhui         139600.00   6461.00\n");
//    printf("Beijing        16410.54   1180.70\n");
//    printf("Chongqing      82400.00   3144.23\n");
//    printf("Shanghai        6340.50   1360.26\n");
//    printf("Zhejiang      101800.00   4894.00\n");
//    printf("------------------------------------\n");
//    return 0;
//}


////7-6 混合类型数据格式化输入
//#include<stdio.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    char ch = 0;
//    int c = 0;
//    scanf("%f %d %c %f", &a, &c, &ch, &b);
//    printf("%c %d %.2f %.2f", ch, c, a, b);
//    return 0;
//}


////7-8 超速判断
//#include<stdio.h>
//int main()
//{
//    int sp = 0;
//    scanf("%d", &sp);
//    if (sp > 60)
//    {
//        printf("Speed: %d - Speeding", sp);
//    }
//    else
//    {
//        printf("Speed: %d - OK", sp);
//    }
//    return 0;
//}


////7-9 用天平找小球
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a == b)
//    {
//        printf("C");
//    }
//    if (a == c)
//    {
//        printf("B");
//    }
//    if (b == c)
//    {
//        printf("A");
//    }
//    return 0;
//}


////7-11 分段计算居民水费
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    float y = 0;
//    scanf("%d", &x);
//    if (x <= 15)
//    {
//        y = 4 * x / 3.0;
//    }
//    else
//    {
//        y = 2.5 * x - 17.5;
//    }
//    printf("%.2f", y);
//    return 0;
//} 


////7-12 两个数的简单计算器
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char c = 0;
//    scanf("%d %c %d", &a, &c, &b);
//    switch (c)
//    {
//    case '+':
//        printf("%d", a + b);
//        break;
//    case '-':
//        printf("%d", a - b);
//        break;
//    case '*':
//        printf("%d", a * b);
//        break;
//    case '/':
//        printf("%d", a / b);
//        break;
//    case '%':
//        printf("%d", a % b);
//        break;
//    default:
//        printf("ERROR");
//        break;
//    }
//    return 0;
//}


////7-14 求整数段和
//#include<stdio.h>
//int main()
//{
//    int A = 0;
//    int B = 0;
//    scanf("%d %d", &A, &B);
//    int i = 0;
//    int Sum = 0;
//    int count = 0;
//    //输出数据
//    for (i = A; i <= B; i++)
//    {
//        count++;
//        Sum += i;
//        printf("%5d", i);
//        if (count % 5 == 0)
//        {
//            printf("\n");
//        }
//    }
//    //需要考虑当只需要打印一行时的情况
//    if (count / 5 == 1)
//    {
//        printf("Sum = %d", Sum);
//    }
//    else
//    {
//        printf("\nSum = %d", Sum);
//    }
//    return 0;
//}


////7-20 打印九九口诀表
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int i = 0;
//    for (i = 1; i <= N; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-4d", j, i, j * i);
//        }
//        printf("\n");
//    }
//    return 0;
//}

////7-24 约分最简分式
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d/%d", &a, &b);
//    int tmp1 = a;
//    int tmp2 = b;
//    int tmp = 0;
//    while (b != 0)
//    {
//        tmp = a;
//        a = b;
//        b = tmp % b;
//    }
//    int k = a;
//    printf("%d/%d", tmp1 / k, tmp2 / k);
//    return 0;
//}


////7-31 字符串循环左移
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[200] = { 0 };
//    int n = 0;
//    gets(arr);
//    scanf("%d", &n);
//    int len = strlen(arr);
//    char* p = arr;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        *(p + len + i) = *(arr + i);
//    }
//    printf("%s", (arr + i));
//    return 0;
//}


////7-33 有理数加法
//#include<stdio.h>
//int main()
//{
//    int a1 = 0;
//    int b1 = 0;
//    int a2 = 0;
//    int b2 = 0;
//    int up = 0;//分子
//    int down = 0;//分母
//    scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
//    //通分后的分子分母
//    int up1 = a1 * b2 + a2 * b1;
//    int down1 = b1 * b2;
//    //情况一：可以整除
//    if (up1 % down1 == 0)
//    {
//        printf("%d", up1 / down1);
//        return 0;
//    }
//    //情况二：无法整除
//    else
//    {
//        //求通分后分子分母的最大公约数max
//        int max = 0;
//        int tmp = 0;
//        int tmp1 = up1;
//        int tmp2 = down1;
//        while (tmp2)
//        {
//            tmp = tmp1;
//            tmp1 = tmp2;
//            tmp2 = tmp % tmp2;
//        }
//        max = tmp1;
//        printf("%d/%d", up1 / max, down1 / max);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int A = 0;
//    int N = 0;
//    scanf("%d %d", &A, &N);
//    int tmp = A;
//    int i = 0;
//    int ret = 0;
//    int sum = 0;
//    for (i = 0; i < N; i++)
//    {
//        ret = ret * 10 + A;
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}