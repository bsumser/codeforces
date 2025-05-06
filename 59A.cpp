#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main() {
  string s;
  int up = 0;
  int low = 0;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    int cur = s[i];

    if (cur >= 97) {
      low++;
    }
    else {
      up++;
    }
  }
  
  if (up > low) {
    char ch;
    for (int i = 0; i < s.size(); i++) {
      ch = toupper(s[i]);
      cout << ch;
    }
  }
  else {
    char ch;
    for (int i = 0; i < s.size(); i++) {
      ch = tolower(s[i]);
      cout << ch;
    }
  }

  cout << endl;

  return 0;
}
