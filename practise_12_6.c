#define _CRT_SECURE_NO_WARNINGS 1
//C����ѵ��Ӫ12

////BC130 С���ֲ�������
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[101] = { 0 };
//    int i = 0;
//    int x = 0;
//    int count = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


////BC135 KiKi����������
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    int i = 0;
//    int j = 0;
//    int flag = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        flag = 1;
//        for (j = 2; j <= i - 1; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int isprime(int n)
//{
//    int i = 0;
//    for (i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int count = 0;
//    int i = 0;
//    int ret = 1;
//    for (i = 100; i <= 999; i++)
//    {
//        if (isprime(i))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


////BC131 KiKiѧ������ƻ���
//#include<stdio.h>
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}


////BC139 KiKi�������������
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d %d %d", &year, &month, &day);
//    printf("%d/%d/%d\n", day, month, year);
//    return 0;
//}


////BC136 KiKiȥ������������
//#include<stdio.h>
//int main()
//{
//    int arr[1001] = { 0 };
//    int i = 0;
//    int m = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = m;
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

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    //��������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //1.ð������
//    //����
//    for (i = 0; i < n - 1; i++)
//    {
//        //����
//        int j = 0;
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = 0;
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    //2.ȥ��
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            int k = 0;
//            for (k = i; k < n - 1; k++)
//            {
//                arr[k] = arr[k + 1];
//            }
//            i--;
//            n--;
//        }
//    }
//    //3.��ӡ
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//δ�� BC139 KiKi�������������  BC138 KiKiѧ�ṹ���ָ��













































































































