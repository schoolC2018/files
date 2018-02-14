#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream abc{"abc.txt"};
	
	if(abc)
	{
	  abc << a << endl;
	  abc << b << endl;
	  abc << c << endl;
	}
	else 
	{
 
  	 cout<<" could not read";

 
 
   return 0;
}
