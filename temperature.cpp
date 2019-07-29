#include <iostream>
#include <string>

using namespace std;

class Temperature
{
private:
    double celsius {0};
    double fahrenheit {0};


public:
    // Temperature(/* args */);
    // ~Temperature();
    double toFahrenheit(double celsius);
    double toCelsius(double fahrenheit);
};


// Return int value converted from celsius to fahrenheit
double Temperature::toFahrenheit(double celsius)
{
    double fahrenheit {0};

    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;;
}

// Return int value converted from fahrenheit to celsius
double Temperature::toCelsius(double fahrenheit)
{
    double celsius {0};

    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

// Local functions

void usage(string program_name)
{
    cout << "Usage: " << endl;
    cout << program_name << " value unit" << endl;
    cout << "Convert celsius to fahrenheit: " << program_name << " 20 C" << endl;
    cout << "Convert fahrenheit to celsius: " << program_name << " 20 F" << endl;
    cout << endl;
}

void cli(double value, char unit)
{
    Temperature temperature;

    switch (unit)
    {
        case 'C':
            cout << temperature.toFahrenheit(value) << " °F" << endl;
            break;
        
        case 'F':
            cout << temperature.toCelsius(value) << " °C" << endl;
            break;
        
        default:
            cout << "Unit not recognized";
            break;
    }    
}

int main(int argc, char const *argv[])
{   
    string program_name(argv[0]);

    if (argc != 3)
        usage(program_name);
    else
        cli(stod(argv[1]), argv[2][0]);

    return 0;
}