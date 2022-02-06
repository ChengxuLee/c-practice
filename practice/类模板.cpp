
 <summary>
 
 </summary>
 <typeparam name="NameType"></typeparam>
 <typeparam name="AgeType"></typeparam>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	NameType name;
	AgeType age;
	void showClass() {

		cout << "名字是:" << this->name << "年龄是：" << this->age<<endl;
	}
};

类模板没有自动显示类型推导方式 函数模板有
类模板可以 使用默认参数                                                                                                                              
void test() {

	Person<string, int>p1("张军",22);
	p1.showClass();
}
int main() {

	test();
		system("pause");
	return 0;
}
#### 1.2.4 普通函数与函数模板的区别



//* *普通函数与函数模板区别： * *
//
//*普通函数调用时可以发生自动类型转换（隐式类型转换）
//* 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//* 如果利用显示指定类型的方式，可以发生隐式类型转换
//#### 1.2.5 普通函数与函数模板的调用规则
//
//
//
//调用规则如下：
//
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
//2. 可以通过空模板参数列表来强制调用函数模板
//3. 函数模板也可以发生重载
//4. 如果函数模板可以产生更好的匹配, 优先调用函数模板
//类模板与函数模板区别主要有两点：
//
//1. 类模板没有自动类型推导的使用方式
//2. 类模板在模板参数列表中可以有默认参数
//类模板中成员函数和普通类中成员函数创建时机是有区别的：
//
//* 普通类中的成员函数一开始就可以创建
//* 类模板中的成员函数在调用时才创建
// 
// 
//#### 1.3.4 类模板对象做函数参数
//
//学习目标：
//
//* 类模板实例化出的对象，向函数传参的方式
//
//
//
//一共有三种传入方式：
//
//1. 指定传入的类型-- - 直接显示对象的数据类型
//2. 参数模板化-- - 将对象中的参数变为模板进行传递
//3. 整个类模板化-- - 将这个对象类型 模板化进行传递

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
#include <string>

//成员函数和构造函数的 类外实现
template <class t1, class t2>
class Person {
public:
	//成员函数类内声明
	void test();
	//构造函数声明
	Person();
	 string name;
	 int age;
};
//成员函数类外实现
template <class t1,class t2>
void Person <t1,t2>::test() {


}
//构造函数实现
template <class t1, class t2>
Person<t1, t2>::Person();
int main() {

	system("pause");
	return 0;9
}