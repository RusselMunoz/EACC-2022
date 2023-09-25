#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{

string Birthday;
string NAME;
string Gender;
string Profession;
string Occupation;
string Companyname;
string Position;
float Income;
double Yearlyincome;
int year = 12;
  
  char p = 80;
  char h = 72;
  char P = 80;

cout<<"ANSWER THE FOLLOWING"<<endl;

cout<<"FULLNAME :";
getline(cin, NAME);

cout<<"Gender :";
getline(cin, Gender);

cout<<"Birthday :";
getline(cin, Birthday);

cout<<"Profession :";
getline(cin, Profession);

cout<<"Occupation :";
getline(cin, Occupation);

cout<<"Company's name :";
getline(cin, Companyname);

cout<<"Position :";
getline(cin, Position);

cout<<fixed <<setprecision(2);

	cout<<"Income: ";
	cin>>Income;
	std::cout<< std::showpoint<< "PHP "<<Income <<endl;
	
Yearlyincome=Income*year;

cout<<" ";

cin.ignore();
	cout<<endl<<endl<<endl<<"```````````````````````````````````````"<<endl;
	cout<<"YOUR NAME :"<<NAME<<endl;
	cout<<"GENDER :"<<Gender<<endl<<"BIRTHDAY :"<<Birthday<<endl<<"PROFESSION :"<<Profession<<endl<<endl<<endl<<"```````````````````````````````````````"<<endl;
	cout<<"OCCUPATION :"<<Occupation<<endl<<"COMPANY NAME :"<<Companyname<<endl<<"POSITION :"<<Position<<endl;
		cout<<endl;
		cout<<"```````````````````````````````````````"<<endl<<"INCOME :"<<setprecision(2)<<p<<h<<P<<" "<<Income<<endl<<"YEARLY INCOME :"<<p<<h<<P<<" "<<Yearlyincome<<endl;
		
		cout<<"Program Finished"; 
		
	return 0;
	
}
