//
//  main.cpp
//  Principles of CPP Language
//
//
//

#include <iostream> // config
#include <cmath>

using namespace std;

// we are building a Mab Lib game to learn C++ now
int main(int argc, const char * argv[])
{
    string color, pluralNoun, celebrity;
    
    cout << "enter a color: ";
    getline(cin, color);
    cout << "enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "enter a color: ";
    getline(cin, celebrity);
    
    cout << endl;
    
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
    return 0;
}
