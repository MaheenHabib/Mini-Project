#include<iostream>
using namespace std;
int main()
{
 int i, j, x;
 
 cout << "Enter a positive integer:" << endl;
 cin>> x;
 
 for (i=x; i>=1; i--)
 {
  for (j=i; j>=1; j--)
  {
   cout << j;
  }
  cout << endl;
 }
 
   return 0;
}  