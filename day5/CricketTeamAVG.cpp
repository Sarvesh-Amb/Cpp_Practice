#include <iostream>

// Return a double so the average isn't truncated to an integer
double getAVG(int runs, int innings) {
    if (innings == 0) return 0.0;
    return (double)runs / innings;
}

int main() {
    int playercount;
    std::cout << "Enter number of players (max 10): ";
    std::cin >> playercount;

    if (playercount > 10) {
        playercount = 10; // Cap at 10 to match array size
    }

    // Traditional C-style arrays
    char name[10][50];
    int runs[10];
    int innings[10];

    // Collect data for each player inside the loop
    for (int i = 0; i < playercount; i++) {
        std::cout << "\n--- Player " << (i + 1) << " ---\n";
        std::cout << "Enter player name: ";
        std::cin >> name[i];
        
        std::cout << "Enter no. of runs: ";
        std::cin >> runs[i];
        
        std::cout << "Enter no. of innings: ";
        std::cin >> innings[i];
    }

    // Display summary for all players
    std::cout << "\n\n=== PLAYER STATISTICS ===\n";
    for (int i = 0; i < playercount; i++) {
        double avg = getAVG(runs[i], innings[i]);
        std::cout << "Player: " << name[i] 
                  << " | Runs: " << runs[i] 
                  << " | Innings: " << innings[i] 
                  << " | Avg: " << avg << std::endl;
    }

    return 0;
}