#ifndef COIN_TOSS_H
#define COIN_TOSS_H

#include <iostream>

#define Head "head"
#define Tail "tail"

// Coin toss class defeinition
class CoinToss{
	
	private: 
	const char* m_guess;
	const char* m_result;
	bool m_win;
	
	public:
	void make_call();

	void toss_coin();

	void analize_result();

	void declare_result() const;
};

#endif
