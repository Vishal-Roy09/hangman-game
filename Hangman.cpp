#include <iostream>
#include <vector>
#include <algorithm> // for find
#include <cstdlib> // for rand()
#include <ctime> // for srand(time(0))
#include <limits>

int main() {
    // List of words
    std::string nobodys[10] = {"dave", "ian", "carol", "simon", "peter", "sandra", "alan", "steve", "elliot", "keith"};
    
    // Seed random and pick a word
    srand(time(0));
    std::string answer = nobodys[rand() % 10];
    
    std::vector<int> foundCharIndexes;
    int foundCount = 0;
    int lives = 5;
    
    while (foundCount < answer.size() && lives > 0) {
        std::cout << "\nYou currently have: " << lives << " lives." << std::endl;
        
        foundCount = 0; // Reset before searching word
        
        // Display current progress
        for (size_t i = 0; i < answer.length(); ++i) {
            if (std::find(foundCharIndexes.begin(), foundCharIndexes.end(), i) != foundCharIndexes.end()) {
                std::cout << answer[i] << " ";
                foundCount++;
            } else {
                std::cout << "_ ";
            }
        }
        std::cout << std::endl;
        
        // Get user input
        char userChoice;
        bool found = false;
        std::cout << "Choose a character: ";
        std::cin >> userChoice;
        
        // Clear input buffer to avoid unwanted behavior
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        // Check if the guessed letter is in the word
        for (size_t i = 0; i < answer.length(); i++) {
            if (userChoice == answer[i] && std::find(foundCharIndexes.begin(), foundCharIndexes.end(), i) == foundCharIndexes.end()) {
                found = true;
                foundCharIndexes.push_back(i);
            }
        }
        
        // Deduct a life if the guess was incorrect
        if (!found) {
            lives--;
        }
    }
    
    // Game conclusion
    if (lives > 0) {
        std::cout << "\nCongrats! You found the word: " << answer << "!" << std::endl;
    } else {
        std::cout << "\nOh no, you failed! The word was: " << answer << "" << std::endl;
    }
    
    return 0;
}
