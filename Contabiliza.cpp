#include<iostream>
using namespace std;

int main()
{
	int IJCP_i=0,l;
	float IJCP_x,IJCP_s=0;
	cout<<"ingrese el limite l="; cin>>l;
	do{
		
	cout<<"ingrese el numero x="; cin>>IJCP_x;
	IJCP_i=IJCP_i+1;
	IJCP_s=IJCP_s+IJCP_x;



	}while(IJCP_i<l);
	cout<<"Se ingresaron "<<l<<" numeros "<< "que sumaron "<<IJCP_s<<endl;
	return 0;



}
