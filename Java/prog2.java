public class prog2 {
    public static void main(String args[]) {
        int x=5;
        System.out.println("\nFox x : 5\n");
        show(x);
        x=10;
        System.out.println("\nFox x : 10\n");
        show(x);
    }
    static void show(int x){
        if(x%2==0){
            System.out.println("Even");
        }else{
            System.out.println("Odd");
        }
    }
}
