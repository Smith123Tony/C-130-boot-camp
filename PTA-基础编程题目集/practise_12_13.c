#define _CRT_SECURE_NO_WARNINGS 1
//PTA-基础编程题目集

////7-27 冒泡法排序
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int K = 0;
//    scanf("%d %d", &N, &K);
//    int arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < K; i++)
//    {
//        int j = 0;
//        for (j = 0; j < N - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < N - 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("%d", arr[i]);
//    return 0;
//}


////6-10 阶乘计算升级版
//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//void Print_Factorial(const int N)
//{
//    char a[3000];
//    int alength = 1;
//    a[0] = 1;
//    if (N < 0)
//    {
//        printf("Invalid input");
//        return;
//    }
//    int i = 2;
//    for (i = 2; i <= N; i++)
//    {
//        int z = 0;
//        int k = 0;
//        for (k = 0; k < alength; k++)
//        {
//            int t = i * a[k] + z;
//            a[k] = t % 10;
//            z = t / 10;
//        }
//        while (z)
//        {
//            a[alength++] = z % 10;
//            z /= 10;
//        }
//    }
//    for (i = alength - 1; i >= 0; i--)
//    {
//        printf("%d", a[i]);
//    }
//}
///* 你的代码将被嵌在这里 */


////6-11 求自定类型元素序列的中位数
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Median(ElementType A[], int N);
//
//int main()
//{
//    ElementType A[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &A[i]);
//    printf("%.2f\n", Median(A, N));
//
//    return 0;
//}
//ElementType Median(ElementType A[], int N)
//{
//    int k = 0;
//    ElementType tmp = 0;
//    int i = 0;
//    for (i = N / 2; i > 0; i = i / 2)
//    {
//        int j = 0;
//        for (j = i; j < N; j++)
//        {
//            tmp = A[j];//将找到的中位数放到中间变量中去
//            for (k = j; k  = i; k = k - i)
//            {
//                if (tmp < A[k - i])
//                {
//                    A[k] = A[k - i];
//                }
//                else
//                {
//                    break;
//                }
//            }
//            A[k] = tmp;
//        }
//    }
//    return A[N / 2];
//}
///* 你的代码将被嵌在这里 */


////6-12 判断奇偶性
//int even(int n)
//{
//    if (n % 2 == 0)
//        return 1;
//    return 0;
//}