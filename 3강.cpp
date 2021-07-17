// 문제 3-1
//struct Point
//{
//	int xpos;
//	int ypos;
//
//	void MovePos(int x, int y)
//	{
//		xpos += x;
//		ypos += y;
//	}
//	
//	void AddPoint(const Point &pos)
//	{
//		xpos += pos.xpos;
//		ypos += pos.ypos;
//	}
//
//	void ShowPosition()
//	{
//		cout << "xpos : " << xpos << endl;
//		cout << "ypos : " << ypos << endl;
//	}
//};
//
//int main(void)
//{
//	Point pos1 = { 12, 4 };
//	Point pos2 = { 20, 30 };
//
//	pos1.MovePos(-7, 10);
//	pos1.ShowPosition();
//
//	pos1.AddPoint(pos2);
//	pos1.ShowPosition();
//
//	return 0;
//}

// 문제 3-2-1

//class Calculator
//{
//private:
//	int add_num;
//	int min_num;
//	int mul_num;
//	int div_num;
//public:
//	void Init();
//	float add(float num1, float num2);
//	float min(float num1, float num2);
//	float mul(float num1, float num2);
//	float div(float num1, float num2);
//	void ShowOpCount();
//};
//
//void Calculator::Init()
//{
//	add_num = 0;
//	min_num = 0;
//	mul_num = 0;
//	div_num = 0;
//}
//
//float Calculator::add(float num1, float num2)
//{
//	add_num += 1;
//	return num1 + num2;
//}
//
//float Calculator::min(float num1, float num2)
//{
//	min_num += 1;
//	return num1 - num2;
//}
//
//float Calculator::mul(float num1, float num2)
//{
//	mul_num += 1;
//	return num1 * num2;
//}
//
//float Calculator::div(float num1, float num2)
//{
//	div_num += 1;
//	return num1 / num2;
//}
//
//void Calculator::ShowOpCount()
//{
//	cout << "add_count : " << add_num << endl;
//	cout << "min_count : " << min_num << endl;
//	cout << "mul_count : " << mul_num << endl;
//	cout << "div_count : " << div_num << endl;
//}
//
//int main(void)
//{
//	Calculator cal;
//	cal.Init();
//	cout << "3.2 + 2.4 = " << cal.add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.min(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal.div(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//	return 0;
//}

// 문제 3-2-2

//class Printer
//{
//private:
//	const char * str_;
//public:
//	void SetString(const char * str);
//	void ShowString();
//};
//
//void Printer::SetString(const char * str)
//{
//	str_ = str;
//}
//
//void Printer::ShowString()
//{
//	cout << str_ << endl; // ????
//}
//
//int main(void)
//{
//	Printer pnt;
//	const char * p_str = "Hello World!";
//	pnt.SetString(p_str);
//	pnt.ShowString();
//}