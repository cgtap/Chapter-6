#include <iostream>
   
using namespace std;

bool isVowel(char ch);

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;

    cout << ch << " is a vowel: " << isVowel(ch) << endl;

	return 0;
}

bool isVowel(char ch)
{
	switch (ch)
	{
	case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U':
	case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': 
        return true;
	default: 
        return false;
	}
}