#include <iostream>
#include <string.h>

#include "coin_toss.h"
void CoinToss::make_call(){
	
	char input_str[10];
	bool result;
	
	do{
		result = false;

		std::cout << "Enter your choice(head or tail): ";
		std::cin >> input_str;
	
		for(int i=0; input_str[i] != '\0'; i++)
			input_str[i] = tolower(input_str[i]);
	
		if(strcmp(input_str, Head) == 0)
			m_guess = Head;
		else if( strcmp(input_str, Tail) == 0)
			m_guess = Tail;
		else{
			std::cout << "ERROR: Please enter a valid choice(head or tail)\n\n";
			result = true;
		}

	}while(result);

	toss_coin();
	analize_result();
	declare_result();
}

void CoinToss::toss_coin(){
	m_result = rand()%2 ? Head : Tail;
	std::cout << "You got: " << m_result << '\n'; 
}

void CoinToss::analize_result(){
	m_win = strcmp(m_result, m_guess)  == 0 ? true : false; 
}

void CoinToss::declare_result() const{
	if(m_win)
		std::cout << "Congratulations, you won\n\n";
	else
		std::cout << "OOPS, try again!\n\n";
}
