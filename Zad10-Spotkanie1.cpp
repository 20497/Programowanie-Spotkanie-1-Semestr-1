#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,d,e,f;
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	cout<<"Podaj c"<<endl;
	cin>>c;
	cout<<"Podaj d"<<endl;
	cin>>d;
	cout<<"Podaj e"<<endl;
	cin>>e;
	cout<<"Podaj f"<<endl;
	cin>>f;
	cout<<a<<"x + "<<b<<"y = "<<e<<endl;
	cout<<c<<"x + "<<d<<"y = "<<f<<endl;
	
	float W = a * d - b * c;
	float Wx = e * d - f * b;
	float Wy = a * f - c * e;
	if(W!=0){
	cout<<"x = "<<Wx/W<<endl;
	cout<<"y = "<<Wy/W<<endl;
    }
    else
    	cout<<"Licznik glowny jest rowny 0";
}




