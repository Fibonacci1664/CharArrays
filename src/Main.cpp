/*
 * Main.cpp
 *
 *  Created on: 20 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	string text = "Hello";

	cout << text << endl;

	/*
	 * The last element in the array declaration contains what is known as a null terminator
	 * This is required due to the compiler not knowing where the end of the array is
	 * and so when this is not in place the compiler will continue to read data from the
	 * memory locations after the end of the array and will output whatever is contained
	 * there, sometimes it may be junk sometimes it may be empty
	 *
	 * The '0x' states that it is a hex value, and '00' in hex is simply zero, therefore null.
	 *
	 * Upon reading this the compiler knows it is at the end of the array and terminates
	 * The array does however requires a space for the terminator to be declared, i.e. this
	 * array is [6] NOT [5], the null terminator itself uses an element.
	 */
	char charArray[] = {'h', 'e', 'l', 'l', 'o', 0x00};

	cout << charArray << endl;

	char anotherCharArray[] = "Division";

	cout << anotherCharArray << endl;

	int arrLength = sizeof(anotherCharArray)/sizeof(char);		/*
																 * There is no real req. to
																 * divide by sizeof(char) in
																 * this instance as a char size
																 * is 1 byte.
																 * So you would just be dividing
																 * by 1 which would just return
																 * the value of sizeof(anotherCharArray)
																 * anyway.																 *
																 */

	cout << "Size of a char = " << sizeof(char) << " byte " << endl;

	/*
	 * In the for loop below when we cast to an int the ASCII values for the characters get
	 * returned and as we can see there is also a null terminator been place on the end of
	 * the array for us, which then begs the question why i had to manually place one in the
	 * array earlier?
	 */
	for(int i = 0; i < arrLength; i++)
	{
		cout << i << ". " << (int)anotherCharArray[i] << endl;

	}


	// Below is simply another method of iterating through the elements in the array
	int k = 0;

	while(true)
	{
		if(anotherCharArray[k] == 0)
		{
			break;
		}

		cout << anotherCharArray[k] << flush;

		k++;
	}

	return 0;
}


