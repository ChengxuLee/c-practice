#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <list>
#include <string>
using namespace std ;
class Person {
public:
	Person(string name,int age,int height) {		
		my_name = name;
		this->age = age;
		m_height = height;
	}
public:
	string my_name;
	int age;
	int m_height;
};
void printList(list<Person>&lis) {
	for (list<Person>::iterator it = lis.begin();it != lis.end();it++) {
		cout<<"姓名是:" << (*it).my_name << " ";
		cout << "年龄是:" << (*it).age << " ";
		cout << "身高是:" <<(*it).m_height << endl;
		
	}
}
bool compare(Person &v1,Person &v2) {
	if (v1.age==v2.age) {
	
		return v1.m_height < v2.m_height;
	}
	else {
		return v1.age < v2.age;
	}


}
void text() {
	list<Person> lis;
	Person p1("张飞",19,1);
	Person p2("关羽",34,180);
	Person p3("黄忠",63,150);
	Person p4("马超",12,511);
	Person p5("白起",3,222);
	Person p6("张军",45,15);
	lis.push_back(p1);
	lis.push_back(p2);
	lis.push_back(p3);
	lis.push_back(p4);
	lis.push_back(p5);
	lis.push_back(p6);
	for (list<Person>::iterator it = lis.begin(); it != lis.end(); it++) {
		cout << "姓名： " << it->my_name << " 年龄： " << it->age
			<< " 身高： " << it->m_height << endl;
	}
	lis.sort(compare);
	printList(lis);
}


int main() {
	text();
	system("pause");
	return 0;
}