#include <iostream>

using namespace std;
void printfloat(float);
int main()
{
    int t;
    float x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        printfloat(x);

    }
    return 0;
}
void printfloat(float f)
{
    unsigned char * const bytes = (unsigned char *)&f;
    cout << hex << (int)bytes[3] << " "
        << hex << (int)bytes[2] << " "
        << hex << (int)bytes[1] << " "
        << hex << (int)bytes[0] << endl;
}
