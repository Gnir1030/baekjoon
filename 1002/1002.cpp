#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;

int main(){
    pair<int, int> a;
    a.first = 1;
    a.second = 4;
    int count = sqrt(a.second);
    //vector<pair<int>> one, two;
    cout << "(" << a.first << "," << a.second << ")" << endl;
    cout << count << endl;
}