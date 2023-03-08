// Write a Program to print Non-repeating characters in a string
#include <iostream>
#include <unordered_map>
using namespace std;
void Non_repeating(string a) {
  int len = a.length();
  char ok[len];
  for (int i = 0; i < len; i++) {
    ok[i] = a[i];
  }
  unordered_map<char, int> freq;
  for (char ch : ok) {
    freq[ch]++;
  }
  for (char ch : ok) {
    if (freq[ch] == 1) {
      cout << ch << " ";
    }
  }
}
int main() {
  // std::cout << "Hello World!\n";
  string a = "hello";
  Non_repeating(a);
}