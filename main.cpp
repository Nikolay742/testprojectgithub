#include <iostream>

class Characteristics
{
public:
	int power;
	int nightvision;
	int speciability;
};

class DiceRoll
{
public:
	int result;

	DiceRoll() {
		result = 0;
	}

	void roll() {
		srand(time(0));
		result = rand() % 6 + 1;
	}

	int displayResult() {
		switch (result) {
		case 1:
			std::cout << "Один" << std::endl;
			break;
		case 2:
			std::cout << "Два" << std::endl;
			break;
		case 3:
			std::cout << "Три" << std::endl;
			break;
		case 4:
			std::cout << "Четыре" << std::endl;
			break;
		case 5:
			std::cout << "Пять" << std::endl;
			break;
		case 6:
			std::cout << "Один" << std::endl;
			break;
		default:
			std::cout << "Invalid result" << std::endl;
		}
		return result;
	}
};

int main()
{
	DiceRoll res;
	int result = rex.displayResult();
	Characteristics playerStats;
	playerStats.power = result;
	playerStats.nightvision = result;
	playerStats.speciability = result;

	DiceRoll dice;
	dice.roll();
	dice.displayResult();
}