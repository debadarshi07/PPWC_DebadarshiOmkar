/*

Q). Consider the following program that takes a tree root & and integer element as an argument.
        int count (struct node *node, int element) {
            if (node == null)
                return 0;
            else {
                int result = 0;
                if (node -> data == element)
                    result = 1;
                return result + count(node -> left, element) + count(node -> right, element)
            }
        }
What will the function return ?
(a) Count the number of nodes in the tree.
(b) Count the number of nodes in the left subtree.
(c) Count the number of nodes in the right subtree.
(d) Count the number of occurrence of the number in the given tree.

Ans). (d)

*/