#include <iostream>

using namespace std;

bool isSubsequence(string s, string t);

int main(int argc, char const *argv[]) {
  string s1 = "abc", t1 = "ahbgdc";     // true
  string s2 = "axc", t2 = "ahbgdc";     // false
  string s3 = "aaaaaa", t3 = "bbaaaa";  // false

  cout << s1 << ":" << t1 << ":" << isSubsequence(s1, t1) << endl;
  cout << s2 << ":" << t2 << ":" << isSubsequence(s2, t2) << endl;
  cout << s3 << ":" << t3 << ":" << isSubsequence(s3, t3) << endl;
  return 0;
}

bool isSubsequence(string s, string t) {
  int j = 0;
  bool found = false;

  for (char letter_s : s) {
    // looking for first occurance of letter_s in t
    for (; j < t.length(); j++) {
      if (letter_s == t[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      // if letter_s was not found in t, return false
      return false;
    }
    j++;
    found = false;
  }
  return true;
}
