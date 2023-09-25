#include <iostream>
#include <string>
#include <limits>
#include <iomanip> // Required for output manipulators
#include <sstream>
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
    char peso_sign[3] = {80,72,80};
    string gender;
    int year = 12;
    bool error = false;

    // Read in character output(Company)
    cout << "JP Morgan Chase & Co."<< endl;
    cout <<" "<<endl;

    // Read in character input(Employee)
    while (true) {
    cout << "Enter Employee's Name: ";
    getline(cin, employeeName);

    bool isValid = true; // Flag to track whether the name is valid

    // Check if the employee name is empty or if the string contains any non-alphabetic characters or spaces not between alphabetical characters, or if it contains any digits
    if (employeeName.empty() || employeeName.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ") != string::npos || employeeName.find_first_of("0123456789") != string::npos) {
        cout << "You did not enter a valid string!\n";
        isValid = false;
    } else {
        // Check if all characters are alphabetical
        for (int i = 0; i < employeeName.size(); i++) {
            if (!isalpha(employeeName[i]) && !isspace(employeeName[i])) {
                cout << "You did not enter a valid string!\n";
                isValid = false;
                break;
            }
        }

    if (isValid) {
        cout << "You entered: " << employeeName << '\n';
        break; // Exit the loop
    }

    cin.clear(); // Clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input
	}
}
    
	
	// Read in integer input(Age)
	std::string age_str;
	while (true) {
    std::cout << "Enter Age: ";
    std::getline(std::cin, age_str);
    std::stringstream ss(age_str);
    if (ss >> age && age > 0) {
      break;
    }
    cout << "Error: Wage must be a positive number." << endl;
  }
		
	// Input was successful, you can use the value of age here
	
	// Read in character input(Age)
	cout << "Enter Gender: ";
	cin >> gender;
	cin.ignore();
	
  // Read in character input(Position)
  	while (true){
  cout << "Enter Position: ";
  getline(cin, position);
  
  bool isValid = true; // Flag to track whether the name is valid

    // Check if the employee name is empty or if the string contains any non-alphabetic characters or spaces not between alphabetical characters, or if it contains any digits
    if (position.empty() || position.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ") != string::npos || position.find_first_of("0123456789") != string::npos) {
        cout << "You did not enter a valid string!\n";
        isValid = false;
    } else {
        // Check if all characters are alphabetical
        for (int i = 0; i < position.size(); i++) {
            if (!isalpha(position[i]) && !isspace(position[i])) {
                cout << "You did not enter a valid string!\n";
                isValid = false;
                break;
            }
        }

    if (isValid) {
        cout << "You entered: " << position << '\n';
        break; // Exit the loop
    }

    cin.clear(); // Clear the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input
	}
}

  cout<<fixed <<setprecision(2);
  
  // Read in float input(Wage)
  std::string line;
  while (true) {
    std::cout << "Enter Wage: ";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    if (ss >> wage && wage > 0) {
      break;
    }
    std::cout << "Error: Wage must be a positive number." << std::endl;
  }
	// Showpoint is an output formatting manipulator that causes the decimal point and any trailing zeros to be displayed for all floating-point values, even if they are not significant digits. basta yan
	//pag walang showpoint walang decimal oke yun sabi
  cout<< showpoint << peso_sign << " " << wage <<endl;
  
	// calculate yearly salary
  yearlySalary=wage*year; 

  cout << endl << endl << endl;
  cout<<"```````````````````````````````````````"<< endl;
  cout<<"Employee's Name: :" << employeeName << endl;
  cout<<"Employee's Gender :" << gender << endl << "Employee's Age: " << age << endl << "Employee's Position' :"<<position<<endl << endl << endl;
  cout<<"```````````````````````````````````````"<< endl;
  cout<<"COMPANY NAME :"<<companyname<<endl;
  cout<<std::endl;
  // Setprecision manipulator only affects the number of decimal points displayed. It does not round the values.
  //Pag wala ang output magiging 38000 or if kunware 2.50 magiging 2.5 lang 
  cout<<"```````````````````````````````````````"<<std::endl<<"Salary :"<<setprecision(2)<<" "<< peso_sign << " " << wage << endl<<"Yearly Income : "<< peso_sign << " " << yearlySalary<<endl;
  cout<<endl;

  std::cout<<"Program Finished"; 

  return 0;
}

