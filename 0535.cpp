//
// Created by ShengyunYu on 2019/8/15.
//

#include "common.h"


class Solution {
private:
    const int key = 25;

public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        for(int i = 0; i < longUrl.length(); i++) longUrl[i] ^= key;
        return "http://" + longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string ans = shortUrl.substr(7);
        for(int i = 0; i < ans.length(); i++) ans[i] ^= key;
        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));


int main() {
    Solution solution;
}