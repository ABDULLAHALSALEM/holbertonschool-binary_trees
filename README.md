# Binary Trees - Holberton School Tasks

## Task 0: Binary Tree Node
**Description:** Create a new node for a binary tree.
**Prototype:** binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
**Input:** parent node pointer, integer value.
**Output:** pointer to new node, NULL on failure.
**Notes:** Initialize left and right to NULL. Set parent pointer.

---

## Task 1: Insert Left
**Description:** Insert a node as the left-child of a given parent.
**Prototype:** binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
**Input:** parent node pointer, integer value.
**Output:** pointer to new node, NULL on failure.
**Notes:** If parent already has a left child, it becomes the left child of the new node.

---

## Task 2: Insert Right
**Description:** Insert a node as the right-child of a given parent.
**Prototype:** binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
**Input:** parent node pointer, integer value.
**Output:** pointer to new node, NULL on failure.
**Notes:** If parent already has a right child, it becomes the right child of the new node.

---

## Task 3: Delete Binary Tree
**Description:** Delete an entire binary tree.
**Prototype:** void binary_tree_delete(binary_tree_t *tree);
**Input:** pointer to the root.
**Output:** none.
**Notes:** Free all nodes using recursion.

---

## Task 4: Preorder Traversal
**Description:** Traverse the tree in pre-order.
**Prototype:** void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
**Notes:** Apply func to each node’s value.

---

## Task 5: Inorder Traversal
**Description:** Traverse the tree in in-order.
**Prototype:** void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
**Notes:** Apply func to each node’s value.

---

## Task 6: Postorder Traversal
**Description:** Traverse the tree in post-order.
**Prototype:** void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
**Notes:** Apply func to each node’s value.

---

## Task 7: Height
**Description:** Measure the height of a binary tree.
**Prototype:** size_t binary_tree_height(const binary_tree_t *tree);
**Notes:** Height = number of edges from node to deepest leaf. Use recursion.

---

## Task 8: Depth
**Description:** Measure the depth of a node.
**Prototype:** size_t binary_tree_depth(const binary_tree_t *tree);
**Notes:** Depth = number of edges from node to root. Use recursion via parent pointer.

---

## Task 9: Size
**Description:** Count the total number of nodes in a binary tree.
**Prototype:** size_t binary_tree_size(const binary_tree_t *tree);
**Notes:** Use recursion to traverse all nodes.

---

## Task 10: Leaves
**Description:** Count the number of leaf nodes in a binary tree.
**Prototype:** size_t binary_tree_leaves(const binary_tree_t *tree);
**Notes:** Leaf = node with no children. Use recursion.

---

## Task 11: Nodes
**Description:** Count the number of nodes with at least one child.
**Prototype:** size_t binary_tree_nodes(const binary_tree_t *tree);
**Notes:** Use recursion to check each node.

---

## Task 12: Balance
**Description:** Measure the balance factor of a binary tree.
**Prototype:** int binary_tree_balance(const binary_tree_t *tree);
**Notes:** Balance factor = height(left subtree) - height(right subtree).

---

## Task 13: Is Full
**Description:** Check if a binary tree is full.
**Prototype:** int binary_tree_is_full(const binary_tree_t *tree);
**Notes:** Full = every node has 0 or 2 children. Use recursion.

---

## Task 14: Is Perfect
**Description:** Check if a binary tree is perfect.
**Prototype:** int binary_tree_is_perfect(const binary_tree_t *tree);
**Notes:** Perfect = full and all leaves at same level.

---

## Task 15: Sibling
**Description:** Find the sibling of a node.
**Prototype:** binary_tree_t *binary_tree_sibling(binary_tree_t *node);
**Notes:** Sibling = other child of the parent.

---

## Task 16: Uncle
**Description:** Find the uncle of a node.
**Prototype:** binary_tree_t *binary_tree_uncle(binary_tree_t *node);
**Notes:** Uncle = sibling of parent.

---

## Task 17: Lowest Common Ancestor
**Description:** Find the lowest common ancestor of two nodes.
**Prototype:** binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
**Notes:** LCA = deepest node that is ancestor of both nodes.

---

## Task 18: Level Order Traversal
**Description:** Traverse the tree level by level.
**Prototype:** void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
**Notes:** Use a queue or recursion to visit nodes by level.

---

## Task 19: Print
**Description:** Print the binary tree in a structured way.
**Prototype:** void binary_tree_print(const binary_tree_t *tree);
**Notes:** Visual representation of the tree in terminal.

