class demo{
    static void meth1(){
        try{
            System.out.println("Inside method 1");
            throw new RuntimeException("Demo");
        }
        finally{
System.out.println("Method 1's finally");
        }
    }
    static void meth2(){
        try{
            System.out.println("Inside method 2");
            return;
        }
        finally{
            System.out.println("Method 2's finally");
    }
}
static void meth3(){
    try{
        System.out.println("Inside method 3");
        
    }
    finally{
        System.out.println("Method 3's finally");
}
}


public static void main(String[] args)
{
    try{
        meth1();
    }catch(Exception e){
        System.out.println("Caught");
    }
    meth2();
    meth3();
}
}