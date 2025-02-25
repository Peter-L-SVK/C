# Number Guessing Game

This is a simple number-guessing game where the player and the computer take turns guessing a randomly chosen number between 0 and 9.

## Features
- The player tries to guess the number chosen by the program.
- The program provides feedback on the guess (correct, close, or incorrect).
- If the player guesses correctly, the roles reverse, and the computer tries to guess a number chosen by the player.
- The game has a limited number of attempts.

## Files
- `guess2.c` - Main game logic.
- `guess2.h` - Header file containing constants and function declarations.
- `funct.c` - Helper functions for input handling and game mechanics.
- `compile.sh` - Bash script to compile the program.

## Compilation
Run the provided script to compile the program:
```bash
chmod +x compile.sh
./compile.sh
```
The script will prompt you to enter a name for the output executable file.

## Running the Game
After compilation, run the program:
```bash
./your_program_name
```
Replace `your_program_name` with the name you entered during compilation.

## Requirements
- GCC compiler
- Bash shell (for the script to work)

## How to Play
1. The program chooses a random number between 0 and 9.
2. You enter a number to guess it.
3. The program provides feedback:
   - If correct, the game switches roles, and the computer guesses.
   - If incorrect, you try again until attempts run out.
4. When it is the computer's turn, answer `Y` (yes) or `N` (no) to indicate whether the computer guessed correctly.

## Notes
- The game has a limit of 3 attempts per round.
- The game ends if all attempts are used up.

Enjoy playing the number-guessing game!
