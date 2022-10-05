#include<iostream>
using namespace std;

int main()
{
	float IJCP_x,IJCP_y,IJCP_s,IJCP_m,IJCP_d,IJCP_r;
	
	cout<<"Ingrese en valor de x=:";
	cin>>IJCP_x;
	cout<<"Ingrese en valor de y=:";
	 
	cin>>IJCP_y;
	IJCP_s=IJCP_x+IJCP_y;
	IJCP_m=IJCP_x*IJCP_y;
	IJCP_d=IJCP_x/IJCP_y;
	IJCP_r=IJCP_x-IJCP_y;
	
	cout<<"Las suma de "<<IJCP_x<<" + "<<IJCP_y<<" = "<<IJCP_s<<endl;
	cout<<"Las multiplicacion de "<<IJCP_x<<" * "<<IJCP_y<<" = "<<IJCP_m<<endl;
	cout<<"Las division de "<<IJCP_x<<" / "<<IJCP_y<<" = "<<IJCP_d<<endl;
	cout<<"Las resta de "<<IJCP_x<<" - "<<IJCP_y<<" = "<<IJCP_r<<endl;
	return 0 ;

}
