#include <iostream>
#include <string>
int main() 
{
  char ch = 'f';

  bool flag = true;
	
  int integerNumber = 33;

  float floatNumber = 44.44;

	double doubleNumber = 23.55;
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	





	std::cout << "\nThe size of a single character:\t" << sizeof(ch) << " byte" << std::endl;
	std::cout << "The size of a boolean:\t\t" << sizeof(flag) << " byte" <<std::endl;
	std::cout << "The size of a integer:\t\t" << sizeof(integerNumber) << " bytes" << std::endl;
	std::cout << "The size of a float:\t\t" << sizeof(floatNumber) << " bytes" << std::endl;
	std::cout << "The size of a double: \t\t" << sizeof(doubleNumber) << " bytes\n" <<std::endl;
	
	//Array Size, Every box is 4 bytes
	std::cout << "The size of an array with 10 boxes:\t" << sizeof(arr) << " bytes\n"<<std::endl;


	//String Size, Every variable is 8 bytes
	std::string myString = "Hello My Name Is Marco";
	std::cout << "The size of string \"Hello My Name Is Marco\" :  " << sizeof(myString) << " bytes\n" << std::endl;



	//Pointer Size, that points to a double
	//Make a pointer and Recall that a pointer should point to a memory address.

	//Note: A pointer is just pointing to a box, which is a memory address, that means that 
	//the size of a pointer is just 8 bytes no mattter to what it points to.
	
	char* theCharPointer = &ch;
	std::cout << "The size of a pointer that points to a character: " << sizeof(theCharPointer) << " bytes" << std::endl; 	

	int* aNumber = &integerNumber;
	std::cout << "The size of a pointer that points to a integer: " << sizeof(aNumber) << " bytes" << std::endl; 	
	
	double* theNumber = &doubleNumber;
	std::cout << "The size of a pointer that points to a double: " << sizeof(theNumber) << " bytes" << std::endl; 	






}
