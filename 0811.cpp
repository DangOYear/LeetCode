//
// Created by ShengyunYu on 2019/4/27.
//

#include "common.h"

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> domainNums;
        vector<string> domainVisitCount;
        for (int i = 0; i < cpdomains.size(); ++i) {
            int count = 0;
            for (int j = 0; j < cpdomains[i].length(); ++j) {
                if (cpdomains[i][j] == ' ')
                    break;
                count = count * 10 + (char)cpdomains[i][j] - '0';

            }
            //cout << "count = " << count <<endl;
            string domain = "";
            for (int k = cpdomains[i].length() - 1; k >= 0; --k) {
                if (cpdomains[i][k] == ' ' || cpdomains[i][k] == '.'){
                    domainNums[domain] += count;
                    if (cpdomains[i][k] == ' ')
                        break;
                }
                domain = cpdomains[i][k] + domain;
            }
        }
        for (auto it = domainNums.begin(); it != domainNums.end(); ++it) {
            string VisitCount = "";
            VisitCount += to_string(it->second);
            VisitCount += " ";
            VisitCount += it->first;
            domainVisitCount.push_back(VisitCount);
        }
        return domainVisitCount;
    }
};

void Print(vector<string> res){
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}

int main(){
    vector<string> cpdomains{{"900 google.mail.com"}, {"50 yahoo.com"}, {"1 intel.mail.com"}, {"5 wiki.org"}};
    Solution s;
    Print(s.subdomainVisits(cpdomains));
}
