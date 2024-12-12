import tkinter as tk

def create_sudoku_gui (sudoku_grid):
    root = tk.Tk()
    root.title("Sudoku")
    root.geometry("400*400")
    root.resizable(False, False) 

  
    
    for row in range(9):
        for col in range(9):
            value = sudoku_grid[row][col]
            text = str(value) if value != 0 else ""
            label = tk.Label(
                root,
                text = text,
                width = 4,
                height= 2,
                font =( "Arial", 14),
                relief = "solid",
                borderwidth = 1,
                bg = "white",
            )
            label.grid(row = row, column = col, padx = 1, pady = 1)
    root.mainloop()
    
if __name__ == "_main_":
    sudoku_grid = [
        [5, 3, 0, 0, 0, 0, 0, 0, 0],
        [6, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 0],
    ]

create_sudoku_gui(sudoku_grid)