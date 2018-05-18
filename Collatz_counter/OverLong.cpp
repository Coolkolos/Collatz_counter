#include "stdafx.h"
#include "OverLong.h"
#include "VectorC.h"


unsigned long long powerTen(unsigned int n) {
	if (n == 0) { return 1; }
	if (n % 2 != 0) { return 10 * (powerTen((n - 1) / 2)) * (powerTen((n - 1) / 2)); }

	return (powerTen(n / 2)) * (powerTen(n / 2));
}

char getDigit(unsigned long long num, int i) {
	char res = ((num % powerTen(i)) - (num % powerTen(i - 1))) / powerTen(i - 1);
	return res;
}




OverLong::OverLong() {}

OverLong::OverLong(unsigned long long val) {
	*this = val;
}


OverLong::~OverLong() {}


std::ostream& operator << (std::ostream& str, OverLong& obj) {

	str << " (" << obj.num.getLen() << "/" << obj.num.getAloc() << ")  ";

	if (obj.num.getLen() == 0) {                        //  if digit counter == 0, print value as 0.
		str << 0;
	} else {
		for (int i = obj.num.getLen() - 1; i >= 0; i--) {
			str << (int)obj.num.getVal(i);
		}
	}

	str << std::endl;

	return str;
}


OverLong& OverLong::operator = (unsigned long long rOp) {
	char digit = 0;
	int i = 20;

	while (getDigit(rOp, i) == 0) { i--; }

	this->num.shrinkTo(i);

	for (i; i >= 1; i--) {
		this->num.put(getDigit(rOp, i), i - 1);
	}

	return *this;
}