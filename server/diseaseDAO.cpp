#include "stdafx.h"
#include "diseaseDAO.h"
#include "Disease.h"


diseaseDAO::diseaseDAO()
{
}

diseaseDAO::diseaseDAO(string fileName)
{
	name = fileName;
}



diseaseDAO::~diseaseDAO()
{
}

list<Disease> diseaseDAO::FindAll()
{
	//check if the data is stored;
	list<Disease> rep;
	//read file and fill up the list
	char SEP = ' ';
	char EOL = '\r\n';
	int sep_pos;
	string fileRecord;
	fstream file;
	file.open(name, ios::in);
	//check if first line is like MA v1.0\r\n
	getline(file, fileRecord, EOL);
	sep_pos = fileRecord.find_first_of(SEP);
	assert(fileRecord.substr(0, sep_pos)._Equal("MA"));
	fileRecord = fileRecord.substr(sep_pos + 1, fileRecord.length());
	sep_pos = fileRecord.find_first_of(SEP);
	assert(fileRecord.substr(0, 1)._Equal("v"));
	//float version = atof(fileRecord.substr(1,sep_pos).c_str());
	assert(!file.eof());
	//get the lines and chop them up
	SEP = ';';
	getline(file, fileRecord, EOL);
	do
	{
		list<string> genes;
		sep_pos = fileRecord.find_first_of(SEP);
		string diseaseName = fileRecord.substr(0, sep_pos);
		fileRecord = fileRecord.substr(sep_pos + 1, fileRecord.length());

		while(fileRecord.length()!=0)
		{
			sep_pos = fileRecord.find_first_of(SEP);
			genes.push_back(fileRecord.substr(0, sep_pos));
			fileRecord = fileRecord.substr(sep_pos + 1, fileRecord.length());
		}
		rep.push_back(Disease(diseaseName, genes));
	}while(!file.eof());
	return rep;
}
