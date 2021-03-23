#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
class Tpunkt
{
    string nazwa;
    int x,y;
public:
    Tpunkt(string opis, int a, int b): nazwa(opis),x(a),y(b){}
    double dlugosc() const
    {
        return(sqrt(pow(x,2.0)+pow(y,2.0)));
    }
    void wypisz()
    {
        cout<<nazwa<<" "<<x<<" "<<y<<endl;
    }
};

int main()
{
    int testy,ile_liczb,x,y;
    cin>> testy;
    while(testy--)
    {
        vector<Tpunkt> wektor;
        cin>>ile_liczb;
        while(ile_liczb--)
        {
            string nazwa;
            cin>>nazwa>>x>>y;
            Tpunkt punkt{nazwa,x,y};
            wektor.push_back(punkt);
        }
        sort(wektor.begin(), wektor.end(),
            [](const Tpunkt & a, const Tpunkt & b) -> bool
        {
            return a.dlugosc() < b.dlugosc();
        });
        for(auto& value: wektor)
                value.wypisz();

        cout<<endl;
    }
    return 0;
}
