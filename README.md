# Binary Trees

This repository contains C programs that implement various functionalities related to binary trees. Each program corresponds to a specific task, and they are designed to demonstrate different aspects of binary tree operations.

## Table of Contents

1. [Introduction](#introduction)
2. [Requirements](#requirements)
3. [Usage](#usage)
4. [List of Programs](#list-of-programs)
5. [Examples](#examples)
6. [License](#license)

## Introduction

Binary trees are hierarchical data structures that consist of nodes, where each node has at most two children, referred to as the left and right child. The programs in this repository cover a range of binary tree operations, such as tree traversal, insertion, deletion, and various measurements like size, height, etc.

## Requirements

- C compiler (e.g., GCC)
- [Binary Trees library](#link-to-binary-trees-library)

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/binary_trees.git
    ```

2. Navigate to the repository:

    ```bash
    cd binary_trees
    ```

3. Compile the programs:

    ```bash
    gcc -Wall -Wextra -Werror -pedantic *.c -o binary_tree_executable
    ```

4. Run the desired program:

    ```bash
    ./binary_tree_executable
    ```

## List of Programs

1. [6-binary_tree_preorder.c](6-binary_tree_preorder.c): Pre-order traversal of a binary tree.
2. [7-binary_tree_inorder.c](7-binary_tree_inorder.c): In-order traversal of a binary tree.
3. [8-binary_tree_postorder.c](8-binary_tree_postorder.c): Post-order traversal of a binary tree.
4. [9-binary_tree_height.c](9-binary_tree_height.c): Measure the height of a binary tree.
5. [10-binary_tree_depth.c](10-binary_tree_depth.c): Measure the depth of a node in a binary tree.
6. [11-binary_tree_size.c](11-binary_tree_size.c): Measure the size of a binary tree.
7. [12-binary_tree_leaves.c](12-binary_tree_leaves.c): Count the leaves in a binary tree.
8. [13-binary_tree_nodes.c](13-binary_tree_nodes.c): Count the nodes with at least one child in a binary tree.
9. [14-binary_tree_balance.c](14-binary_tree_balance.c): Measure the balance factor of a binary tree.
10. [15-binary_tree_is_full.c](15-binary_tree_is_full.c): Check if a binary tree is full.
11. [16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c): Check if a binary tree is perfect.
12. [17-binary_tree_sibling.c](17-binary_tree_sibling.c): Find the sibling of a node.
13. [18-binary_tree_uncle.c](18-binary_tree_uncle.c): Find the uncle of a node.


## Examples

Here are a few examples demonstrating the usage of some programs:

### Example 1: Pre-order Traversal

#### Description:
Perform pre-order traversal on a binary tree.

#### Usage:
```bash
// Compile the program
gcc -Wall -Wextra -Werror -pedantic 6-binary_tree_preorder.c binary_tree_print.c -o preorder_example

// Run the program
./preorder_example

// Compile the program
gcc -Wall -Wextra -Werror -pedantic 9-binary_tree_height.c binary_tree_print.c 0-binary_tree_node.c -o height_example

// Run the program
./height_example

