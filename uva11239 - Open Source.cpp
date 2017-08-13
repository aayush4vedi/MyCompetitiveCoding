#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define vb vector<bool>
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LL long long
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()

vector<int>::iterator j;


struct Team{
    string projectName;
    int students;
};
 
 
map<string, int>studentVSproject;
Team project[102];
 
 
 
bool compare(Team a, Team b)
{
    if(a.students > b.students) return true;
    if(a.students < b.students) return false;
    if(a.projectName < b.projectName) return true;
    return false;
}
 
 
 
int main()
{
    string input;
    int temp;
    int project_iterator = 0;
    while(getline(cin, input))
    {
        if(input == "0")
        {
            break;
        }
        if( input != "1")
        {
            if('A' <= input[0] && input[0] <='Z' )
            {// it's team name;
 
                project[project_iterator].projectName = input;
                project[project_iterator].students = 0;
 
                project_iterator++;
            }
            else
            {//it's userid
                temp = studentVSproject[input];
                if(temp == 0)
                {//new student who has not yet submit anywhere
                    studentVSproject[input] = project_iterator;
                    project[project_iterator - 1].students++;
                }
                else if(temp < 150 && temp != project_iterator)
                {
                    project[temp-1].students--;
                    studentVSproject[input] = 500;
                }
            }
        }
        else
        {
 
            sort(project, project+project_iterator, compare);
 
            for(int i=0; i<project_iterator; i++)
            {
                printf("%s %d\n", project[i].projectName.c_str(), project[i].students);
            }
 
            project_iterator = 0;
            studentVSproject.clear();
        }
    }
    return 0;
 
}
