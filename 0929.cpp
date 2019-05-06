//
// Created by ShengyunYu on 2019/5/5.
//



#include "common.h"


class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> address;
        //cout << "emails.size() = " << emails.size() << endl;
        for (int i = 0; i < emails.size(); ++i) {
            int index = emails[i].find('@');
            string user = emails[i].substr(0, index);
            string domain = emails[i].substr(index);
            //cout << emails[i].find("+") << " ";
            if (emails[i].find("+") != emails[i].npos) {
                user = emails[i].substr(0, emails[i].find("+"));
            }
            user.replace(user.begin(), user.end(), ".", "");
            address.insert(user + domain);
        }
        return address.size();
    }
};

int main(){
    vector<string> emails{"test.emailalex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    Solution s;

    cout << s.numUniqueEmails(emails) << endl;
}