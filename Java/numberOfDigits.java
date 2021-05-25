import java.util.Scanner;

class Number{
    int num;
    int findNumberOfDigits(){
        int count=0;
        if(num!=0){
            while(num>0){
                num/=10;
                count++;
            }
            return count;
        }else{
            return 1;
        }
        
    }
}

class FindDigitsCount{
    public static void main(String[] args) {
        Number n=new Number();
        Scanner sc=new Scanner(System.in);
        n.num=sc.nextInt();
        System.out.println("Number of Digits is "+ n.findNumberOfDigits());
    }
}