#include <iostream>
#include <vector>
#include <string>

using namespace std;
int count(const vector<string>& msg)
{
    return msg.size();
}
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int wordCount = count(msg);
    cout << "The message contains " << wordCount << " words." << endl;
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
