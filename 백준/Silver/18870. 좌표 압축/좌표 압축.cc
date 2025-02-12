#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    set<int> s;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        s.insert(v[i]);  // 중복 제거 및 정렬
    }

    unordered_map<int, int> compression;
    int cnt = 0;

    // set에 저장된 정렬된 값에 대해 압축 인덱스 부여
    for (int a : s)
    {
        compression[a] = cnt++;
    }

    // 기존 값들을 압축된 값으로 변환
    for (int i = 0; i < n; ++i)
    {
        v[i] = compression[v[i]];
    }

    for (int x : v)
    {
        cout << x << " ";
    }
}
