// An integer binary search tree

struct TreeNode {                                           
    struct TreeNode *leftPtr; // pointer to left subtree
   int data; // node value                               
    struct TreeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode 
        
typedef struct TreeNode * TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size;
	TreeNodePtr root;
}BST;

// prototypes

void insertNode( BST *, int );
int fac(int n);
int fac_r(int n);
void insertNode_R(TreeNodePtr * t,int value){
  if((*t)==NULL){
   (*t)=(TreeNodePtr)malloc(sizeof(struct TreeNode));
	 if((*t)){
		(*t)->leftPtr=NULL;
		(*t)->rightPtr=NULL;
		(*t)->data=value;
   }
   else{
      printf("%d not inserted. No memory available.\n",value);
   }
  }
  else{
     if((*t)->data>=value) //left
      {
         insertNode_R(&(*t)->leftPtr,value);
      }
     else //right
      {
         insertNode_R(&(*t)->rightPtr,value);
      }
   }
} //end function

void insertNode( BST *b, int value ){
	 TreeNodePtr t = b->root,new_node;
	 int inserted=0;
	new_node =(TreeNodePtr) malloc(sizeof(struct TreeNode));
	if(new_node){
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
		new_node->data=value;
		/*First Node*/
		if(!b->root)	b->root=new_node;
		else {
while(!inserted){
   if(t->data >=value){
     /* move/insert to the left*/
     if(t->leftPtr == NULL){
      t->leftPtr = new_node;
      inserted = 1;
     }
     else t = t->leftPtr;
      
     }
  	 
   else {
	      /* move/ insert to the right*/
      if(t->rightPtr == NULL){
      t->rightPtr = new_node;
      inserted = 1;
     }
     else t = t->rightPtr;
      
    }
   
  
  
  }//end while		
  }
   }

  b->size++;
   }//
  
//end function


void inOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      inOrder( treePtr->leftPtr ); //Recursion to the left
 
      printf("%3d",treePtr->data) ;  //print the value 
   
      inOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end 

int fac(int n)
{
   int f=1;
   while(n>1)
   {
      f=f*n;
      n--;
   }
   return f;
}

int fac_r(int n)
{
   if(n==1) return 1;
   if(n==0) return 1;

   return n*fac_r(n-1);
}
