#include <iostream>
#include <limits>
using namespace std;

int main() {
   int age;

   cout << "Age: ";
   cin >> age;

   // Check if the input failed
   if (cin.fail()) {
      cin.clear(); // Clear the error flag
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input
      cout << "Invalid input. Please try again." << endl;
      return 1; // Return an error code
   } 

   // Input was successful, you can use the value of age here
   cout << "Your age is: " << age << endl;
   return 0;
}

