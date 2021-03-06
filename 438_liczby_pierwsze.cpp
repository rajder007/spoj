
#include <iostream>
using namespace std;
bool czy_pierwsza(int a)
{
    if(a<2)
		return false;
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	return true;
}

int main()
{
    int a;
    cin>>a;
    int tab[a];
    for(int i=0;i<a;i++)
    {
        cin>>tab[i];
    }
    for(int i=0;i<a;i++)
    {
        if(czy_pierwsza(tab[i]))
            cout<<"TAK "<<endl;
        else
            cout<<"NIE"<<endl;
    }
	return 0;
}
