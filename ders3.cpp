#include <iostream>
using namespace std;

int main()
{
	int vize,final,ort;
	
	cout<<"Bir vize giriniz: ";cin>>vize;
	cout<<"Bir final giriniz: ";cin>>final;
	ort=(vize*0.4)+(final*0.6);
	if(ort>=90&&ort<=100)
	{
		cout<<"A";
	}
	else if(ort>=70&&ort<90)
	{
		cout<<"B";
	}
	else if(ort>=50&&ort<70)
	{
		cout<<"C";
	}
	else
	{
		cout<<"Kaldiniz";
	}
}
