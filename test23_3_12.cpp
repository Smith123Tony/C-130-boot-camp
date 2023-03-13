#define _CRT_SECURE_NO_WARNINGS 1

////刷题统计
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	int tot = 0;
//	for (int i = 1; 1; i++)
//	{
//		if (i % 7 == 6 || i % 7 == 0)
//			tot += b;
//		else
//			tot += a;
//		if (tot >= n)
//		{
//			cout << i << endl;
//			return 0;
//		}
//	}
//}//超时了


//修剪灌木
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int i = 1;
//    for (i = 1; i <= n; i++)
//    {
//        cout << max(n - i, i - 1) * 2 << endl;
//    }
//    return 0;
//}//满分哈哈

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << max(a, b) << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//    string arr;
//    cin >> arr;
//    int i = 0;
//    for (i = 0; i < arr.length(); i++)
//    {
//        arr[i] = toupper(arr[i]);
//        cout << arr[i];
//    }
//    return 0;
//}

#include<iostream>
//int* fun1()
//{
//	int* p = new int[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	return p;
//}
//
//using namespace std;
//int main()
//{
//	int* p=fun1();
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " " << endl;
//	}
//	return 0;
//}

////引用
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << a << endl;
//	cout << b << endl;
//	b = 200;
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

////引用传递
//#include<iostream>
//using namespace std;
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int& fun()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	int &ret = fun();
//	cout << ret << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int& fun1()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& ret = fun1();
//	cout << "ret= " << ret << endl;
//	cout << "ret= " << ret << endl;
//
//	fun1() = 1000;
//	cout << "ret= " << ret << endl;
//	cout << "ret= " << ret << endl;
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void fun(int& p)
//{
//	p = 30;
//}
//int main()
//{
//	int a = 10;
//	int& ret = a;
//	ret = 20;
//
//	cout << "a= " << a << endl;
//	cout << "ret= " << ret << endl;
//
//	fun(a);
//	cout << "a= " << a << endl;
//	cout << "ret= " << ret << endl;
//	return 0;
//


//时间显示
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    long long n;
//    cin >> n;
//    n /= 1000;
//    long long SS = n % 60;
//    long long MM = n / 60 % 60;
//    long long HH = n / 60 / 60 % 24;
//    cout << setw(2) << setfill('0') << HH << ":" << setw(2) << setfill('0') << MM << ":" << setw(2) << setfill('0') << SS;
//    return 0;
//}