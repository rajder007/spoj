#include <iostream>

using namespace std;

int main()
{
    int liczba,wynik=0;
    while(cin>>liczba)
    {
        wynik+=liczba;
        cout<<wynik<<endl;
    }
    return 0;
}
