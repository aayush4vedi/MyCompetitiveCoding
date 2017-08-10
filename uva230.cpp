#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LL long long
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))



struct book
{
    string title, author;
    
    inline bool operator<(const book& other) const
    {
        if (author != other.author)
            return author < other.author;
        
        return title < other.title;
    }
};

void ReadInBooks(vector<book> & allBooks)
{
    string temp;
    
    book currentBook;
    
    while (cin >> temp, temp != "END")
    {
        currentBook.title = "";
        
        bool first = true;
        
        while (*(temp.end() - 1) != '"')
        {
            if (!first)
                currentBook.title += ' ';

            first = false;
            currentBook.title += temp;
            
            cin >> temp;
        }
        
        if (!first)
            currentBook.title += ' ';
            
        currentBook.title += temp;
        
        // Ignore 'by'
        cin >> temp;
        // ignore the space after the by
        cin.ignore();
        
        getline(cin, currentBook.author);
        allBooks.push_back(currentBook);
    }
}

enum bookStatusEnum { available, borrowed, returned };

int main()
{
    vector<book> allBooks;
    ReadInBooks(allBooks);
    int numBooks = allBooks.size();
    std::sort(allBooks.begin(), allBooks.end());
    
    vector<bookStatusEnum> booksStatus(numBooks, available);
    
    map<string, int> positionInAllBooks;
    for (int i = 0; i < numBooks; ++i)
        positionInAllBooks[allBooks[i].title] = i;
    
    vector<bool> borrowed(allBooks.size(), false);
    vector<bool> returned(allBooks.size(), false);
    
    string command;
    string bookName;
    while (cin >> command, command != "END")
    {
        if (command == "BORROW")
        {
            cin.ignore();
            getline(cin, bookName);
            int pos = positionInAllBooks[bookName];
            borrowed[pos] = true;
            returned[pos] = false;
        }
        
        else if (command == "RETURN")
        {
            cin.ignore();
            getline(cin, bookName);
            returned[positionInAllBooks[bookName]] = true;
        }
        
        else // SHELVE
        {
            int previous = -1;
            for (int i = 0; i < numBooks; ++i)
            {
                if (!borrowed[i])
                    previous = i;
                else if (returned[i])
                {
                    if (previous == -1)
                        cout << "Put " << allBooks[i].title << " first\n";
                    else
                        cout << "Put " << allBooks[i].title << " after " << allBooks[previous].title << '\n';
                    
                    returned[i] = false;
                    borrowed[i] = false;
                    previous = i;
                }
            }
            
            cout << "END\n";
        }
    }
}