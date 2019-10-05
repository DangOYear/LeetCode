//
// Created by ShengyunYu on 2019/10/5.
//

#include "common.h"


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        this->row = image.size();
        this->col = image[0].size();
        this->sr = sr;
        this->sc = sc;
        this->newColor = newColor;
        this->oldColor = image[sr][sc];
        dfs(image, sr, sc);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (image[i][j] == -1)
                    image[i][j] = newColor;
            }
        }
        return image;
    }

    void dfs(vector<vector<int>>& image, int x, int y) {
        if (!(x < row && x >= 0 && y < col && y >= 0 && image[x][y] == oldColor)) {
            return;
        }
        image[x][y] = -1;
        int directX[] = {-1, 1, 0, 0};
        int directY[] = {0, 0, 1, -1};
        for (int i = 0; i < 4; ++i) {
            int nextX = x + directX[i];
            int nextY = y + directY[i];
             {
                dfs(image, nextX, nextY);
            }
        }
    }

private:
    int sr;
    int sc;
    int newColor;
    int oldColor;
    int row;
    int col;
};

//Example 1:
//Input:
//        image = [[1,1,1],[1,1,0],[1,0,1]]
//sr = 1, sc = 1, newColor = 2
//Output: [[2,2,2],[2,2,0],[2,0,1]]
//Explanation:
//        From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected
//        by a path of the same color as the starting pixel are colored with the new color.
//Note the bottom corner is not colored 2, because it is not 4-directionally connected
//to the starting pixel.


int main() {
    Solution solution;
    vector<vector<int>> image{{1,1,1},{1,1,0},{1,0,1}};
    PrintIntVectorVector(solution.floodFill(image, 1, 1, 2));

}