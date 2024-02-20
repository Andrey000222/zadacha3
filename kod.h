#pragma once
#include<iostream>
using namespace std;
class IntegerArray {
public:
	IntegerArray() = default;
	IntegerArray(int size_);
	IntegerArray(IntegerArray a, int size_);
	~IntegerArray() { cout << "clear array" << endl;};
	void new_array_size(int size_1) ;
	void chang_num_array(int nam);
	void enum_array();
	void remov_elem_array(int nam);
	void search_nam(int nam);
protected:
	int size_array{};
	int* array{};
};