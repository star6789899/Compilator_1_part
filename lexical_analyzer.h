#pragma once
#include <iostream>
#include <string>
#include <fstream>

#include "dfaa.h"
#include "Hash_table.h"
using namespace std; 
#define _CRT_SECURE_NO_WARNINGS

class lexical_analyzer
{
private:
	//����� ��� ��������� ������ � �����;

public:
	lexical_analyzer() {}
	//���� ��������� ����� �� �����;
	string f(ifstream& file);
	void analyze(string path_input_file);
	~lexical_analyzer() {}
};

