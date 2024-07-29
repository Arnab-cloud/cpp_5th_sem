#include <iostream>
#include "coin_toss.h"


int main(){
	char choice = '\0';

	CoinToss first_coin;
	do{
		first_coin.make_call();
		std::cout << "To play, Enter any charachter and ENTER,\n";
		std::cout << "To exit, Enter 'N' and ENTER ";
		std::cin >> choice;
	}while(choice != 'N' && choice != 'n');
	return 0;
}
