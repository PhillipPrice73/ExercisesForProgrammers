/*
 * Prompts for a name and prints a greeting using that name.
 *
 * Constraints
 * - Keep input, string concatenation, and output separate
 *
 * Challenges
 * 1) Don't use any variables
 * 2) Display different greetings for different people
 */

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, pair<string, string>> SpecificGreetings {
        {"brian", pair<string, string>{"'Sup ", " what's happening?"} }
       , {"brad", pair<string, string>{"Yo ", "D&D when?"}}
       , {"michael", pair<string, string>{"Wait a minute ", " aren't you fictional?"}}
};

int main() {
    string name;
    cout << "What is your name? ";
    // TODO handle case when provided with first and last name
    // TODO handle different capitalization cases
    // TODO deal with non-alphabetic characters
    // TODO handle empty string case
    cin >> name;
    cout << endl;
    cout << "Hello " << name << ", nice to meet you!" << endl;
}
