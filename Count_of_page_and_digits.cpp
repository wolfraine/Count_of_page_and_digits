#include <iostream>

void numbOfDigits(int n)
{
	int ls = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i < 10) {
			ls++;
		}
		else if (i < 100) {
			ls += 2;
		}
		else if (i < 1000) {
			ls += 3;
		}
		else if (i < 9999) {
			ls += 4;
		}
	}
	std::cout << ls << "\n";
}

void numbOfPages(int n)
{
	int licz = 0;
	int ls = 0;
	for (int i = 1; i < 10000; i++) {
		if (licz == n)break;
		else if (i < 10) {
			licz++;
		}
		else if (i < 100) {
			licz += 2;
		}
		else if (i < 1000) {
			licz += 3;
		}
		else if (i < 10000) {
			licz += 4;
		}
		ls++;
	}
	std::cout << ls << "\n";
}

int main()
{
	int k = 0;			//number of cases
	int n = 0;			//single case	
	int choice = 0;
	//=========================
	std::cout << "Choose what you want to do\n 1 - count number of digits\n 2 - count number of pages\n";
	std::cin >> choice;
	switch (choice) {
	case 1:
		std::cout << "Write number of cases: ";
		std::cin >> k;
		for (int o = 0; o < k; o++) {
			std::cin >> n;
			numbOfDigits(n);
		}
		break;
	case 2:
		std::cout << "Write number of cases: ";
		std::cin >> k;
		for (int o = 0; o < k; o++) {
			std::cin >> n;
			numbOfPages(n);
		}
		break;
	default:
		std::cout << "ERROR WRONG CHOICE END OF PROGRAM";
	}

}