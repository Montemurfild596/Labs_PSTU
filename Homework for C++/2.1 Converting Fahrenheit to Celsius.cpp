#include <iostream>

using namespace std;

int main() {
	float fahren;
	cout << "Enter the Fahrenheit temperature : ";
	cin >> fahren;
	while (fahren < -459.6701) {
		cout << "Such a temperature does not exist at the moment. Enter again : ";
		cin >> fahren;
	}
	float k = 5 / 9.0;
	float cels = k * (fahren - 32);
	cout << "Temperature in degrees Celsius :" << cels;
	return 0;
}
