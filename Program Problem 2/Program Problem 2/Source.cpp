/*
Abhi Patel - September 25, 2017 Period: 2
Program Problem 2: Take_in_data
User questions to take in data and created variables to store new data.
*/
#include <iostream> 
#include <conio.h>
using namespace std;
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	cout << '\n';
}

void main() {
	int candy_eaten;
	char number_answer;
	bool answersMatcheds = false;
	float cups_flour;
	int calc_1, calc_2, calc_3, calc_4, calc_5;

	cout << "How many candy bars can Kevin eat without barfing : ";
	cin >> candy_eaten;
	
	cout << "How many apples do I have (1/2/3/4) : ";
	cin >> number_answer;
	if (number_answer == '3' || number_answer == '4') {
		answersMatcheds = true;
	}
	cout << "How many cups of flour are needed in this cookie recipe : ";
	cin >> cups_flour;

	cout << "The amount " << candy_eaten << " is probably correct because Kevin can eat a good amount of sugar. \n";
	if (answersMatcheds) {
		cout << boolalpha << "Ah, that is " << answersMatcheds << ". I have suffient apples. \n";
	}
	if (!answersMatcheds) {
		cout << boolalpha << "Oh no! You're " << answersMatcheds << ". I have sufficient apples. \n";
	}
	cout << "So I need " << cups_flour << " cups of flour for this recipe? \n";

	cout << "Now give me 3 random whole numbers. \n";
	cout << "Number 1: ";
	cin >> calc_1;
	cout << "Number 2: ";
	cin >> calc_2;
	cout << "Number 3: ";
	cin >> calc_3;

	cout << "Problem 1: Whole number 1 minus whole number 3 is " << calc_1 << "-" << calc_3 << "=" << calc_1 - calc_3 << endl;
	calc_4 = calc_1 * calc_2;
	cout << "Probelm 2: Whole number 1 multiplied by whole number 2 is " << calc_1 << "*" << calc_2 << "=" << calc_1 * calc_2 << endl;
	cout << "Whole number created: Whole number 4 is " << calc_4 << endl;
	cout << "Problem 3: Whole number 4 plus whole number 2 is " << calc_4 << "+" << calc_2 << "=" << calc_4 + calc_2 << endl;
	calc_5 = calc_2 / calc_3;
	cout << "Problem 4: Whole number 2 divided by whole number 3 is " << calc_2 << "/" << calc_3 << "=" << calc_2 / calc_3 << endl;
	cout << "Whole number created: Whole number 5 is " << calc_5 << endl;
	
	pause();
}