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
	//Нужно для прочтения текста в файле;

public:
	lexical_analyzer() {}
	//дает следующее слово из файла;
	string f(ifstream& file);
	void analyze(string path_input_file);
	~lexical_analyzer() {}
};

