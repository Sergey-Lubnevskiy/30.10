#pragma once
#include <iostream>
#include <fstream>
#include "book.h"
using namespace std;

void searchname(const char* a)
{
	ifstream in;
	in.open("Text.txt");
	cout << "Here's found:"<<endl;
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Name:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void searchcompany(const char* a)
{
	ifstream in;
	in.open("Text.txt");
	cout << "Here's what we found (Company):\n";
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		if (strstr(buf, check))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf << endl;
			}
	} while (in);
	in.close();
}



void searchtype(const char* a)
{
	ifstream in;
	in.open("Text.txt");
	cout << "Here's what we found:\n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Type:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void searchaddress(const char* a)
{
	ifstream in;
	in.open("Text.txt");
	cout << "Here's what we found:\n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Address:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}


void searchnum(int a)
{
	ifstream in;
	in.open("Text.txt");
	cout << "Here's what we found:\n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Number:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, buf_num))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void PrintFile()
{
	ifstream in;
	in.open("Text.txt");
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		cout << buf << endl;
	} while (in);
}