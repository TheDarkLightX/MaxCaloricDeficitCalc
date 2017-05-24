

#include <iostream>
using namespace std;
int bodyweight;
float bodyfatpercent;
int totalbodyfat;

int maxdeficit;

int main() {
	cout <<"This calculator will determine the maximum safe caloric deficit without muscle loss! \n";
	cout << "To begin, please enter your current body weight in pounds:  \n";
	cin >> bodyweight;
	cout << "Next, enter your current body fat percentage, (for example if 20% enter 0.20): \n";
	cin >> bodyfatpercent;
	cout << "Finally, we calculate your max deficit by multiplying your body weight and body fat percentage to produce your total fat weight!" <<  endl;
    cout << bodyweight*bodyfatpercent << endl;
    cout << "Now enter your result displayed on the screen, as it is your total bodyfat in pounds: \n";
    cin >> totalbodyfat;
    cout << "Below is your maximum safe caloric deficit \n";
    maxdeficit = totalbodyfat * 31.4;
    cout << maxdeficit;



	return 0;
}
