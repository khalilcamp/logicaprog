//Pequeno teste e exercicio de Java para logica de programação.

import java.util.Scanner;

public class Main {
    public int[] numeros = {10, 20, 30};

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int pontos = 0;
        System.out.println("Bão? Bem vindo ao jogo foda. Aperte S para continuar.");
        
        String string = scanner.nextLine();
        
        if(string.equals("s")) {
        	System.out.println("Qual a capital do Brasil?");
        	string = scanner.nextLine();
        	if(string.equals("Brasilia")) {
        		pontos++;
        		System.out.println("Muito foda Lek vamo dança. Aperte S para continuar.");
        		System.out.println("Quer continuar? (s) ou desistir? (d)");
        		string = scanner.nextLine();

        		//Proxima pergunta.
        		if (string.equals("s")) {
        			System.out.println("Me vem na mente... Qual o animal que de manhã anda com quatro pés, à tarde com dois e a noite com três?");
        			string = scanner.nextLine();
        			if (string.equals("Homem")) {
        				pontos++;
        				System.out.println("Bacana, vc é inteligenter");
        			} else {
        				System.out.println("Burro. Você acertou " +pontos);
        			}
        		}else {
        			System.out.println("Buxa. Você acertou " +pontos);
        		}
        	}
        } else {
        	System.out.println("O jogo acabou. Você pontuou: "+pontos);
        }

    }
}
