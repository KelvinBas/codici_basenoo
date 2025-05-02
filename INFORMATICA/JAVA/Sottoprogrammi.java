/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package sottoprogrammi;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author ospite
 */
public class Sottoprogrammi {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        
        int scelta=0;
        boolean load=false;
        Scanner input=new Scanner(System.in);
        do{
            System.out.println("\nScegli come inserire i dati:\n1. Inserimento manuale\n2. Riempimento casuale\n3. Visualizzazione da sinistra a destra\n4. Visualizzazione da destra a sinistra\n5. Esci");        
            System.out.println("Inserisci scelta");
            scelta=input.nextInt();
               switch (scelta) {
                   case 1:
                       caricamento(1);
                       load=true;
                      
                       
                       break;
                   case 2:
                       
                       break;
                   case 3:
                       
                       break;
                   case 4:
                       
                       break;
                   case 5:
                       
                       break;
                       
               }
        }while(scelta!=5);

        // TODO code application logic here
    }
    
  public static void caricamento (int scelta){
      int N;
      int[] vetA=null;
      System.out.println("Quanti elementi vuoi caricare?");
      Scanner input=new Scanner(System.in);
      do{
      N=input.nextInt();
      }while(N<=0);
      if(scelta==1){
         for(int i=0;i<vetA.length;i++){
             System.out.println("Inserisci il dato");
             vetA[i]=input.nextInt();
             
         }
         }else {
      Random r=new Random();
      for(int i=0;i<vetA.length;i++);
       vetA[i]=r.nextInt(51);
      }
      
      
}
}