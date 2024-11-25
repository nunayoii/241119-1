#include "person.h"
#include<string>
using namespace std;



person::person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastname = lastname;
	this->firstname = firstname;
	this->gender = gender;
	this->birthdate = birthdate;
}

string person::getid() const
{
	return id;
}

string person::getlastname() const
{
	return lastname;
}

string person::getfirstname() const
{
	return firstname;
}

string person::getgender() const
{
	return gender;
}

string person::getbirthdate() const
{
	return birthdate;
}
