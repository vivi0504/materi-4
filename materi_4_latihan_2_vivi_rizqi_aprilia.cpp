#include <iostream>

using namespace std;

int main()
{
	int a,b;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=a;b++)
		cout<<"1"<<" ";
		cout<<endl;
	}
	
	for(a=10;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		cout<<"1"<<" ";
		cout<<endl;
	}
	
system ("pause");

return 0;
}
