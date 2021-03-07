#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string tekst;
        cin>>tekst;
        int licznik=1;
        for (int i=1; i<=tekst.length(); i++)
        {
            if(tekst[i] != tekst[i-1])
            {
                if(licznik > 2)
                    cout<< tekst[i-1] << licznik;
                else if (licznik == 2)
                    cout<< tekst[i-1] << tekst[i-1];
                else
                    cout<<tekst[i-1];
                licznik=1;
            }
            else
                licznik++;
        }
    cout<<endl;
    }
    return 0;
}
