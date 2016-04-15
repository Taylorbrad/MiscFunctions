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
    string vowels = "aAeEiIoOuU";
	int testIfVowel = 0;
	
	for (int x = 0; x < wordInput.length(); ++x)
	{
	    size_t found = vowels.find(wordInput.substr(x, 1));
	    if (found != string::npos)
	    {
	    	//cout << wordInput.substr(0, 1) << "  " << vowels[y] << "\n";
	   		x += 100;
		   	--testIfVowel;
	   	}
		++testIfVowel;
	}
	return testIfVowel;
}
