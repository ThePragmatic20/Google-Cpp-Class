//ex5.cpp	Rafael Moura
//Description: Horses cost $10, pigs cost $3, and rabbits are only $0.50.
//A farmer buys 100 animals for $100, How many of each animal did he buy?  

#include  <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//Brute Force
	for (int h = 0; h < 100; h++)
		for (int p = 0; p < 100; p++)
			for (int r = 0; r < 100; r++)
				if (h + p + r == 100)
					if(((10 * h) + (3 * p) + (0.5 * r)) ==100)
						cout << "Found One!" << h << " Horses " << p << "Pigs " << r <<" Rabbits " << endl;

	return 0;
}