#include <iostream>
using namespace std;
int main() {
	
	int d,e,f;
	
	d=1;
	while(d<=7)
	{
		e=1;
		while(e<d)
		{
			cout<<" ";
			e++;
		}
		f=7;
		while(f>=e)
		{
			cout<<"*";
			f--;
		}
		cout<<endl;
		d++;
	}
	
	return 0;
}
