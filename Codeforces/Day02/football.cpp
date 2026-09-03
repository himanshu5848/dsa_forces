#include <iostream>
#include <string>
using namespace std;
int main()
{
  string players;
  cin >> players;
  int len = players.length();
  int streak = 1;

  for (int i = 1; i < len; i++)
  {
    if (players[i] == players[i - 1])
    {
      streak++;
      if (streak >= 7)
      {

        cout << "YES";
        return 0;
      }
    }
    else
    {
      streak = 1;
    }
  }

  cout << "NO";

  return 0;
}