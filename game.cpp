#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
srand(time(NULL));
vector<string> fragen = {"Warum nicht?", "Hast du das Spiel verstanden?", "Wie geht es dir heute?"};
string antwort;
cout << "Willst du gewinnen?" << endl;
cout << "Ja oder Nein? ";
cin >> antwort;
if (antwort == "Ja") {
cout << "Herzlichen Glückwunsch! Du hast gewonnen!" << endl;
} else {
while (true) {
cout << fragen[rand() % fragen.size()] << endl;
cout << "Ja oder Nein? ";
cin >> antwort;
if (antwort == "Ja") {
cout << "Herzlichen Glückwunsch! Du hast gewonnen!" << endl;
break;
}
}
}
return 0;
}
