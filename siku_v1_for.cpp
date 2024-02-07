#include <iostream>
using namespace std;
int main() {
	
	int d,e,f;
	
		for(d=1;d<=7;d++)
	{
		for(e=1;e<d;e++)
		{
			cout<<" ";
		}
		for(f=7;f>=e;f--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}

