#include <iostream>

using namespace std;

int main()
{
     cout << "-------------------------" << endl;
    cout << "  Celcius    Fahrenheit  " << endl;
    cout << "-------------------------" << endl;
    int celcius;
    int fahrenheit;
    for(celcius = 0; celcius <= 100; celcius++){
        fahrenheit = (celcius*9/5+32);
        cout << "     " << celcius << "     |     " << fahrenheit << "     |" << endl;
    }s
}
