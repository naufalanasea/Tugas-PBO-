import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        Scanner masuk=new Scanner(System.in);
        int nilai;
        System.out.print("Masukkan Nilai : ");
        nilai=masuk.nextInt();
        
        if (nilai>=90){
            System.out.println("Sangat Baik"); 
        }else if (nilai>=80){
             System.out.println("Baik"); 
        }else if (nilai>=70){
             System.out.println("Cukup"); 
        }else if (nilai>=60){
             System.out.println("Kurang"); 
        }else {
            System.out.println("Belajar Lagi Ya"); 
        }    
    }
}