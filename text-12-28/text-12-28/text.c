#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//自定义结构类型 -- 结构体
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//};
//int main()
//{
//	struct stu s;
//	return 0;
//}


//结构体的自引用
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}


//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}




//结构体变量的定义和初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 'c',100,{55.6,30},3.14,"hello" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf %d\n", s.st.weight, s.st.age);
//	return 0;
//}




//结构体内存对齐
//看视频，在csdn中查资料学习
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1= { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int a;
//};
//int main()
//{
//	struct S3 s3= { 0 };
//	printf("%d\n", sizeof(s3));//16   8+1+4
//	return 0;
//}


//结构在对齐方式不合适的时候，我们可以修改默认对齐数
//修改默认对齐数
//#pragma pack(4)//    设置默认对齐数为4
//struct S4
//{
//	char c;
//	double d;
//};
//#pragma pack()//     取消设置的默认对齐数
//int main()
//{
//	struct S4 s4= { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}




//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void INIT(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp)
//{
//	printf("%d ", tmp.a);
//	printf("%c ", tmp.c);
//	printf("%lf ", tmp.d);
//}
////传址（好）
//void Print2(struct S* ps)
//{
//	printf("%d ", ps->a);
//	printf("%c ", ps->c);
//	printf("%lf ", ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	INIT(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}



 

//了解宏offsetof
//百度面试题：offsetof宏的实现





//位段   -二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 20;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//枚举
 

//枚举类型的定义
//enum Day//星期
//{
//	//枚举的可能取值 - 默认是常量0 1 2 3...也可以自定义赋初始值
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};


//enum Color   //可以随便赋值，但是后边必须比前一项+1
//{
//	RED=5,
//	GREEN,
//	BULE
//};
//int main()
//{
//	enum Color c = BULE;
//	printf("%d %d %d\n", RED, GREEN, BULE);
//	return 0;
//}




//联合 - 联合体 - 共用体
//union un
//{
//	char c;
//	int a;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.a));
//	return 0;
//}





//百度面试题
//判断当前机器是小端存储还是大端存储
//int main()  // 比较挫
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int check()   //函数封装
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int check()
//{
//	union 
//	{
//		char c;
//		int a;
//	}u;
//	u.a = 1;
//	return u.c;
//}
int main()
{
	int ret = check();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}