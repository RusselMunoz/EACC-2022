#include <iostream>
#include <iomanip> // Required for output manipulators
using namespace std;

int main() {
	
    string companyName;
    string employeeName;
    string input;
    int age;
    string position;
    double yearlySalary;
    float wage;
    string companyname = "JP Morgan Chase & Co.";
    //'P'H'P' ascii character
    char peso_sign[3] = {80,72,80};
    string gender;
    int year =12;

    // Read in character output(Company)
    cout << "JP Morgan Chase & Co."<< endl;
    cout << " " << endl;

    // Read in character input(Employee)
    cout << "Enter Employee's Name: ";
    getline(cin, employeeName);
    
    // Read in character input(Gender)
    cout << "Enter Gender: ";
    getline(cin, gender);
    
	// Read in integer input(Age)
	cout << "Enter Age: ";
	cin >> age;
	cin.ignore();
	
	// Read in character input(Position)
	cout << "Enter Position: ";
	getline(cin, position);
	
	//fixed is a manipulator that specifies that the output of a floating-point value should be in fixed-point notation.
	//Basta niro-roundup
	/*setprecision(2) is a manipulator that specifies the number of decimal places that should be displayed for a floating-point value. 
	In this case, it is being used to specify that only two decimal places should be displayed.*/
	cout << fixed << setprecision(2);
	
	// Read in float input(Wage)
	cout << "Enter Wage: ";
	cin >> wage;
	
	/* Showpoint is an output formatting manipulator that causes the decimal point and any trailing zeros to be displayed for all floating-point values, 
	even if they are not significant digits. basta yan*/
	//pag walang showpoint walang decimal oke yun sabi
  
	// calculate yearly salary
	yearlySalary=wage*year; 

  cout << endl;
  cout <<"--------------------------------------"<<endl;
  cout <<"Employee's Name: :" << employeeName << endl;
  cout <<"Employee's Gender :" << gender << endl;
  cout <<"Employee's Age: " << age << "Years old"<< endl;
  cout <<"Employee's Position' :"<< position << endl;
  cout <<"--------------------------------------"<< endl;
  cout <<"Company Name :" <<companyname<<endl;
  cout <<endl;
  
  // Setprecision manipulator only affects the number of decimal points displayed. It does not round the values.
  //Pag wala ang output magiging 38000 dapat 38000.00 ata ewan or if kunware 2.50 magiging 2.5 lang kasi (2) mali tohg puta
  cout <<"```````````````````````````````````````"<< endl << "Salary :" << setprecision(2) << " " << peso_sign << " " << 
  wage << endl << "Yearly Income : " << peso_sign << " " << yearlySalary << endl;
  cout << endl;

  cout<<"Program Finished"; 

  return 0;
}

