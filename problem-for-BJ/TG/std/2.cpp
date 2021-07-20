#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int INF = 1000000000;
template<class T> 
inline int __size(const T&c) { return c.size(); }

auto &fout = std::cout;
auto &fin = std::cin;

struct Impossible {};

vector<int> breeds;
vector<int> volumes;

void ReadInput() {
    int n,b; fin >> n >> b;
    for(int i=0;i<b;++i) {
        int v; fin >> v; breeds.push_back(v);
    }
    for(int i=0;i<n;++i) {
        int v; fin >> v; volumes.push_back(v);
    }
}

vector<int> knapsack;

void ExtendKnapsack() {
    int t = __size(knapsack);
    int v = INF;
    for(int i=0;i<__size(breeds);++i) {
        int t2 = t - breeds[i];
        if(t2>=0) v = min(v, 1 + knapsack[t2]);
    }
    knapsack.push_back(v);
}

int Knapsack(int total) {
    if(total<0) throw Impossible();
    while(total >= __size(knapsack)) ExtendKnapsack();
    if(knapsack[total]==INF) throw Impossible();
    return knapsack[total];
}

int Solve() {
    knapsack.assign(1, 0);
    int carry = 0;
    int res = 0;
    for(int i=0;i<__size(volumes);++i) {
        carry = max(carry-1, 0);
        int v = volumes[i] - carry;
        res += Knapsack(v);
        carry = volumes[i];
    }
    return res;
}

int main() {
    ReadInput();
    try {
        fout << Solve() << "\n";
    } catch (Impossible) {
        fout << "-1\n";
    }
}
