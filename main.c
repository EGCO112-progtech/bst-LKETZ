#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;
   b.root = NULL,b.size = 0;

   
	b.root= NULL;  b.size=0;// tree initially empty
for ( i = 1; i < argc; ++i ) { 
      //insertNode( &b, atoi(argv[i]));
      insertNode_R(&b.root,atoi(argv[i]) );
  } // end for
   // traverse the tree preOrder
   // printf("\nThe preOrder traversal is:\n" );
   // preOrder(rootPtr);

   // traverse the tree inOrder
   printf("\ninOrder\n" );
   inOrder( b.root );
   printf("\npreOrder\n" );
   preOrder( b.root );
   printf("\npostOrder\n" );
   postOrder( b.root );

   printf("\nprint tree\n");
   ass(b.root,0);


   // traverse the tree postOrder
 //printf("\nThe postnOrder traversal is:\n" );   postOrder(rootPtr);

   printf("\n");
} // end main

