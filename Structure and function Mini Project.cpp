#include <iostream>
#include <iomanip>
using namespace std;

 struct student
 {
  char name[20];
  int rollNo;
  double marks[3];
 };
 
 struct student s1;

 void addDetails(void);
 void disDetails(void);
 void totalMarks(void);
 
int main()
{
  int choice;
  
  do {
  cout << "1. Add a student's details." << endl;
  cout << "2. Display a student's details including total marks." << endl;
  cout << "3. Calculate the total marks of the student." << endl;
  cout << "4. Exit." << endl;
  cout << "Enter your choice: " << endl;
  cin>>choice;
  cout << endl;
  
  switch (choice)
  {
   case 1:
   {
    addDetails();
    break;
   }
   case 2:
   {
    disDetails();
    break;
   }
   case 3:
   {
    totalMarks();
    break;
   }
   case 4:
   {
    cout << "Exiting Program..." << endl;
    break;
   }
   default:
   {
    cout << "Invalid choice!" << endl;
    break;
   }
  }
  
  }while(choice!=4);
  return 0;
}

void addDetails()
 {
  cout << "Enter Student's details:" << endl;
  cout << "Name: ";
  cin.ignore();
  cin.getline(s1.name,20);
  cout << "Roll no. : ";
  cin >> s1.rollNo;
  cout << "Marks (3 subjects): ";
  for(int i=0; i<3; i++)
  {
  cin >> s1.marks[i];
  }
  cout << "Details Added Successfully!" << endl;
  cout << endl;
 }

void disDetails()
{
 cout << "Name: " << s1.name << endl;
 cout << "Roll No.: " << s1.rollNo << endl;
 cout << "Marks: ";
  for(int i=0; i<3; i++)
  {
   cout << s1.marks[i]<<","<<setw(4);
  }
  cout << endl;
}

void totalMarks()
{
 double sum=0;
 for(int i=0; i<3; i++)
 {
  sum+=s1.marks[i];
 }
 cout << "Total Marks: " <<sum<< endl;
 cout << endl;
}

