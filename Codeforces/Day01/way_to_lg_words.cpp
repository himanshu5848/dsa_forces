#include <iostream>
#include <string>
using namespace std;
int main()
{
  int words_no;
  cin >> words_no;
  for (int i = 0; i < words_no; i++)
  {
    string word;
    cin >> word;
    int word_len = word.length();
    if (word_len > 10)
    {
      cout << word[0] << word_len - 2 << word[word_len - 1] << endl;
    }
    else
    {
      cout << word << endl;
    }
  }
  return 0;
}