#define _CRT_SECURE_NO_WARNINGS 1
////BC87 统计成绩
//#include<stdio.h>
//int main()
//{
//	float score = 0;
//	int i = 0;
//	int n = 0;
//	float sum = 0;
//	float ave = 0;
//	float max = 0;
//	float min = 100;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	ave = sum / n;
//	printf("%.2f %.2f %.2f", max, min, ave);
//	return 0;
//}


////BC89 密码验证
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char password1[20] = { 0 };
//    char password2[20] = { 0 };
//    scanf("%s %s", &password1, &password2);
//    if (strcmp(password1, password2) == 0)
//    {
//        printf("same\n");
//    }
//    else
//    {
//        printf("different\n");
//    }
//    return 0;
//}


////BC90 矩阵计算
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int sum = 0;
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &num);
//            if (num > 0)
//            {
//                sum += num;
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}


//BC92 逆序输出
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


////BC93 统计数据正负个数
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    int positive = 0;
//    int negative = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)
//        {
//            positive++;
//        }
//        if (arr[i] < 0)
//        {
//            negative++;
//        }
//    }
//    printf("positive:%d\nnegative:%d", positive, negative);
//
//    return 0;
//}


////BC94 N个数之和
//#include<stdio.h>
//int main()
//{
//    int arr[5] = { 0 };
//    int num = 0;
//    int sum = 0;
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        sum += num;
//    }
//    printf("%d", sum);
//    return 0;
//}


////BC95 最高分与最低分之差
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d", &n);
//    int i = 0;
//    int score = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    printf("%d ", max - min);
//    return 0;
//}


//BC96 有序序列判断
//#include<stdio.h>   err
//int main()
//{
//    int i = 0;
//    int arr1[1001] = { 0 };
//    int arr2[1001] = { 0 };
//    int arr[1001] = { 0 };
//    int n = 0;
//    int m = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


////BC96 有序序列判断
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag1 = 1;//升序
//            }
//            else if (arr[i] < arr[i - 1])
//            {
//                flag2 = 1;//降序
//            }
//        }
//    }
//    if (flag1 + flag2 > 1)
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}


//有序序列合并并去重
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr1[1001] = { 0 };
//    int arr2[1001] = { 0 };
//    int arr[1001] = { 0 };
//    int n = 0;
//    int m = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


//err
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[1001] = { 0 };
//    int tmp = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


////BC98 序列中删除指定数字
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


////BC99 序列中整数去重
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    //输入数据
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //去重
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                j--;
//                n--;
//            }
//        }
//    }
//    //输出
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


////BC100 有序序列合并 有序序列合并(无重复)
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1001] = { 0 };
//    int arr2[1001] = { 0 };
//    int arr3[2001] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &arr1[i]);
//        arr3[arr1[i]] = arr1[i];
//    }
//    for (i = 0; i < m; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &arr2[i]);
//        arr3[arr2[i]] = arr2[i];
//    }
//    for (i = 0; i < 2001; i++)
//    {
//        if (arr3[i] != 0)
//        {
//            printf("%d ", arr3[i]);
//        }
//    }
//    return 0;
//}


//BC100 有序序列合并 (有重复)
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[2000] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i++];
//        }
//        else
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            arr3[k++] = arr2[j];
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            arr3[k++] = arr1[i];
//        }
//    }
//    //输出
//    for (i = 0; i < k; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[2000] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i++]);
//        }
//        else
//        {
//            printf("%d ", arr2[j++]);
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}






























































