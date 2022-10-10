
/*#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;

	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2 - t1;

	printf("时间差是%d小时%d分钟。", t / 60, t % 60);

	return 0;
}*/



/*#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d",&x);
	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
	printf("%lf", amount);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a = 5;
	int b = 6;
	int t;
	t = a;
	a = b;
	b = t;
	printf("a=%d,b=%d", a, b);
	
	return 0;

}*/


/*#include<stdio.h>
int main()
{
	int a = 10;
	printf("a++=%d\n", a++);
	printf("a=%d\n", a);
	printf("++a=%d\n", ++a);
	printf("a=%d\n", a);

	return 0;
}*/


#include<stdio.h>
/*int main()
{
	double a;
	double b;

	scanf_s("%lf %lf", &a,&b);
	printf("%f + %f=%f\n", a, b, a + b);
	printf("%f - %f=%f\n", a, b, a - b);
	printf("%f * %f=%f\n", a, b, a * b);
	printf("%f / %f=%f\n", a, b, a / b);

	return 0;

}*/


/*#include<stdio.h>
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	scanf_s("%d %d", &hour1, &minute1);
	scanf_s("%d %d", &hour2, &minute2);

	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	if (im < 0) {
		im = im + 60;
		ih--;
	}
	printf("时间差是%d小时%d分钟\n", ih, im);

	return 0;
}*/



/*#include<stdio.h>
int main()
{
	printf("%d\n",5 == 3);
	printf("%d\n", 3 >= 5);
	printf("%d\n", 3 != 6);
	printf("%d\n", 7 >= 3 + 4);
	
	printf("%d\n", 5 > 3 == 6 > 4);
	printf("%d\n", 6 > 5 > 4);  //0
	

	return 0;

}*/

/*#include<stdio.h>
int main()
{
	//初始化
	int price = 0;
	int bill = 0;
	//读入金额和票面
	printf("请输入消费金额:");
	scanf_s("%d", &price);
	printf("请输入面票:");
	scanf_s("%d", &bill);
	//计算找零
	if (bill >= price) {
		printf("应该找您:%d", bill - price);
	}else {
		printf("您的钱不够");

	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	const int MINOR = 35;
	int age;
	printf("请输入您的年龄：");
	scanf_s("%d", &age);
	printf("您的年龄为：%d岁。\n", age);
	if (age <= MINOR) {
		printf("年轻是美好的，");
	}
	
	printf("年龄决定了你的精神世界，好好珍惜吧。");

	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数：");
	scanf_s("%d %d",&a,&b);
	int max = 0;
	if (a > b) {
		max = a;
	}else {
		max = b;
	}
	printf("大的那个是%d\n", max);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个整数:");
	scanf_s("%d %d",&a,&b);

	int max = b;
	if (a > b); {
		max = a;

	}
	printf("大的那个是%d\n", max);
	return 0;
}*/


//计算薪水
/*#include<stdio.h>
int main()
{
	const double RATE = 8.25;
	const double STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("请输入工作的小时数：");
	scanf_s("%d", &hours);
	printf("\n");
	if (hours > STANDARD)
		pay = (hours - STANDARD) * (RATE * 1.2) + STANDARD * RATE;
	else
		pay = hours * RATE;
	printf("应付薪水：%f\n", pay);
}*/


/*#include<stdio.h>
int main()
{
	const int PASS = 60;
	int score;
	printf("请输入你的成绩：");
	scanf_s("%d", &score);

	printf("您的成绩是:%d\n", score);
	if (score < PASS)
		printf("你的成绩不合格。");
	else {
		printf("恭喜你，你的成绩合格了。");
		printf("再见！");
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	
	int max = 0;
	if (a > b)
		if (a > c)
			max = a;
		else 
			max = c;
	else 
		if (b > c)
			max = b;
		else
			max = c;
	printf("the max is %d\n", max);

	return 0;

}*/


/*#include<stdio.h>
int main()
{
	int x;

	scanf_s("%d",&x);
	int f = 0;
	if (x < 0) {
		f = -1;
	}
	else if (x == 0) {
		f = 0;
	}
	else if (x > 5) {
		f = 3*x;
	}
	else {
		f = 2 * x;
	}
	printf("%d", f);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int f=0;
	int x;
	scanf_s("%d",&x);
	if (x < 0)
	{
		f = -2;
	}
	else if (x == 0)
	{
		f = 0;
	}
	else if (x > 5)
	{
		f = 2 * x;
	}
	else
	{
		f = 3 * x;
	}
	printf("%d", f);
	return 0;

}*/






/*#include<stdio.h>
int main()
{
	int type;
	scanf_s("%d", &type);

	if (type == 1) {
		printf("你好");
	}
	else if (type == 2) {
		printf("早上好");
	}
	else if (type == 3) {
		printf("中午好");
	}
	else {
		printf("晚上好");
	}

	return 0;
}*/


//case不能阻止句子往下进行


/*#include<stdio.h>
int main()
{
	int type;

	scanf_s("%d", &type);

	switch(type) {
	case 1:
		printf("你好");
			break;
	case 2:   
		printf("早上好");
			break;
	case 3:
		printf("晚上好\n");
	case 4:
		printf("再见");
			break;
	default:
		printf("啊，啊什么啊");
			break;


	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int grade;
	scanf_s("%d", &grade);
	grade /= 10;

	switch (grade) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("不合格");

	}

	return 0;

}*/


/*#include<stdio.h>;
int main()
{
	printf("请输入月份");
	int month;
	scanf_s("%d", &month);

	switch (month) {
	case 1:printf("January\n"); break;
	case 2:printf("February\n"); break;
	case 3:printf("March\n"); break;
	case 4:printf("April\n"); break;
	case 5:printf("May\n"); break;
	case 6:printf("June\n"); break;
	case 7:printf("July\n"); break;
	case 8:printf("August\n"); break;
	case 9:printf("September\n"); break;
	case 10:printf("October\n"); break;
	case 11:printf("November\n"); break;
	case 12:printf("December\n"); break;

	}
	return 0;
}*/


/*#include<stdio.h>;
int main()
{
	int x;
	int n = 0;
	scanf_s("%d", &x);

	n++;
	x /= 10;

	while (x > 0) {
		printf("x=%d,n=%d\n", x, n);    //可以用来做调试
		n++;
		x /= 10;
	}
	printf("%d\n", n);

	return 0;
}*/



/*#include<stdio.h>;
int main()
{
	int x;
	int n = 0;
	scanf_s("%d", &x);

	do {
		n++;
		x /= 10;

	} while (x > 0);

	printf("%d", x = n);

	return 0;
}*/



/*可以把while循环理解为“当”，即条件满足时，不断地重复循环体内的语句*/


/*#include<stdio.h>;
int main()
{
	int x;
	int ret = 0;
	scanf_s("%d", &x);
	int t = x;

	while (x > 1) {
		x /= 2;
		ret++;
	}

	printf("log2 of %d is %d", t, ret);
	return 0;
}*/


/*#include<stdio.h>;
int main()
{
	int x;
	int ret = -1;
	scanf_s("%d", &x);
	int t = x;

	while (x > 0) {
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d", t, ret);

	return 0;
}*/




/*#include<stdio.h>;
int main()
{
	int x;
	scanf_s("%d", &x);

	while (x >= 0){
		printf("%d\n", x);
		x--;
	}
	printf("发射");
	return 0;
}*/


/*#include<stdio.h>;
int main()
{
	int x;
	scanf_s("%d", &x);

	while (x >= 1) {//与上面唯一的区别是执行的次数，开始和结束输出的是什么，以及停下来时count输出的值是多少
		x--;
		printf("%d\n", x);
	};

	printf("发射！");
	return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()  //随即输出一个数
{
	srand(time(0));
	int a = rand();

	printf("%d\n", a % 100);

	return 0;

}*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	printf("我已经写好了一个1到100之间的数。");
	do {
		printf("请猜这个1到100之间的数:");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数大了。");
		}
		else if (a < number) {
			printf("你猜的数小了。");
			}

	} while (a != number);
	printf("太好了，你用了%d次就猜到了答案。\n", count);

		return 0;
}*/


//以下就是一个死循环
/*#include<stdio.h>
int main()
{
	int number;//我理解为输入的那个变量初始化不用让其可以等于0
	int sum = 0;
	int count = 0;

	scanf_s("%d", &number);
	if (number != -1) {
		sum += number;
		count++;
	}
	return 0;
}*/


/*1#include<stdio.h>   //用人脑模拟程序的运行也是个不错的方式
int main()            //
{
	int x;
	int n = 0;

	scanf_s("%d", &x);
	while (x > 0) {
		n++;
		x /= 10;    //如果把此行去掉则这就是一个死循环
	}
	printf("%d", n);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n = 0;
	int x;

	scanf_s("%d", &x);
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;

	}
	printf("%d", n);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int x;
	int n = 0;

	scanf_s("%d", &x);

	n++;
	x /= 10;
	if (x > 0) {
		while (x > 0) {
			n++;
			x /= 10;
		}
	}
	else {
		x = 1;
	}
	printf("%d", n);

	return 0;
	
}*/

/*#include<stdio.h>
int main()
{
	int n = 0;
	int x;

	scanf_s("%d", &x);

	n++;
	x /= 10;

	while (x > 0) {
		n++;
		x /= 10;
		printf("x=%d,n=%d\n", x, n);
	}
	printf("n=%d\n", n);

	return 0;
}*/


#/*include<stdio.h>  //4.2.1
int main()
{
	int x;
	int ret=0;

	scanf_s("%d", &x);
	int t = x;    //注意计算机之前保留的值后面可能有用，这个t就是一个例子,记住这个小套路

	while (x > 1) {     //这里的x>1等价于x>=2,因为考虑到1的情况
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d", t, ret);

	return 0;
}*/


/*#include<stdio.h>    //4.2.1  22.9.16
int main()
{
	int ret = -1;             //条条大路通罗马
	int x;

	scanf_s("%d", &x);
	int t = x;

	while (x > 0) {           
		ret++;
		x /= 2;
	}
	printf("log2 of %d is %d", t, ret);

	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n = 5;

	while (n > 0) {
		n--;
		printf("%d\n", n);
	}
	printf("发射");

	return 0;

}*/


//猜数游戏1
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int a = rand();

	printf("%d\n", a % 100);

	return 0;
}*/



//猜数游戏2
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;

	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("请猜这个1到100之间的数。");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的这个数大了。");
		}
		else if(a<number) {
			printf("你猜的这个数小了。");
		}
	} while (a != number);

	printf("太好了，你用了%d次就猜到了答案。\n", count);
	
	return 0;
}*/


//算平均数1
/*#include<stdio.h>
int main()
{
	int number;
	int sum = 0;
	int count = 0;

	scanf_s("%d",&number);
	while (number != -1) {
		sum += number;
		count++;
		scanf_s("%d", &number);
	}
	printf("%f\n", 1.0 * sum / count);

	return 0;
}*/



//算平均数1练习  tg
/*#include<stdio.h>
int main()
{
	int count = 0;
	int sum = 0;
	int number;

	scanf_s("%d", &number);
	while (number != -1) {
		count++;
		sum += number;
		scanf_s("%d", &number);
	}
	printf("平均数为%f\n", 1.0 * sum / count);
	return 0;
}*/


//算平均数2    //相比较1而言，2有点啰嗦因其要判断两次number是否=0，而且占用的内存也有差异
/*#include<stdio.h>
int main()
{
	int number;
	int count = 0;
	int sum = 0;

	do {
		scanf_s("%d", &number);
		if (number != -1) {
			count++;
			sum += number;
		}
	} while (number != -1);

	printf("%f\n", 1.0 * sum / count);

	return 0;
}*/

//数的逆序1(这一个不能运行007，看2可以)*****
/*#include<stdio.h>  
int main()
{
	int x;
	x = 12345;
	int ret = 0;    //ret为结果
	int digit = 0;  //digit先理解为各位

	while (x > 0) {
		digit = x % 10;
		ret = ret * 10 + digit;
		printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);  //注意这里的\n别忘了
		x /= 10;    //先理解为把各位去掉
	}
	printf("%d", ret);

	return 0;
}*/


//整数逆序2*****
/*#include<stdio.h>
int main()
{
	int x;
	//scanf_s("%d", &x)
	x = 700;
	int ret = 0;
	int digit = 0;

	while (x > 0) {
		digit = x % 10;
		ret = ret * 10 + digit;
		printf("%d", digit);
		//printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
		x /= 10;
	}
	//printf("%d", ret);    对于输入007这种不需要打印ret，因为要把每次的个位都打印出来

	return 0;
}*/


//对于学到的每个程序，注意每个程序中需要用到什么，用到哪些变量


//计算阶乘Ⅰ
/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;

	int i = 1;
	while (i <= n) {
		fact *= i;
		i++;
	}
	printf("%d!=%d", n, fact);        //fact为最终的结果

	return 0;
}*/



/*(1语句：2语句：3语句）1语句不用管，它是用来赋值的，2语句用来判断，
成立后执行循环体，然后才执行3语句，然后又开始2判断*/
//表达式3是完成完循环体后进行的     5.1.1   1
/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;  //小套路：这里是求积，所以fact初始化为1，如果是求和则初始化为0

	int i = 1;     //建议加上这句话，因为有的版本不加的话无法运行，不懂的化看视频
	for (int i = 2; i <= n; i++) {    //可以把这里的1改成2，可以试试
		fact *= i;
	}
	printf("%d!=%d\n", n, fact);

	return 0;
}*/





//5.1.1  2
/*#include<stdio.h>  //0的阶乘就是1
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;

	int i = n;  //这里的i的作用是存储初始的n
	for (; n > 1; n--) {
		fact *= n;
	}
	printf("!%d=%d", i, fact);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;

	int i = 1;
	for (i = n; i >= 2; i--) {
		fact *= i;
	}
	printf("%d!=%d", n, fact);

	return 0;
}*/


//5.2.1判断素数  1
/*#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);

	int i;
	int isPrime = 1;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1) {
		printf("是素数");
	}
	else {
		printf("不是素数");
	}
	
	return 0;
}*/

//判断素数2
/*#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int i;

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			break;
		}
	}
	if (x < i) {
		printf("是素数");
	}
	else {
		printf("不是素数");
	}

	return 0;
}*/
//循环嵌套
/*#include<stdio.h>
int main()
{
	int x;
	
	for (x = 2; x <= 100; x++) {
		int i;
		int isPrime = 1;
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}

		if (isPrime == 1) {
			printf("%d ", x);
		}
	}
	return 0;
}*/

//输出前50个素数
/*#include<stdio.h>
int main()
{
	int x;
	int cnt = 0;

	for (x = 2; cnt < 50; x++) {
		int i;
		int isPrime = 1;
		for (i = 2; i < x; i++) {
			if (x % i ==0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			cnt++;
			printf("%d ", x);
		}
	}
	return 0;

}*/



/*//5.2.3从嵌套的循环中跳出
//凑硬币
#include<stdio.h>
int main()*/





/*#include<stdio.h>
int main()
{
	int x;
	int cnt = 0;
	for (x = 2; cnt < 50; x++) {
		int isPrime = 1;
		int i;
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d ", x);
			cnt++;
		}
	}
	return 0;
}*/



/*#include<stdio.h>
int main()
{
	int a;
	a = 6;
	printf("sizeof(long double)=%ld\n", sizeof(long double));     //1个字节相当于8个bit
	printf("sizeof(a)=%ld\n", sizeof(a));
	return 0;
}*/


/*#include<stdio.h>
int main() {
	int a;
	a = 6;
	printf("sizeof(a)=%ld\n", sizeof(a++));
	printf("a=%d", a);   //注意sizeof是静态运算符，它的结果在编译时刻就决定了，
	return 0;            //不要再sizeof的括号里做运算，这些运算不会做的
}*/


/*#include<stdio.h>
int main()
{
	int a;
	a = 6;
	printf("sizeof(a+1.0)=%ld\n", sizeof(a + 1.0));  //a本来是int型，遇到1.0后变成了double型，故最后为8个字节
	printf("a=%d", a);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	printf("sizeof(1.0)=%d\n",sizeof(1.0));
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	printf("sizeof(char)=%d\n", sizeof(char));
	printf("sizeof(int)=%d\n", sizeof(int));        //int就是用来表达寄存器的？
	printf("sizeof(short)=%d\n", sizeof(short));
	printf("sizeof(long)=%d\n", sizeof(long));
	printf("sizeof(long long)=%d\n", sizeof(long long));
	return 0;
}*/


#include<stdio.h>
int main()
{
	printf("c");
	return 0;
}

















