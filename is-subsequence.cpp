#include <iostream>

using namespace std;

bool isSubsequence(string s, string t);

int main(int argc, char const *argv[]) {
  string s1 = "abc", t1 = "ahbgdc";  // true
  string s2 = "axc", t2 = "ahbgdc";  // false

  cout << s1 << ":" << t1 << ":" << isSubsequence(s1, t1) << endl;
  cout << s2 << ":" << t2 << ":" << isSubsequence(s2, t2) << endl;
  return 0;
}

bool isSubsequence(string s, string t) {
  return true;
}