/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package matrix.basenoo;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author ospite
 */
public class MatrixBasenoo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int [][]mastro=null;
      int scelta=0;
      int x=0;
      int y=0;
      boolean gen=false;
      Scanner input = new Scanner(System.in);
      
     
       do{
        System.out.println("\nOPZIONI SCELTA\n1.Genera e stampa matrice\n 2.MaxMin\n3.SommaRiga\n4.Confronta\n5. Esci.\n");
        System.out.println("Inserisci scelta:");
        scelta=input.nextInt();
       
        switch (scelta){
       
            case 1:
             do{  
             System.out.println("inserisci righe della matrice maggiori di 1");
             x=input.nextInt();  
             System.out.println("inserisci colonne della matrice maggiori di 1");
             y=input.nextInt();  
             }while((x<=1)||(y<=1));
             mastro=Genera(x,y);
             gen=true;
            break;
           
             case 2:
              if(gen=true){
              minmax(mastro);}
              else
              System.out.println("Devi generare la matrice");
            break;
           
             case 3:
                 if(gen=true){
                 sommariga(mastro);}
              else
              System.out.println("Devi generare la matrice");
            break;
           
             case 4:
                 if(gen=true){
                 confronta(mastro);
                 }
              else
              System.out.println("Devi generare la matrice");
            break;
           
             case 5:
                 System.out.println("stai uscendo dal programma");
            break;
               
             default:
                 System.out.println("Inserisci scelta correttamente");
            break;
           
           
           
        } }while(scelta!=5);
       
    }
  public static int[][] Genera(int x,int y){
  Scanner input = new Scanner(System.in);
  Random rand=new Random();
  int [][] star= new int[x][y];
  for(int i=0;i<x;i++){
  for(int j=0;j<y;j++){
  star[i][j]=rand.nextInt(51);
  }}
  for(int i=0;i<x;i++){
  System.out.println("");    
  for(int j=0;j<y;j++){
  System.out.print(star[i][j]+"|");
  }}    
  return  star;  
     
}
  public static void minmax(int[][] mastro){
      int rigmax=0;
      int rigmin=0;
      int colmax=0;
      int colmin=0;
      int max=mastro[0][0];
      int min=mastro[0][0];
      for(int i=0;i<mastro.length;i++){
      for(int j=0;j<mastro[i].length;j++){
          if(mastro[i][j]>max){
              max=mastro[i][j];
              rigmax=i;
              colmax=j;
          }
          if(mastro[i][j]<min){
              min=mastro[i][j];
              rigmin=i;
              colmin=j;
          }
          
      }}
      System.out.println("Il valore massimo è:"+max+" e si trova alla riga:"+rigmax+" e alla colonna:"+colmax);
      System.out.println("Il valore minimo è:"+min+" e si trova alla riga:"+rigmin+" e alla colonna:"+colmin);
  }
  public static void sommariga(int[][] mastro){
  int somma=0;
  int [] SR= new int [mastro.length];
  for(int i=0;i<mastro.length;i++){
  for(int j=0;j<mastro[i].length;j++){
      somma=somma+mastro[i][j];
      SR[i]=somma;
      
  }somma=0;
  }
  for(int i=0;i<SR.length;i++){
      System.out.println(SR[i]+"|");
  }




}
  public static void confronta (int [][]mastro) {
  Scanner input = new Scanner(System.in);
  int i=0;
  int j=0;
  String [][] confronta = new String[mastro.length][mastro[i].length];

 Random rand=new Random();
  int [][] matrix2= new int[mastro.length][mastro[i].length];
  for( i=0;i<mastro.length;i++){
  for( j=0;j<mastro[i].length;j++){
  matrix2[i][j]=rand.nextInt(51);
  }}
  for( i=0;i<mastro.length;i++){
  System.out.println("");    
  for( j=0;j<mastro[i].length;j++){
  System.out.print(matrix2[i][j]+"|");
  }}}
}