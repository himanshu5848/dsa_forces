#include <iostream>
#include <string>
using namespace std;
int main()
{
  int count = 0;
  int n;
  cin >> n;
  string colors;
  cin >> colors;
  for (int i = 1; i < n; i++)
  {
    if (colors[i] == colors[i - 1])
    {
      count++;
    }
  }
  cout << count;
  return 0;
}