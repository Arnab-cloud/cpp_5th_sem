class Vehicle{
	int m_reg_no;
	
	public:
	void input_reg();
	void display_reg() const;
};

class Car: public Vehicle{
	public:
	void display_car_reg() const;
};
class Bus: public Vehicle{
	public:
	void display_bus_reg() const;
};
