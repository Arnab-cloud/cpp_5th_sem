#ifndef THINKER_H
#define THINKER_H

class thinking_cap{
	public: 
		void slot(const char new_green[],const char new_red[]);
		void push_red() const;
		void push_green() const;
	private:
		char red_string[50];
		char green_string[50];
};

#endif
