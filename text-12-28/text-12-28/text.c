#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Զ���ṹ���� -- �ṹ��
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


//�ṹ���������
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




//�ṹ������Ķ���ͳ�ʼ��
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




//�ṹ���ڴ����
//����Ƶ����csdn�в�����ѧϰ
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


//�ṹ�ڶ��뷽ʽ�����ʵ�ʱ�����ǿ����޸�Ĭ�϶�����
//�޸�Ĭ�϶�����
//#pragma pack(4)//    ����Ĭ�϶�����Ϊ4
//struct S4
//{
//	char c;
//	double d;
//};
//#pragma pack()//     ȡ�����õ�Ĭ�϶�����
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
////��ֵ
//void Print1(struct S tmp)
//{
//	printf("%d ", tmp.a);
//	printf("%c ", tmp.c);
//	printf("%lf ", tmp.d);
//}
////��ַ���ã�
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



 

//�˽��offsetof
//�ٶ������⣺offsetof���ʵ��





//λ��   -������λ
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



//ö��
 

//ö�����͵Ķ���
//enum Day//����
//{
//	//ö�ٵĿ���ȡֵ - Ĭ���ǳ���0 1 2 3...Ҳ�����Զ��帳��ʼֵ
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};


//enum Color   //������㸳ֵ�����Ǻ�߱����ǰһ��+1
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




//���� - ������ - ������
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





//�ٶ�������
//�жϵ�ǰ������С�˴洢���Ǵ�˴洢
//int main()  // �Ƚϴ�
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//int check()   //������װ
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
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}