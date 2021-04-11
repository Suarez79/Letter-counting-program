// week4 vowels counting program.cpp : This fild contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int count_vowels(string line) // turning an int into a string
{
   
    int i, vowels = 0; // vowels variable set to 0
    int A = 0, E = 0, I = 0, O = 0, U = 0, B = 0, R = 0, T = 0; //variables a,e,i,o,u
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == 'a' || line[i] == 'A') //add 1 to 'A' variable and add 1 to 'vowels' variable if letter 'A' is found
        {
            A++;
            vowels;
        }
        else if (line[i] == 'e' || line[i] == 'E') // adding 1 for every 'E' found
        {
            E++;
            vowels;
        }
        else if (line[i] == 'i' || line[i] == 'I') //same as above for letter 'I'
        {
            O++;
            vowels;

        }
        else if (line[i] == 'o' || line[i] == 'O') // same as above for letter 'O'
        {
            I++;
            vowels;
        }
        else if (line[i] == 'u' || line[i] == 'U')// same as above for letter 'U'
        {
            U++;
            vowels;
        }
        else if (line[i] == 'b' || line[i] == 'B')
        {
            B++;
            vowels;
        }
        else if (line[i] == 'r' || line[i] == 'R')
        {
            R++;
            vowels;
        }
        else if (line[i] == 't' || line[i] == 'T')
        {
            T++;
            vowels;
        }
            
    
    }
    cout << "The number of A's:......................" << A << endl; // output of letters found
    
    cout << "The number of E's:......................" << E << endl;
    
    cout << "The number of I's:......................" << I << endl;
    
    cout << "The number of O's:......................" << O << endl;
    
    cout << "The number of U's:......................" << U << endl;
    
    cout << "The number of B's:......................" << B << endl;

    cout << "The number of R's:......................" << R << endl;

    cout << "The number of T's:......................" << T << endl;
    
    return vowels;
}
int main(int argc, char*argv[]) // main
{
        
    ifstream infile;
    infile.open(argv[1]);// opening file
    if (argc < 2) {
        cout << "Error with file args" << endl;// error message if file name not entered

        return 1;
    }
    cout << "************************************************************" << endl; //program header
    cout << "*************Welcome to my Letter Count Program*************" << endl;
    cout << "************************************************************" << endl;
    cout << "Analyzing file constitution.txt........." << endl;//the file to be analyzed
    string line;
    int i, vowels;
    //call to function
    while (getline(infile, line)) // while loop gets everyline in the file
    {
        vowels = count_vowels(line);
        cout << "The vowels count is:...................." << vowels << endl; // output of total vowels found

    }

    return 0;//

}