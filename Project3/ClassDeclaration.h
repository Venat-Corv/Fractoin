#pragma once
#include<iostream>
using namespace std;
#define delimiter "\n-------------------------------------\n"

//#define CONSTRUCTORS_CHECK

class String;
String operator+(const String& left, const String& right);

class String
{
	int size;//������ ������ 
	char* str;//����� ������ � ������������ ������
public:
	int get_size() const;
	const char* get_str() const;
	char* get_str();


	//       Constructors:
	String(int size = 80);
	String(const char* str);
	String(const String& other);
	String(String&& other);
	~String();

	//       Operators:

	String& operator=(const String& other);
	String& operator=(String&& other);

	String& operator+=(const String& other);

	const char& operator[](int i)const;
	char& operator[](int i);

	//       Methods:
	void print();
};

ostream& operator<<(ostream& os, const String& obj);
String operator+(const String& left, const String& right);