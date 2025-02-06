#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};

class Solution {
  public:
    // Comparator function to sort items by value-to-weight ratio in descending order
    static bool cmp(const pair<double, pair<int, int>>& a, const pair<double, pair<int, int>>& b) {
        return a.first > b.first;
    }

    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = wt.size();
        vector<pair<double, pair<int, int>>> items;

        // Storing items as (value/weight, (value, weight))
        for (int i = 0; i < n; i++) {
            double ratio = (double)val[i] / wt[i];
            items.push_back({ratio, {val[i], wt[i]}});
        }

        // Sort items by decreasing value-to-weight ratio
        sort(items.begin(), items.end(), cmp);

        double maxValue = 0.0;
        int currentWeight = 0;

        for (int i = 0; i < n; i++) {
            int itemWeight = items[i].second.second;
            int itemValue = items[i].second.first;

            if (currentWeight + itemWeight <= capacity) {
                // Take the full item
                maxValue += itemValue;
                currentWeight += itemWeight;
            } else {
                // Take a fraction of the remaining weight
                double fraction = (double)(capacity - currentWeight) / itemWeight;
                maxValue += itemValue * fraction;
                break;
            }
        }

        return maxValue;
    }
};

