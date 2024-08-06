#ifndef THROWTHEBALL_HPP
#define THROWTHEBALL_HPP

class ThrowTheBall 
{
public:
    int timesThrown(int N, int M, int L) 
    {
        std::vector<int> receptions(N, 0); //Keep track of receptions for each player
        int current = 0; //Start with first player
        int passes = 0; //Counter of number of passes so far, return value.

        //First player starts with ball
        receptions[current]++;

        //While condition until current player has received ball M times
        while (receptions[current] < M) {
            if (receptions[current] % 2 == 1) { // Count of receptions is odd
                // Pass ball L places to right
                current = (current + L) % N;
            } else { // Receptions is even
                // Pass ball L places to left
                current = (current - L + N) % N; // Add N to ensure result is non-negative
            }

            // Increment reception count of current player who receives ball
            receptions[current]++;
            // Inc passes
            passes++;

        }

        return passes;
    }
};

#endif