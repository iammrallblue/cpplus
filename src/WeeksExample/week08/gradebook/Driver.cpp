#include <iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
	GradeBook gb1("cs1730");
	gb1.displayMessage();
	gb1.setCourseName("cs1730!!");
	cout << gb1.getCourseName() << endl;
	//cout << gb1.courseName << endl; // cannot directly access private data member
	
	GradeBook gb1c = gb1; // invokes the implicitly copy constructor
	gb1.displayMessage();
	gb1c.displayMessage();

	gb1c.setCourseName("copy of cs1730");

	gb1.displayMessage();
	gb1c.displayMessage();
	
	const GradeBook gb2("cs2610");
	
	gb2.displayMessage();
	//gb2.setCourseName("cs2610!!"); // const objects can only call const member-functions
	
	GradeBook* gbp1 = new GradeBook("cs1302");
	gbp1->displayMessage();	
	gbp1->setCourseName("cs1302!!");
	cout << gbp1->getCourseName() << endl;
	delete gbp1;
	
	GradeBook* gbp2 = new GradeBook(gb1); // dynamically allocates a GradeBook using the implicit copy constructor	
	gbp2->displayMessage();
	const GradeBook* gbp3 = gbp2;
	//gbp3->setCourseName("cs2720!!");
	gbp2->setCourseName("cs2720!!");
	gbp3->displayMessage();
	delete gbp3;	// or delete gbp2, but not both
	
	cout << gbp2 << endl;
	cout << gbp3 << endl;
	
	gbp3 = &gb2;	// can still reuse the old pointer variables to point to another gradebook object
	gbp3->displayMessage();

	GradeBook::printNumGradeBooks(); //invokes the static function
} // main
