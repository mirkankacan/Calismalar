#include <iostream>
using namespace std;

int main()
{
	int secim;
	float a,b,s;
	
	cout<<"HESAP MAKINESI"<<endl;
	
	cout<<"Toplama islemi icin 1"<<endl;
	cout<<"Cikarma islemi icin 2"<<endl;
	cout<<"Carpma islemi icin 3"<<endl;
	cout<<"Bolme islemi icin 4"<<endl;
	cout<<"Seciminiz: ";cin>>secim;
	
	if(secim==1)
	{
		cout<<"Toplama islemini sectiniz"<<endl;
		cout<<"1. sayi: ";cin>>a;
		cout<<"2. sayi: ";cin>>b;
		cout<<"Toplam: "<<(s=a+b);
	}
		else if(secim==2)
	{
		cout<<"Cikarma islemini sectiniz"<<endl;
		cout<<"1. sayi: ";cin>>a;
		cout<<"2. sayi: ";cin>>b;
		cout<<"Toplam: "<<(s=a-b);
	}
		else if(secim==3)
	{
		cout<<"Carpma islemini sectiniz"<<endl;
		cout<<"1. sayi: ";cin>>a;
		cout<<"2. sayi: ";cin>>b;
		cout<<"Toplam: "<<(s=a*b);
	}
		else if(secim==4)
	{
		cout<<"Bolme islemini sectiniz"<<endl;
		cout<<"1. sayi: ";cin>>a;
		cout<<"2. sayi: ";cin>>b;
		cout<<"Toplam: "<<(s=a/b);
	}	
		else
		{
			cout<<"Secim bulunamadi";
			
		}
	
}
