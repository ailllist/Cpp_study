#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

// 문제 1.4

//// 헤더부 (Func.h)
//
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//// 소스1
//
//#include "Func.h"
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "ㅁㅁ" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ㄴㄴ" << std::endl;
//}
//
//// 소스 2
//
//#include "Func.h"
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}

// 문제 2.1.1

//void upper(int &ref)
//{
//	ref++;
//}
//
//void reverser(int &ref)
//{
//	ref = ref * (-1);
//}
//
//int main(void)
//{
//	int num1 = 18;
//	int num2 = 12;
//
//	int &ref1 = num1;
//	int &ref2 = num2;
//
//	cout << "num1 : " << num1 << "   "
//		<< "num2 : " << num2 << endl;
//
//	upper(ref1);
//	reverser(ref2);
//
//	cout << "num1 : " << num1 << "   "
//		<< "num2 : " << num2 << endl;
//
//	return 0;
//}

// 문제 2.1.2

// 참조자는 상수로 바로 초기화될 수 없음.

// 문제 2.1.3

//void SwapPointer(int *(&ref1), int *(&ref2))
//{
//	int *temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 5;
//	int *ptr1 = &num1;
//	int num2 = 10;
//	int *ptr2 = &num2;
//
//	int *(&ref1) = ptr1;
//	int *(&ref2) = ptr2;
//
//	cout << "ptr1 : " << ptr1
//		<< "   ptr2 : " << ptr2 << endl;
//
//	SwapPointer(ref1, ref2);
//
//	cout << "ptr1 : " << ptr1
//		<< "   ptr2 : " << ptr2 << endl;
//
//	return 0;
//}

// 문제 2.2

//int main(void)
//{
//	const int num = 12;
//	const int *pnum = &num;
//	const int *(&ref) = pnum;
//
//	cout << "num : " << num <<
//		"  pnum : " << *pnum <<
//		"  ref : " << *ref << endl;
//
//	return 0;
//}

// 문제 2.3
// ㅂㄷㅂㄷ

//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//Point& PntAdder(const Point &p1, const Point &p2)
//{
//	Point * p3 = new Point;
//	p3->xpos = p1.xpos + p2.xpos;
//	p3->ypos = p1.ypos + p2.ypos;
//
//	return *p3;
//}
//
//int main(void)
//{
//	Point * p1 = new Point;
//	Point * p2 = new Point;
//
//	p1->xpos = 10;
//	p2->xpos = 20;
//
//	p1->ypos = 15;
//	p2->ypos = 25;
//
//	Point  &p3 = PntAdder(*p1, *p2);
//
//	cout << p3.xpos << p3.ypos << endl;
//
//	delete p1;
//	delete p2;
//	delete &p3;
//
//	return 0;
//}

// 문제 2.4.1

//int main(void)
//{
//	char str1[40] = "int main ";
//	char str2[40] = "void";
//	char str3[40];
//	int len = strlen(str1);
//
//	cout << len << endl;
//	cout << strcat(str1, str2) << endl;
//
//	strcpy(str3, str1);
//
//	cout << str3 << endl;
//	cout << str1 << endl;
//
//	cout << strcmp(str1, str3) << endl;
//	return 0;
//}

// 문제 2.4.2

int main(void)
{
	// ^^
}