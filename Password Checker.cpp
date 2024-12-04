#include<iostream>
using namespace std;
int main()
{ 
 int passcode= 2005;
 int password, i;
 bool accessgranted = false;
 
 for (i=1; i<=3; i++)
 {
   cout << "Enter the password:" << endl;
   cin >> password;
   
  if (password==passcode)
  {
   cout << "Access Granted!" << endl;
   accessgranted = true;
   break;
  }
  else
  {
   cout << "Wrong Password." << endl;
  }
 } 
  if (!accessgranted)
  {
   cout << "Access Denied." << endl;
  }
 
    return 0;
}