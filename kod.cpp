#include"kod.h"
IntegerArray::IntegerArray(int size_) :size_array(size_) {
	try
	{
		if (size_ < 0)
		{
			throw "the size of the array must be greater than 0";
		}
		array = new int(size_);
		cout << "the array has been created" << endl;
	}
	catch (const char error_text)
	{
		cout << error_text << endl;
	}
}
void IntegerArray::new_array_size(int size_)  { 
	try
	{
		if (0 >= size_) {
			throw "the array must be greater than 0" ;
		}
		int* array_;
		array_ = new int(size_);
		std::copy_n(array, size_, array_);
		delete[] array;
		size_array = size_;
		array = array_;
		cout << "new array size" << endl;
	}
	catch (const char error_text)
	{
		cout << error_text << endl;
	}
};
void IntegerArray::chang_num_array(int nam) {
	try {
		if ((nam <= 0) && (nam < size_array)) {
			throw"the value must be within the array";
		}
		int nam_1;
		cin >> nam_1;
		cout << endl;
		array[(nam-1)] = nam_1;
	}
	catch (const char error_text) {
		cout << error_text << endl;
	};
}
void IntegerArray::enum_array() {
	for (size_t i = 0; i < size_array; i++)
	{
		cout << array[i] << endl;
	}
	cout << endl << endl;
}
IntegerArray::IntegerArray(IntegerArray a,int size_) {
		int* array_1;
		array_1 = new int(size_);
		std::copy_n(a.array, size_, array_1);
		size_array = size_;
		array = array_1;
		cout << "a new array has been created and an array has been copied into it" << endl;
};
void IntegerArray::remov_elem_array(int nam) {
	try
	{
		if (nam > size_array) {
			throw "the number is larger than the size of the array";
		}
		if (nam == 0) {
			throw"nam = 0";
		};
		int* array_ = new int[size_array-1];
		for (size_t i = 0; i < (nam - 1); i++)
		{
			array_[i] = array[i];
		};
		for (size_t i = nam; i < size_array; i++)
		{
			array_[i - 1] = array[i];
		};
		size_array -= 1;
		array = array_;
	}
	catch (const char error_text)
	{
		cout << error_text << endl;
	}

}
void IntegerArray::search_nam(int nam) {
	for (size_t i = 0; i < size_array; i++)
	{
		if (nam == array[i]) {
			cout << "the number was found at the position - " << (1 + i) << endl;
		}
	}
}
