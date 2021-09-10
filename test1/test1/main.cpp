#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class GradeBook{
public:
	void displayMessage(string str) {
		cout << "Welcome to the grade book for\n" << str << "!" << endl;
	}
};

int main() {
	string nameOfCourse;
	GradeBook myGradeBook;
	cout << "Please enter the course name : " << endl;
	getline(cin, nameOfCourse);
	myGradeBook.displayMessage(nameOfCourse);
	return 0;
}