#include <iostream>
#include <string>
using namespace std;

int exersizeOne(string word)
{
	if (word == "agent")
	{
		return(10);
	}
	else
	{
		return(0);
	}
	;
}
string exerciseTwo(int mark)
{
	if (mark > 100)
	{
		return"*Invalid number*";
	}
	else if (mark >= 50)
	{
		return "Passed !";
	}
	else 
	{
		return"Failed !";
	}
	;
}


string exerciseThree(int number)
{
	if (number % 5 == 0 && number % 3 == 0)
	{
		return "FizzBuzz";
	}
	else if (number % 3 == 0)
	{
		return "Fizz";
	}
	else if (number % 5 == 0)
	{
		return "Buzz";
	}
	else
	{
		
	    return to_string(number);
	}
	;
}

int main()
{
	//exersize 1

	string answer;
	cout << "Exesize 1\n";
	cout << "\n";
	cout << "\n";
	cout << "enter the word Agent:\n";
	cin >> answer;

	cout << exersizeOne(answer);
	cout << "\n";
	cout << "\n";
	cout << "\n";

	//exersize 2
	int mark;

	cout << "Exesize 2\n";
	cout << "\n";
	cout << "\n";
	cout << "enter you grade/mark pecentage number:\n";
	cin >> mark;
	cout << "\n";
	cout << "\n";
	cout << "You have " << exerciseTwo(mark);
	cout << "\n";
	cout << "\n";
	cout << "\n";

	// exesize 3
	int number;

	cout << "Exesize 3\n";
	cout << "\n";
	cout << "\n";
	cout << "enter a number divisible by 3 or 5 or both:\n";
	cin >> number;
	cout << "\n";
	cout << "\n";
	cout << exerciseThree(number);


}
