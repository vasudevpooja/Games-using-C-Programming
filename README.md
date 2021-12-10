# GAMES IN C
Using C programming concepts to develop games such as Chess, Hangman, Maze Runner, and Tic Tac Toe.
1. [CHESS](https://github.com/vasudevpooja/Games-using-C-Programming/blob/main/Chess/Chess.c)
2. [HANGMAN](https://github.com/vasudevpooja/Games-using-C-Programming/blob/main/Hangman/Hangman.c)
3. [MAZE RUNNER](https://github.com/vasudevpooja/Games-using-C-Programming/blob/main/Maze%20Runner/Maze%20Runner.c)
4. [TIC TAC TOE](https://github.com/vasudevpooja/Games-using-C-Programming/blob/main/Tic%20Tac%20Toe/Tic%20Tac%20Toe.c)

# CHESS

**How the game works:**
1.  The chess board is set up for 2 players.
2.  This game follows all the rules of an actual chess game. Player one begins the games (by moving one of the pawns).
3.  If an incorrect move is selected, there is another chance given to the players.
4.  Player 2 then proceeds to make their move, and the game continues till one of the  player's king is in check and there is no possible escape, that is, till either of their kings are checkmated.


# HANGMAN

**How the game works:**
1. This Hangman Game is about guessing letters (A-Z) to form the words. 
2. A hangman game is a common word guessing game in which the player must guess one letter at a time to complete a missing word.
3. This code in c language ends after a certain number of incorrect guesses, when this happens, the player loses. 
4. If the player correctly recognizes all of the letters in the missing title, the game ends. 


# MAZE RUNNER

**How the game works:**
1.  This game is defined in a finite space that is used for the main board. 
2.  The board has two paths from the beginning to the end of the board. 
3.  There is a starting point and a point-to-end path. 
4.  Back on track takes place in this algorithm.
5.  Both forward and backward motion is allowed, and the ball travels throughout the maze. 
6.  After the ball has reached the end of the maze, the time taken to execute the program is displayed.

**Approach and Execution:** 
1. As the graphics.h header file provides access to a simple graphics library, it makes it possible to display various figures on a graphical window.
2. We will also use graphics drivers on the computer using initgraph method of graphics.h library.
3. The conio.h library can be used to control the player (the ball in this case).
4. We can also use the stdlib.h header file for basic functions.
5. An if control statement can be used for the movement of the ball.
6. Several functions like: outtextxy (where the co-ordinates and text (if any) are put in), setcolor (The colour for the graphics design chose, in this case the ball,lines and text), setfillstyle (To set the design for the ball, in our program we have chosen an interleave_fill design for the ball), etc.


# TIC TAC TOE

**How the game works:**
1.  The tic-tac-toe game is played on a 3x3 grid the game is played by two players, who take turns. 
2.  The first player marks moves with a cross, the second with a circle. 
3.  The player who has formed a horizontal, vertical, or diag-onal sequence of three marks wins. 
4.  This program draws the game board.
5.  Then both players must enter a particular number one to nine based on the grid position in order to make a mark X or O.
6.  There is a change of players after every successful move and this process continues till someone is pronounced the winner 
[Winner will be the first player to successfully position three of their marks in a horizontal, vertical, or diagonal row].
