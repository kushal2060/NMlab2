#include<iostream>
using namespace std;

void lagrange(int n,int xp,int fx[],int x[]){
	float l,sum=0;
	for(int i=1;i<=n;i++){
		l=1;
		for(int j=1;j<=n;j++){
			if(i!=j){
				l=l*(xp-x[j])/(x[i]-x[j]);
			
			}
		}
		sum=sum+l*fx[i];
	}
	
	cout<<"Value at"<<xp<<"is: "<<sum;
}

int main(){
	int n,xp;
	cout<<"Enter number of data: ";
	cin>>n;
	int x[n],fx[n];
	for(int i=1;i<=n;i++){
		cout<<"Enter x: ";
		cin>>x[i];
		cout<<"Enter its functional value,f(x): ";
		cin>>fx[i];
	}
	cout<<"Enter the point to find the value(x): ";
	cin>>xp;
	lagrange(n,xp,fx,x);
	return 0;
}

