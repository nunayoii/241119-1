#include "person.h"
#include<string>
#include <iostream>
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

void person::setid(const string& id)
{
	this->id = id;
}

void person::setlastname(const string& lastname)
{
	this->lastname = lastname;
}

void person::setfirstname(const string& firstname)
{
	this->firstname = firstname;
}

void person::setgender(const string& gender)
{
	this->gender = gender;
}

void person::setbirthdate(const string& birthdate)
{
	this->birthdate = birthdate;
}

void person::display() const
{
	cout << "ID: " << id << endl;
	cout << "姓: " << lastname << endl;
	cout << "名: " << firstname << endl;
	cout << "性別: " << gender << endl;
	cout << "生日: " << birthdate ;
}
