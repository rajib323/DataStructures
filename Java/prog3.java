public class prog3 {
    public static void main(String args[]) {
        double a=1,b=2,c=1;
        System.out.format("\nFox x : %.2f x2 + %.2f x + %.2f\nAnswer : ", a,b,c);
        show(a,b,c);
    }
    static void show(double a,double b,double c){
        double d= b * b - 4.0 * a * c;
        if (d> 0.0)
        {
            double r1 = (-b + Math.pow(d, 0.5)) / (2.0 * a);
            double r2 = (-b - Math.pow(d, 0.5)) / (2.0 * a);
            System.out.format("The roots are %.3f and %.3f\n", r1,r2);
        }
        else if (d == 0.0)
        {
            double r1 = -b / (2.0 * a);
            System.out.format("The root is %.3f\n", r1);
        }
        else
        {
            double r = -b / (2 * a);
            double img = Math.sqrt(-d) / (2 * a);
            System.out.format("The roots are %.2f + %.2f i and %.2f - %.2f i\n", r, img,r, img);
        }
    }
}