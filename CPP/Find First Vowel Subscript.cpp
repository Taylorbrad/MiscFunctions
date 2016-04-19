//function returns subscript of first vowel in a string, or -1 if there is no vowel
//main function is just an example, can be cleared.
#include <iostream>
#include <string>
using namespace std;
int getPositionFirstVowel(string wordInput);
int main()
{
    string wordInput = "";
    int posFirstVowel = 0;
    
    cout << "enter word: ";
    cin >> wordInput;
    posFirstVowel = getPositionFirstVowel(wordInput);
    cout << "first vowel is at: " << posFirstVowel;
}
int getPositionFirstVowel(string wordInput)
{
    const string vowels = "aAeEiIoOuU";
	int testIfVowel = 0;
	
	for (int x = 0; x < wordInput.length(); ++x)
	{
	    if (vowels.find(wordInput.substr(x, 1)) != string::npos)
	    {
	   		x += 100;
		   	--testIfVowel;
	   	}
		++testIfVowel;
	}
	if (testIfVowel == wordInput.length())
	{
		testIfVowel = -1;
	}
	return testIfVowel;
}
