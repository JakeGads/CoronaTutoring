/*
#1. Write a class named TestScores. 
The class constructor should accept an array of test scores as * it's argument. 
The class should have a method that returns the average of the test scores. 
if * any test score in the array is negative or greater than 100, the class should throw an * IllegalArgumentException. 
Demonstrate the class in a program. 


*/

public class TestScores{
    int[] scores;
    
    public TestScores(int[] scores){
        this.scores = scores; // may require a deep copy
        this.checkArray();
    }

    public double genAverage(){
        double sum = 0;
        for(int i = 0; i < this.scores.length; i++){
            sum += this.scores[i];           
        }

        return sum / this.scores.length;
    } 

    private void checkArray() throws InvalidTestScore{
        for(int i = 0; i < this.scores.length; i++){
            if(this.scores[i] > 100 || this.scores[i] < 0){
                throw new InvalidTestScore("All scores must be between 0-100");
            }           
        }
    }
}