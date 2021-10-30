#include <iostream> 
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int x;
	x = rand() % 100 + 1;
	int number;
	bool flag = true;
	int i = 0;
	while (flag) {
		cout << "Enter the number : ";
		cin >> number;
		if (number < x) {
			if (i == 5) {
				cout << "You lose\n";
				flag = false;
			}
			else {
				cout << "Your number is less than number of program\n";
			}
		}
		else if (number > x) {
			if (i == 5) {
				cout << "You lose\n";
				flag = false;
			}
			else {
				cout << "Your number is more than number of program\n";
			}
		}
		else {
			cout << "You won on the attempt number " << i + 1 << " : number of program is : " << number << '\n';
			flag = false;
		}
		++i;
	}

	return 0;
}
