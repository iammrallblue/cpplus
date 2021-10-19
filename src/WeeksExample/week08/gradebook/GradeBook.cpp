#include "GradeBook.h"
#include <iostream>

using namespace std;

unsigned int GradeBook::numGradeBooks = 0;

GradeBook::GradeBook (const string& name) {
	courseName = name;
	numGradeBooks += 1;
} // GradeBook

GradeBook::~GradeBook() {
	numGradeBooks -= 1;
} // ~GradeBook

const string& GradeBook::getCourseName() const {
	return courseName;
} // getCourseName

void GradeBook::setCourseName(const string& name) {
	courseName = name;
} // setCourseName

void GradeBook::displayMessage() const {
	cout << "message from " << courseName << "!" << endl;
} // displayMessage

void GradeBook::printNumGradeBooks() {
	cout << "Num of GradeBooks = " << numGradeBooks << endl;
} // printNumGradeBooks

