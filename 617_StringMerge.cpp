#include <iostream>
#include <string>
#include <cstring>
#define T_SIZE 1001
using namespace std;

char* string_merge(char* a, char* b)
{
    int dl;
    int dl_a=strlen(a);
    int dl_b=strlen(b);
    if(dl_a<dl_b)
         dl=dl_a;
    else
         dl=dl_b;
    char* tablica=new char[dl*2+1];
    int i = 0;
    int j = 1;
    int m = 0;
    while(a[i] != 0 && b[i] != 0)
    {
        tablica[m]=a[i];
        tablica[j]=b[i];
        i++;
        j+=2;
        m+=2;
    }
    tablica[dl*2]=0;
    return tablica;
}

int main()
{
    int t;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t;
    cin.getline(S1,T_SIZE);
    while(t--)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        S=string_merge(S1,S2);
        cout << S << endl;
        delete[] S;
    }
    return 0;
}



