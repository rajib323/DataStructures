public class prog5 {
    public static void main(String args[]) {
        int x=5;
        System.out.print("\nFox x : "+x+"\nAnswer : ");
        if(x==1)
            System.out.print("0");
        else if(x==2)
            System.out.print("0 1 ");
        else{
            System.out.print("0 1 ");
            fibo(x-2,0,1);
        }
        System.out.println();
    }
    static void fibo(int c,int x,int b){
        if(c>0){
            System.out.print(x+b+" ");
            fibo(c-1,b,x+b);
        }
    }
}