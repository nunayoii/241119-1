#pragma once
#include <string>
using namespace std;
class person
{
private:
	string id;
	string lastname;
	string firstname;
	string gender;
	string birthdate;
public:
	person(const string&id, const string&lastName, const string&firstName, const string&gender, const string&birthDate);

	string getid()const;
	string getlastname()const;
	string getfirstname()const;
	string getgender()const;
	string getbirthdate()const;
	

};

