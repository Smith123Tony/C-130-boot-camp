#define _CRT_SECURE_NO_WARNINGS 1



////1001 害死人不偿命的(3n+1)猜想
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    while (n != 1)
//    {
//        count++;
//        if (n & 1)
//        {
//            n = n * 3 + 1;
//            n /= 2;
//        }
//        else
//            n /= 2;
//    }
//    printf("%d", count);
//    return 0;
//}



////1006 换个格式输出整数
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    if (n < 10)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            printf("%d", i);
//        }
//        return 0;
//    }
//    else if (n < 100)
//    {
//        for (i = 1; i <= (n / 10); i++)
//        {
//            printf("S");
//        }
//        for (i = 1; i <= (n % 10); i++)
//        {
//            printf("%d", i);
//        }
//        return 0;
//    }
//    else
//    {
//        for (i = 1; i <= (n / 100); i++)
//        {
//            printf("B");
//        }
//        for (i = 1; i <= (n / 10 % 10); i++)
//        {
//            printf("S");
//        }
//        for (i = 1; i <= (n % 10); i++)
//        {
//            printf("%d", i);
//        }
//        return 0;
//    }
//    return 0;
//}



////1004 成绩排名
//#include<stdio.h>
//struct stu
//{
//    char name[11];
//    char number[11];
//    int score;
//}s[20];
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    int max_num = 1;
//    int min_num = 1;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%s %s %d", s[i].name, s[i].number, &s[i].score);
//        if (s[i].score > max)
//        {
//            max = s[i].score;
//            max_num = i;
//
//        }
//        if (s[i].score < min)
//        {
//            min = s[i].score;
//            min_num = i;
//        }
//    }
//    printf("%s %s\n", s[max_num].name, s[max_num].number);
//    printf("%s %s", s[min_num].name, s[min_num].number);
//    return 0;
//}









////1008 数组元素循环右移问题
////不完全正确
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int M = 0;
//    scanf("%d %d", &N, &M);
//    int arr[200] = { 0 };
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    
//    for (i = 0; i < (N - M); i++)
//    {
//        arr[N + i] = arr[i];
//    }
//    for (i = 0; i < N-1; i++)
//    {
//        printf("%d ", arr[N - M + i]);
//    }
//    printf("%d", arr[N - M + i]);
//    return 0;
//}



////复习二分查找
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = 9;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为:%d", mid);
//			return 0;
//		}
//	}
//	printf("没找到");
//	return 0;
//}