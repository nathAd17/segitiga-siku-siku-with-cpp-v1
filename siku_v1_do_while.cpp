#include <iostream>
using namespace std;
int main() {
	
	int d,e,f;
	
	d=2;
	do {
		
		e=1;
		do {
			cout<<" ";
			e++;
		} while(e<d);
		
		f=7;
		do {
			cout<<"*";
			f--;
		} while(f>=e);
		
		cout<<endl;
		d++;
	} while(d<=7);
	
	return 0;
}
