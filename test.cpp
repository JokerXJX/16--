#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//类模板
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
//	Person<string, int>p1("孙悟空", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//类模板与函数模板区别
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
////1.类模板没有自动类型推导使用方式
//void test01()
//{
//	//Person p("孙悟空", 999);//错误
//	Person<string, int>p("孙悟空", 999);
//	p.showPerson();
//}
////2.类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string>p("猪八戒", 1000);
//	p.showPerson();
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建
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
//	//类模板中成员函数
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

//类模板对象做函数参数
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
//		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
////1.指定传入类型
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
////2.参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showPerson();
//	//cout << "T1的类型：" << typeid(T1).name() << endl;
//	//cout << "T2的类型：" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
////3.整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//}
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
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

//类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
////class Son :public Base 错误，不知道T的类型，无法继承
//class Son:public Base<int>
//{
//
//};
//void test01()
//{
//	Son s1;
//}
////如果想灵活指定父类中T类型，子类也需要变类模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型：" << typeid(T1).name() << endl;
//		cout << "T2的类型：" << typeid(T2).name() << endl;
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


//类模板中成员函数类外实现
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
////构造函数类外实现
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
////成员函数的类外实现
//template<class T1, class T2>//模板参数
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名："<<this->m_Name << " 年龄：" << this->m_Age << endl;
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

//类模板分文件编写
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
//	cout << "姓名："<<this->m_Name << " 年龄：" << this->m_Age << endl;
//}
//1.解决方式，直接包含 源文件
//#include"person.cpp"
//2.解决方式，将.h  .cpp文件内容写到一起，将后缀改为.hpp
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

//类模板与友元
//通过全局函数打印信息
//提前让编译器知道Person类存在
//template<class T1, class T2>
//class Person;
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现--姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1,T2> p)
//	{
//		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//	}
//	//全局函数类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道函数的存在
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
////全局函数类内实现
//void test01()
//{
//	Person<string, int>p("Tom", 15);
//	printPerson(p);
//}
////全局函数类外实现
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




