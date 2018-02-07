#include<bits/stdc++.h>
using namespace std;
string str, bad_string;
struct node{
    bool end_mark;
    node *next[10];
    node()
    {
        end_mark = false;
        for(int i = 0; i<10; i++)
            next[i] = NULL;
    }
}*root;
bool add(string s)
{
    node *current = root;
    for(int i = 0; i<s.size(); i++)
    {
        int nw = s[i] - 'a';
        if(i == (s.size()-1) && current->next[nw] != NULL)
            return false;
        if(current->next[nw] == NULL)
            current->next[nw] = new node();
        current = current->next[nw];
        if(current->end_mark)
            return false;
    }
    current->end_mark = true;
    return true;
}

int main()
{
    int i, N;
    bool ok = true;
    cin >> N;
    root = new node();
    for(i = 1; i<=N; i++)
    {
        cin >> str;
        if(!ok)
            continue;
        ok = add(str);
        if(!ok)
            bad_string = str;
    }
    if(ok)
        printf("GOOD SET\n");
    else
    {
        printf("BAD SET\n");
        cout << bad_string << endl;
    }
}
