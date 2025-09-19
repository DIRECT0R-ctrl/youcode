Text Analyzer & Search Engine – AymanTextlib
Overview

This project is a mini text analyzer and search engine written in C. It allows the user to input a text and automatically:

Cleans and normalizes the text

Extracts all unique words and counts their occurrences

Displays a dictionary of words with counts

Generates a simple word cloud visualization

Detects palindromes

Searches words exactly or partially

The project is modular, with each functionality implemented in its own file, making the code clean, reusable, and professional.

Features

Text Cleaning

Removes punctuation and numbers

Converts all characters to lowercase

Word Extraction & Dictionary

Extracts all words from cleaned text

Counts occurrences of each word

Maintains a dictionary of unique words

Search

Exact word search

Partial substring search

Analysis

Word cloud (frequency visualization using stars)

Palindrome detection

Modular Architecture

Each function lives in its own .c file with a shared header AymanTextlib.h

File Structure
TextAnalyzer/
├─ include/
│   └─ AymanTextlib.h
├─ src/
│   ├─ main.c
│   ├─ cleanText.c
│   ├─ extractWords.c
│   ├─ dictionary.c
│   ├─ search.c
│   ├─ palindrome.c
│   ├─ wordcloud.c
│   └─ analysis.c

Compilation

From the project root, run:

gcc src/*.c -Iinclude -o textanalyzer


Explanation:

src/*.c → compiles all source files

-Iinclude → tells GCC where to find the header

-o textanalyzer → outputs the executable

Run the program:

./textanalyzer

Usage

Enter text and analyze – cleans, extracts words, shows dictionary, word cloud, palindromes

Show dictionary – lists all words with their occurrences

Exact search – find a specific word

Partial search – find words containing a substring

Quit – exits the program

Example

Input:

aym?nlaksim^72sjkfhsk


Output:

--- Cleaned Text ---
aymnlaksimsjkfhsk

--- Dictionary with counts ---
aymnlaksimsjkfhsk : 1

--- Word Cloud ---
aymnlaksimsjkfhsk : *

--- Palindromes ---
No palindromes found

Notes

Handles up to 2000 characters and 1000 unique words

Uses professional formatting in output 

Thank you for visiting (._.)

~Aymane Laksimi
