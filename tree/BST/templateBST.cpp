#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define ld long double
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef priority_queue<int> pq; //maxHeap
typedef priority_queue <int, vector<int>, greater<int> > pqn; //minHEAP
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> pii;
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
typedef vector<pllilli> vllilli;
//vector<int>::iterator j;
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define REPR(I, A, B) for (int I = (B); I > (A); I--)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define DRA(a,n) int a[n]; REP(i,n)cin>>a[i]
#define l_b lower_bound
#define u_b upper_bound
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define NL cout<<endl
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;

/*
 * Node Declaration
 */
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root;

/*
 * Class Declaration
 */
class BST
{
    public:
        void find(int, node **, node **);
        void insert(node *,node *);
        void del(int);
        void case_a(node *,node *);
        void case_b(node *,node *);
        void case_c(node *,node *);
        void preorder(node *);
        void inorder(node *);
        void postorder(node *);
        void display(node *, int);
        int height(node *);
        int diameter(node *);
        void mirror(node *);
        bool hasPathSum(node * , int);
        int lca(node *,int,int);//build using BST properties
        bool printAncestors(node *, int);
        //  void diagonalPrint(node *);
        //  void diagonalPrintUtil(node *, int , map<int, vector<int > > ){
        //following 3 to print the tree vertically
        void findMinMax(node *, int *, int *, int );
        void printVertically(node * , int,int);
        void verticalOrder(node * );
        BST()
        {
            root = NULL;
        }
};
/*
lca-build using BST properties and won't work for tree != BST
while traversing from top to bottom, the first node n we encounter with value
between n1 and n2, i.e., n1 < n < n2 or same as one of the n1 or n2, is LCA of
 n1 and n2 (assuming that n1 < n2)
*/
int lca(node *node, int a, int b){
  if(node == NULL)return 0;
  if(node ->data >a && node->data >b)return lca(node->left,a,b);
  if(node ->data <a && node->data <b)return lca(node->right,a,b);
  return node->data;

}
/*
prints all the ancestors of a node with data 'val'
*/
bool printAncestors(node * node, int val){
  if(node == NULL)return false;
  if(node ->data == val)return true;

  if((printAncestors(node->right,val))||(printAncestors(node->left, val))){
    cout<< node->data<<" ";
    return true;
  }
  return false;
}
/*
 * Find Element in the Tree
 */
void BST::find(int item, node **par, node **loc)
{
    node *ptr, *ptrsave;
    if (root == NULL)
    {
        *loc = NULL;
        *par = NULL;
        return;
    }
    if (item == root->data)
    {
        *loc = root;
        *par = NULL;
        return;
    }
    if (item < root->data)
        ptr = root->left;
    else
        ptr = root->right;
    ptrsave = root;
    while (ptr != NULL)
    {
        if (item == ptr->data)
        {
            *loc = ptr;
            *par = ptrsave;
            return;
        }
        ptrsave = ptr;
        if (item < ptr->data)
            ptr = ptr->left;
	else
	    ptr = ptr->right;
    }
    *loc = NULL;
    *par = ptrsave;
}

/*
 * Inserting Element into the Tree
 */
void BST::insert(node *tree, node *newnode)
{
    if (root == NULL)
    {
        root = new node;
        root->data = newnode->data;
        root->left = NULL;
        root->right = NULL;
        cout<<"Root Node is Added"<<endl;
        return;
    }
    if (tree->data == newnode->data)
    {
        cout<<"Element already in the tree"<<endl;
        return;
    }
    if (tree->data > newnode->data)
    {
        if (tree->left != NULL)
        {
            insert(tree->left, newnode);
	}
	else
	{
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            cout<<"Node Added To Left"<<endl;
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            cout<<"Node Added To Right"<<endl;
            return;
        }
    }
}

/*
 * Delete Element from the tree
 */
void BST::del(int item)
{
    node *parent, *location;
    if (root == NULL)
    {
        cout<<"Tree empty"<<endl;
        return;
    }
    find(item, &parent, &location);
    if (location == NULL)
    {
        cout<<"Item not present in tree"<<endl;
        return;
    }
    if (location->left == NULL && location->right == NULL)
        case_a(parent, location);//node to be deleted is a leaf
    if (location->left != NULL && location->right == NULL)
        case_b(parent, location);//node to be deleted has only 1 child
    if (location->left == NULL && location->right != NULL)
        case_b(parent, location);//node to be deleted has only 1 child
    if (location->left != NULL && location->right != NULL)
        case_c(parent, location);//node to be deleted has 2 childern
    free(location);
}

/*
 * Case A:node to be deleted is a leaf
 */
void BST::case_a(node *par, node *loc )
{
    if (par == NULL)
    {
        root = NULL;
    }
    else
    {
        if (loc == par->left)
            par->left = NULL;
        else
            par->right = NULL;
    }
}

/*
 * Case B:node to be deleted has only 1 child
 */
void BST::case_b(node *par, node *loc)
{
    node *child;
    if (loc->left != NULL)
        child = loc->left;
    else
        child = loc->right;
    if (par == NULL)
    {
        root = child;
    }
    else
    {
        if (loc == par->left)
            par->left = child;
        else
            par->right = child;
    }
}

/*
 * Case C://node to be deleted has 2 childern
 */
void BST::case_c(node *par, node *loc)
{
    node *ptr, *ptrsave, *suc, *parsuc;
    ptrsave = loc;
    ptr = loc->right;
    while (ptr->left != NULL)
    {
        ptrsave = ptr;
        ptr = ptr->left;
    }
    suc = ptr;
    parsuc = ptrsave;
    if (suc->left == NULL && suc->right == NULL)
        case_a(parsuc, suc);
    else
        case_b(parsuc, suc);
    if (par == NULL)
    {
        root = suc;
    }
    else
    {
        if (loc == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}
/*
Mirror the tree i.e. swap every pair of children
starting from the node
*/
void mirror(node * node)
{
  if(node ==NULL)return;
  else{
    //do the subtrees
    mirror(node->left);
    mirror(node->right);
    swap(node->left, node->right);// won't work with pinters ;P
    // node* tmp;
    // tmp = node->left;
    // node->left = node->right;
    // node->right = tmp;
  }
}
/*
 * Pre Order Traversal
 */
void BST::preorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        cout<<ptr->data<<"  ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
/*
 * In Order Traversal
 */
void BST::inorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout<<ptr->data<<"  ";
        inorder(ptr->right);
    }
}

/*
 * Postorder Traversal
 */
void BST::postorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<"  ";
    }
}

/*
 * Display Tree Structure
 */
void BST::display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}
/*
Diagonal Print: https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/

void diagonalPrintUtil(node * node, int d, map<int, vector<int > > &m){
  if(root == NULL)return;
  // Store all nodes of same line together as a vector
  m[d].pb(node->data);
  // Increase the vertical distance if left child
  diagonalPrintUtil(node->left, d+1,m);
  // Vertical distance remains same for right child
  diagonalPrintUtil(node->left, d+1,m);
}
void diagonalPrint(node * node){
  map<int, vector<int>>m;
  diagonalPrintUtil(node, 0,m);
  for(auto it=m.begin();it != m.end();it++){
    for(auto i=it->second.begin();i!= it->second.end();i++){
      cout<<*i<<" ";
    }NL;
  }
}

*/
/*
Print tree in vertical order- https://www.geeksforgeeks.org/print-binary-tree-vertical-order/
*/
//to find min/max distance from root to any node
void findMinMax(node *node, int *min, int *max, int curr){
  if(node == NULL)return;
  if(curr < *min) *min=curr;
  else if(curr > *max) *max = curr;
  findMinMax(node->left, min, max, curr-1);
  findMinMax(node->right, min, max, curr+1);
}
//utility function
void printVertically(node * node, int l,int curr){
  if(node == NULL)return;
  if(curr== l)cout<< node->data<<" ";
  printVertically(node->left, l,curr-1);
  printVertically(node->right, l,curr+1);
}
//final function to print the treee printVertically
void verticalOrder(node * node){
  int min =0,max=0;
  findMinMax(node, &min, &max,0);
  REP(i,min,max+1){
    printVertically(node, i,0);
    NL;
  }
}

/*
find height of a node
*/
int height(node * node){
  if(node == NULL)return 0;
  return 1+max(height(node->left),height(node->right));
}
/*
find diameter of tree:longest path b/w 2 nodes

*/
int diameter(node *tree)
{
  if(tree == NULL)return 0;
  int l_height=height(tree->left);
  int r_height=height(tree->right);

  int l_diameter = diameter(tree->left);
  int r_diameter = diameter(tree->right);

  return max(l_height+r_height+1,max(l_diameter,r_diameter));

}
/*
to check if node to leaf path sum = 'sum'
*/
bool hasPathSum(node * node, int sum)
{
  if(node == NULL)
  {
    return (sum==0);
  }else{
    bool ans=0;
    int subSum = sum - node->data;
    //if we have reached the leaf
    if(subSum == 0 && node->left == NULL && node->right == NULL){
      return 1;
    }if(node ->left){
      ans = ans || hasPathSum(node ->left, subSum);
    }if(node ->right){
      ans = ans || hasPathSum(node ->right, subSum);
    }
    return ans;
  }
}


int main()
{
    int choice, num;
    BST bst;
    node *temp;
    while (1)
    {
        cout<<"-----------------"<<endl;
        cout<<"Operations on BST"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"1.Insert Element "<<endl;
        cout<<"2.Delete Element "<<endl;
        cout<<"3.Inorder Traversal"<<endl;
        cout<<"4.Preorder Traversal"<<endl;
        cout<<"5.Postorder Traversal"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Height of tree\n";
        cout<<"8.Diameter of tree\n";
        cout<<"9.Has path sum\n";
        cout<<"10.Mirror the BST\n";
        cout<<"11.diagonal print the tree-not working\n";
        cout<<"12.print tree verically\n";
        cout<<"13.LCA\n";
        cout<<"14.Print ancestors of a node\n";
        cout<<"0.Quit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            temp = new node;
            cout<<"Enter the number to be inserted : ";
	          cin>>temp->data;
            bst.insert(root, temp);
            break;
        case 2:
            if (root == NULL)
            {
                cout<<"Tree is empty, nothing to delete"<<endl;
                continue;
            }
            cout<<"Enter the number to be deleted : ";
            cin>>num;
            bst.del(num);
            break;
        case 3:
            cout<<"Inorder Traversal of BST:"<<endl;
            bst.inorder(root);
            cout<<endl;
            break;
	      case 4:
            cout<<"Preorder Traversal of BST:"<<endl;
            bst.preorder(root);
            cout<<endl;
            break;
        case 5:
            cout<<"Postorder Traversal of BST:"<<endl;
            bst.postorder(root);
            cout<<endl;
            break;
        case 6:
            cout<<"Display BST:"<<endl;
            bst.display(root,1);
            cout<<endl;
            break;
        case 7:
            cout<<"Height of tree\n";
            cout<<height(root);NL;
            break;
        case 8:
            cout<<"Diameter of tree\n";
            cout<<diameter(root);NL;
            break;
        case 9:
            cout<<"check if root to leaf sum equals your sum\n";
            int sum;cin>>sum;
            if(hasPathSum(root,sum))cout<<"YES\n";
            else cout<<"NO\n";
            NL;
            break;
        case 10:
            mirror(root);
            cout<<"your tree just got mirrored\n";
            break;
        case 11:
            //diagonalPrint(root);
            cout<<"bol na, not working\n";
            cout<<"go check https://www.geeksforgeeks.org/diagonal-traversal-of-binary-tree/ and do it w/o class\n";
            break;
        case 12:
            verticalOrder(root);
            break;
        case 13:
            cout<<"enter nodes\n";
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            cout<<"lca is: "<<lca(root,a,b);;
            NL;
            break;
        case 14:
            cout<<"Enter data of node\n";
            int v;cin>>v;
            printAncestors(root,v);NL;
            break;
        case 0:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}
