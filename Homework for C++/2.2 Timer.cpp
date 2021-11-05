#include <iostream>

using namespace std;

int main() {
	int hour_s, hour_f, min_s, min_f, sec_s, sec_f;

	cout << "Enter start time : ";
	cin >> hour_s >> min_s >> sec_s;
	cout << "Enter finish time : ";
	cin >> hour_f >> min_f >> sec_f;

	bool check_start = hour_s > 23 or min_s > 59 or sec_s > 59;
	bool check_finish = hour_f > 23 or min_f > 59 or sec_f > 59;

	int start_t = hour_s * 3600 + min_s * 60 + sec_s;
	int finish_t = hour_f * 3600 + min_f * 60 + sec_f;
	bool check_logic = start_t > finish_t;
	bool check_all = check_start or check_finish or check_logic;

	while (check_all) {
		if (check_start) {
			cout << "Error 1: Start time is wrong\n";
		} else if (check_finish){
			cout << "Error 2: Finish time is wrong\n";
		} else {
			cout << "Error 3: Start time is more than finish time\n";
		}
		cout << "Enter start time : ";
		cin >> hour_s >> min_s >> sec_s;
		cout << "Enter finish time : ";
		cin >> hour_f >> min_f >> sec_f;
		check_start = hour_s > 23 or min_s > 59 or sec_s > 59;
		check_finish = hour_f > 23 or min_f > 59 or sec_f > 59;
		start_t = hour_s * 3600 + min_s * 60 + sec_s;
		finish_t = hour_f * 3600 + min_f * 60 + sec_f;
		check_logic = start_t > finish_t;
		check_all = check_start or check_finish or check_logic;
	}

	int time = finish_t - start_t;
	int hour_t = time / 3600;
	int min_t = time % 3600 / 60;
	int sec_t = time % 60;
	
	cout << "Time is : " << hour_t << " hour " << min_t << " min " << sec_t << " sec";

	return 0;
} 
