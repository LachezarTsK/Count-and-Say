
public class Solution {

    public String countAndSay(int sequenceValue) {

        StringBuilder totalSequence = new StringBuilder("1");
        for (int count = 1; count < sequenceValue; ++count) {

            StringBuilder currentSequence = new StringBuilder();
            for (int i = 0; i < totalSequence.length(); ++i) {

                char currentDigit = totalSequence.charAt(i);
                int frequency = 0;
                while (i < totalSequence.length() && totalSequence.charAt(i) == currentDigit) {
                    ++i;
                    ++frequency;
                }
                --i;
                currentSequence.append(frequency).append(currentDigit);
            }
            totalSequence = new StringBuilder(currentSequence);
        }
        return totalSequence.toString();
    }
}
