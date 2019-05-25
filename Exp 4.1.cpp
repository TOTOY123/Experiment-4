#include<iostream>

using namespace std;

int main()
{
char response; 
int choice;
int num1, num2;
bool end=false;

while(!end)
{
	cout << "Enter your desired operator" << endl << "1. Add" <<endl<< "2. Substract"<<endl <<"3. Multiply" << endl << "4. Divide" << endl<<"5. Modulus" <<endl; cin>> choice;
  cout << "Enter the first number: "; 
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

switch (choice)
{
	case 1: 
	cout << "Result: "<< num1+num2 << endl;
	  break;
	case 2: 
	cout <<"Result: " << num1-num2 << endl;
	  break;
	case 3:
	cout << "Result: " << num1*num2 <<endl;
	  break;
	case 4:
	cout <<"Result: " << num1/num2 << endl;
	  break;
	case 5:
	cout <<"Result: " << num1/num2 << endl;
	cout <<"Remainder " << num1%num2 << endl;
	  break;
	Default: cout << "Error";
	  break;
}
  cout << "Continue? Y/N ";
  cin >> response;
  
 switch (response)
  {
	case 'Y':
		case 'y':
			end = false;
	case 'N':
		case 'n':
			end = true;
	}
}
return 0;
}


