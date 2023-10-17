// Verificação de Dados Simples.

int main()
{

    char nome[256];
    // Dever de casa: complementar e pegar o sobrenome.
    char sobrenome[256];
    int anoNascimento;
    int idade;
    int anoAtual = 2023;

    printf("Qual seu nome?\n");
    scanf("%s", &nome);

    printf("Bacana. Seu nome é %s. Qual seu sobrenome?", nome);
    scanf("%s", &sobrenome);

    // O & após idade serve para leitura de string.
    printf("\nShow, bacana. Seu nome é %s %s, qual sua idade agora?\n", nome, sobrenome);
    scanf("%d", &idade);

    printf("Nome: %s\nSobrenome: %s\nIdade: %d\n", nome,sobrenome, idade);

    printf("\nAguarde enquanto lemos seus dados...");

    //Pegar o primeiro caracter do nome. %c serve para apenas um caracter.
    printf("A primeira letra de seu nome é: %c", nome [0]);

    //Validação de Dados.
    if (idade >= 18){
            printf("\nVoce é adulto!");

    }else if(idade >= 12) {
    printf("\nVoce é adolescente!");
    }
    else{
    printf("\nVoce é criança!");
    };
