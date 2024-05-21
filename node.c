#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%c_", root->key);
		displayInorder(root->right);
	}
}