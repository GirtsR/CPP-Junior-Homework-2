#include "text_parser.h"

TextParser::TextParser(const std::string &text) {
    text_ = text;
    word_count_ = 0;
    punctuation_mark_count_ = 0;
    sentence_count_ = 0;
    most_common_word_ = std::make_pair("", 0);
}

void TextParser::parseText() {
    std::string word{};
    for (auto x : text_) {
        if (x == ' ') {
            word_count_++;
            ++words_[word];
            word.clear();
        } else {
            word += x;
        }
        if (x == '.' || x == ',' || x == '?' || x == '!') {
            sentence_count_++;
            punctuation_mark_count_++;
        }
    }
    ++words_[word];
    word_count_++;
    for (const auto &word_frequency : words_) {
        if (word_frequency.second > most_common_word_.second) {
            most_common_word_ = std::make_pair(word_frequency.first, word_frequency.second);
        }
    }
}

int TextParser::getWordCount() {
    return word_count_;
}

int TextParser::getPunctuationMarkCount() {
    return punctuation_mark_count_;
}

int TextParser::getSentenceCount() {
    return sentence_count_;
}

std::string TextParser::getMostCommonWord() {
    return most_common_word_.first;
}

int TextParser::getMostCommonWordCount() {
    return most_common_word_.second;
}
