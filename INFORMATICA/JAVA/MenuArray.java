/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package menu.array;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author ospite
 */
public class MenuArray {

 
    
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        int scelta=0;
      
        boolean generator= false;
        int[]n= new int[20];
        int Npari=0;
        int j=0;
        int Ndispari=0;
        int s=0;
        int somma=0;
        float media=0;
        do{
        System.out.print("\nMENU ARRAY\n1.Genera array casuale\n2.Stampa array\n3.Conta e stampa i numeri pari\n4.Conta e stampa i numeri dispari\n5.Cerca un numero\n6.I valori sopra la media\n0.Esci\n");
        System.out.println("Inserisci scelta: ");
        scelta=input.nextInt();
        switch(scelta){
            case 1:
                Random rand = new Random();
                for(int i=0;i<n.length;i++){
                n[i]=rand.nextInt(21);
            }
                generator= true;
                
                break;

            case 2:
                if(generator==true){
                for(int i=0;i<n.length;i++) {
                if(i==0)
                    System.out.print("Stampa Vettore\n N->"+n[i]+"|");
                
                else
                    
                    System.out.print(n[i]+"|");
                    
            }
                }  else
                    System.out.println("Devi generare prima array!");
                break;
            case 3:
                for(int i=0;i<n.length;i++) {
                    if(n[i]%2==0) {
                        System.out.println(n[i]);
                        Npari=Npari+1;}
                    else
                      Npari=Npari+0;
                        
                }
                System.out.println("I numeri pari sono: " +Npari);
                
                
                break;
            case 4:
                for(int i=0;i<n.length;i++) {
                    if(n[i]%2!=0) {
                        System.out.println(n[i]);
                        Ndispari=Ndispari+1;}
                    else 
                        Ndispari=Ndispari+0;
                        
                }
                System.out.println("I numeri dispari sono: " +Ndispari);
                
                
                break;
            case 5:
                System.out.println("Inserisci un numero da cercare");
                s=input.nextInt();
                for(int i=0;i<n.length;i++) {
                if(n[i]==s) 
                    j=j+1;
                    
                else
                    j=j+0;
                }
                if(j>0)
                    System.out.println("Il numero inserito si trova nella array");
                else
                    System.out.println("Il numero inserito non si trova nella array");
                break;
            case 6:
                for(int i=0;i<n.length;i++) {
                somma=somma+n[i]; }           
                media=somma/20;
                System.out.println("La media è: " +media);
                for(int i=0;i<n.length;i++) {
                    if(n[i]>media)
                    System.out.println(n[i]);
                }; 
              
                break;
                
            case 0:
                
                break;
                        
            default:
                System.out.println("Inserisci una scelta valida");
                break;
        }
   
     } while(scelta!=0);
  }
    
}
