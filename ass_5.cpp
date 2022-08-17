#include<iostream>
using namespace std;

main(){
	
	int a1,a2,a3,a4,a5,arr[4],i;
	
	cout<<"enter first number =";
	cin>>a1;
	
	cout<<"enter second number =";
	cin>>a2;
	
	cout<<"enter third number =";
	cin>>a3;
	
	cout<<"enter fourth number =";
	cin>>a4;
	
	cout<<"enter fifth number =";
	cin>>a5;
	
	a1=a1*a1*a1;
	a2=a2*a2*a2;
	a3=a3*a3*a3;
	a4=a4*a4*a4;
	a5=a5*a5*a5;
	
	arr[0]=a1;
	arr[1]=a2;
	arr[2]=a3;
	arr[3]=a4;
	arr[4]=a5;
	
	cout<<"your array of cubes as follow"<<endl;
	cout<<"arr[0]="<<a1<<endl;
	cout<<"arr[1]="<<a2<<endl;
	cout<<"arr[2]="<<a3<<endl;
	cout<<"arr[3]="<<a4<<endl;
	cout<<"arr[4]="<<a5<<endl;
	
}
