// Collatz_counter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VectorC.h"
 

int main(){
    
	VectorC<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.put(i, i);
	}

	VectorC<int> vec1 = vec;

	std::cout << " (" << vec1.getLen() << "/" << vec1.getAloc() << ")  ";
	
	for (int i = 0; i < 10; i++) {
		
		std::cout << vec1.get(i) << " "; 
	}

	std::cout << "\n \n";

	return 0;
}

