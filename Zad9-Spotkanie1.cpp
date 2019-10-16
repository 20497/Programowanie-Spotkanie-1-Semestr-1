#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	cout<<"Podaj c"<<endl;
	cin>>c;
	cout<<endl<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
	float delta = b*b - 4*a*c;
	float x1 = (-b - sqrt(delta)) / (2*a);
	float x2 = (-b + sqrt(delta)) / (2*a);
	if(delta <0)
		cout<<endl<<"Delta jest ujemna";
	if(delta == 0)
		cout<<endl<<"x = "<< -b/2*a;
	if(delta > 0)
	cout<<endl<<"x1 = "<<x1<<endl<<"x2 = "<<x2;

}
