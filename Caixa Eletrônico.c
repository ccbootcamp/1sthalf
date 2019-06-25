/*
CAIXA ELETRONICO
    Trabalho 2.
    Profº Nilton Cézar de Paula;
    Alunos:
    Gustavo de Carvalho RGM: 41435;
    Jose Carlos da Silva Filho RGM: 42426;
    Luis Eduardo Souza Vasconcelos RGM: 41445;
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int menuP=0, menuG=0, menuAbastecer=0;/*Menus*/
    int ced500=0, ced150=0, ced50=0, ced20=0, ced10=0, ced5=0, ced2=0, ced1=0, cedgeral=0;/*Cédulas*/
    int cont500=0, cont150=0, cont50=0, cont20=0, cont10=0, cont5=0, cont2=0, cont1=0;/*Contadores das cédulas de reabastecimento*/
    int vced500=0, vced150=0, vced50=0, vced20=0, vced10=0, vced5=0, vced2=0, vced1=0;/*Valor das cédulas*/
    int vsaque,/*Valor do saque*/vtsaque=0,/*Valor total do saque*/vrestante=0, vsaldoexist=0, vtsaqueaux=0;//saldo existente no caixa;
    unsigned long long cpf=0;
    int d1=0, d2=0, d3=0, d4=0, d5=0, d6=0, d7=0, d8=0, d9=0, d10=0, d11=0, dx=0;/*Separadoras do CPF*/
    int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;//separadores de digito para o sistema extenso
    int cpf1=0, cpf2=0;/*Digitos verificadores*/
    //iniciacao das quantidade de cedula de cada valor
    ced500= 100;
    ced150= 200;
    ced50= 400;
    ced20= 800;
    ced10= 1600;
    ced5= 3200;
    ced2= 6400;
    ced1= 12800;
    //quantidade geral de cedulas existentes no caixa
    cedgeral= ced500 + ced150 + ced50 + ced20 + ced10 + ced5 + ced2 + ced1;
    //quantidade do valor total existente no caixa
    vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1*1);
    //inicio do menu
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t ________  ______         __    __  ______  __     ________  ______   __    __ \n");
    printf("\t\t/        |/      \\       /  \\  /  |/      |/  |   /        |/      \\ /  \\  /  |\n");
    printf("\t\t$$$$$$$$//$$$$$$  |      $$  \\ $$ |$$$$$$/ $$ |   $$$$$$$$//$$$$$$  |$$  \\ $$ |\n");
    printf("\t\t   $$ |  $$____$$ |      $$$  \\$$ |  $$ |  $$ |      $$ |  $$ |  $$ |$$$  \\$$ |\n");
    printf("\t\t   $$ |   /    $$/       $$$$  $$ |  $$ |  $$ |      $$ |  $$ |  $$ |$$$$  $$ |\n");
    printf("\t\t   $$ |  /$$$$$$/        $$ $$ $$ |  $$ |  $$ |      $$ |  $$ |  $$ |$$ $$ $$ |\n");
    printf("\t\t   $$ |  $$ |_____       $$ |$$$$ | _$$ |_ $$ |_____ $$ |  $$ \\__$$ |$$ |$$$$ |\n");
    printf("\t\t   $$ |  $$       |      $$ | $$$ |/ $$   |$$       |$$ |  $$    $$/ $$ | $$$ |\n");
    printf("\t\t   $$/   $$$$$$$$/       $$/   $$/ $$$$$$/ $$$$$$$$/ $$/    $$$$$$/  $$/   $$/ \n");
    printf("\n\n\n\t\t\t\tAPERTE QUALQUER TECLA PARA CONTINUAR");
    system("pause > nul");
    system ("cls");
    do{
        printf ("\t\t\t|======================|\n");
        printf ("\t\t\t|   CAIXA ELETRÔNICO   |\n");
        printf ("\t\t\t|      TRABALHO 2      |\n");
        printf ("\t\t\t|     Profº Nilton     |\n");
        printf ("\t\t\t|======================|\n\n\n");
        printf ("[1] - Saque\n[2] - Menu Gerente\n[3] - Finalizar Seção\n");
        printf("SELECIONE UMA DAS OPÇÕES ACIMA: ");
        scanf("%d",&menuP);
        switch (menuP){
            case 1:/*MENU Saque*/
                system ("cls");
                printf ("\t\t\t|=========================|\n");
                printf ("\t\t\t|      MENU DE SAQUE      |\n");
                printf ("\t\t\t|=========================|\n");
                //VERIFICACAO DE CPF
                do{
                    //CRITICA DE DADOS CASO CPF PASSAR DOS 11 DIGITOS
                    do{
                        printf ("Insira seu CPF: ");
                        scanf("%llu",&cpf);
                        if(cpf>99999999999){
                            system("cls");
                            system("color 4");
                            printf("ERRO!!\n");
                            printf("\nO CPF SÓ PODE TER 11 DÍGITOS\n\n");
                        }
                    }while (cpf>99999999999);
                    //separar digitos do CPF
                    d11 =(cpf%10);
                    d10 =(cpf/10)%10;
                    d9 = (cpf/100)%10;
                    d8 = (cpf/1000)%10;
                    d7 = (cpf/10000)%10;
                    d6 = (cpf/100000)%10;
                    d5 = (cpf/1000000)%10;
                    d4 = (cpf/10000000)%10;
                    d3 = (cpf/100000000)%10;
                    d2 = (cpf/1000000000)%10;
                    d1 = (cpf/10000000000)%10;
                    system ("cls");
                    printf ("\t\t\t|=========================|\n");
                    printf ("\t\t\t|      MENU DE SAQUE      |\n");
                    printf ("\t\t\t|=========================|\n");
                    printf ("O CPF entrado foi: %d%d%d.%d%d%d.%d%d%d-%d%d\n\n", d1,d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
                    //VERIFICACAO POR SOMA DOS DIGITOS DO CPF
                    dx= d1 + d2 + d3 + d4+ d5 + d6 + d7 + d8 + d9 + d10 + d11;

                    if ((cpf==00000000000)||(cpf==11111111111)||(cpf==22222222222)||(cpf==33333333333)||(cpf==44444444444)||(cpf==55555555555)||(cpf==66666666666)||(cpf==77777777777)||(cpf==88888888888)||(cpf==99999999999)){
                        system ("color 4");
                        printf("Não existe CPF com números iguais.\n");

                    }else if((cpf!=00000000000)&&(cpf!=11111111111)&&(cpf!=22222222222)&&(cpf!=33333333333)&&(cpf!=44444444444)&&(cpf!=55555555555)&&(cpf!=66666666666)&&(cpf!=77777777777)&&(cpf!=88888888888)&&(cpf1=99999999999)){
                        //CALCULO DIGITO VERIFICADOR 1
                        cpf1= ((10*d1) + (9*d2) + (8*d3) + (7*d4) + (6*d5) + (5*d6) + (4*d7) + (3*d8) + (2*d9))% 11;
                        cpf1= 11 - cpf1;
                        if (cpf1>9){
                            cpf1= 0;
                        }
                        //CALCULO DIGITO VERIFICADOR 2
                        cpf2=((11*d1) + (10*d2) + (9*d3) + (8*d4) + (7*d5) + (6*d6) + (5*d7) + (4*d8) + (3*d9) + (2*cpf1)) % 11;
                        cpf2= 11 - cpf2;
                        if (cpf2>9){
                            cpf2= 0;
                        }
                        //CONDICAO CASO N ATENDER A CONDICAO POR VEFIRICACAO DO DIGITO VERICADOR
                        if((d10!=cpf1)&&(d11!=cpf2)){
                            system ("color 4");
                            printf("CPF INVÁLIDO ENTRE NOVAMENTE\n");
                        //CONDICAO CASO N ATENDER A VERIFICAR POR SOMA DE DIGITOS DO CPF
                        }else if ((dx!=10)&&(dx!=11)&&(dx!=12)&&(dx!=21)&&(dx!=22)&&(dx!=23)&&(dx!=32)&&(dx!=33)&&(dx!=34)&&(dx!=43)&&(dx!=44)&&(dx!=45)&&(dx!=54)&&(dx!=55)&&(dx!=56)&&(dx!=65)&&(dx!=66)&&(dx!=67)&&(dx!=76)&&(dx!=77)&&(dx!=78)&&(dx!=87)&&(dx!=88)){
                            system ("color 4");
                            printf("CPF INVÁLIDO, ENTRE NOVAMENTE\n");
                        }
                    }
                }while(((d10!=cpf1)&&(d11!=cpf2))||((dx!=10)&&(dx!=11)&&(dx!=12)&&(dx!=21)&&(dx!=22)&&(dx!=23)&&(dx!=32)&&(dx!=33)&&(dx!=34)&&(dx!=43)&&(dx!=44)&&(dx!=45)&&(dx!=54)&&(dx!=55)&&(dx!=56)&&(dx!=65)&&(dx!=66)&&(dx!=67)&&(dx!=76)&&(dx!=77)&&(dx!=78)&&(dx!=87)&&(dx!=88)));
                //FIM DA VERIFICACAO DE CPF
                if(((d10==cpf1)&&(d11==cpf2))||((dx!=10)&&(dx!=11)&&(dx!=12)&&(dx!=21)&&(dx!=22)&&(dx!=23)&&(dx!=32)&&(dx!=33)&&(dx!=34)&&(dx!=43)&&(dx!=44)&&(dx!=45)&&(dx!=54)&&(dx!=55)&&(dx!=56)&&(dx!=65)&&(dx!=66)&&(dx!=67)&&(dx!=76)&&(dx!=77)&&(dx!=78)&&(dx!=87)&&(dx!=88))){
                    system ("color A");
                    printf ("CPF VALIDADO COM SUCESSO!\n");
                    printf ("Aperte qualquer tecla para continuar e inserir o valor do saque...");
                    system ("pause > nul");
                    system ("cls");
                    system("color 7");
                    printf ("\t\t\t|=========================|\n");
                    printf ("\t\t\t|      MENU DE SAQUE      |\n");
                    printf ("\t\t\t|=========================|\n");
                    do{
                        printf ("\nInsira o valor do saque: R$");
                        scanf("%d",&vsaque);
                        if((vsaque<=0)||(vsaque>vsaldoexist)){
                            printf ("\nValor de saque inválido!!\n");
                        }
                    }while ((vsaque<=0)||(vsaque>vsaldoexist));
                        //processamento para saque
                    vrestante=vsaque;//vrestante irá ser subtraido de acordo com a quantidade de cedulas usada de um determinado valor ex(500,150,50..)
                    //PREOCESSAMENTO PARA CEDULAS DE 500
                    while((ced500>0)&&(vrestante>=500)){
                        ced500--;//ATUALIZACAO DA QUANTIDADE DE CEDULAS DE 500
                        vrestante=vrestante-500;//ATUALIZACAO DO VALOR QUE FALTA PARA SER SACADO
                        vtsaque=vtsaque+500;//ATUALIZACAO PARA O VALOR TOTAL SACADO PELO CLIENTE
                        vsaldoexist=vsaldoexist-500;//ATUALIZACAO DO VALOR TOTAL QUE EXISTE NO CAIXA
                        vced500++;//ATUALIZACAO DA QUANTIDADE DE CEDULAS DE 500 Q FORAM UTILIZADAS PARA MOSTRA MAIS ABAIXO
                        cedgeral--;//ATUALIZACAO DA QUANTIDADE DE CEDULAS GERAIS EXISTENTES
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 150
                    while((ced150>0)&&(vrestante>=150)){
                        ced150--;                   //O MESMO PARA O QUE ESTA ACIMA POREM COM O VALOR DE 150 E ASSIM SUCESSIVAMENTE
                        vrestante=vrestante-150;
                        vtsaque=vtsaque+150;
                        vsaldoexist=vsaldoexist-150;
                        vced150++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 50
                    while((ced50>0)&&(vrestante>=50)){
                        ced50--;
                        vrestante=vrestante-50;
                        vtsaque=vtsaque+50;
                        vsaldoexist=vsaldoexist-50;
                        vced50++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 20
                    while((ced20>0)&&(vrestante>=20)){
                        ced20--;
                        vrestante=vrestante-20;
                        vtsaque=vtsaque+20;
                        vsaldoexist=vsaldoexist-20;
                        vced20++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 10
                    while((ced10>0)&&(vrestante>=10)){
                        ced10--;
                        vrestante=vrestante-10;
                        vtsaque=vtsaque+10;
                        vsaldoexist=vsaldoexist-10;
                        vced10++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 5
                    while((ced5>0)&&(vrestante>=5)){
                        ced5--;
                        vrestante=vrestante-5;
                        vtsaque=vtsaque+5;
                        vsaldoexist=vsaldoexist-5;
                        vced5++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 2
                    while((ced2>0)&&(vrestante>=2)){
                        ced2--;
                        vrestante=vrestante-2;
                        vtsaque=vtsaque+2;
                        vsaldoexist=vsaldoexist-2;
                        vced2++;
                        cedgeral--;
                    }
                    //PREOCESSAMENTO PARA CEDULAS DE 1
                    while((ced1>0)&&(vrestante>=1)){
                        ced1--;
                        vrestante=vrestante-1;
                        vtsaque=vtsaque+1;
                        vsaldoexist=vsaldoexist-1;
                        vced1++;
                        cedgeral--;
                    }
                    //cedulas usadas com verificacao para printar apenas as cédulas que foram realmente usadas no saque
                    if(vced500!=0)
                        printf("\nCédulas de R$500,00 usadas: %d ",vced500);
                    if(vced150!=0)
                        printf("\nCédulas de R$150,00 usadas: %d ",vced150);
                    if(vced50!=0)
                        printf("\nCédulas de R$50,00 usadas: %d ",vced50);
                    if(vced20!=0)
                        printf("\nCédulas de R$20,00 usadas: %d ",vced20);
                    if(vced10!=0)
                        printf("\nCédulas de R$10,00 usadas: %d ",vced10);
                    if(vced5!=0)
                        printf("\nCédulas de R$5,00 usadas: %d ",vced5);
                    if(vced2!=0)
                        printf("\nCédulas de R$2,00 usadas: %d ",vced2);
                    if(vced1!=0){
                        printf("\nCédulas de R$1,00 usadas: %d ",vced1);
                    }
                    //INICIO DO SISTEMA EXTENSO..........................
                    n6 = (vsaque%10);//Primeiro digito
                    n5 = ((vsaque/10)%10);//Segundo digito
                    n4 = ((vsaque/100)%10);//Terceiro digito
                    n3 = ((vsaque/1000)%10);//Quarto digito
                    n2 = ((vsaque/10000)%10);//Quinto digito
                    n1 = ((vsaque/100000)%10);//Sexto digito
                    //INICIO DO MILHAR
                    //CENTENA DE MILHAR
                    printf("\n\nFOI SACADO:R$%d,00",vsaque);
                    printf(" (");
                    if(n1>0){
                        if((n1==1)&&(n2==0)&&(n3==0)){
                            printf("CEM ");
                        }else if((n1==1)&&(n2>=0)&&(n3>=0)){
                            printf("CENTO E ");
                        }
                    }
                    //DEZENA DE MILHAR
                    if (n2>=0)
                    {
                        //QUANDO FOR 0 NAO EXECUTAR NENHUMA LINHA DE PRINTF PARA SER COMPATIVEL COM AS LINHAS DE CODIGOS ABAIXO
                        if (n2==0)
                        {

                        //MAIOR DO QUE ZERO E A UNIDADE DE MILHAR IGUAL A 0
                        }else if ((n2>0)&&(n3==0)){
                            switch (n2)
                            {
                                case 9:
                                    printf("NOVENTA ");
                                    break;
                                case 8:
                                    printf("OITENTA ");
                                    break;
                                case 7:
                                    printf("SETENTA ");
                                    break;
                                case 6:
                                    printf("SESSENTA ");
                                    break;
                                case 5:
                                    printf("CINQUENTA ");
                                    break;
                                case 4:
                                    printf("QUARENTA ");
                                    break;
                                case 3:
                                    printf("TRINTA ");
                                    break;
                                case 2:
                                    printf("VINTE ");
                                    break;
                                case 1:
                                    printf("DEZ ");
                                    break;
                            }
                        //QUANDO A UNIDADE DE MILHAR FOR MAIOR DO QUE 0
                        }else if((n2>0)&&(n3>0)){
                            switch (n2)
                            {
                                case 9:
                                    printf("NOVENTA E ");
                                    break;
                                case 8:
                                    printf("OITENTA E ");
                                    break;
                                case 7:
                                    printf("SETENTA E ");
                                    break;
                                case 6:
                                    printf("SESSENTA E ");
                                    break;
                                case 5:
                                    printf("CINQUENTA E ");
                                    break;
                                case 4:
                                    printf("QUARENTA E ");
                                    break;
                                case 3:
                                    printf("TRINTA E ");
                                    break;
                                case 2:
                                    printf("VINTE E ");
                                    break;
                                case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                    if(n3>5){
                                        printf("DEZ");
                                    }
                                    switch(n3)
                                    {
                                        case 1:
                                            printf("ONZE ");
                                            break;
                                        case 2:
                                            printf("DOZE ");
                                            break;
                                        case 3:
                                            printf("TREZE ");
                                            break;
                                        case 4:
                                            printf("QUATORZE ");
                                            break;
                                        case 5:
                                            printf("QUINZE ");
                                            break;
                                        case 0:
                                            printf("DEZ ");
                                            break;
                                    }
                                    break;
                            }
                        }
                        //UNIDADE DE MILHAR
                        if(n3>=0)
                        {
                            if(n3==0){

                            }
                            //COMBINACAO COM O "DEZ" DAS LINHAS ACIMA "IF(N3>5)"
                            if((n3>0)&&(n2==1))
                            {
                                switch (n3)
                                {
                                    case 6:
                                        printf("ESSEIS ");
                                        break;
                                    case 7:
                                        printf("ESSETE ");
                                        break;
                                    case 8:
                                        printf("OITO ");
                                        break;
                                    case 9:
                                        printf("ENOVE ");
                                        break;
                                }
                            //PRÓPIA UNIDADE DE MILHAR PARA SATISFAZER QUANDO N2==0 OU N2>0 E N3>0
                            }else if(n3>0){
                                switch (n3)
                                {
                                    case 1:
                                        printf("UM ");
                                        break;
                                    case 2:
                                        printf("DOIS ");
                                        break;
                                    case 3:
                                        printf("TRES ");
                                        break;
                                    case 4:
                                        printf("QUATRO ");
                                        break;
                                    case 5:
                                        printf("CINCO ");
                                        break;
                                    case 6:
                                        printf("SEIS ");
                                        break;
                                    case 7:
                                        printf("SETE ");
                                        break;
                                    case 8:
                                        printf("OITO ");
                                        break;
                                    case 9:
                                        printf("NOVE ");
                                        break;
                                }
                            }
                        }
                    }
                    //CASO A PARTE DA CENTENA FOR ZERADA
                    if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4==0)&&(n5==0)&&(n6==0))){
                        printf("MIL ");
                    //CASO A PARTE DA CENTENA TIVER ALGUM VALOR
                    }else if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4!=0)||(n5!=0)||(n6!=0))){
                        printf("MIL E ");
                    }
                    //FIM DO MILHAR
                    //INICIO DA CENTENA
                    //CENTENA
                    if(n4>0){
                        if(n4==0){

                        }
                        //QUANDO DEZENA E UNIDADE ESTIVEREM ZERADAS
                        if((n4>0)&&(n5==0)&&(n6==0)){
                            switch (n4)
                            {
                                case 1:
                                    printf("CEM ");
                                    break;
                                case 2:
                                    printf("DUZENTOS ");
                                    break;
                                case 3:
                                    printf("TREZENTOS ");
                                    break;
                                case 4:
                                    printf("QUATROCENTOS ");
                                    break;
                                case 5:
                                    printf("QUINHENTOS ");
                                    break;
                                case 6:
                                    printf("SEISCENTOS ");
                                    break;
                                case 7:
                                    printf("SETECENTOS ");
                                    break;
                                case 8:
                                    printf("OITOCENTOS ");
                                    break;
                                case 9:
                                    printf("NOVECENTOS ");
                                    break;
                            }
                        //QUANDO DEZENA OU UNIDADE FOR MAIOR DO QUE ZERO
                        }else if ((n4>0)&&((n5>0)||(n6>0))){
                            switch (n4)
                            {
                                case 1:
                                    printf("CENTO E ");
                                    break;
                                case 2:
                                    printf("DUZENTOS E ");
                                    break;
                                case 3:
                                    printf("TREZENTOS E ");
                                    break;
                                case 4:
                                    printf("QUATROCENTOS E ");
                                    break;
                                case 5:
                                    printf("QUINHENTOS E ");
                                    break;
                                case 6:
                                    printf("SEISCENTOS E ");
                                    break;
                                case 7:
                                    printf("SETECENTOS E ");
                                    break;
                                case 8:
                                    printf("OITOCENTOS E ");
                                    break;
                                case 9:
                                    printf("NOVECENTOS E ");
                                    break;
                            }
                        }
                    }
                    //FIMCENTENA
                    //DEZENA
                    if(n5>=0){
                        if(n5==0){

                        }
                        if((n5>0)&&(n6>=0)){
                            switch (n5)
                            {
                                case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                    if(n6>5){
                                        printf("DEZ");
                                    }
                                    switch (n6)
                                    {
                                        case 1:
                                            printf("ONZE ");
                                            break;
                                        case 2:
                                            printf("DOZE ");
                                            break;
                                        case 3:
                                            printf("TREZE ");
                                            break;
                                        case 4:
                                            printf("QUATORZE ");
                                            break;
                                        case 5:
                                            printf("QUINZE ");
                                            break;
                                        case 0:
                                            printf("DEZ ");
                                            break;
                                    }
                                    break;
                                case 2:
                                    printf("VINTE ");
                                    break;
                                case 3:
                                    printf("TRINTA ");
                                    break;
                                case 4:
                                    printf("QUARENTA ");
                                    break;
                                case 5:
                                    printf("CINQUENTA ");
                                    break;
                                case 6:
                                    printf("SESSENTA ");
                                    break;
                                case 7:
                                    printf("SETENTA ");
                                    break;
                                case 8:
                                    printf("OITENTA ");
                                    break;
                                case 9:
                                    printf("NOVENTA ");
                                    break;

                            }
                        }
                    }
                    //FIMDEZENA
                    //UNIDADE
                    if(n6>=0){
                        if(n6==0){

                        }
                        if((n6>0)&&(n5==1)){
                            switch (n6)
                            {
                                case 6:
                                    printf("ESSEIS ");
                                    break;
                                case 7:
                                    printf("ESSETE ");
                                        break;
                                case 8:
                                    printf("OITO ");
                                    break;
                                case 9:
                                    printf("ENOVE ");
                                    break;
                            }
                        }else if(n6>0){
                            switch (n6)
                            {
                                case 1:
                                    printf("UM ");
                                    break;
                                case 2:
                                    printf("DOIS ");
                                    break;
                                case 3:
                                    printf("TRES ");
                                    break;
                                case 4:
                                    printf("QUATRO ");
                                    break;
                                case 5:
                                    printf("CINCO ");
                                    break;
                                case 6:
                                    printf("SEIS ");
                                    break;
                                case 7:
                                    printf("SETE ");
                                    break;
                                case 8:
                                    printf("OITO ");
                                    break;
                                case 9:
                                    printf("NOVE ");
                                    break;
                            }
                        }
                    }
                    if(vsaque==1){
                        printf("REAL)\n");
                    }else{
                        printf("REAIS)\n");
                    }
                    printf("\n\nPressione qualquer tecla para realizar outra operação...\n");
                    system("pause >nul ");
                    //ATUALIZACAO DO VALOR DE CEDULAS UTILIZADAS PARA REALIZAR OUTRA OPERACAO
                    vced500=0;
                    vced150=0;
                    vced50=0;
                    vced20=0;
                    vced10=0;
                    vced5=0;
                    vced2=0;
                    vced1=0;
                    system("cls");
                }
                break;/*Break do Menu saque*/

            case 2:/*Gerente*/
                do{
                    system ("cls");
                    printf ("\t\t|======================|\n");
                    printf ("\t\t|   CAIXA ELETRÔNICO   |\n");
                    printf ("\t\t|      TRABALHO 2      |\n");
                    printf ("\t\t|     Profº Nilton     |\n");
                    printf ("\t\t|======================|\n\n");
                    printf ("\t\t|======================|\n");
                    printf ("\t\t|     MENU GERENTE     |\n");
                    printf ("\t\t|======================|\n");
                    printf ("[1] - Valor total sacado\n[2] - Valor do saldo existente\n[3] - Quantidade de cédulas existentes\n");
                    printf ("[4] - Abastecer o caixa eletrônico\n[5] - Voltar ao menu principal\n");
                    printf ("Escolha uma das opções acima: ");
                    scanf ("%d", &menuG);
                    switch (menuG){
                        //VALOR TOTAL SACADO PELO CLIENTE
                        case 1:
                            printf ("\nVALOR TOTAL SACADO\n");
                            if ((vtsaque>=0)&&(vtsaque<=999999)){
                                printf ("\nO valor total sacado foi de: R$%d,00",vtsaque);
                            }else{
                                vtsaqueaux= vtsaque;
                                vtsaque=0;
                                vtsaque=vtsaqueaux-999999;
                                printf("\nO valor total sacado excedeu o limite de (999999), portanto foi reiniciado para 0...\n");
                                printf("\nO valor total sacado foi de: R$%d",vtsaque);
                            }
                            n6 = (vtsaque%10);//Primeiro digito
                            n5 = ((vtsaque/10)%10);//Segundo digito
                            n4 = ((vtsaque/100)%10);//Terceiro digito
                            n3 = ((vtsaque/1000)%10);//Quarto digito
                            n2 = ((vtsaque/10000)%10);//Quinto digito
                            n1 = ((vtsaque/100000)%10);//Sexto digito
                            //INICIO DO MILHAR
                            //CENTENA DE MILHAR
                            printf(" (");
                            if(n1>0){
                                if((n1==1)&&(n2==0)&&(n3==0)){
                                    printf("CEM ");
                                }else if((n1==1)&&(n2>=0)&&(n3>=0)){
                                    printf("CENTO E ");
                                }
                                if((n1==2)&&(n2==0)&&(n3==0)){
                                    printf("DUZENTOS ");
                                }else if((n1==2)&&(n2>=0)&&(n3>=0)){
                                    printf("DUZENTOS E ");
                                }
                                if((n1==3)&&(n2==0)&&(n3==0)){
                                    printf("TREZENTOS ");
                                }else if((n1==3)&&(n2>=0)&&(n3>=0)){
                                    printf("TREZENTOS E ");
                                }
                                if((n1==4)&&(n2==0)&&(n3==0)){
                                    printf("QUATROCENTOS ");
                                }else if((n1==4)&&(n2>=0)&&(n3>=0)){
                                    printf("QUATROCENTOS E ");
                                }
                                if((n1==5)&&(n2==0)&&(n3==0)){
                                    printf("QUINHENTOS ");
                                }else if((n1==5)&&(n2>=0)&&(n3>=0)){
                                    printf("QUINHENTOS E ");
                                }
                                if((n1==6)&&(n2==0)&&(n3==0)){
                                    printf("SEISCENTOS ");
                                }else if((n1==6)&&(n2>=0)&&(n3>=0)){
                                    printf("SEISCENTOS E ");
                                }
                                if((n1==7)&&(n2==0)&&(n3==0)){
                                    printf("SETECENTOS ");
                                }else if((n1==7)&&(n2>=0)&&(n3>=0)){
                                    printf("SETECENTOS E ");
                                }
                                if((n1==8)&&(n2==0)&&(n3==0)){
                                    printf("OITOCENTOS ");
                                }else if((n1==8)&&(n2>=0)&&(n3>=0)){
                                    printf("OITOCENTOS E ");
                                }
                                if((n1==9)&&(n2==0)&&(n3==0)){
                                    printf("NOVECENTOS ");
                                }else if((n1==9)&&(n2>=0)&&(n3>=0)){
                                    printf("NOVECENTOS E ");
                                }
                            }
                            //DEZENA DE MILHAR
                            if (n2>=0)
                            {
                                //QUANDO FOR 0 NAO EXECUTAR NENHUMA LINHA DE PRINTF PARA SER COMPATIVEL COM AS LINHAS DE CODIGOS ABAIXO
                                if (n2==0)
                                {

                                //MAIOR DO QUE ZERO E A UNIDADE DE MILHAR IGUAL A 0
                                }else if ((n2>0)&&(n3==0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 1:
                                            printf("DEZ ");
                                            break;
                                    }
                                //QUANDO A UNIDADE DE MILHAR FOR MAIOR DO QUE 0
                                }else if((n2>0)&&(n3>0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA E ");
                                            break;
                                        case 8:
                                            printf("OITENTA E ");
                                            break;
                                        case 7:
                                            printf("SETENTA E ");
                                            break;
                                        case 6:
                                            printf("SESSENTA E ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA E ");
                                            break;
                                        case 4:
                                            printf("QUARENTA E ");
                                            break;
                                        case 3:
                                            printf("TRINTA E ");
                                            break;
                                        case 2:
                                            printf("VINTE E ");
                                            break;
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n3>5){
                                                printf("DEZ");
                                            }
                                            switch(n3)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                    }
                                }
                                //UNIDADE DE MILHAR
                                if(n3>=0)
                                {
                                    if(n3==0){

                                    }
                                    //COMBINACAO COM O "DEZ" DAS LINHAS ACIMA "IF(N3>5)"
                                    if((n3>0)&&(n2==1))
                                    {
                                        switch (n3)
                                        {
                                            case 6:
                                                printf("ESSEIS ");
                                                break;
                                            case 7:
                                                printf("ESSETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("ENOVE ");
                                                break;
                                        }
                                    //PRÓPIA UNIDADE DE MILHAR PARA SATISFAZER QUANDO N2==0 OU N2>0 E N3>0
                                    }else if(n3>0){
                                        switch (n3)
                                        {
                                            case 1:
                                                printf("UM ");
                                                break;
                                            case 2:
                                                printf("DOIS ");
                                                break;
                                            case 3:
                                                printf("TRES ");
                                                break;
                                            case 4:
                                                printf("QUATRO ");
                                                break;
                                            case 5:
                                                printf("CINCO ");
                                                break;
                                            case 6:
                                                printf("SEIS ");
                                                break;
                                            case 7:
                                                printf("SETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("NOVE ");
                                                break;
                                        }
                                    }
                                }
                            }
                            //CASO A PARTE DA CENTENA FOR ZERADA
                            if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4==0)&&(n5==0)&&(n6==0))){
                                printf("MIL ");
                            //CASO A PARTE DA CENTENA TIVER ALGUM VALOR
                            }else if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4!=0)||(n5!=0)||(n6!=0))){
                                printf("MIL E ");
                            }
                            //FIM DO MILHAR
                            //INICIO DA CENTENA
                            //CENTENA
                            if(n4>0){
                                if(n4==0){

                                }
                                //QUANDO DEZENA E UNIDADE ESTIVEREM ZERADAS
                                if((n4>0)&&(n5==0)&&(n6==0)){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CEM ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS ");
                                            break;
                                    }
                                //QUANDO DEZENA OU UNIDADE FOR MAIOR DO QUE ZERO
                                }else if ((n4>0)&&((n5>0)||(n6>0))){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CENTO E ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS E ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS E ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS E ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS E ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS E ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS E ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS E ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS E ");
                                            break;
                                    }
                                }
                            }
                            //FIMCENTENA
                            //DEZENA
                            if(n5>=0){
                                if(n5==0){

                                }
                                if((n5>0)&&(n6>=0)){
                                    switch (n5)
                                    {
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n6>5){
                                                printf("DEZ");
                                            }
                                            switch (n6)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 9:
                                            printf("NOVENTA ");
                                            break;

                                    }
                                }
                            }
                            //FIMDEZENA
                            //UNIDADE
                            if(n6>=0){
                                if(n6==0){

                                }
                                if((n6>0)&&(n5==1)){
                                    switch (n6)
                                    {
                                        case 6:
                                            printf("ESSEIS ");
                                            break;
                                        case 7:
                                            printf("ESSETE ");
                                                break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("ENOVE ");
                                            break;
                                    }
                                }else if(n6>0){
                                    switch (n6)
                                    {
                                        case 1:
                                            printf("UM ");
                                            break;
                                        case 2:
                                            printf("DOIS ");
                                            break;
                                        case 3:
                                            printf("TRES ");
                                            break;
                                        case 4:
                                            printf("QUATRO ");
                                            break;
                                        case 5:
                                            printf("CINCO ");
                                            break;
                                        case 6:
                                            printf("SEIS ");
                                            break;
                                        case 7:
                                            printf("SETE ");
                                            break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("NOVE ");
                                            break;
                                    }
                                }
                            }
                            if(vsaque==1){
                                printf("REAL)\n");
                            }else if(vtsaque>1){
                                printf("REAIS)\n");
                            }else if(vtsaque==0){
                                printf("ZERO REAIS)\n");
                            }
                            //FIM DO SISTEMA EXTENSO.......
                            printf("\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL...\n");
                            system ("pause > nul");
                            system ("cls");
                            break;
                        //SALDO EXISTENTE NO CAIXA
                        case 2:
                            printf ("VALOR DO SALDO EXISTENTE\n");
                            printf("\nAINDA HÁ R$: %d,00",vsaldoexist);
                            //INICIO DO SISTEMA EXTENSO................
                            n6 = (vsaldoexist%10);//Primeiro digito
                            n5 = ((vsaldoexist/10)%10);//Segundo digito
                            n4 = ((vsaldoexist/100)%10);//Terceiro digito
                            n3 = ((vsaldoexist/1000)%10);//Quarto digito
                            n2 = ((vsaldoexist/10000)%10);//Quinto digito
                            n1 = ((vsaldoexist/100000)%10);//Sexto digito
                            //INICIO DO MILHAR
                            //CENTENA DE MILHAR
                            printf("  (");
                            if(n1>0){
                                if((n1==1)&&(n2==0)&&(n3==0)){
                                    printf("CEM ");
                                }else if((n1==1)&&(n2>=0)&&(n3>=0)){
                                    printf("CENTO E ");
                                }
                            }
                            //DEZENA DE MILHAR
                            if (n2>=0)
                            {
                                //QUANDO FOR 0 NAO EXECUTAR NENHUMA LINHA DE PRINTF PARA SER COMPATIVEL COM AS LINHAS DE CODIGOS ABAIXO
                                if (n2==0)
                                {

                                //MAIOR DO QUE ZERO E A UNIDADE DE MILHAR IGUAL A 0
                                }else if ((n2>0)&&(n3==0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 1:
                                            printf("DEZ ");
                                            break;
                                    }
                                //QUANDO A UNIDADE DE MILHAR FOR MAIOR DO QUE 0
                                }else if((n2>0)&&(n3>0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA E ");
                                            break;
                                        case 8:
                                            printf("OITENTA E ");
                                            break;
                                        case 7:
                                            printf("SETENTA E ");
                                            break;
                                        case 6:
                                            printf("SESSENTA E ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA E ");
                                            break;
                                        case 4:
                                            printf("QUARENTA E ");
                                            break;
                                        case 3:
                                            printf("TRINTA E ");
                                            break;
                                        case 2:
                                            printf("VINTE E ");
                                            break;
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n3>5){
                                                printf("DEZ");
                                            }
                                            switch(n3)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                    }
                                }
                                //UNIDADE DE MILHAR
                                if(n3>=0)
                                {
                                    if(n3==0){

                                    }
                                    //COMBINACAO COM O "DEZ" DAS LINHAS ACIMA "IF(N3>5)"
                                    if((n3>0)&&(n2==1))
                                    {
                                        switch (n3)
                                        {
                                            case 6:
                                                printf("ESSEIS ");
                                                break;
                                            case 7:
                                                printf("ESSETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("ENOVE ");
                                                break;
                                        }
                                    //PRÓPIA UNIDADE DE MILHAR PARA SATISFAZER QUANDO N2==0 OU N2>0 E N3>0
                                    }else if(n3>0){
                                        switch (n3)
                                        {
                                            case 1:
                                                printf("UM ");
                                                break;
                                            case 2:
                                                printf("DOIS ");
                                                break;
                                            case 3:
                                                printf("TRES ");
                                                break;
                                            case 4:
                                                printf("QUATRO ");
                                                break;
                                            case 5:
                                                printf("CINCO ");
                                                break;
                                            case 6:
                                                printf("SEIS ");
                                                break;
                                            case 7:
                                                printf("SETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("NOVE ");
                                                break;
                                        }
                                    }
                                }
                            }
                            //CASO A PARTE DA CENTENA FOR ZERADA
                            if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4==0)&&(n5==0)&&(n6==0))){
                                printf("MIL ");
                            //CASO A PARTE DA CENTENA TIVER ALGUM VALOR
                            }else if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4!=0)||(n5!=0)||(n6!=0))){
                                printf("MIL E ");
                            }
                            //FIM DO MILHAR
                            //INICIO DA CENTENA
                            //CENTENA
                            if(n4>0){
                                if(n4==0){

                                }
                                //QUANDO DEZENA E UNIDADE ESTIVEREM ZERADAS
                                if((n4>0)&&(n5==0)&&(n6==0)){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CEM ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS ");
                                            break;
                                    }
                                //QUANDO DEZENA OU UNIDADE FOR MAIOR DO QUE ZERO
                                }else if ((n4>0)&&((n5>0)||(n6>0))){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CENTO E ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS E ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS E ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS E ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS E ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS E ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS E ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS E ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS E ");
                                            break;
                                    }
                                }
                            }
                            //FIMCENTENA
                            //DEZENA
                            if(n5>=0){
                                if(n5==0){

                                }
                                if((n5>0)&&(n6>=0)){
                                    switch (n5)
                                    {
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n6>5){
                                                printf("DEZ");
                                            }
                                            switch (n6)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 9:
                                            printf("NOVENTA ");
                                            break;

                                    }
                                }
                            }
                            //FIMDEZENA
                            //UNIDADE
                            if(n6>=0){
                                if(n6==0){

                                }
                                if((n6>0)&&(n5==1)){
                                    switch (n6)
                                    {
                                        case 6:
                                            printf("ESSEIS ");
                                            break;
                                        case 7:
                                            printf("ESSETE ");
                                                break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("ENOVE ");
                                            break;
                                    }
                                }else if(n6>0){
                                    switch (n6)
                                    {
                                        case 1:
                                            printf("UM ");
                                            break;
                                        case 2:
                                            printf("DOIS ");
                                            break;
                                        case 3:
                                            printf("TRES ");
                                            break;
                                        case 4:
                                            printf("QUATRO ");
                                            break;
                                        case 5:
                                            printf("CINCO ");
                                            break;
                                        case 6:
                                            printf("SEIS ");
                                            break;
                                        case 7:
                                            printf("SETE ");
                                            break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("NOVE ");
                                            break;
                                    }
                                }
                            }
                            if(vsaldoexist==1){
                                printf("REAL NO CAIXA)\n");
                            }else if(vsaldoexist>1){
                                printf("REAIS NO CAIXA)\n");
                            }else if(vsaldoexist==0){
                                printf("ZERO REAIS NO CAIXA)\n");
                            }
                            //FIM DO SISTEMA EXTENSO............
                            printf ("\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL...");
                            system ("pause > nul");
                            system ("cls");
                            break;
                        //CEDULAS EXISTENTES NO CAIXA
                        case 3:
                            system ("cls");
                            printf ("QUANTIDADE DE CÉDULAS EXISTENTES\n");
                            printf ("\nQuantidade de cédulas de R$500,00: %d",ced500);
                            printf ("\nQuantidade de cédulas de R$150,00: %d",ced150);
                            printf ("\nQuantidade de cédulas de R$50,00: %d",ced50);
                            printf ("\nQuantidade de cédulas de R$20,00: %d",ced20);
                            printf ("\nQuantidade de cédulas de R$10,00: %d",ced10);
                            printf ("\nQuantidade de cédulas de R$5,00: %d",ced5);
                            printf ("\nQuantidade de cédulas de R$2,00: %d",ced2);
                            printf ("\nQuantidade de cédulas de R$1,00: %d",ced1);
                            printf ("\n\nQUANTIDADE DE CÉDULAS GERAIS PRESENTES NO CAIXA É DE: %d",cedgeral);
                            //INICIO DO SISTEMA EXTENSO.........................
                            n6 = (cedgeral%10);//Primeiro digito
                            n5 = ((cedgeral/10)%10);//Segundo digito
                            n4 = ((cedgeral/100)%10);//Terceiro digito
                            n3 = ((cedgeral/1000)%10);//Quarto digito
                            n2 = ((cedgeral/10000)%10);//Quinto digito
                            n1 = ((cedgeral/100000)%10);//Sexto digito
                            //INICIO DO MILHAR
                            //CENTENA DE MILHAR
                            printf("  (");
                            if(n1>0){
                                if((n1==1)&&(n2==0)&&(n3==0)){
                                    printf("CEM ");
                                }else if((n1==1)&&(n2>=0)&&(n3>=0)){
                                    printf("CENTO E ");
                                }
                            }
                            //DEZENA DE MILHAR
                            if (n2>=0)
                            {
                                //QUANDO FOR 0 NAO EXECUTAR NENHUMA LINHA DE PRINTF PARA SER COMPATIVEL COM AS LINHAS DE CODIGOS ABAIXO
                                if (n2==0)
                                {

                                //MAIOR DO QUE ZERO E A UNIDADE DE MILHAR IGUAL A 0
                                }else if ((n2>0)&&(n3==0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 1:
                                            printf("DEZ ");
                                            break;
                                    }
                                //QUANDO A UNIDADE DE MILHAR FOR MAIOR DO QUE 0
                                }else if((n2>0)&&(n3>0)){
                                    switch (n2)
                                    {
                                        case 9:
                                            printf("NOVENTA E ");
                                            break;
                                        case 8:
                                            printf("OITENTA E ");
                                            break;
                                        case 7:
                                            printf("SETENTA E ");
                                            break;
                                        case 6:
                                            printf("SESSENTA E ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA E ");
                                            break;
                                        case 4:
                                            printf("QUARENTA E ");
                                            break;
                                        case 3:
                                            printf("TRINTA E ");
                                            break;
                                        case 2:
                                            printf("VINTE E ");
                                            break;
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n3>5){
                                                printf("DEZ");
                                            }
                                            switch(n3)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                    }
                                }
                                //UNIDADE DE MILHAR
                                if(n3>=0)
                                {
                                    if(n3==0){

                                    }
                                    //COMBINACAO COM O "DEZ" DAS LINHAS ACIMA "IF(N3>5)"
                                    if((n3>0)&&(n2==1))
                                    {
                                        switch (n3)
                                        {
                                            case 6:
                                                printf("ESSEIS ");
                                                break;
                                            case 7:
                                                printf("ESSETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("ENOVE ");
                                                break;
                                        }
                                    //PRÓPIA UNIDADE DE MILHAR PARA SATISFAZER QUANDO N2==0 OU N2>0 E N3>0
                                    }else if(n3>0){
                                        switch (n3)
                                        {
                                            case 1:
                                                printf("UM ");
                                                break;
                                            case 2:
                                                printf("DOIS ");
                                                break;
                                            case 3:
                                                printf("TRES ");
                                                break;
                                            case 4:
                                                printf("QUATRO ");
                                                break;
                                            case 5:
                                                printf("CINCO ");
                                                break;
                                            case 6:
                                                printf("SEIS ");
                                                break;
                                            case 7:
                                                printf("SETE ");
                                                break;
                                            case 8:
                                                printf("OITO ");
                                                break;
                                            case 9:
                                                printf("NOVE ");
                                                break;
                                        }
                                    }
                                }
                            }
                            //CASO A PARTE DA CENTENA FOR ZERADA
                            if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4==0)&&(n5==0)&&(n6==0))){
                                printf("MIL ");
                            //CASO A PARTE DA CENTENA TIVER ALGUM VALOR
                            }else if(((n1!=0)||(n2!=0)||(n3!=0))&&((n4!=0)||(n5!=0)||(n6!=0))){
                                printf("MIL E ");
                            }
                            //FIM DO MILHAR
                            //INICIO DA CENTENA
                            //CENTENA
                            if(n4>0){
                                if(n4==0){

                                }
                                //QUANDO DEZENA E UNIDADE ESTIVEREM ZERADAS
                                if((n4>0)&&(n5==0)&&(n6==0)){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CEM ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS ");
                                            break;
                                    }
                                //QUANDO DEZENA OU UNIDADE FOR MAIOR DO QUE ZERO
                                }else if ((n4>0)&&((n5>0)||(n6>0))){
                                    switch (n4)
                                    {
                                        case 1:
                                            printf("CENTO E ");
                                            break;
                                        case 2:
                                            printf("DUZENTOS E ");
                                            break;
                                        case 3:
                                            printf("TREZENTOS E ");
                                            break;
                                        case 4:
                                            printf("QUATROCENTOS E ");
                                            break;
                                        case 5:
                                            printf("QUINHENTOS E ");
                                            break;
                                        case 6:
                                            printf("SEISCENTOS E ");
                                            break;
                                        case 7:
                                            printf("SETECENTOS E ");
                                            break;
                                        case 8:
                                            printf("OITOCENTOS E ");
                                            break;
                                        case 9:
                                            printf("NOVECENTOS E ");
                                            break;
                                    }
                                }
                            }
                            //FIMCENTENA
                            //DEZENA
                            if(n5>=0){
                                if(n5==0){

                                }
                                if((n5>0)&&(n6>=0)){
                                    switch (n5)
                                    {
                                        case 1:// CASO ESPECIAL DE DEZ ATÉ QUINZE, DEPOIS A PALAVRA "DEZ" SE REPETE E PODE COMBINAR COM "ESSEIS", "ESSETE"...
                                            if(n6>5){
                                                printf("DEZ");
                                            }
                                            switch (n6)
                                            {
                                                case 1:
                                                    printf("ONZE ");
                                                    break;
                                                case 2:
                                                    printf("DOZE ");
                                                    break;
                                                case 3:
                                                    printf("TREZE ");
                                                    break;
                                                case 4:
                                                    printf("QUATORZE ");
                                                    break;
                                                case 5:
                                                    printf("QUINZE ");
                                                    break;
                                                case 0:
                                                    printf("DEZ ");
                                                    break;
                                            }
                                            break;
                                        case 2:
                                            printf("VINTE ");
                                            break;
                                        case 3:
                                            printf("TRINTA ");
                                            break;
                                        case 4:
                                            printf("QUARENTA ");
                                            break;
                                        case 5:
                                            printf("CINQUENTA ");
                                            break;
                                        case 6:
                                            printf("SESSENTA ");
                                            break;
                                        case 7:
                                            printf("SETENTA ");
                                            break;
                                        case 8:
                                            printf("OITENTA ");
                                            break;
                                        case 9:
                                            printf("NOVENTA ");
                                            break;

                                    }
                                }
                            }
                            //FIMDEZENA
                            //UNIDADE
                            if(n6>=0){
                                if(n6==0){

                                }
                                if((n6>0)&&(n5==1)){
                                    switch (n6)
                                    {
                                        case 6:
                                            printf("ESSEIS ");
                                            break;
                                        case 7:
                                            printf("ESSETE ");
                                                break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("ENOVE ");
                                            break;
                                    }
                                }else if(n6>0){
                                    switch (n6)
                                    {
                                        case 1:
                                            printf("UM ");
                                            break;
                                        case 2:
                                            printf("DOIS ");
                                            break;
                                        case 3:
                                            printf("TRES ");
                                            break;
                                        case 4:
                                            printf("QUATRO ");
                                            break;
                                        case 5:
                                            printf("CINCO ");
                                            break;
                                        case 6:
                                            printf("SEIS ");
                                            break;
                                        case 7:
                                            printf("SETE ");
                                            break;
                                        case 8:
                                            printf("OITO ");
                                            break;
                                        case 9:
                                            printf("NOVE ");
                                            break;
                                    }
                                }
                            }
                            if(cedgeral==1){
                                printf("CÉDULA NO CAIXA)\n");
                            }else if (cedgeral>1){
                                printf("CÉDULAS NO CAIXA)\n");
                            }else if(cedgeral==0){
                                printf("NAO HÁ NENHUMA CÉDULA)\n");
                            }
                            //FIM DO SISTEMA EXTENSO.................
                            printf ("\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU PRINCIPAL...");
                            system ("pause > nul");
                            system ("cls");
                            break;
                        //MENU ABASTECER
                        case 4:
                            do{
                                //MENU ABASTECIMENTO
                                system ("cls");
                                printf ("ABASTECER O CAIXA ELETRÔNICO..\n");
                                printf("\n(500)-ABASTECER NOTAS DE R$500,00\t\t(10)-ABASTECER NOTAS DE R$10,00\n(150)-ABASTECER NOTAS DE R$150,00\t\t(5)-ABASTECER NOTAS DE R$5,00\n(50)-ABASTECER NOTAS DE R$50,00\t\t\t(2)-ABASTECER NOTAS DE R$2,00\n(20)-ABASTECER NOTAS DE R$20,00\t\t\t(1)-ABASTECER NOTAS DE R$1,00\n");
                                //PARA ATIVAR O PRINTF DA OPCAO 9 APAGUE O COMENTARIO E O CASO 9 MAIS ABAIXO...
                                //printf("\n(9)-ABASTER O MÁXIMO DE TODAS AS CÉDULAS\n");
                                printf("\n(0)-VOLTAR AO MENU GERENTE\n\n");
                                printf("\nESCOLHA UMA DAS OPÇÕES ACIMA: ");
                                scanf("%d",&menuAbastecer);
                                switch (menuAbastecer){
                                    case 500://CEDULAS DE 500
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$500,00 que podem ser abastecidas é de %d",100-ced500);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$500,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont500);
                                            if((cont500<0)||(cont500>100-ced500))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",100-ced500);
                                        }while((cont500<0)||(cont500>100-ced500));
                                        //valor atualizado da quantidade de cedular de 500
                                        ced500=ced500+cont500;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$500,00",cont500);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont500;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 150://CEDULAS DE 150
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$150,00 que podem ser abastecidas é de %d",200-ced150);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$150,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont150);
                                            if((cont150<0)||(cont150>200-ced150))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",200-ced150);
                                        }while((cont150<0)||(cont150>200-ced150));
                                        //valor atualizado da quantidade de cedular de 150
                                        ced150=ced150+cont150;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$150,00",cont150);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont150;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 50://CEDULAS DE 50
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$50,00 que podem ser abastecidas é de %d",400-ced50);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$50,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont50);
                                            if((cont50<0)||(cont50>400-ced50))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",400-ced50);
                                        }while((cont50<0)||(cont50>400-ced50));
                                        //valor atualizado da quantidade de cedular de 50
                                        ced50=ced50+cont50;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$50,00",cont50);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont50;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 20://CEDULAS DE 20
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$20,00 que podem ser abastecidas é de %d",800-ced20);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$20,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont20);
                                            if((cont20<0)||(cont20>800-ced20))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",800-ced20);
                                        }while((cont20<0)||(cont20>800-ced20));
                                        //valor atualizado da quantidade de cedular de 20
                                        ced20=ced20+cont20;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$20,00",cont20);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont20;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 10://CEDULAS DE 10
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$10,00 que podem ser abastecidas é de %d",1600-ced10);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$10,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont10);
                                            if((cont10<0)||(cont10>1600-ced10))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",1600-ced10);
                                        }while((cont10<0)||(cont10>1600-ced10));
                                        //valor atualizado da quantidade de cedular de 10
                                        ced10=ced10+cont10;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$10,00",cont10);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont10;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 5://CEDULAS DE 5
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$5,00 que podem ser abastecidas é de %d",3200-ced5);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$5,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont5);
                                            if((cont5<0)||(cont5>3200-ced5))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",3200-ced5);
                                        }while((cont5<0)||(cont5>3200-ced5));
                                        //valor atualizado da quantidade de cedular de 5
                                        ced5=ced5+cont5;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$5,00",cont5);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont5;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 2://CEDULAS DE 2
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$2,00 que podem ser abastecidas é de %d",6400-ced2);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$2,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont2);
                                            if((cont2<0)||(cont2>6400-ced2))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",6400-ced2);
                                        }while((cont2<0)||(cont2>6400-ced2));
                                        //valor atualizado da quantidade de cedular de 2
                                        ced2=ced2+cont2;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$2,00",cont2);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont2;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    case 1://CEDULAS DE 1
                                        system("cls");
                                        printf("\nO máximo de cédulas de R$1,00 que podem ser abastecidas é de %d",12800-ced1);
                                        //critica para o maximo de abastecimento
                                        do{
                                            printf("\nDigite a quantidade de cédulas de R$1,00 que deseja inserir no caixa: ");
                                            scanf("%d",&cont1);
                                            if((cont1<0)||(cont1>12800-ced1))
                                                printf("\nA quantidade deve ser maior ou igual a ZERO e menor ou igual a %d",12800-ced1);
                                        }while((cont1<0)||(cont1>12800-ced1));
                                        //valor atualizado da quantidade de cedular de 1
                                        ced1=ced1+cont1;
                                        printf("\n\nFOI ABASTECIDO %d NOTAS DE R$1,00",cont1);
                                        //valor atualizado do saldo total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //valor atualizado da quantidade de cedulas existentes
                                        cedgeral= cedgeral + cont1;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                //ATIVAR CASE 9 PARA ABASTECER TODAS CEDULAS DE UMA VEZ APAGUE O COMENTARIO...
                                /*
                                    case 9://ABASTECER TODAS AS CÉDULAS
                                        system("cls");
                                        printf("\nFoi abastecido %d cédulas de R$500,00",100-ced500);
                                        printf("\nFoi abastecido %d cédulas de R$150,00",200-ced150);
                                        printf("\nFoi abastecido %d cédulas de R$50,00",400-ced50);
                                        printf("\nFoi abastecido %d cédulas de R$20,00",800-ced20);
                                        printf("\nFoi abastecido %d cédulas de R$10,00",1600-ced10);
                                        printf("\nFoi abastecido %d cédulas de R$5,00",3200-ced5);
                                        printf("\nFoi abastecido %d cédulas de R$2,00",6400-ced2);
                                        printf("\nFoi abastecido %d cédulas de R$1,00",12800-ced1);
                                        ced500= 100;
                                        ced150= 200;
                                        ced50= 400;
                                        ced20= 800;
                                        ced10= 1600;
                                        ced5= 3200;
                                        ced2= 6400;
                                        ced1= 12800;
                                        //atualizadao do valor total no caixa
                                        vsaldoexist= (ced500*500) + (ced150*150) + (ced50*50) + (ced20*20) + (ced10*10) + (ced5*5) + (ced2*2) + (ced1);
                                        //atualizacao da quantidade de cedulas gerais no caixa
                                        cedgeral= ced500 + ced150 + ced50 + ced20 + ced10 + ced5 + ced2 + ced1;
                                        //retornar menu de abastercer caixa
                                        printf("\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU DE ABASTECER O CAIXA ELETÔNICO...");
                                        system ("pause > nul");
                                        break;
                                    */
                                    case 0://VOLTAR AO MENU PRINCIPAL
                                        system("cls");
                                        break;
                                    default:
                                        printf("\nOPÇÃO SELECIONADA INVÁLIDA!!");
                                        break;
                                }
                            }while((menuAbastecer<0)||(menuAbastecer>=1));
                            system ("cls");
                            break;
                        case 5:
                            printf ("VOLTAR AO MENU PRINCIPAL\n");
                            system ("cls");
                            break;
                        default:
                            printf ("\nOPÇÃO SELECIONADA INVÁLIDA!!!");
                            break;
                    }
            }while((menuG<5)||(menuG>=6));
                break;/*Break do menu Gerente*/
            case 3:/*Finalizar seção*/
                system("cls");
                printf ("\t\t|=====================|\n");
                printf ("\t\t|  SESSÃO FINALIZADA  |\n");
                printf ("\t\t|=====================|\n");

                printf("\n\n\n");
                printf("\t\t......(.........)......(\n");
                printf("\t\t.......).......(........)\n");
                printf("\t\t......(.........)......(\n");
                printf("\t\t..____________________..\n");
                printf("\t\t|::::::::::::::::::::::|\n");
                printf("\t\t|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|\n");
                printf("\t\t|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|===,\n");
                printf("\t\t|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|.....||\n");
                printf("\t\t|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|.....||\n");
                printf("\t\t|::::::::::::::::::::::|==='\n");
                printf("\t\t\\*********************/ \n");
                printf("\t\t \\*******************/ \n");
                printf("\t\t  \\_________________/ \n");
                printf ("\t\tTENHA UM BOM DIA E UM BOM CAFÉ!!!\n\n");
                break;/*Break para finalizar a seção*/
            default:
                system ("cls");
                printf ("Opção inválida\n");
                printf ("Pressione qualquer tecla para voltar ao menu principal...");
                system ("pause > nul");
                system ("cls");
                break;
        }
    }while ((menuP<=2)||(menuP>3));
    printf ("Obrigado por utilizar nossos serviços.\nAperte qualquer tecla para encerrar o programa...");
    system ("pause > nul");
    return 0;
}
