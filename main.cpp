#include <iostream>
#include <string>

using namespace std;


void encrypt()
{
    string letter1, newLet;
    int aNum;
    cin.ignore();
    cout << "\n\tEncrypt Type\n";
    cout << "\t- - - - - - -\n";
    cout << "\nEnter Letter : ";
    getline(cin, letter1);
    cout << "\nEnter algorithm number : ";
    cin >> aNum;
    cout << endl;
    cout << "Result : ";
    for(int i=0; letter1[i]!='\0'; i++)
    {
        aNum = aNum % 26;
        if(aNum < 0)
            aNum += 26;
        if(letter1[i] >= 'A' && letter1[i] <= 'Z')
            newLet = ((letter1[i] - 'A' + aNum) % 26 ) + 'A';
        else if(letter1[i] >= 'a' && letter1[i] <= 'z')
            newLet = ((letter1[i] - 'a' + aNum) % 26 ) + 'a';
        else if(letter1[i] == ' ')
            newLet = ' ';
        cout << newLet;

    }
}

void decrypt()
{
    string letter2, newLet;
    int aNum;
    cin.ignore();
    cout << "\n\tDecrypt Type\n";
    cout << "\t- - - - - - -\n";
    cout << "\nEnter Letter : ";
    getline(cin, letter2);
    cout << "\nEnter algorithm number : ";
    cin >> aNum;
    cout << endl;
    cout << "Result : ";
    for(int i=0; letter2[i]!='\0'; i++)
    {
        if(letter2[i] >= 'A' && letter2[i] <= 'Z')
            newLet = ((letter2[i] - 'Z' - aNum) % 26 ) + 'Z';
        else if(letter2[i] >= 'a' && letter2[i] <= 'z')
            newLet = ((letter2[i] - 'z' - aNum) % 26 ) + 'z';
        else if (letter2[i] == ' ')
            newLet = ' ';
        cout << newLet;
    }
    cout << endl << endl;
}

int main()
{
    int choice;

    cout << "\n\n\t\t* * * Welcome to Caesar Cypter * * *\n\n\n\n";
    cout << "[ 1 ] - Encrypt\n\n";
    cout << "[ 2 ] - Decrypt\n";
    cout << "\n\nEnter your choice : ";
    cin >> choice;

    switch(choice)
    {
        case 1 :
            encrypt();
            break;
        case 2 :
            decrypt();
            break;
        default :
            cout << "\t\nInvalid choice!!!\n";
    }
     cout << endl << endl;
}
