#include"kod.h"
IntegerArray::IntegerArray(int size_) :size_array(size_) {
	if (size_ <= 0)
	{
		throw Error_1();
	}
	array = new int(size_);
	cout << "the array has been created" << endl;
}
void IntegerArray::new_array_size(int size_) {
	if (size_ <= 0) {
		throw Error_1();
	}
	int* array_;
	array_ = new int(size_);
	std::copy_n(array, size_, array_);
	delete[] array;
	size_array = size_;
	array = array_;
	cout << "new array size" << endl;
}
void IntegerArray::chang_num_array(int nam) {
	if ((nam <= 0) || (nam > size_array)) {
		throw Error_2();
	}
	int nam_1;
	cin >> nam_1;
	cout << endl;
	array[(nam - 1)] = nam_1;
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

	if ((nam > size_array)||(nam <= 0)) {
		throw Error_2();
	};
	int* array_ = new int[size_array - 1];
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
void IntegerArray::search_nam(int nam) {
	for (size_t i = 0; i < size_array; i++)
	{
		if (nam == array[i]) {
			cout << "the number was found at the position - " << (1 + i) << endl;
		}
	}
}
