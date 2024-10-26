#include <iostream>
using namespace std;

vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
    // Create points vector to store all x-coordinates and heights
    vector<pair<int, int>> points;
    for(const auto& b : buildings) {
        points.push_back({b[0], -b[2]});  
        points.push_back({b[1], b[2]});   
    }

    sort(points.begin(), points.end());
    
    multiset<int> heights;
    heights.insert(0);
    
    vector<vector<int>> skyline;
    int prevHeight = 0;
    
    for(const auto& p : points) {
        int x = p.first;
        int h = p.second;
        
        if(h < 0) {
            heights.insert(-h);
        }
        else {
            heights.erase(heights.find(h));
        }
        
        int currentHeight = *heights.rbegin();
        
        if(currentHeight != prevHeight) {
            skyline.push_back({x, currentHeight});
            prevHeight = currentHeight;
        }
    }
    
    return skyline;
}


void printSkyline(const vector<vector<int>>& skyline) {
    for(size_t i = 0; i < skyline.size(); i++) {
        cout << skyline[i][0] << " " << skyline[i][1];
        if(i < skyline.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> buildings(n, vector<int>(3));
    
    for(int i = 0; i < n; i++) {
        cin >> buildings[i][0] >> buildings[i][1] >> buildings[i][2];
    }
    
    vector<vector<int>> result = getSkyline(buildings);
    printSkyline(result);
    
    return 0;
}
