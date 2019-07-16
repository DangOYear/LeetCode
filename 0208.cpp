//
// Created by ShengyunYu on 2019/7/16.
//

#include "common.h"

class TrieNode{
public:
    TrieNode* next[26];
    bool isword;
    TrieNode(){
        memset(next, NULL, sizeof(next));
        isword = false;
    }

};


class Trie {
public:

    TrieNode *root;
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* p= root;
        for (int i = 0; i < word.size(); ++i) {
            if (p->next[word[i] - 'a'] == 0) {
                p->next[word[i] - 'a'] = new TrieNode();
            }
            p = p->next[word[i] - 'a'];
        }
        p->isword = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* p= root;
        for (int i = 0; i < word.size() && p != NULL; ++i) {
            p = p->next[word[i] - 'a'];
        }
        return p != NULL && p->isword;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* p= root;
        for (int i = 0; i < prefix.size() && p != NULL; ++i) {
            p = p->next[prefix[i] - 'a'];
        }
        return p != NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main() {
    Trie* trie = new Trie();

    trie->insert("apple");
    PrintBool(trie->search("apple"));   // 返回 true
    PrintBool(trie->search("app"));     // 返回 false
    PrintBool(trie->startsWith("app")); // 返回 true
    trie->insert("app");
    PrintBool(trie->search("app"));     // 返回 true

}