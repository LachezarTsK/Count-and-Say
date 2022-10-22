
#include <string>
using namespace std;

class Solution {
    
public:
    string countAndSay(int sequenceValue) const {

        string totalSequence("1");
        for (int count = 1; count < sequenceValue; ++count) {

            string currentSequence;
            for (int i = 0; i < totalSequence.size(); ++i) {

                char currentDigit = totalSequence[i];
                int frequency = 0;
                while (i < totalSequence.size() && totalSequence[i] == currentDigit) {
                    ++i;
                    ++frequency;
                }
                --i;
                //frequency never exceeds a single digit, thus a char is always added.
                currentSequence.push_back('0' + frequency);
                currentSequence.push_back(currentDigit);
            }
            totalSequence = move(currentSequence);
        }
        return totalSequence;
    }
};
