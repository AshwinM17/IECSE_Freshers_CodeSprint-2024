#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string &a, string &b) {
    return a + b > b + a;
}

string largestNumber(vector<int>& nums) {
    vector<string> nums_str;
    for (int num : nums) {
        nums_str.push_back(to_string(num));
    }

    sort(nums_str.begin(), nums_str.end(), compare);

    if (nums_str[0] == "0") {
        return "0";
    }

    string result;
    for (string &s : nums_str) {
        result += s;
    }

    return result;
}

int main() {
    int n;
   // cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
   // cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    string result = largestNumber(nums);
    cout << "Largest number: " << result << endl;

    return 0;
}
