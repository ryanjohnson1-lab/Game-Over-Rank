#include <iostream>
using namespace std;

int main()
{
   int score;
   cout << "Enter your score: ";
   cin >> score;
   if (score < 0) {
    cout << "Error. Invalid score.";
   } else if (score < 500) {
    cout << "Rank: Rookie";
   } else if (score < 1000) {
    cout << "Rank: Pro";
   } else {
    cout << "Rank: Legend";
   }
}
