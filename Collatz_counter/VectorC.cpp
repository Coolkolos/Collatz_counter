#include "stdafx.h"
#include "VectorC.h"

//const unsigned int STEP = 6;
//
//
////		--- private: ---
//
//
//template<typename T>
//void VectorC<T>::expand(int n) {
//	
//	if (aloc == 0) {                           //  When array is not yet allocated, creates new array.
//		aloc = n;
//		table = new char[aloc];
//
//	} else {                                   //  When existing array is smaller than necessary.
//			
//		aloc = aloc + n;
//		char* temp = new char[aloc];
//
//		for (int i = 0; i < len; i++) {
//			temp[i] = table[i];
//		}
//
//		delete[] table;
//		table = temp;
//	}                                           //  Wen existing array is big enough to accommodate new digits, does nothing.
//}
//
////		--- public: ---
//
//
//template<typename T>
//VectorC<T>::VectorC() : len(0), aloc(STEP){
//	table = new T[aloc];
//}
//
//template<typename T>
//VectorC<T>::~VectorC() {
//	len = 0;
//	aloc = 0;
//	delete[] table;
//}
//
//
//
//template<typename T>
//T& VectorC<T>::get(int n) {
//	
//	if (n > len) {
//		return -1;
//	} else {
//		return table[n];
//	}
//}
//
//template<typename T>
//void VectorC<T>::put(T& val, int n) {
//
//	if (n > aloc) { this->expand(n - aloc + STEP - (n % STEP)); }
//
//	if (n > len) {
//		for (int i = len; i < n; i++) {
//			table[i] = 0;
//		}
//		len = n + 1;
//	}
//
//	table[n] = val;
//}
//
//template<typename T>
//void VectorC<T>::putNext(T& val) {
//
//	this->put(len + 1, val);
//}
//
//template<typename T>
//T & VectorC<T>::getVal(int n) { return table[n]; }
//
//template<typename T>
//int VectorC<T>::getLen() { return len; }
//
//template<typename T>
//int VectorC<T>::getAloc() { return aloc; }


