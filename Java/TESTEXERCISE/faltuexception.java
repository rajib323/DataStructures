package TESTEXERCISE;

public class faltuexception extends Exception{
    String x;
    public faltuexception (String str){
        x=str;
    }
    public String whatError(){
        return x;
    }

}
