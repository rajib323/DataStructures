public class prog4 {
    public static void main(String args[]) {
        int x=5;
        System.out.println("\nFox x : 5\nAnswer : "+fact(x)+"\n");
    }
    static int fact(int x){
        if(x==1){
            return x;
        }else{
            return x*fact(x-1);
        }
    }
}