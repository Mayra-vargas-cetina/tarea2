#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" "Mayra Alejandra vargas cetina"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    usleep(5000000);
}