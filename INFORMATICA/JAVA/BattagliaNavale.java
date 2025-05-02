/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package battaglia.navale;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author ospite
 */
public class BattagliaNavale {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x=0;
        Scanner input = new Scanner(System.in);
        do{System.out.println("Inserisci la grandezza della matrice(minimo 5): ");
        x=input.nextInt();
        }while(x<=5);
        char [][]schema= new char [x][x];
        
        // TODO code application logic here
    }
    public static void genera(int x){
        Scanner input = new Scanner(System.in);
        Random rand=new Random();
        char [][] schema= new char[x][x];
  for(int i=0;i<x;i++){
  for(int j=0;j<x;j++){
  schema[i][j]= '-';
  }}
  do{for(int j=0;j<4;j++){
          int a=rand.nextInt(x);
          int b=rand.nextInt(x);
          schema[a][b]='🚢';}
         }while(schema[a][b]==schema[a][b]);
}
    
  
}  
