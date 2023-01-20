#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int fileSize;
    string fileName;
    cout << "Welcome to my dummy file maker!\n\nFile size in Mb: ";
    cin >> fileSize;
    cout << "File name: ";
    cin >> fileName;
    ofstream file;
    file.open(fileName + ".txt");
    for (int i = 0; i < fileSize; i++)
    {
        for (unsigned long long i = 0; i < 1048576; i++)
        {
            file << "A";
        }
    }
    file.close();
    cout << "\nYour file is called \"" << fileName << ".txt\"\n\nThanks for using my program!\n\nGithub: henrique11varela\n\n";
    cin.ignore();
    cin.ignore();
    return 0;
}