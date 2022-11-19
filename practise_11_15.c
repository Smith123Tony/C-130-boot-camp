//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int seconds = 0;
//	scanf("%d", &seconds);
//	printf("%d %d %d\n", seconds / 3600, seconds / 60 % 60, seconds % 60);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	float sum = 0;
//	float ave = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	sum = a + b + c;
//	ave = sum / 3;
//	printf("%.2f %.2f", sum, ave);
//	return 0;
//}

//酸奶
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	int ret = 0;//未拆盒数
//	int ret1 = 0;//ret1为拆了几盒
//	scanf("%d %d %d", &n, &h, &m);
//	if (m % h == 0)
//		ret1 = m / h;
//	else
//		ret1 = m / h + 1;
//	ret = n - ret1;
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}

//BC34 进制A+B
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%x %o", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}


//BC37 网购
//#include<stdio.h>
//int main()
//{
//	float price = 0;
//	int month = 0;
//	int day = 0;
//	int coupon = 0;
//	float ret = 0;
//	scanf("%f %d %d %d", &price, &month, &day, &coupon);
//	if (month == 11 && day == 11)
//	{
//		if (coupon == 1)
//			ret = price * 0.7 - 50;
//		else
//			ret = price * 0.7;
//	}
//	else if (month == 12 && month == 12)
//	{
//		if (coupon == 1)
//			ret = price * 0.8 - 50;
//		else
//			ret = price * 0.8;
//	}
//	else
//		ret = price;
//	if (ret <= 0)
//		printf("0.00\n");
//	else
//		printf("%.2f\n", ret);
//	return 0;
//}

//BC39 争夺前五名

//BC33 计算平均成绩
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	
//	float ave = 0;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); 
//	int sum = a + b + c + d + e;
//	ave = sum / 5.0;
//	printf("%.1f\n", ave);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	
//	while (scanf("%d %d %d", &n, &h, &m)!=EOF)
//	{
//		if (m % h)
//		{
//			printf("%d\n", n - m / h - 1);
//		}
//		else
//		{
//			printf("%d\n", n - m / h);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	float sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.1f", sum / 5.0);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float price = 0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	float cut = 1.0;
//	scanf("%f %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		cut = 0.7;
//	}
//	else if (m == 12 && d == 12)
//	{
//		cut = 0.8;
//	}
//	price = price * cut - flag * 50;
//	if (price <= 0)
//		printf("0\n");
//	else
//		printf("%.2f\n", price);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[40] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//进行排序
//	for (i = 0; i < n - 1; i++)
//	{
//		int k = 0;
//		for (k = 0; k < n - 1 - i; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tmp = 0;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}
//	//进行输出
//	for (i = n - 1; i >= n - 5; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,5,4,7,9 };
//	int sz = sizeof(arr) / sizeof(int);
//	printf("sz=%d\n", sz);
//	//进行排序
//	for (i = 0; i < sz - 1; i++)
//	{
//		int k = 0;
//		for (k = 0; k < sz - 1 - i; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tmp = 0;
//				tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 1,5,2,4,7,6 };
//	int sz = sizeof(arr) / sizeof(int);
//	qsort(arr, sz, 4, cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int  main()
//{
//	int arr[40] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, cmp_int);
//	for (i = n - 1; i >= n - 5; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char buf[100] = { 0 };
//	gets(buf);
//	int count_a = 0;
//	int count_b = 0;
//	int i = 0;
//	while (buf[i] != '0')
//	{
//		if (buf[i] == 'A')
//			count_a++;
//		if (buf[i] == 'B')
//			count_b++;
//		i++;
//	}
//	if (count_a > count_b)
//		printf("A\n");
//	else if (count_a < count_b)
//		printf("B\n");
//	else
//		printf("E\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int flag = 0;
//
//	while (((ch = getchar()) != '0') && ch != EOF)
//	{
//		if (ch == 'A')
//			flag++;
//		if (ch == 'B')
//			flag--;
//	}
//	if (flag > 0)
//		printf("A\n");
//	else if (flag < 0)
//		printf("B\n");
//	else
//		printf("E\n");
//	return 0;
//}























