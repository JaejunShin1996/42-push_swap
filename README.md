# Push_swap - Sorting with Stacks

## Project Overview

**Push_swap** is a project focused on sorting a set of integers using a limited set of stack operations. The challenge lies in finding the most efficient way to sort the numbers using the smallest number of moves possible. By completing this project, I gained valuable experience with sorting algorithms, stack manipulation, and algorithmic optimization, all implemented in the C programming language.

---

## Key Features

- **Two Stacks (a and b)**: The project uses two stacks to sort integers. Initially, stack `a` contains all the integers, while stack `b` is empty.
- **Operations**: The following stack operations are available to manipulate and sort the integers:
  - `sa` - Swap the top two elements of stack `a`.
  - `sb` - Swap the top two elements of stack `b`.
  - `ss` - Swap the top two elements of both stacks.
  - `pa` - Push the top element of stack `b` onto stack `a`.
  - `pb` - Push the top element of stack `a` onto stack `b`.
  - `ra` - Rotate all elements of stack `a` upwards.
  - `rb` - Rotate all elements of stack `b` upwards.
  - `rr` - Rotate both stacks upwards.
  - `rra` - Reverse rotate all elements of stack `a`.
  - `rrb` - Reverse rotate all elements of stack `b`.
  - `rrr` - Reverse rotate both stacks.

- **Sorting Goal**: The goal is to sort all the integers in ascending order in stack `a` using the fewest number of operations possible. Each instruction must be printed on a new line.

---

## Example Workflow

Given the input `2 1 3 6 5 8`:

- Initial stacks:


- Example operations:
- `sa`: Swaps the first two elements in stack `a`, making the stack `a` look like `1 2 3 6 5 8`.
- `pb pb pb`: Moves the top three elements from stack `a` to stack `b`.
- `pa pa pa`: Moves the elements back from stack `b` to stack `a`, resulting in a sorted stack.

The integers are sorted in ascending order after a sequence of 12 operations.

---

## Skills Demonstrated

- **Algorithmic Optimization**: Developed an efficient algorithm to minimize the number of operations required to sort a list of integers.
- **Data Structures**: Gained hands-on experience with stack data structures and their manipulation.
- **Memory Management**: Ensured proper memory management throughout the project, avoiding leaks and ensuring efficient use of resources.
- **Error Handling**: The program handles various input errors, including non-integer inputs, duplicates, and arguments out of integer range, displaying appropriate error messages.

---

## Conclusion

The **Push_swap** project provided a comprehensive understanding of sorting algorithms and optimization techniques, particularly with respect to stack-based data structures. This project also honed my skills in writing efficient, low-level C code while managing memory and handling errors gracefully.

