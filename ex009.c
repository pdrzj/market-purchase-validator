// Compra de um mercado
#include <stdio.h>

int main()
{
//Declaração das variáveis
    float deposito, custo, saldo;//Variáveis do tipo real
    int produto, und, pg, desist;//Variáveis do tipo inteiro

//Solicitação dos dados
    printf("Insira o valor do deposito R$: ");//Tela usuário
    scanf("%f", &deposito);//Leitura do dado informado pelo usuário

    printf("Temos os seguintes produtos:\n");
    printf("// 1 - Coca-Cola R$8,00 \n// 2 - Salgadinho R$ 15,00 \n// 3 - Pastel R$6,50 \n// 4 - Sorvete 3,50\n");
    printf("Digite o numero do produto desejado: ");//Tela usuário
    scanf("%d", &produto);//Leitura do dado informado pelo usuário com base nas opções apresentadas

//Condições de funcionalidade
    if (produto == 1 || produto == 2 || produto == 3 || produto == 4)//Condição estabelecendo que o produto assim atribuido pelo valor de (1 a 4) faça:
    {
        printf("Voce escolheu o produto: %d\n", produto);
        printf("Insira quantas unidades ira levar: ");//Tela usuário
        scanf("%d", &und);//Leitura do dado informado em relação a quantidade
    }
    else//Condição validando apenas os valores de 1 a 4
    {
        printf("Desculpe, nao temos esse produto no momento.");//Retorno caso o usuário diigte outro valor != de 1 a 4
        return (1); // Indica que houve um numero digitado diferente do proposto, então ele encerra o programa e retorna o erro.
    }

//Condições para cálculo de custo do produto
    if (produto == 1)
    {
        custo = und * 8;
    }
    else
    {
        if (produto == 2)
        {
            custo = und * 15;
        }
    }
    if (produto == 3)
    {
        custo = und * 6.50;
    }
    else
    {
        if (produto == 4)
        {
            custo = und * 3.50;
        }
    }

    printf("O valor da sua compra e de: R$ %2.f\n", custo);//Apresentação do valor total da compra!

confirmacao://comando para estrutura de repetição (não usado atualmente)
//Correto seria utilizar While (OBS: mas ainda não sei kkk) 
    printf("Confirmar pagamento?(1)Sim (2)Nao: ");//Tela usuário
    scanf("%d", &pg);//Leitura do dado informado

    saldo = deposito - custo; //Calculo para saber o saldo

    if (saldo < 0)//Condição para que se o saldo for menor que 0 ele não continue o código
    {
        printf("Desculpe, mas o deposito nao foi suficiente para compra.");//Tela usuário caso saldo seja menor que zero
        return (1);//Encerra o código
    }
    else
    {
        if (pg == 1)//Condição para que o pagamento seja dado como confirmado e o saldo seja maior que zero.
        {
            printf("Compra realizada com sucesso! Seu saldo restante e: R$ %.2f\n", saldo);//Tela usuário
            return (0);//Fim da execução
        }
    }

    if (pg == 2)//Condição para que eu não queria confirmar o pagamento ainda
    {
        printf("Deseja desistir da compra?(1)Sim (2)Nao: ");
        scanf("%d", &desist);
    }

    if (desist == 1)
    {
        printf("Compra cancelada!!");
    }
    else {
        if (desist == 2)//Condição para que quando o usuário não quer desistir da compra
        {
            goto confirmacao;//Retorna o usuário para o campo de confirmação novamente
        }
    }

    return(0);
}