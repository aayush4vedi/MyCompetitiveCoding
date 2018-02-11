// C++ implementation of search and insert
// operations on Trie
#include <bits/stdc++.h>
using namespace std;
struct TrieNode{
    bool leaf;
    unordered_map<char, TrieNode*> children;
    TrieNode():leaf(false), children(){}
};

class Trie{
private:
    TrieNode* root;
public:
    Trie():root(new TrieNode()){}
    ~Trie(){
        deleteTrie(root);
    }
    //Insert a given word
    void addWord(string s){
        cout << "Inserting: " << (s.empty()?"empty string":s) << endl;
        TrieNode* cur = root;
        for(size_t i=0; i<s.size(); ++i){
            if(cur->children.count(s[i])==0)
                cur->children[s[i]] = new TrieNode();
            cur = cur->children[s[i]];
        }
        cur->leaf= true;
    }
    //Search a given word
    bool searchWord(string s){
        cout << "Searching: " << (s.empty()?"empty string":s) << endl;
        if(root==NULL)
            return false;
        TrieNode* cur = root;
        for(size_t i=0; i<s.size(); ++i){
            if(cur->children.count(s[i])==0)
                return false;
            cur = cur->children[s[i]];
        }
        return cur->leaf;
    }
    //Delete a given word
    void delWord(string s){
        cout << "Deleting: " << (s.empty()?"empty string":s) << endl;
        if(root==NULL)
            return;
        if(s.empty()){
            cout << "Deleting node: empty string"<< endl;
            root->leaf=false;
        }
        delWordHelper(s, root, 0);
    }
    //delword helper
    bool delWordHelper(string s, TrieNode* r, size_t cur){
        cout << "\tGoing deep: "<< s[cur] << endl;
        if(r==NULL)
            return false;
        if(cur==s.size()){ //base case
            r->leaf = false; //unmark the leaf
            if(r->children.size()!=0) //if s is a prefix of other string
                return false;
            return true;
        }
        else{
            if(r->children.count(s[cur])==0) //if can not find s
                return false;
            if(delWordHelper(s, r->children[s[cur]], cur+1)){
                //delete eligible nodes
                cout << "\tDeleting node: "<< s[cur] << endl;
                delete r->children[s[cur]];
                r->children.erase(s[cur]);
                //recursively climb up, and delete eligible nodes
                return r->children.empty() && r->leaf==false;
            }
            return false;
        }
    }
    //Delete the trie following post-order traversal
    void deleteTrie(TrieNode* r){
        if(r==NULL)
            return;
        for(size_t i=0; i<r->children.size(); i++)
            deleteTrie(r->children[i]);
        delete r;
        r = NULL;
    }
    //To avoid shallow copy, you may need to give
    //copy constructor and overload assignment operator
    Trie(const Trie&);
    Trie& operator=(const Trie&);
};
int main(){
    Trie t = Trie();
    t.addWord("");
    t.addWord("Hello");
    t.addWord("Balloon");
    t.addWord("HelloRam");
    if (t.searchWord("Hell"))
        cout << "Found Hell" << endl;
    if (t.searchWord("Hello"))
        cout << "Found Hello" << endl;
    if (t.searchWord("Helloo"))
        cout << "Found Helloo" << endl;
    if (t.searchWord("Ball"))
        cout << "Found Ball" << endl;
    if (t.searchWord("Balloon"))
        cout << "Found Balloon" << endl;
    if (t.searchWord(""))
        cout << "Found empty string" << endl;

    t.delWord("Balloon");
    if (t.searchWord("Balloon"))
        cout << "Found Balloon" << endl;

    t.addWord("Balloon");
    t.addWord("Ball");

    t.delWord("Balloon");
    t.delWord("");
    if (t.searchWord(""))
        cout << "Found empty string" << endl;
    return 0;
}
