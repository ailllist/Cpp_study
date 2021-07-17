#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

// 문제 4-1-1

//class FruitSeller
//{
//private:
//	int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//
//public:
//	void InitMembers(int price, int num, int money)
//	{
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//	}
//	int SaleApples(int money)
//	{
//		if (money < 0)
//		{
//			return;
//		}
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//	void ShowSalesResult()	const
//	{
//		cout << "남은 사과: " << numOfApples << endl;
//		cout << "판매 수익: " << myMoney << endl << endl;
//	}
//};
//
//class FruitBuyer
//{
//
//private:
//	int myMoney;
//	int numOfApples;
//
//public:
//	void InitMembers(int money)
//	{
//		myMoney = money;
//		numOfApples = 0;
//	}
//	void BuyApples(FruitSeller &seller, int money)
//	{
//		if (money < 0)
//		{
//			return;
//		}
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//	void ShowBuyResult() const
//	{
//		cout << "현재 잔액: " << myMoney << endl;
//		cout << "사과 개수: " << numOfApples << endl << endl;
//	}
//};
//
//int main(void)
//{
//	FruitSeller	seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer	buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "과일 판매자의 현황" << endl;
//	seller.ShowSalesResult();
//	cout << "과일 구매자의 현황" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}

// 문제 4-2

//class Circle
//{
//private:
//	int xpos;
//	int ypos;
//	int radius;
//
//public:
//	void Init(int x, int y, int rad)
//	{
//		xpos = x;
//		ypos = y;
//		radius = rad;
//	}
//	void ShowPointInfo() const
//	{
//		cout << "radius : " << radius << endl;
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//	
//};
//
//class Ring
//{
//private:
//	Circle circle1;
//	Circle circle2;
//
//public:
//	void Init(int x1, int y1, int rad1, int x2, int y2, int rad2)
//	{
//		if (rad1 <= rad2)
//		{
//			circle1.Init(x1, y1, rad1);
//			circle2.Init(x2, y2, rad2);
//		}
//		else if (rad1 > rad2)
//		{
//			cout << "wrong input" << endl;
//		}
//	}
//	void ShowRingInfo()
//	{
//		cout << "inner Circle" << endl;
//		circle1.ShowPointInfo();
//		cout << "outter Circle" << endl;
//		circle2.ShowPointInfo();
//	}
//};
//
//int main(void)
//{
//	Ring ring;
//	ring.Init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

// 문제 4-3-1

//class Circle
//{
//private:
//	int xpos;
//	int ypos;
//	int radius;
//
//public:
//	Circle(int x, int y, int rad)
//	{
//		xpos = x;
//		ypos = y;
//		radius = rad;
//	}
//	void ShowPointInfo() const
//	{
//		cout << "radius : " << radius << endl;
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//
//};
//
//class Ring
//{
//private:
//	Circle circle1;
//	Circle circle2;
//
//public:
//	Ring(int x1, int y1, int rad1, int x2, int y2, int rad2)
//		: circle1(x1, y1, rad1), circle2(x2, y2, rad2)
//	{
//		if (rad1 > rad2)
//		{
//			cout << "wrong input" << endl;
//		}
//	}
//	void ShowRingInfo()
//	{
//		cout << "inner Circle" << endl;
//		circle1.ShowPointInfo();
//		cout << "outter Circle" << endl;
//		circle2.ShowPointInfo();
//	}
//};
//
//int main(void)
//{
//	Ring ring(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

// 문제 4-3-2

//namespace COMP_POS
//{
//	enum 
//	{
//		CLERK =		0,
//		SENIOR =		1,
//		ASSIST =		2,
//		MANAGER =	3
//	};
//}
//
//class NameCard
//{
//private:
//	char * name;
//	char * comp_name;
//	char * tel;
//	int pos;
//
//public:
//	NameCard(const char * _name, const char * _comp_name, const char * _tel, int _pos)
//		: pos(_pos)
//	{
//		int len_name = strlen(_name)  + 1;
//		int len_comp_name = strlen(_comp_name) + 1;
//		int len_tel = strlen(_tel) + 1;
//
//		name = new char[len_name];
//		strcpy(name, _name);
//
//		comp_name = new char[len_comp_name];
//		strcpy(comp_name, _comp_name);
//
//		tel = new char[len_tel];
//		strcpy(tel, _tel);
//	}
//
//	void ShowNameCardInfo()
//	{
//		cout << "name : " << name << endl;
//		cout << "company : " << comp_name << endl;
//		cout << "tel : " << tel << endl;
//		if (pos = 0)
//		{
//			cout << "level : CLERK" << endl << endl;
//		}
//
//		else if (pos = 1)
//		{
//			cout << "level : SENIOR" << endl << endl;
//		}
//
//		else if (pos = 2)
//		{
//			cout << "level : ASSIST" << endl << endl;
//		}
//
//		else if (pos = 3)
//		{
//			cout << "level : MANAGER" << endl << endl;
//		}
//	}
//};
//
//int main(void)
//{
//	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manASSIST("Kim", "SoGoodEng", "010-5555-6666", COMP_POS::ASSIST);
//
//	manClerk.ShowNameCardInfo();
//	manSENIOR.ShowNameCardInfo();
//	manASSIST.ShowNameCardInfo();
//}