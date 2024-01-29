#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template<class T> 
inline int __size(const T&c) { return c.size(); }

struct Patch {
  int x;
  int g;
};

inline bool operator<(const Patch &a, const Patch &b) {
  return a.x < b.x;
}

int K;
vector<Patch> patches;

void ReadInput() {
  auto &f = std::cin;
  int n;
  f >> n >> K;
  patches.reserve(n);
  for(int i=0;i<n;++i) {
    Patch p;
    f >> p.g >> p.x;
    patches.push_back(p);
  }
}

void Write(int res) {
  auto &f = std::cout;
  f << res << "\n";
}

int Solve() {
  int res = 0;
  sort(patches.begin(), patches.end());
  int p=0;
  int sum = 0;
  for(int i=0;i<__size(patches);++i) {
    sum += patches[i].g;
    while(patches[i].x - patches[p].x > 2*K) {
      sum -= patches[p].g;
      ++p;
    }
    res = max(res, sum);
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  ReadInput();
  int res = Solve();
  Write(res);
}
