#pragma once

unsigned long long powerTen(unsigned int n);
char getDigit(unsigned long long num, int i);


class OverLong  {
private:
	VectorC<char> num;

public:
	OverLong();
	OverLong(unsigned long long val);
	~OverLong();

	friend std::ostream& operator << (std::ostream& str, OverLong& num);
	OverLong& operator = (unsigned long long rOp);
};

