#include<iostream>
using namespace std;
int main()
{ 
  int num1, num2, choice, result;
  
  do{
   cout << "1: Addition" << endl;
   cout << "2: Subtraction" << endl;
   cout << "3: Multiplication" << endl;
   cout << "4: Division" << endl;
   cout << "5: Exit" << endl;
   cout << "Enter you choice (1-5):" << endl;
   cin >> choice;
   
   cout << "Enter number 1: " << endl;
   cin >> num1;
   cout << "Enter number 2:" << endl;
   cin >> num2;
   
   switch(choice)
   {
    case 1:
    result= num1 + num2;
    cout <<num1<<" + "<<num2<<" = "<<result<< endl;
    break;
    
    case 2:
    result = num1 - num2;
    cout <<num1<<" - "<<num2<<"= "<<result<< endl;
    break;
    
    case 3:
    result = num1*num2;
    cout <<num1<<" * "<<num2<<" = "<<result<< endl;
    break;
    
    case 4:
    result = num1 / num2;
    cout <<num1<<" ÷ "<<num2<<" = "<<result<< endl;
    break;
    
    case 5:
    cout << "Exiting..." << endl;
    break;
    
    default:
    cout << "Invalid choice! Try Again." << endl;
   }
   
  }while(choice!=5);
  

   return 0;
}