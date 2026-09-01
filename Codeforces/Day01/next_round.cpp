#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int k;
  cin >> k;
  int scores[n];

  for (int i = 0; i < n; i++)
  {
    cin >> scores[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (scores[i] > 0 && scores[i] >= scores[k - 1])
    {
      count++;
    }
  }
  cout << count;
  return 0;
}