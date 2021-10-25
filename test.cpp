#include<bits/stdc++.h>
using namespace std;
vector<string> dictWord(string textInput){
     map<string, int> FW;
    stringstream ss(textInput); // Used for breaking words
    string Word; // To store individual words
  vector<string>ans;
    while (ss >> Word)
        FW[Word]++;
    for(auto x:FW){
        if(x.second>1){
            ans.push_back(x.first);
        }
    }
    return ans;
}