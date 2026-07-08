#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>

int main(){
  int t;
  int n;
  std::vector<int> v;
  std::vector<std::vector<int>> answ;
  std::vector<int> sew1;
  std::vector<int> sew2;
  std::cin >> t;
  for (int i = 0; i < t; ++i) {
    std::cin >> n;
    for (int j = 0; j < n; ++j) {
      int tmp;
      std::cin >> tmp;
      if (j % 2 != 0) {
        sew1.push_back(tmp);
      } else {
        sew2.push_back(tmp);
      }
    }
    sort(sew1.begin(),sew1.end());
    sort(sew2.begin(),sew2.end(),std::greater<int>());
    auto it1 = sew1.begin();
    auto it2 = sew2.begin();
    for (int i = 0; i < n; i++) {
      if (i % 2 != 0) {
        v.push_back(*it1);
        *it1++;
      } else {
        v.push_back(*it2);
        *it2++;
      }
    }
    answ.push_back(v);
    v.clear();
    sew1.clear();
    sew2.clear();
  }
  for (auto e : answ) {
    for (auto se : e) {
      std::cout << se << ' ';
    }
    std::cout << std::endl;
  }
}
