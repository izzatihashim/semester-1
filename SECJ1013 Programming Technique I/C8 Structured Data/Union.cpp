// This program shows the usage of union and anonymous union

#include <iostream>
using namespace std;

// Union to store different sensor readings - before this struc
union SensorData {
    float temperature;   // Celsius
    float humidity;      // Percentage
    int pressure;        // Pascal
};

// Anonymous Union example
static union {
    float anonTemperature;   // Celsius
    float anonHumidity;      // Percentage
    int anonPressure;        // Pascal
};

// Anonymous union inside struct
struct Sensor {
    union {
        float anonTemperature2;
        float anonHumidity;
        int anonPressure2;
    };
}
;
int main() {
    SensorData sensor;

    // Store temperature
    sensor.temperature = 36.5;
    cout << "Temperature: " << sensor.temperature << " C" << endl;

    // Store humidity (overwrites temperature)
    sensor.humidity = 75.0;
    cout << "Humidity: " << sensor.humidity << " %" << endl;

    // Store pressure (overwrites humidity)
    sensor.pressure = 101325;
    cout << "Pressure: " << sensor.pressure << " Pa" << endl;

    cout << sensor.humidity << endl;  // ❌ Undefined / garbage, overwriiten

    // Store temperature
    anonTemperature = 36.5; // can be accessed direcctly
    cout << "Temperature: " << anonTemperature << " C" << endl;

    return 0;
}
