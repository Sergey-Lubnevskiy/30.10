#pragma once
#include <fstream>
#include<iostream>

using namespace std;

class Book
{
	string company;
	string name;
	int number;
	string address;
	string type;
	static int count;
public:
	Book()
	{
		company = name = address = type = "";
		number = 0;
	}
	Book(const char* c, const char* n, int num, const char* a, const char* t)
	{
		company = c;
		name = n;
		number = num;
		address = a;
		type = t;
		count++;
		Save();
	}
	void Init()
	{
		cout << "Company: ";
		cin >> company;
		cout << "Name: ";
		cin >> name;
		cout << "Number: ";
		cin >> number;
		cout << "Address: ";
		cin >> address;
		cout << "Type: ";
		cin >> type;
		count++;
		Save();
	}
	void Save()
	{
		ofstream out;
		out.open("Text.txt", ios::app);
		out << endl << count << endl << "Company: " << company
			<< endl << "Name: " << name << endl << "Number: "
			<< number << endl << "Address: " << address
			<< endl << "Type: " << type << endl;
		out.close();
	}
};

int Book::count = 0;