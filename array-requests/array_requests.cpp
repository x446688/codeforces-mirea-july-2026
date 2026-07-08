#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int64_t> v;
  std::vector<int64_t> answ;
  int64_t t;
  std::cin >> t;
  for (int64_t i = 0; i < t; ++i) {
    int64_t q; 
    std::cin >> q;
    for (int64_t j = 0; j < q; ++j) {
      std::string cmd;
      std::cin >> cmd;
      int64_t val;
      if (cmd == "push") {
        std::cin >> val;
        v.push_back(val);
        answ.push_back(v.size());
      } else if (cmd == "get") {
        std::cin >> val;
        answ.push_back(v[(val-1)%v.size()]);
      } else {
        answ.push_back(v[v.size()-1]);
        v.pop_back();
      }
    } 
    v.clear();
  }
  for (auto e : answ) {
    std::cout << e << std::endl;
  }
}
