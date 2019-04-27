//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"


class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[2] = {0};
        for (int i = 0; i < moves.length(); ++i) {
            switch (moves[i]){
                case 'R':
                    pos[0] += 1;
                    break;
                case 'L':
                    pos[0] -= 1;
                    break;
                case 'U':
                    pos[1] += 1;
                    break;
                case 'D':
                    pos[1] -= 1;
                    break;
            }
        }
        return pos[0] == 0 && pos[1] == 0;
    }
};


int main(){

}