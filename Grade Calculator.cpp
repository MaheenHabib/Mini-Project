#include<iostream>
using namespace std;
int main()
{ 
int marks; 

   while(marks!=0)
 {
  cout << "Enter the marks(0-100):" << endl;
  cout << "Enter 0 to exit." << endl;
  cin>>marks;

  if (marks >=90 && marks<=100)
  {
   cout << "A" << endl;
  } 
  if (marks >=80 && marks<=89)
  {
   cout << "B" << endl; 
  } 
  if (marks >=70 && marks<=79)
  {
   cout << "C" << endl;
  } 
  if (marks >=60 && marks<=69)
  {
   cout << "D" << endl;
  } 
  if (marks < 60 && marks>0)
  {
   cout << "F" << endl; 
  } 
  if (marks==0)
  {
   break;
  }
  if (marks>100)
  {
   cout << "Invalid Input." << endl;
  }
 }
 
  return 0;
} 