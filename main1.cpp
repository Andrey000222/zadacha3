#include"kod.h"
int main() {
	try {
		IntegerArray a(5);
		a.enum_array();// array enumeration
		a.new_array_size(10);//new size
		a.enum_array();// array enumeration
		a.chang_num_array(2);//change the number in the array, the count is from 1
		a.enum_array();// enumeration of the array
		a.remov_elem_array(5);//deleting an element with copying, counting from 1
		a.enum_array();
		IntegerArray b(a, 15);//a new array with copying of another
		b.enum_array();
		a.search_nam(5); // searching for a number in the array
		return 0;
	}
	catch (Error_1& err1) {
		cout << err1.what() << endl;
	}
	catch (Error_2& err2) {
		cout << err2.what() << endl;
	}
}