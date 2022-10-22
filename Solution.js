
/**
 * @param {number} sequenceValue
 * @return {string}
 */
var countAndSay = function (sequenceValue) {

    let totalSequence = [1];
    for (let count = 1; count < sequenceValue; ++count) {

        const currentSequence = [];
        for (let i = 0; i < totalSequence.length; ++i) {

            const currentDigit = totalSequence[i];
            let frequency = 0;
            while (i < totalSequence.length && totalSequence[i] === currentDigit) {
                ++i;
                ++frequency;
            }
            --i;
            currentSequence.push(frequency);
            currentSequence.push(currentDigit);
        }
        totalSequence = Array.from(currentSequence);
    }
    return totalSequence.join('');
};
