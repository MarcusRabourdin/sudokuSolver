# Sudoku Solver

A little side project to show a friend what’s possible to do in less than 2 hours.

Simple Sudoku solver implemented in C using **Backtracking**.

---

## Features

* Solve any valid 9×9 Sudoku grid.
* Easy to modify the starting grid.
* Lightweight and fast.
* Minimal dependencies (just GCC).

---

## Usage

### Compile

```bash
gcc sudoku.c -o solver
```

Or with the provided Makefile:

```bash
make
```

### Run

```bash
./solver
```

---

## Modify the Grid

> **Note:** To change the puzzle, you must edit the grid directly in the `sudoku.c` file.

1. Open `sudoku.c`.
2. Locate the grid initialization section.
3. Change the numbers to your desired puzzle (use `0` for empty cells).
4. Save the file.
5. Recompile using `gcc` or `make`.

**Example of a grid to copy-paste:**

```c
int grid[SIZE][SIZE] = {
    {5,3,0, 0,7,0, 0,0,0},
    {6,0,0, 1,9,5, 0,0,0},
    {0,9,8, 0,0,0, 0,6,0},

    {8,0,0, 0,6,0, 0,0,3},
    {4,0,0, 8,0,3, 0,0,1},
    {7,0,0, 0,2,0, 0,0,6},

    {0,6,0, 0,0,0, 2,8,0},
    {0,0,0, 4,1,9, 0,0,5},
    {0,0,0, 0,8,0, 0,7,9}
};
```

---

## Makefile Commands

```bash
make       # Compile the program
make run   # Compile and run
make clean # Remove the executable
```

---

## How It Works

This solver uses a **backtracking algorithm**:

1. Find an empty cell.
2. Try all numbers 1–9.
3. Check if the number is valid in the row, column, and 3×3 box.
4. If valid, continue recursively.
5. Backtrack if no number fits.

---

## Example

```
Input:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
------+-------+------
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
------+-------+------
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Output:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

---

## License

This project is free to use and modify.
