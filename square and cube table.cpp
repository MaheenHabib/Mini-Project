#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int i, x;
 
 cout << "Enter a positive integer:" << endl;
 cin>> x;
 
 cout <<"Number"<<setw(10)<<"Square"<<setw(10)<<"Cube"<< endl;
 for (i=1; i<=x; i++)
 {
  cout <<setw(3)<< i << setw(11)<<i*i << setw(11)<<i*i*i << endl;
 }
 
   return 0;
}  