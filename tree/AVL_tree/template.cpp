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
int start_s=clock();
	// the code you wish to time goes here
int stop_s=clock();
cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
*/



/*
 * Node Declaration
 */
struct avl_node
{
    int data;
    struct avl_node *left;
    struct avl_node *right;
}*root;

/*
 * Class Declaration
 */
class avlTree
{
    public:
        int height(avl_node *);
        int diff(avl_node *);
        int index(avl node *);
        avl_node *rr_rotation(avl_node *);
        avl_node *ll_rotation(avl_node *);
        avl_node *lr_rotation(avl_node *);
        avl_node *rl_rotation(avl_node *);
        avl_node* balance(avl_node *);
        avl_node* insert(avl_node *, int );
        avl_node* deleteNode(avl_node *, int );
        avl_node* minValueNode(avl_node *);
        avl_node* maxValueNode(avl_node * );
        void display(avl_node *, int);
        void inorder(avl_node *);
        void preorder(avl_node *);
        void postorder(avl_node *);
        avlTree()
        {
            root = NULL;
        }
};

/*
 * Height of AVL Tree
 */
int avlTree::height(avl_node *temp)
{
    int h = 0;
    if (temp != NULL)
    {
        int l_height = height (temp->left);
        int r_height = height (temp->right);
        int max_height = max (l_height, r_height);
        h = max_height + 1;
    }
    return h;
}

/*
 * Height Difference
 */
int avlTree::diff(avl_node *temp)
{
    int l_height = height (temp->left);
    int r_height = height (temp->right);
    int b_factor= l_height - r_height;
    return b_factor;
}
/*
returns index of a node in ascending order(inorder)
*/
int avlTree::index(avl_node *tmp)
{
  int ans=0;
  //TODO;
}

/*
 * Right- Right Rotation
 */
avl_node *avlTree::rr_rotation(avl_node *parent)
{
    avl_node *temp;
    temp = parent->right;
    parent->right = temp->left;
    temp->left = parent;
    return temp;
}
/*
 * Left- Left Rotation
 */
avl_node *avlTree::ll_rotation(avl_node *parent)
{
    avl_node *temp;
    temp = parent->left;
    parent->left = temp->right;
    temp->right = parent;
    return temp;
}

/*
 * Left - Right Rotation
 */
avl_node *avlTree::lr_rotation(avl_node *parent)
{
    avl_node *temp;
    temp = parent->left;
    parent->left = rr_rotation (temp);
    return ll_rotation (parent);
}

/*
 * Right- Left Rotation
 */
avl_node *avlTree::rl_rotation(avl_node *parent)
{
    avl_node *temp;
    temp = parent->right;
    parent->right = ll_rotation (temp);
    return rr_rotation (parent);
}

/*
 * Balancing AVL Tree
 */
avl_node *avlTree::balance(avl_node *temp)
{
    int bal_factor = diff (temp);
    if (bal_factor > 1)
    {
        if (diff (temp->left) > 0)
            temp = ll_rotation (temp);
        else
            temp = lr_rotation (temp);
    }
    else if (bal_factor < -1)
    {
        if (diff (temp->right) > 0)
            temp = rl_rotation (temp);
        else
            temp = rr_rotation (temp);
    }
    return temp;
}
/*
gives the node with minimum value in the entire Tree
*/
avl_node *avlTree::minValueNode(avl_node *root){
  avl_node *current = root;
  while(current->left != NULL){
    current = current->left;
  }
  return current;
}
/*
gives the node with maximum value in the entire Tree
*/
avl_node *avlTree::maxValueNode(avl_node *root){
  avl_node *current = root;
  while(current->right != NULL){
    current = current->right;
  }
  return current;
}
/*
 * Insert Element into the tree
 */
avl_node *avlTree::insert(avl_node *root, int value)
{
    if (root == NULL)
    {
        root = new avl_node;
        root->data = value;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
        root = balance (root);
    }
    else if (value >= root->data)
    {
        root->right = insert(root->right, value);
        root = balance (root);
    }
    return root;
}

/*
delete Elemet from tree
*/
avl_node *avlTree::deleteNode(avl_node *root, int value){
  if(root == NULL){
    // root = new avl_node;
    // root ->data = value;
    // root->left =NULL;
    // root->right = NULL;
    return root;
  }else if(value < root->data){
    root->left = deleteNode(root->left, value);
    root = balance(root);
  }else if (value > root->data)
  {
      root->right = deleteNode(root->right, value);
      root = balance (root);
  }else{
    if(root->left==NULL || root->right == NULL){
      avl_node *tmp = root->left ? root->left : root->right;
      if(tmp == NULL){
        tmp =root;
        root =NULL;
      }else{
        *root = *tmp;
        free(tmp);
      }
    }else{
      avl_node *tmp = minValueNode(root->right);
      root->data = tmp->data;
      root->right = deleteNode(root->right,tmp->data);
      root = balance(root);
    }
  }
  return root;
}
/*
 * Display AVL Tree
 */
void avlTree::display(avl_node *ptr, int level)
{
    int i;
    if (ptr!=NULL)
    {
        display(ptr->right, level + 1);
        printf("\n");
        if (ptr == root)
        cout<<"Root -> ";
        for (i = 0; i < level && ptr != root; i++)
            cout<<"        ";
        cout<<ptr->data;
        display(ptr->left, level + 1);
    }
}

/*
 * Inorder Traversal of AVL Tree
 */
void avlTree::inorder(avl_node *tree)
{
    if (tree == NULL)
        return;
    inorder (tree->left);
    cout<<tree->data<<"  ";
    inorder (tree->right);
}
/*
 * Preorder Traversal of AVL Tree
 */
void avlTree::preorder(avl_node *tree)
{
    if (tree == NULL)
        return;
    cout<<tree->data<<"  ";
    preorder (tree->left);
    preorder (tree->right);

}

/*
 * Postorder Traversal of AVL Tree
 */
void avlTree::postorder(avl_node *tree)
{
    if (tree == NULL)
        return;
    postorder ( tree ->left );
    postorder ( tree ->right );
    cout<<tree->data<<"  ";
}

/*
* Main Contains Menu
*/
int main()
{
   int choice, item;
   avlTree avl;
   while (1)
   {
       cout<<"\n---------------------"<<endl;
       cout<<"AVL Tree Implementation"<<endl;
       cout<<"\n---------------------"<<endl;
       cout<<"1.Insert Element into the tree"<<endl;
       cout<<"2.Display Balanced AVL Tree"<<endl;
       cout<<"3.InOrder traversal"<<endl;
       cout<<"4.PreOrder traversal"<<endl;
       cout<<"5.PostOrder traversal"<<endl;
       cout<<"6.Delete element"<<endl;
       cout<<"7.Exit"<<endl;
       cout<<"Enter your Choice: ";
       cin>>choice;
       switch(choice)
       {
       case 1:
           cout<<"Enter value to be inserted: ";
           cin>>item;
           root = avl.insert(root, item);
           break;
       case 2:
           if (root == NULL)
           {
               cout<<"Tree is Empty"<<endl;
               continue;
           }
           cout<<"Balanced AVL Tree:"<<endl;
           avl.display(root, 1);
           break;
       case 3:
           cout<<"Inorder Traversal:"<<endl;
           avl.inorder(root);
           cout<<endl;
           break;
       case 4:
           cout<<"Preorder Traversal:"<<endl;
           avl.preorder(root);
           cout<<endl;
           break;
       case 5:
           cout<<"Postorder Traversal:"<<endl;
           avl.postorder(root);
           cout<<endl;
           break;
       case 6:
           cout<<"Enter value to be deleted:";NL;
           cin>>item;
           root = avl.deleteNode(root,item);
           break;
       case 7:
           exit(1);
           break;
       default:
           cout<<"Wrong Choice"<<endl;
       }
   }
   return 0;
}
