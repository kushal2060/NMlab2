#include <iostream>
using namespace std;


int main()
{
     int n,i,j;
	cout<<"Enter number of data: ";
	cin>>n;
	float x[n],fx[n],a;
	for(int i=0;i<n;i++){
		cout<<"Enter x: ";
		cin>>x[i];
		cout<<"Enter its functional value,f(x): ";
		cin>>fx[i];
	}
	cout<<"Enter the point to find the value(x): ";
	cin>>a;
	 float y[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				y[i][j]=fx[i];
				
			}
			else{
				y[i][j]=0;
			}
		}
	}
    
    float h, u, sum, p;
    for (j = 1; j < n; j++) {
        for (i = j; i < n; i++) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    cout<<"\n The backward difference table is:\n";
    
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j <= i; j++) {
            printf("%f\t", y[i][j]);
        }
    }
  
    p = 1.0;
    sum = y[n - 1][0];
    h = x[1] - x[0];
    u = (a - x[n - 1]) / h;
    for (j = 1; j < n; j++) {
        p = p * (u + j - 1) / j;
        sum = sum + p * y[n - 1][j];
    }
  
    cout<<"\nThe value of y at x= "<< a<<"is: "<<sum;
    
  
    return 0;
}
