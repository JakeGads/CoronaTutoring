/*
#2. Write an exception class named InvalidTestScore. 
Modify the TestScores class you wrote * in Programming Challenge 1 so it throws an InvalidTestScore exception if any of the test * scores in the array are invalid. 
*/

public class InvalidTestScore extends IllegalArgumentException{
    public InvalidTestScore(String message){
        super(message);
    }
}