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
------------------------
| 1 0 0 | 0 0 7 | 0 9 0
| 0 3 0 | 0 2 0 | 4 0 8
| 0 0 9 | 6 0 0 | 5 0 0
------------------------
| 0 0 5 | 3 0 0 | 9 0 0
| 0 1 0 | 0 8 0 | 0 0 2
| 6 0 0 | 0 0 4 | 0 0 0
------------------------
| 3 0 8 | 0 0 0 | 1 0 0
| 0 4 0 | 0 0 0 | 0 0 7
| 0 0 7 | 0 0 0 | 3 0 0

Output:
------------------------
| 1 5 4 | 8 3 7 | 2 9 6
| 7 3 6 | 5 2 9 | 4 1 8
| 2 8 9 | 6 4 1 | 5 7 3
------------------------
| 8 7 5 | 3 1 2 | 9 6 4
| 4 1 3 | 9 8 6 | 7 5 2
| 6 9 2 | 7 5 4 | 8 3 1
------------------------
| 3 6 8 | 4 7 5 | 1 2 9
| 5 4 1 | 2 9 3 | 6 8 7
| 9 2 7 | 1 6 8 | 3 4 5
```

---

## License

This project is free to use and modify.
