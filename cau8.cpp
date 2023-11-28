#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Question {
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;
public:
    Question(string q, string a1, string a2, string a3, string a4, int correct)
    {
        question = q;
        answer1 = a1;
        answer2 = a2;
        answer3 = a3;
        answer4 = a4;
        correctAnswer = correct;
    }
    string getQuestion() { return question; }
    string getAnswer1() { return answer1; }
    string getAnswer2() { return answer2; }
    string getAnswer3() { return answer3; }
    string getAnswer4() { return answer4; }
    int getCorrectAnswer() { return correctAnswer; }
};

int main()
{
    srand(time(NULL)); // seed random number generator
    Question questions[10] = {
        Question("What is the capital of France?", "London", "Paris", "Berlin", "Madrid", 2),
        Question("What is the largest mammal in the world?", "Elephant", "Whale", "Giraffe", "Hippo", 2),
        Question("Who painted the Mona Lisa?", "Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Claude Monet", 1),
        Question("What is the highest mountain in the world?", "Mount Kilimanjaro", "Mount Everest", "Mount Fuji", "Mount Denali", 2),
        Question("What is the smallest planet in our solar system?", "Mercury", "Venus", "Mars", "Jupiter", 1),
        Question("What is the currency of Japan?", "Yuan", "Yen", "Dollar", "Euro", 2),
        Question("What is the largest desert in the world?", "Sahara", "Gobi", "Arctic", "Antarctica", 1),
        Question("What is the chemical symbol for gold?", "Ag", "Au", "Hg","CU",2),
		Question("What is the name of the longest river in the world?", "Amazon", "Nile", "Mississippi", "Yangtze", 2),
Question("Who wrote the novel 'To Kill a Mockingbird'?", "J.K. Rowling", "Ernest Hemingway", "Harper Lee", "Stephen King", 3)
};
int score = 0;
int questionCount = 0;
while (questionCount < 5) { // ask 5 random questions
    int index = rand() % 10;
    Question q = questions[index];
    cout << q.getQuestion() << endl;
    cout << "1. " << q.getAnswer1() << endl;
    cout << "2. " << q.getAnswer2() << endl;
    cout << "3. " << q.getAnswer3() << endl;
    cout << "4. " << q.getAnswer4() << endl;
    int answer;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == q.getCorrectAnswer()) {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong!" << endl;
    }
    questionCount++;
}

cout << "Your final score is: " << score << "/5" << endl;

return 0;
}
