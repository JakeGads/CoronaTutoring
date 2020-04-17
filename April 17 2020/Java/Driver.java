
public class Driver {
    public static void main(String [] args) throws IllegalArgumentException
    {
        int[] scores = {0,0,0,0};
        TestScores temp = new TestScores(scores) ;
        System.out.println("Class 1: " + temp.genAverage());

        scores[0] = 105;
        temp = new TestScores(scores);
        scores[0] = -1;
        temp = new TestScores(scores);
    }
}