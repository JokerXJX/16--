#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//��ģ��
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//void test01()
//{
//	Person<string, int>p1("�����", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ģ���뺯��ģ������
//template<class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
////1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p("�����", 999);//����
//	Person<string, int>p("�����", 999);
//	p.showPerson();
//}
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p("��˽�", 1000);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show:" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show:" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//
//	T obj;
//	//��ģ���г�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//void test01()
//{
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ģ���������������
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
////1.ָ����������
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson1(p);
//}
////2.����ģ�廯
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	//cout << "T1�����ͣ�" << typeid(T1).name() << endl;
//	//cout << "T2�����ͣ�" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printPerson2(p);
//}
////3.������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//}
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
//	printPerson3(p);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

//��ģ����̳�
//template<class T>
//class Base
//{
//	T m;
//};
////class Son :public Base ���󣬲�֪��T�����ͣ��޷��̳�
//class Son:public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
////��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1�����ͣ�" << typeid(T1).name() << endl;
//		cout << "T2�����ͣ�" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//void test02()
//{
//	Son2<int, char>S2;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//��ģ���г�Ա��������ʵ��
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	/*{
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//	void showPerson();
//	/*{
//		cout << this->m_Name << " " << this->m_Age << endl;
//	}*/
//	T1 m_Name;
//	T2 m_Age;
//};
////���캯������ʵ��
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
////��Ա����������ʵ��
//template<class T1, class T2>//ģ�����
//void Person<T1, T2>::showPerson()
//{
//	cout << "������"<<this->m_Name << " ���䣺" << this->m_Age << endl;
//}
//void test01()
//{
//	Person<string, int>p("Tom", 15);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ģ����ļ���д
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������"<<this->m_Name << " ���䣺" << this->m_Age << endl;
//}
//1.�����ʽ��ֱ�Ӱ��� Դ�ļ�
//#include"person.cpp"
//2.�����ʽ����.h  .cpp�ļ�����д��һ�𣬽���׺��Ϊ.hpp
//#include"person.hpp"
//void test01()
//{
//	Person<string, int>p("Tom", 15);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��ģ������Ԫ
//ͨ��ȫ�ֺ�����ӡ��Ϣ
//��ǰ�ñ�����֪��Person�����
//template<class T1, class T2>
//class Person;
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ��--������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1,T2> p)
//	{
//		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//	//ȫ�ֺ�������ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪�������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//	
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
////ȫ�ֺ�������ʵ��
//void test01()
//{
//	Person<string, int>p("Tom", 15);
//	printPerson(p);
//}
////ȫ�ֺ�������ʵ��
//void test02()
//{
//	Person<string, int>p("Jerry", 15);
//	printPerson2(p);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}




