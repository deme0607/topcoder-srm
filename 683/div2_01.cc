#include <iostream>

// https://community.topcoder.com/stat?c=problem_statement&pm=14173&rd=16653

using namespace std;

class EqualSubstrings2
{
  public:
    int get(string s);
};

int EqualSubstrings2::get(string s)
{
  int max_length = s.size() / 2;
  int match_count = 0;

  for (int l = 1; l <= max_length; l++) {
    for (int i = 0; i <= s.size() - 2l; i++) {
      for (int j = i + l; j <= s.size() - l; j++) {
        if (s.substr(i, l).compare(s.substr(j, l)) == 0) {
          match_count++;
        }
      }
    }
  }
  return match_count;
}

int main()
{
  EqualSubstrings2 es2;
  cout << es2.get("onetwothreeonetwothree") << endl;
  return 0;
}
