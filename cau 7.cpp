#include <iostream>
#include <string>

using namespace std;

class Temperature {
private:
    double temperature;
public:
    Temperature(double temp) {
        temperature = temp;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    double getTemperature() {
        return temperature;
    }

    bool isEthylFreezing() {
        return temperature <= -173;
    }

    bool isEthylBoiling() {
        return temperature >= 172;
    }

    bool isOxygenFreezing() {
        return temperature <= -362;
    }

    bool isOxygenBoiling() {
        return temperature >= -306;
    }

    bool isWaterFreezing() {
        return temperature <= 32;
    }

    bool isWaterBoiling() {
        return temperature >= 212;
    }
};

int main() {
    double temp;
    cout << "Enter a temperature: ";
    cin >> temp;

    Temperature t(temp);

    cout << "Substances that will freeze at " << temp << " degrees: ";
    if (t.isEthylFreezing()) {
        cout << "Ethyl Alcohol, ";
    }
    if (t.isOxygenFreezing()) {
        cout << "Oxygen, ";
    }
    if (t.isWaterFreezing()) {
        cout << "Water, ";
    }
    cout << endl;

    cout << "Substances that will boil at " << temp << " degrees: ";
    if (t.isEthylBoiling()) {
        cout << "Ethyl Alcohol, ";
    }
    if (t.isOxygenBoiling()) {
        cout << "Oxygen, ";
    }
    if (t.isWaterBoiling()) {
        cout << "Water, ";
    }
    cout << endl;

    return 0;
}

