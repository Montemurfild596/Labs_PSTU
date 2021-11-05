#include <iostream>

using namespace std;

int main() {
	const float convertingGallonsToCubicFeet = 1 / 7.481;
	float gallons;
	cout << "Enter the number of gallons : ";
	cin >> gallons;
	while (gallons < 0) {
		cout << "Enter the number of gallons again : ";
		cin >> gallons;
	}
	float cubicFeet = gallons * convertingGallonsToCubicFeet;
	cout << cubicFeet;
	return 0;
}
