#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream abc{"abc.bin"};
	
	if(abc)
	{
	  abc.write(reinterpret_cast <char*>(&a),sizeof(a));
	  abc.write(reinterpret_cast <char*>(&b),sizeof(b));
	  abc.write(reinterpret_cast <char*>(&c),sizeof(c));
	}
	else 
	{
 
  	 cout << "Error writing to file";
	}
	cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   	cout<<endl<<endl;
 
   return 0;
}//end main
