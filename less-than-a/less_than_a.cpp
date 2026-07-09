#include <iostream>
#include <algorithm>
#include <vector>

int main(){
  int t;
  std::vector<std::vector<int>> answ;
  std::vector<int> ta;
  std::vector<int> vs;
  std::vector<int> v;
  std::cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    std::cin >> n;
    for (int j = 0; j < n; ++j) {
      int tmp;
      std::cin >> tmp;
      v.push_back(tmp);
    }
    vs = v;
    std::sort(vs.begin(),vs.end());
    for (int j = 0; j < n; ++j) {
      auto it = std::lower_bound(vs.begin(),vs.end(),v[j]);
      ta.push_back(it - vs.begin());
    }
    answ.push_back(ta);
    ta.clear();
    vs.clear();
    v.clear();
  }
  for (auto e : answ) {
    for (auto se : e) {
      std::cout << se << " ";
    }
    std::cout << std::endl;
  }
}
