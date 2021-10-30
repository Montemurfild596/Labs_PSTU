#include <iostream> 

using namespace std;

int main() {
	int number;
	cout << "Enter the number : ";
	cin >> number;
	bool flag_1 = number < 100 or number > 999;
	bool flag_2 = number % 10 == number / 100 or number % 10 == number / 10 % 10 or number / 100 == number / 10 % 10;
	bool flag_res = flag_1 or flag_2;
	while (flag_res) {
		cout << "Enter number again : ";
		cin >> number;
		flag_1 = number < 100 or number > 999;
		flag_2 = number % 10 == number / 100 or number % 10 == number / 10 % 10 or number / 100 == number / 10 % 10;
		flag_res = flag_1 or flag_2;
	}
	int arr[3] = { number / 100, number / 10 % 10, number % 10 };
	int mass[6] = { arr[0] * 100 + arr[1] * 10 + arr[2], arr[0] * 100 + arr[2] * 10 + arr[1],
					arr[1] * 100 + arr[0] * 10 + arr[2], arr[1] * 100 + arr[2] * 10 + arr[0],
					arr[2] * 100 + arr[0] * 10 + arr[1], arr[2] * 100 + arr[1] * 10 + arr[0] };
	int max_mass = 0;
	for (int i = 0; i < 6; ++i) {
		cout << "Combination # " << i + 1 << ' ' << mass[i] << '\n';
		max_mass = mass[i] > max_mass ? mass[i] : max_mass;
	}
	cout << "Max combination : " << max_mass;
	return 0;
}

