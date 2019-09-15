
#include "common.h"

class solution {
public:
    int deadline(int n, vector<vector<int>>&task) {
        dfs(task, 0, task.size() - 1);
        return minValue;
    }

    void dfs(vector<vector<int>>&task, int left, int right) {
        if (left == right) {
            int day = 0;
            int deadlineday = 0;
            for (auto x : task) {
                if (day+x[1] <= x[0]) {
                    day += x[1];
                }
                else {
                    day += x[1];
                    deadlineday += day - x[0];
                }
            }
            minValue = min(deadlineday, minValue);
        } else{
            for (int i = left; i <= right; ++i) {
                swap(task[i], task[left]);
                dfs(task, left + 1, right);
            }
        }

    }
private:

    int minValue = INT_MAX;
};


int main() {
    vector<vector<int>> task{{3, 3}, {8, 1}, {3, 2}};
    int n = 3;
    solution solution;
    cout << solution.deadline(n, task);
}