#include "tree.h"
#include "expr_assert.h"
#include <stdio.h>




void test_create_BinaryTree_with_root_node(){
	BSTree tree = createBSTree();

	assertEqual((tree.root)->data,0);
};
