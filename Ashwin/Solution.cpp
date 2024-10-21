#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> findRanks(vector<int>& score) {
    int n = score.size();
    vector<string> result(n);

    vector<pair<int, int>> scoresWithIndex;
    for (int i = 0; i < n; ++i) {
        scoresWithIndex.push_back({score[i], i});
    }

    sort(scoresWithIndex.rbegin(), scoresWithIndex.rend());

    for (int i = 0; i < n; ++i) {
        int idx = scoresWithIndex[i].second;
        if (i == 0) {
            result[idx] = "Gold Medal";
        } else if (i == 1) {
            result[idx] = "Silver Medal";
        } else if (i == 2) {
            result[idx] = "Bronze Medal";
        } else {
            result[idx] = to_string(i + 1);
        }
    }

    return result;
}

int main() {
    int n;
    //cout << "Enter the number of entries: ";
    cin >> n;

    vector<int> score(n);
    //cout << "Enter the scores: ";
    for (int i = 0; i < n; ++i) {
        cin >> score[i];
    }

    vector<string> result = findRanks(score);
    //cout << "Ranks: ";
    for (const string& rank : result) {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}
