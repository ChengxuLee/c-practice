#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

//�������� 
class Person {
public:
	Person() {
		this->count = 0;
	}
	int operator()(int a,int b) {
		count++;
		return a + b;
	}
	int count;
};
//�����������Լ���״̬  count
void text() {

	Person c;
	cout << c(5, 10) << endl;
	cout << c.count << endl;
}
//����������Ϊ����
void text2(Person &p,string h) {

	p(5,10);

}
int main() {
	Person c;
	//text();
	text2(c,"c++");
	system("pause");
	return 0;
}