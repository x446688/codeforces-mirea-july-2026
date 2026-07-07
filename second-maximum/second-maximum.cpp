#include <algorithm>
#include <cstdint>
#include <vector>
#include <iostream>

int main(){
  int32_t t;
  int32_t n;
  std::vector<int32_t> v;
  std::vector<int32_t> answ;
  std::cin >> t;
  for (int32_t i = 0; i < t; ++i) {
    std::cin >> n;
    for (int32_t j = 0; j < n; ++j) {
      int32_t tmp;
      std::cin >> tmp;
      v.push_back(tmp);
    }
    std::sort(v.begin(),v.end());
    auto mx_it = max_element(v.begin(),v.end());
    int32_t mx = *mx_it;
    int32_t first = mx_it - v.begin();
    answ.push_back(v[first - 1]);
    v.clear();
  }
  for (auto e : answ) {
    std::cout << e << std::endl;
  }
}
