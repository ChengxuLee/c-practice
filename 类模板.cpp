
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

		cout << "������:" << this->name << "�����ǣ�" << this->age<<endl;
	}
};

��ģ��û���Զ���ʾ�����Ƶ���ʽ ����ģ����
��ģ����� ʹ��Ĭ�ϲ���                                                                                                                              
void test() {

	Person<string, int>p1("�ž�",22);
	p1.showClass();
}
int main() {

	test();
		system("pause");
	return 0;
}
#### 1.2.4 ��ͨ�����뺯��ģ�������



//* *��ͨ�����뺯��ģ������ * *
//
//*��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
//* ����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
//* ���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
//#### 1.2.5 ��ͨ�����뺯��ģ��ĵ��ù���
//
//
//
//���ù������£�
//
//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
//2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3. ����ģ��Ҳ���Է�������
//4. �������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��
//��ģ���뺯��ģ��������Ҫ�����㣺
//
//1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2. ��ģ����ģ������б��п�����Ĭ�ϲ���
//��ģ���г�Ա��������ͨ���г�Ա��������ʱ����������ģ�
//
//* ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//* ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
// 
// 
//#### 1.3.4 ��ģ���������������
//
//ѧϰĿ�꣺
//
//* ��ģ��ʵ�������Ķ����������εķ�ʽ
//
//
//
//һ�������ִ��뷽ʽ��
//
//1. ָ�����������-- - ֱ����ʾ�������������
//2. ����ģ�廯-- - �������еĲ�����Ϊģ����д���
//3. ������ģ�廯-- - ������������� ģ�廯���д���

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;
#include <string>

//��Ա�����͹��캯���� ����ʵ��
template <class t1, class t2>
class Person {
public:
	//��Ա������������
	void test();
	//���캯������
	Person();
	 string name;
	 int age;
};
//��Ա��������ʵ��
template <class t1,class t2>
void Person <t1,t2>::test() {


}
//���캯��ʵ��
template <class t1, class t2>
Person<t1, t2>::Person();
int main() {

	system("pause");
	return 0;9
}