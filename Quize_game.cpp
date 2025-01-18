#include <iostream>
#include <string>

using namespace std;
int main() {
    int finalResult = 0;
    char playAgain;
    int playQuiz(void);
    play:
    finalResult = playQuiz();
    cout << "your total score is " <<finalResult;
    if(finalResult >= 6){
        cout << "you are pass" << endl;
        cout << " do you want to play Quize again  , y or n ?" << endl;
        cin >> playAgain;
        if(playAgain == 'y' || playAgain == 'Y'){
            goto play;
        }
        else {
            cout << " thanku to play Quize" <<endl;
        }
    }
    else{
       cout << "you are fail" << endl; 
       cout << " do you want to play Quize again  , y or n ?" << endl;
        cin >> playAgain;
        if(playAgain == 'y' || playAgain == 'Y'){
            playQuiz();
        }
        else {
            cout << " thanku to play Quize" <<endl;
        }
    }
    }

int playQuiz() {
    char startChar;
    char option;
    int score = 0;
    playInsideFunctioin:
    cout << "------------------- Welcome to the Quiz Game -------------------" << endl;
    cout << "Instructions:" << endl;
    cout << "step 1. The quiz contains 10 questions." << endl;
    cout << "step . You will get 1 mark for each correct answer." << endl;
    cout << "step 3. No negative marking for incorrect answers." << endl;
    cout << "step 4. Enter 'S' to start the quiz." << endl;
    cout << "step 5. please select option a, b , c, d"<<endl;
    cout<< "step 6. if your score >= 6 , you will pASS the quize" << endl;

    cin >> startChar;

    // Check if the user entered 'S' or 's' to start the quiz
    if (startChar == 'S' || startChar == 's') {
        cout << "Q1. What is the capital of India?" << endl;
        cout << "(a) Delhi  (b) Mumbai  (c) Kolkata  (d) Chennai" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score +1;
        }
        else {
            score = score + 0;
        }

        cout << "Q2. Who is the Prime Minister of India?" << endl;
        cout << "(a) Narendra Modi  (b) Adityanath Yogi  (c) Kejriwal  (d) Dr. Manmohan Singh" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
              score = score + 1;
        }
        else {
            score = score + 0;
        }

        cout << "Q3. What is the National Bird of India?" << endl;
        cout << "(a) Sparrow  (b) Peacock  (c) Pigeon  (d) Parrot" << endl;
        cin >> option;
        if (option == 'b' || option == 'B') {
             score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q4. What is the National Animal of India?" << endl;
        cout << "(a) Tiger  (b) Zebra  (c) Lion  (d) Leopard" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q5. What is the National Flower of India?" << endl;
        cout << "(a) Rose  (b) Lily  (c) Lotus  (d) Sunflower" << endl;
        cin >> option;
        if (option == 'c' || option == 'C') {
            score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q6. Who is the Chief Minister of UP?" << endl;
        cout << "(a) Adityanath  (b) Kejriwal  (c) Nitin  (d) Raghunath" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
             score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q7. What is the capital of UP?" << endl;
        cout << "(a) Lucknow  (b) Prayagraj  (c) Etawah  (d) Mirzapur" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q8. What is the capital of Jharkhand?" << endl;
        cout << "(a) Ranchi  (b) Ramgarh  (c) Palamu  (d) Dhanbad" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
        score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q9. Who is the leader of Congress?" << endl;
        cout << "(a) Rahul Gandhi  (b) Sonia Gandhi  (c) Tej Pratap  (d) Mohit Agrawal" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score = score +1;
        }
        else {
            score = score + 0;
        }


        cout << "Q10. Which one of the following states is in the north?" << endl;
        cout << "(a) Delhi  (b) Bangalore  (c) Chennai  (d) Kerala" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
             score = score +1;
        }
        else {
            score = score + 0;
        }

    } 
    
    else {
        cout << "Invalid input. Please restart and enter 'S' to start the quiz." << endl;
       goto playInsideFunctioin;
    }

    return score;
}
