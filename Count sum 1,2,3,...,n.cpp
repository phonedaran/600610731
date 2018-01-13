#include <iostream>
using namespace std;

int main()
{
	int count=0,y,d,N;
	float x,sum;
	string answer,Q="yes";
	cout<<"Enter the first number : ";
	cin>>x;
	cout<<"Enter the last number : ";
	cin>>y;
	cout<<"Enter d : ";
	cin>>d;
	cout<<"แสดงการหา?(yes/no) : ";
	cin>>answer;
	N=(y-x)/d;
	sum=x;
	while(count<N){
		if(answer==Q){
			cout<<sum;
		}
		sum=sum+(x+d);
		if(answer==Q){
			cout<<" + "<<x+d<<"= "<<sum<<"\n";
		}
		x=x+d;
		count=count+1;	
	}
	cout <<"Sum : "<<sum;
	return 0;
}
