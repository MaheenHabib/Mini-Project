#include<iostream>
using namespace std;
int main()
{ 
 int i, x;
  
 cout << "Enter an integer number to check it's divisor:" << endl;
 cin >> x;
  
 for(i=1; i<=x; i++)
 {
  if (x%i==0)
  {
   cout << i << endl;
  }
 }
   return 0;
}   
  