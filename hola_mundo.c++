//obten promedio
#include <iostream>
using namespace std;


int main() {
	float n,suma=0,cantidad;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>cantidad;
		suma=suma+cantidad;
	}
	suma=suma/n;
	cout<<""<<suma<<".00";
	return 0;
}
