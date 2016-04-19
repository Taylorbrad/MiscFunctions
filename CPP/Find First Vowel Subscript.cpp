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
	if (testIfVowel == wordInput.length())
	{
		testIfVowel = -1;
	}
	return testIfVowel;
}
