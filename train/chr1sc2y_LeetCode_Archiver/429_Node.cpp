#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Node {
public:
    int val;
    vector<Node*> children;
    Node() {}
    Node(int _val) { val = _val; }
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> order;
        if (!root)
            return order;
        queue<Node *> que;
        que.push(root);
        while (!que.empty()) {
            vector<int> temp;
            auto len = que.size();
            for (int i = 0; i < len; ++i) {
                Node *currentNode = que.front();
                temp.push_back(currentNode->val);
                que.pop();
                for (auto child:currentNode->children)
                    que.push(child);
            }
            order.push_back(temp);
        }
        return order;
    }
};