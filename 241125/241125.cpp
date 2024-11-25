

#include <string>
#include"person.h"
#include <iostream>
using namespace std;
int main()
{
    
	person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

	person* person2 = new person();
	person2->setid("B987654321");
	person2->setlastname("Wang");
	person2->setfirstname("David");
	person2->setgender("M");
	person2->setbirthdate("1999-12-31");

	person1.display();
	cout << endl;
	person2->display();
}


