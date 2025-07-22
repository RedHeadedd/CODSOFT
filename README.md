CODSOFT Internship – Complete C++ Task Report
=============================================

This repository includes three C++ projects built during my internship at CODSOFT. Each task focuses on practical application of core programming concepts—input/output, conditionals, loops, functions, and array-based logic.

---------------------------------------------
📌 Table of Contents
---------------------------------------------
1. Task 1 – Number Guessing Game
2. Task 2 – Simple Calculator
3. Task 3 – Tic Tac Toe Game
4. Technologies Used
5. How to Run the Programs
6. Author

=============================================
✅ Task 1 – Number Guessing Game
=============================================

🔍 Description:
A console game where the program randomly selects a number between 1 and 100, and the user has to guess it. The game gives hints whether the guess is too high or too low.

⚙️ Logic Breakdown:
1. Random number generation using:
   srand(time(0));
   int randomnumber = rand() % 100 + 1;

2. Loop until user guesses correctly:
   - Get user input.
   - Compare with the target number.
   - Print appropriate hint.
   - Count number of attempts.

3. Game ends when user guesses the correct number and displays number of tries.

🧠 Concepts Used:
- while(true) loop
- srand() and rand()
- if-else-if conditionals

=============================================
✅ Task 2 – Simple Calculator
=============================================

🔍 Description:
A simple calculator that performs basic arithmetic operations on two numbers. The user can perform multiple calculations in one run.

⚙️ Logic Breakdown:
1. Take inputs:
   - Two numbers (n1 and n2)
   - One operator (+, -, *, /)

2. Use switch statement to decide which operation to perform.

3. Handle special case:
   - Division by zero:
     if (n2 != 0)
       // perform division
     else
       // show error

4. Loop until the user chooses to exit (choice == 'n').

🧠 Concepts Used:
- do-while loop
- switch-case structure
- Input validation
- Arithmetic operations

=============================================
✅ Task 3 – Tic Tac Toe Game
=============================================

🔍 Description:
A two-player terminal-based game of Tic Tac Toe on a 3x3 grid. Players take turns placing X and O until someone wins or the game ends in a draw.

⚙️ Logic Breakdown:
1. Grid structure:
   A 3x3 char array:
   char board[3][3] = {
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
   };

2. Player moves:
   - User enters a number (1–9).
   - Convert that to row and column using:
     row = (slot - 1) / 3;
     col = (slot - 1) % 3;
   - If slot is not taken, place the marker (X or O).

3. Win condition:
   - Check all rows, columns, and diagonals.
   - If 3 identical marks are found, declare the winner.

4. Draw condition:
   - If 9 moves completed and no winner, it's a draw.

5. Swap turns:
   if (currentmarker == 'X') {
       currentmarker = 'O';
       currentplayer = 2;
   } else {
       currentmarker = 'X';
       currentplayer = 1;
   }

🧠 Concepts Used:
- 2D Arrays
- Modular functions (drawboard, placemarker, winner, etc.)
- Turn swapping
- Win/draw detection
- Input validation

=============================================
🛠 Technologies Used
=============================================

- Language: C++
- Compiler: g++
- Interface: Terminal / Command Line

=============================================
▶️ How to Run the Programs
=============================================

1. Open terminal in the directory where files are saved.
2. Compile using g++:
   g++ filename.cpp -o outputname
3. Run the program:
   ./outputname

Example:
g++ tictactoe.cpp -o tictactoe
./tictactoe

=============================================
📁 Folder Structure
=============================================

codsoft-cpp-tasks/
├── guessing_game.cpp       # Task 1
├── calculator.cpp          # Task 2
├── tictactoe.cpp           # Task 3
└── README.md               # Documentation

=============================================
👨‍💻 Author
=============================================

Parth  
B.Tech CSE Student  
CODSOFT Internship – C++ Developer Track  
GitHub: https://github.com/RedHeadedd

=============================================
📌 Final Note
=============================================

These beginner-friendly projects helped strengthen my understanding of logic building, input/output handling, functions, and game development in C++. They are ideal for anyone starting with C++ and want hands-on experience with basic logic-based problems.
