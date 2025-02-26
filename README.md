# hangman-game
# Hangman Game (C++)

This is a simple command-line Hangman game implemented in C++.

## How It Works
- The program randomly selects a word from a predefined list.
- The player has **5 lives** to guess the word, one letter at a time.
- If the guessed letter is in the word, it is revealed in its correct position(s).
- If the guessed letter is incorrect, the player loses a life.
- The game continues until the player correctly guesses the word or runs out of lives.

## Features
- Random word selection from a predefined list.
- User input handling with input validation.
- Displays correct guesses while keeping unguessed letters hidden.
- Keeps track of remaining lives and prevents duplicate guesses.

## How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-Vishal-Roy0/hangman-cpp.git
   ```
2. Navigate to the project folder:
   ```bash
   cd hangman-cpp
   ```
3. Compile the program using g++:
   ```bash
   g++ -o hangman hangman.cpp
   ```
4. Run the program:
   ```bash
   ./hangman
   ```

## Future Improvements
- Add difficulty levels.
- Improve UI with colors and animations.
- Allow users to input custom words.

## License
This project is open-source and available under the MIT License.

---

Happy Coding! 🎉

