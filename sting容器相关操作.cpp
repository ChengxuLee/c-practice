#define _CRT_SECURE_NO_WARNINGS 
//string��ϰ 
#include <iostream>
using namespace std;

//����
//void text() {
//
//	string s1; //�������ַ����������޲ι��캯��
//	cout << "str1 = " << s1 << endl;
//	const char* str = "hello bit";
//	string s2(str); //�вι���
//	cout << "str2 = " << s2<< endl;
//	string s3(s2);	// ��������
//	cout << "str3 = " << s3 << endl;
//	string s4(10,'a');
//	cout << "str4 = " << s4 << endl;
//}
//��ֵ
void text() {
	//string s1;
	//s1 = 'a';
	//cout << "s1 = " << s1 << endl;
	//string s2;
	//s2 ="dwfefewwef";
	//cout << "s2 = " << s2 << endl;
	//string s3;
	//s3 = s2;
	//cout << "s3 = " << s3 << endl;
	//string s4;
	//s4.assign("dawrgerhrere",5);
	//cout << "s4 = " << s4 << endl;
	//string s5;
	//s5.assign("dwdwa");
	//cout << "s5 = " << s5 << endl;
	//string s6;
	//s6.assign(s5);
	//cout << "s6 = " << s6 << endl;
	////�ַ���ƴ�� 
	//string str1 = "��";

	//str1 += "������Ϸ";

	//cout << "str1 = " << str1 << endl;
	//string str2 = "lol";
	//	str1+=str2;
	//cout << "str1 = " << str1 << endl;
	//string str3 = "I";
	//str3.append(" love ");
	//str3.append("game abcde", 4);
	////str3.append(str2);
	//str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	//cout << "str3 = " << str3 << endl;
	//���Һ��滻 find
	string find1 = "kjsk";
	int pos = find1.find('j');
	cout << "find1 = " << pos << endl;
	string find2= "kjsk33453";
	int pos2 = find2.find(find1);
	cout << "find2 = " << pos2 << endl;  //δ�ҵ�����-1 �ҵ�����λ��
	//�滻 replace
	string re = find2.replace(1,3,"wwwwwwwwwwwww"); //��1-3λ �滻Ϊ wwwwwwwwwwwww
	cout << "re = " << re << endl;
	//�ַ����Ƚ� compare
	int aa=re.compare(find2); 
	cout << "�ȽϽ��Ϊ " << aa<< endl;
	//��ɾ
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;
	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
	//�Ĳ� 
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;
}

int main() {
	text();

	system("pause");
	return 0;
}