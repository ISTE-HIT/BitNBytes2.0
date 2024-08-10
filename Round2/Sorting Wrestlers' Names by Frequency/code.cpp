#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'sortByFrequency' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
class Node{
    public:
    int freq;
    char ch;
    Node(int freq,char ch):freq(freq),ch(ch){
    }
};
map<char,int>mp;
class Compare{
    public:
    bool operator()(Node*a,Node*b){
        if(a->freq==b->freq)return a->ch>b->ch;
        return a->freq<b->freq;
    }
};

string sortByFrequency(string s) {
    // Write your code here
    if(s.length()==0)return s;
       priority_queue<Node*,vector<Node*>,Compare>pq;
         for(auto in:s){
             mp[in]++;
         }
         for(auto in:s){
             pq.push(new Node(mp[in],in));
            
         }
         string ans="";
         while(!pq.empty()){
          ans+=pq.top()->ch;
             pq.pop();
         }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    // StartCode

    // Define the function sortByFrequency which takes a string and returns a string

    // Read the input string s

    string s;
    getline(cin, s);

    // Invoke the sortByFrequency function and print the result

    string result = sortByFrequency(s);

    fout << result << "\n";

    // EndCode

    fout.close();

    return 0;
}
