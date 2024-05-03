#include <iostream>
#include <stack>

using namespace std;

bool is_palindrome(string kalimat) {
  stack<char> s;

  for (char c : kalimat) {
    s.push(c);
  }

  string reversed_kalimat;
  while (!s.empty()) {
    reversed_kalimat.push_back(s.top());
    s.pop();
  }

  return kalimat == reversed_kalimat;
}

int main() {
  string kalimat;
  cout << "Masukkan kalimat: ";
  cin >> kalimat;

  if (is_palindrome(kalimat)) {
    cout << "Kalimat \"" << kalimat << "\" merupakan sebuah palindrom." << endl;
  } else {
    cout << "Kalimat \"" << kalimat << "\" bukan merupakan sebuah palindrom." << endl;
  }

  return 0;
}
