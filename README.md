# cs50-readability
A C program that analyzes text and outputs its U.S. grade level using the Coleman–Liau index. This project was built as part of CS50x (Introduction to Computer Science by Harvard University).

📖 Overview

The program takes a block of text as input, counts the number of letters, words, and sentences, and then calculates the readability score using the Coleman–Liau formula. Based on the score, it reports the approximate U.S. grade level needed to understand the text.

Example:
	•	Input: “Congratulations! Today is your day. You’re off to Great Places! You’re off and away!”
	•	Output: Grade 3

🛠 Features
	•	Counts letters, words, and sentences in user-provided text.
	•	Calculates readability using the Coleman–Liau index.
	•	Returns grade level (e.g., “Grade 8”) or “Before Grade 1” if score is below first grade.

🚀 How to Run
1.	Compile the program:
    make readability

2.	Run the program:
     ./readability

3.	Enter a block of text when prompted.

📂 Files
	•	readability.c – main source code
	•	README.md – project documentation
