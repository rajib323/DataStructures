import TESTEXERCISE.*;
import java.util.*;

public class errorbanachi {
    public static void main(String args[]){
        Scanner ob =new Scanner(System.in);

        char hello;
        do{
            hello=ob.next().charAt(0);
            try {
                if(hello=='x'){
                    throw new faltuexception("Baal x esche tai bondo kore dilam");
                }
                System.out.println("Ei dekh eta diyechis : " + hello);
            } catch (faltuexception e) {
                // TODO: handle exception
                
                System.out.println(e.whatError());
                
            }
            
        }while(hello!='x');
        System.out.println("Vai re gelm ami");

    }
}