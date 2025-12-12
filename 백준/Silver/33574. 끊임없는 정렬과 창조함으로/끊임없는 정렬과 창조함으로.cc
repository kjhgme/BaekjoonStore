#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    vector<long long> data;        // 실제 데이터 저장
    vector<int> freeList;          // 빈 슬롯 관리
    vector<int> order;             // 출력 순서: data의 index 저장

    auto allocate = [&]() -> int { // free slot or new index
        if (!freeList.empty()) {
            int idx = freeList.back();
            freeList.pop_back();
            return idx;
        }
        data.push_back(0);    // 자리 확보
        return data.size() - 1;
        };

    for (int i = 0; i < q; ++i)
    {
        int s;
        cin >> s;

        if (s == 1)
        {
            int x;
            cin >> x;

            if (x == 1)
                sort(order.begin(), order.end(), [&](int a, int b) {
                return data[a] < data[b];
                    });
            else
                sort(order.begin(), order.end(), [&](int a, int b) {
                return data[a] > data[b];
                    });
        }
        else
        {
            int x, y;
            cin >> x >> y;

            int newIndex = allocate();
            data[newIndex] = y;

            if (x >= order.size()) {
                order.push_back(newIndex);
            }
            else {
                order.insert(order.begin() + x, newIndex);
            }
        }
    }

    cout << order.size() << "\n";
    for (int idx : order) {
        cout << data[idx] << " ";
    }
}
