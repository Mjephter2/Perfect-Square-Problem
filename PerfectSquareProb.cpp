#include<iostream>
#include<cmath>
using namespace std;

int main(){
		unsigned long long i=0;
	while(true){
		unsigned long long sq=i*i;
		unsigned long long ones=sq%10;
		unsigned long long tens=(sq/10)%10;
		unsigned long long onesR=ones%2, tensR=tens%2;
		if(onesR==1 && tensR==1 && sqrt(sq)*sqrt(sq)==sq){
			cout<<"Perfect square= "<<sq<<endl;
			cout<<"Corresponding root: ";
			cout<<"i= "<<i;
			break;}
		i=i+1;
		}	
	return 0;
}
