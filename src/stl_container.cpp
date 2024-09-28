
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

template <typename T> void print_vector(vector<T> vec) {
  for (const auto &a : vec) {
    cout << a << endl;
  }
}

template <typename T> void print_map(map<T, T> m) {
  for (const auto &[key, value] : m) {
    cout << key << " : " << value << endl;
  }
}

int main() {
  // Example1
  vector<string> apples;
  apples.push_back("Granny Smith");

  print_vector(apples);
  // cout << apples[0] << endl;

  // Example2
  map<string, string> apple_color;
  apple_color["Granny Smith"] = "Green";

  print_map(apple_color);

  // Ex 3
  // auto comp = []<typename T>(const T w1, const T w2) { return w1 < w2; };

  vector<int> v = {4, 7, 2, 5, 10, 8, 1, 6, 3};

  cout << "Before sort:" << endl;
  print_vector(v);
  // sort(v.begin(), v.end(), comp);
  sort(v.begin(), v.end());
  cout << "AFter sort:" << endl;
  print_vector(v);

  // auto i = lower_bound(v.begin(), v.end(), comp);
  auto i = lower_bound(v.begin(), v.end(), 6);
  cout << "i: " << i - v.begin() << endl;
}
