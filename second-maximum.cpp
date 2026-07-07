#include <algorithm>
#include <vector>
#include <iostream>

int main(){
  int t;
  int n;
  std::vector<int> v;
  std::vector<int> answ;
  std::cin >> t;
  for (int i = 0; i < t; ++i) {
    std::cin >> n;
    for (int j = 0; j < n; ++j) {
      int tmp;
      std::cin >> tmp;
      v.push_back(tmp);
    }
    std::sort(v.begin(),v.end());
    auto mx_it = max_element(v.begin(),v.end());
    int mx = *mx_it;
    int first = mx_it - v.begin();
    answ.push_back(v[first - 1]);
    v.clear();
  }
  for (auto e : answ) {
    std::cout << e << std::endl;
  }
}
