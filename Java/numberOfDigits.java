import java.util.Scanner;
import java.lang.Math.*;


//Method -1 : O(n)--Time Complexity
// import java.util.Scanner;

// class Number{
//     int num;
//     int findNumberOfDigits(){
//         int count=0;
//         if(num!=0){
//             while(num>0){
//                 num/=10;
//                 count++;
//             }
//             return count;
//         }else{
//             return 1;
//         }

//     }
// }

// class FindDigitsCount{
//     public static void main(String[] args) {
//         Number n=new Number();
//         Scanner sc=new Scanner(System.in);
//         n.num=sc.nextInt();
//         System.out.println("Number of Digits is "+ n.findNumberOfDigits());
//     }
// }


//Method -2 : O(1)-Time Complexity
class findNumberOfDigits {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        double count = 0;
        if (num != 0) {
            count =Math.floor(java.lang.Math.log10(num))+1;
        } else {
            count = 1;
        }
        System.out.println("Number of Digits is " + count);
        sc.close();
    }
}
