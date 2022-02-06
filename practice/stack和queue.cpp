#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
class Person {
public:
	Person(string name,int age) {
		this->my_name = name;
		this->age = age;	
	}
	string my_name;
	int age;

};
//void text() {
//	
//	stack<int> p;
//	p.push(2);
//	p.push(3);
//	p.push(4);
//	p.push(5);
//
//	while (!p.empty()) {
//		
//		cout << p.top() ;
//		p.pop();
//	}
//
//
//}
void text2() {
	//init queue
	queue<Person> q;
	Person p1("唐曾",20);
	Person p2("猪酒",12);
	Person p3("屠夫",44);
	Person p4("三元",33);
	//into queue
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
    //traversal queue
	while (!q.empty()) {
		cout<<"姓名为：" << q.front().my_name << " ";
		cout<< "年龄为：" << q.front().age <<endl;
		q.pop();

	}
}

int main() {
	/*text();*/
	text2();
	system("pause");
	return 0;
}