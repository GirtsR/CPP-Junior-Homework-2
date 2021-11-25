#include <map>
#include <string>

/**
 * Class that parses a string of text and outputs word count, punctuation mark count and sentence count
 * The parser expects that the text is proper English (with punctuations and no grammatical errors)
 */
class TextParser {
public:
    explicit TextParser(const std::string &text = "");
    /**
     * Parse the text, calculate word count, punctuation mark count and sentence count
     */
    void parseText();
    /**
     * Get the number of words in the text
     * @return number of words
     */
    int getWordCount();
    /**
     * Get the amount of commas, full stops, question marks and exclamation marks in the text
     * @return punctuation mark count
     */
    int getPunctuationMarkCount();
    /**
     * Get the sentence count in the text
     * @return sentence count
     */
    int getSentenceCount();
    /**
     * Return the most common word in the text
     * @return the most common word in the text
     */
    std::string getMostCommonWord();
    /**
     * Get the count of occurrences of the most common word in the text
     * @return occurrence count for the most common word in the text
     */
    int getMostCommonWordCount();
private:
    std::string text_;
    int word_count_;
    int punctuation_mark_count_;
    int sentence_count_;
    std::map<std::string, int> words_;
    std::pair<std::string, int> most_common_word_;
};
