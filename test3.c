
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

	printf("ʱ�����%dСʱ%d���ӡ�", t / 60, t % 60);

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
	printf("ʱ�����%dСʱ%d����\n", ih, im);

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
	//��ʼ��
	int price = 0;
	int bill = 0;
	//�������Ʊ��
	printf("���������ѽ��:");
	scanf_s("%d", &price);
	printf("��������Ʊ:");
	scanf_s("%d", &bill);
	//��������
	if (bill >= price) {
		printf("Ӧ������:%d", bill - price);
	}else {
		printf("����Ǯ����");

	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	const int MINOR = 35;
	int age;
	printf("�������������䣺");
	scanf_s("%d", &age);
	printf("��������Ϊ��%d�ꡣ\n", age);
	if (age <= MINOR) {
		printf("���������õģ�");
	}
	
	printf("�����������ľ������磬�ú���ϧ�ɡ�");

	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a, b;
	printf("����������������");
	scanf_s("%d %d",&a,&b);
	int max = 0;
	if (a > b) {
		max = a;
	}else {
		max = b;
	}
	printf("����Ǹ���%d\n", max);

	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a, b;
	printf("��������������:");
	scanf_s("%d %d",&a,&b);

	int max = b;
	if (a > b); {
		max = a;

	}
	printf("����Ǹ���%d\n", max);
	return 0;
}*/


//����нˮ
/*#include<stdio.h>
int main()
{
	const double RATE = 8.25;
	const double STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("�����빤����Сʱ����");
	scanf_s("%d", &hours);
	printf("\n");
	if (hours > STANDARD)
		pay = (hours - STANDARD) * (RATE * 1.2) + STANDARD * RATE;
	else
		pay = hours * RATE;
	printf("Ӧ��нˮ��%f\n", pay);
}*/


/*#include<stdio.h>
int main()
{
	const int PASS = 60;
	int score;
	printf("��������ĳɼ���");
	scanf_s("%d", &score);

	printf("���ĳɼ���:%d\n", score);
	if (score < PASS)
		printf("��ĳɼ����ϸ�");
	else {
		printf("��ϲ�㣬��ĳɼ��ϸ��ˡ�");
		printf("�ټ���");
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
		printf("���");
	}
	else if (type == 2) {
		printf("���Ϻ�");
	}
	else if (type == 3) {
		printf("�����");
	}
	else {
		printf("���Ϻ�");
	}

	return 0;
}*/


//case������ֹ�������½���


/*#include<stdio.h>
int main()
{
	int type;

	scanf_s("%d", &type);

	switch(type) {
	case 1:
		printf("���");
			break;
	case 2:   
		printf("���Ϻ�");
			break;
	case 3:
		printf("���Ϻ�\n");
	case 4:
		printf("�ټ�");
			break;
	default:
		printf("������ʲô��");
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
		printf("���ϸ�");

	}

	return 0;

}*/


/*#include<stdio.h>;
int main()
{
	printf("�������·�");
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
		printf("x=%d,n=%d\n", x, n);    //��������������
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



/*���԰�whileѭ�����Ϊ������������������ʱ�����ϵ��ظ�ѭ�����ڵ����*/


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
	printf("����");
	return 0;
}*/


/*#include<stdio.h>;
int main()
{
	int x;
	scanf_s("%d", &x);

	while (x >= 1) {//������Ψһ��������ִ�еĴ�������ʼ�ͽ����������ʲô���Լ�ͣ����ʱcount�����ֵ�Ƕ���
		x--;
		printf("%d\n", x);
	};

	printf("���䣡");
	return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()  //�漴���һ����
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
	printf("���Ѿ�д����һ��1��100֮�������");
	do {
		printf("������1��100֮�����:");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("��µ������ˡ�");
		}
		else if (a < number) {
			printf("��µ���С�ˡ�");
			}

	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

		return 0;
}*/


//���¾���һ����ѭ��
/*#include<stdio.h>
int main()
{
	int number;//�����Ϊ������Ǹ�������ʼ������������Ե���0
	int sum = 0;
	int count = 0;

	scanf_s("%d", &number);
	if (number != -1) {
		sum += number;
		count++;
	}
	return 0;
}*/


/*1#include<stdio.h>   //������ģ����������Ҳ�Ǹ�����ķ�ʽ
int main()            //
{
	int x;
	int n = 0;

	scanf_s("%d", &x);
	while (x > 0) {
		n++;
		x /= 10;    //����Ѵ���ȥ���������һ����ѭ��
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
	int t = x;    //ע������֮ǰ������ֵ����������ã����t����һ������,��ס���С��·

	while (x > 1) {     //�����x>1�ȼ���x>=2,��Ϊ���ǵ�1�����
		x /= 2;
		ret++;
	}
	printf("log2 of %d is %d", t, ret);

	return 0;
}*/


/*#include<stdio.h>    //4.2.1  22.9.16
int main()
{
	int ret = -1;             //������·ͨ����
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
	printf("����");

	return 0;

}*/


//������Ϸ1
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



//������Ϸ2
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;

	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("������1��100֮�������");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("��µ���������ˡ�");
		}
		else if(a<number) {
			printf("��µ������С�ˡ�");
		}
	} while (a != number);

	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);
	
	return 0;
}*/


//��ƽ����1
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



//��ƽ����1��ϰ  tg
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
	printf("ƽ����Ϊ%f\n", 1.0 * sum / count);
	return 0;
}*/


//��ƽ����2    //��Ƚ�1���ԣ�2�еㆪ������Ҫ�ж�����number�Ƿ�=0������ռ�õ��ڴ�Ҳ�в���
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

//��������1(��һ����������007����2����)*****
/*#include<stdio.h>  
int main()
{
	int x;
	x = 12345;
	int ret = 0;    //retΪ���
	int digit = 0;  //digit�����Ϊ��λ

	while (x > 0) {
		digit = x % 10;
		ret = ret * 10 + digit;
		printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);  //ע�������\n������
		x /= 10;    //�����Ϊ�Ѹ�λȥ��
	}
	printf("%d", ret);

	return 0;
}*/


//��������2*****
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
	//printf("%d", ret);    ��������007���ֲ���Ҫ��ӡret����ΪҪ��ÿ�εĸ�λ����ӡ����

	return 0;
}*/


//����ѧ����ÿ������ע��ÿ����������Ҫ�õ�ʲô���õ���Щ����


//����׳ˢ�
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
	printf("%d!=%d", n, fact);        //factΪ���յĽ��

	return 0;
}*/



/*(1��䣺2��䣺3��䣩1��䲻�ùܣ�����������ֵ�ģ�2��������жϣ�
������ִ��ѭ���壬Ȼ���ִ��3��䣬Ȼ���ֿ�ʼ2�ж�*/
//���ʽ3�������ѭ�������е�     5.1.1   1
/*#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;  //С��·�����������������fact��ʼ��Ϊ1�������������ʼ��Ϊ0

	int i = 1;     //���������仰����Ϊ�еİ汾���ӵĻ��޷����У������Ļ�����Ƶ
	for (int i = 2; i <= n; i++) {    //���԰������1�ĳ�2����������
		fact *= i;
	}
	printf("%d!=%d\n", n, fact);

	return 0;
}*/





//5.1.1  2
/*#include<stdio.h>  //0�Ľ׳˾���1
int main()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;

	int i = n;  //�����i�������Ǵ洢��ʼ��n
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


//5.2.1�ж�����  1
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
		printf("������");
	}
	else {
		printf("��������");
	}
	
	return 0;
}*/

//�ж�����2
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
		printf("������");
	}
	else {
		printf("��������");
	}

	return 0;
}*/
//ѭ��Ƕ��
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

//���ǰ50������
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



/*//5.2.3��Ƕ�׵�ѭ��������
//��Ӳ��
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
	printf("sizeof(long double)=%ld\n", sizeof(long double));     //1���ֽ��൱��8��bit
	printf("sizeof(a)=%ld\n", sizeof(a));
	return 0;
}*/


/*#include<stdio.h>
int main() {
	int a;
	a = 6;
	printf("sizeof(a)=%ld\n", sizeof(a++));
	printf("a=%d", a);   //ע��sizeof�Ǿ�̬����������Ľ���ڱ���ʱ�̾;����ˣ�
	return 0;            //��Ҫ��sizeof�������������㣬��Щ���㲻������
}*/


/*#include<stdio.h>
int main()
{
	int a;
	a = 6;
	printf("sizeof(a+1.0)=%ld\n", sizeof(a + 1.0));  //a������int�ͣ�����1.0������double�ͣ������Ϊ8���ֽ�
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
	printf("sizeof(int)=%d\n", sizeof(int));        //int�����������Ĵ����ģ�
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

















