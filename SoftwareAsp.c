
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
#include <ctype.h>
#include <conio.h>

int escidioma;
char usuario1[15]="0", senha1[10]="0"; 
char usuario[15]="ADMIN", senha[10]="ADMIN";
//**************************************encerramento*********************************************

void final()
{
	int escfinal;

	
	                               
			    
 	if(escidioma==1)
	{
		do
		{
		
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            Escolha a opção desejada!                        | \n" ); 
			printf("|                                                                             | \n" );
			printf("| [1]-> Encerrar programa                                                     | \n" ); 
			printf("| [2]-> Voltar ao menu inicial                                                | \n" );
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d",&escfinal);
			system("cls");
			
		}while((escfinal<1)||(escfinal>2));
		
		if (escfinal==2)
		{
			menuCadastro(); 
		}
		else
		{
		
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            Agradecemos a preferência!                       | \n" ); 
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			printf("+-----------------------------------------------------------------------------+ \n" );  
			printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
	
			getch(); 
			
		
		}
	
			
	}
	else
	{
		do
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            Choose the desired option!                       | \n" ); 
			printf("|                                                                             | \n" );
			printf("| [1]-> Close program                                                         | \n" ); 
			printf("| [2]-> Return to the main menu                                               | \n" );
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d",&escfinal);
			system("cls");
			
		}while((escfinal<1)||(escfinal>2));
		
		if (escfinal==2)
		{
			menuCadastro(); 
		}
		else
		{
		
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                        Thank you for your preference!                       | \n" ); 
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                       press any key to continue                             | \n" );  
			printf("+-----------------------------------------------------------------------------+ \n" ); 
	
			getch(); 
		
		
		}
		
			
	}
	

		
}





//===================================================diretiva azul==============================================


void diretivaAzul()
{
 
	int azul; 



	do
	{
		
	


		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );  
			printf("|                         Problema recente?                                   | \n" );  
			printf("|                                                                             | \n" );  
			printf("|  [1]-> Sim                                                                  | \n" ); 
			printf("|  [2]-> Não                                                                  | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &azul);
			system("cls");
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                        Recent problem?                                      | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|  [1]-> Yes                                                                  | \n" ); 
			printf("|  [2]-> No                                                                   | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &azul);
			system("cls");
			
		}
		
		
	}while((azul<1)||(azul>2));
	
	
	if(azul==1)
	{
		if(escidioma==1)
		{
				
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Pouco urgente!                              | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Atendimento em 120 minutos!                           | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Verde                               | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
		
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situation: Little urgent!                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       attendance in 120 minutes!                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Green                                 | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
		
		

	}
	else
	{
		if(escidioma==1)
		{
				
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Não urgente!                                | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Atendimento em 240 minutos!                           | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Azul                                | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situation: Not urgent!                                | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       attendance in 240 minutes!                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Blue                                  | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
		
	}
	
	if(escidioma==1)
	{
	
		printf("+-----------------------------------------------------------------------------+ \n" );  
		printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
		getch(); 
		system("cls");
		
	}
	else
	{
		
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                       press any key to continue                             | \n" );  
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
		getch(); 
		system("cls");	
	
	}
	
	final();
	
			 
	
}



//===================================================diretiva verde==============================================


void diretivaVerde()
{
 
	int verde; 



	do
	{
		
	


		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Dor Leve?                                           | \n" ); 
			printf("|                         Paciente em estado febril?                          | \n" ); 
			printf("|                         Vômitos?                                            | \n" ); 
			printf("|                                                                             | \n" );  
			printf("|   O paciente apresenta algum destes sintomas?                               | \n" ); 
			printf("|  [1]-> Sim                                                                  | \n" ); 
			printf("|  [2]-> Não                                                                  | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &verde);
			system("cls");
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Mild pain?                                          | \n" ); 
			printf("|                         Is the patient feverish?                            | \n" ); 
			printf("|                         Does the patient have vomiting?                     | \n" );
			printf("|                                                                             | \n" ); 
			printf("|   Does the patient have any of these symptoms?                              | \n" );
			printf("|  [1]-> Yes                                                                  | \n" ); 
			printf("|  [2]-> No                                                                   | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &verde);
			system("cls");
			
		}
		
		
	}while((verde<1)||(verde>2));
	
	
	if(verde==1)
	{
		if(escidioma==1)
		{
				
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Pouco urgente!                              | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Atendimento em 120 minutos!                           | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Verde                               | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situation: Little urgent!                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       attendance in 120 minutes!                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Green                                 | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
		
		

	}
	else
	{
		diretivaAzul();
	}
	
	if(escidioma==1)
	{
	
	printf("+-----------------------------------------------------------------------------+ \n" );  
	printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
	printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");
		
	}
	else
	{
		
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                       press any key to continue                             | \n" );  
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");	
	
	}
	
	
	final();		 
	
}



//===================================================diretiva amarelo==============================================


void diretivaAmarelo()
{
 
	int amarelo; 



	do
	{
		
	


		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Dor moderada?                                       | \n" ); 
			printf("|                         Pequena hemorragia?                                 | \n" ); 
			printf("|                         Vômitos persistentes?                               | \n" ); 
			printf("|                         Apresenta febre?                                    | \n" );
			printf("|                                                                             | \n" );  
			printf("|   O paciente apresenta algum destes sintomas?                               | \n" ); 
			printf("|  [1]-> Sim                                                                  | \n" ); 
			printf("|  [2]-> Não                                                                  | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &amarelo);
			system("cls");
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Moderate pain?                                      | \n" ); 
			printf("|                         Little bleeding?                                    | \n" ); 
			printf("|                         Persistent vomiting?                                | \n" ); 
			printf("|                         Does the patient have a fever?                      | \n" );
			printf("|                                                                             | \n" ); 
			printf("|   Does the patient have any of these symptoms?                              | \n" );
			printf("|  [1]-> Yes                                                                  | \n" ); 
			printf("|  [2]-> No                                                                   | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &amarelo);
			system("cls");
			
		}
		
		
	}while((amarelo<1)||(amarelo>2));
	
	
	if(amarelo==1)
	{
		if(escidioma==1)
		{
				
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Urgente!                                    | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Atendimento em 60 minutos!                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Amarelo                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situation: Urgent!                                    | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       attendance in 60 minutes!                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Yellow                                | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
		
		

	}
	else
	{
		diretivaVerde();
	}
	
	if(escidioma==1)
	{
	
	printf("+-----------------------------------------------------------------------------+ \n" );  
	printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
	printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");
		
	}
	else
	{
		
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                       press any key to continue                             | \n" );  
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");	
	
	}
	
	
	final();		 
	
}


//===================================================diretiva laranja==============================================


void diretivaLaranja()
{
 
	int laranja; 



	do
	{
		
	


		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Apresenta hemorragia?                               | \n" ); 
			printf("|                         Perda de consciência?                               | \n" ); 
			printf("|                         A criança apresenta febre?                          | \n" ); 
			printf("|                         Dor intensa?                                        | \n" );
			printf("|                                                                             | \n" );
			printf("|   O paciente apresenta algum destes sintomas?                               | \n" ); 
			printf("|  [1]-> Sim                                                                  | \n" ); 
			printf("|  [2]-> Não                                                                  | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &laranja);
			system("cls");
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Does the patient have bleeding?                     | \n" ); 
			printf("|                         Is there loss of consciousness?                     | \n" ); 
			printf("|                         Does the child have a fever?                        | \n" ); 
			printf("|                         Is there Intense pain?                              | \n" );
			printf("|                                                                             | \n" );
			printf("|   Does the patient have any of these symptoms?                              | \n" );  
			printf("|  [1]-> Yes                                                                  | \n" ); 
			printf("|  [2]-> No                                                                   | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &laranja);
			system("cls");
			
		}
		
		
	}while((laranja<1)||(laranja>2));
	
	
	if(laranja==1)
	{
		if(escidioma==1)
		{
				
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Muito Urgente!                              | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Atendimento em 10 minutos!                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Laranja                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situation: Very urgent!                               | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       attendance in 10 minutes!                             | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Orange                                | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
		
		

	}
	else
	{
		diretivaAmarelo();
	}
	
	if(escidioma==1)
	{
	
	printf("+-----------------------------------------------------------------------------+ \n" );  
	printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
	printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");
		
	}
	else
	{
		
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                       press any key to continue                             | \n" );  
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");	
	
	}
	
	
	final();		 
	
}


//===================================================Diretiva vermelho============================================
void diretivaVermelho()
{
 
	int vermelho; 



	do
	{
		

		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Respiração comprometida?                            | \n" ); 
			printf("|                         A pessoa está em choque?                            | \n" ); 
			printf("|                         A criança não responde?                             | \n" );
			printf("|                                                                             | \n" ); 
			printf("|  O paciente apresenta algum destes sintomas?                                | \n" ); 
			printf("|  [1]-> Sim                                                                  | \n" ); 
			printf("|  [2]-> Não                                                                  | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &vermelho);
			system("cls");
			setbuf(stdin,NULL);
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                         Compromised breathing?                              | \n" ); 
			printf("|                         Is the person in shock?                             | \n" ); 
			printf("|                         The child does not respond?                         | \n" );
			printf("|                                                                             | \n" ); 
			printf("|   Does the patient have any of these symptoms?                              | \n" ); 
			printf("|  [1]-> Yes                                                                  | \n" ); 
			printf("|  [2]-> No                                                                   | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &vermelho);
			system("cls");
		    setbuf(stdin,NULL);
			
		}
		
		
	}while((vermelho<1)||(vermelho>2));
	
	
	if(vermelho==1)
	{
		
		if(escidioma==1)
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Situação: Emergente!                                  | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Necessário atendimento imediato!                      | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Protocolo de cor: Vermelho                            | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
			
			 
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Emerging Situation!                                   | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Immediate attention required!                         | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("|                       Color protocol: Red                                   | \n" ); 
			printf("|                                                                             | \n" ); 
			printf("+-----------------------------------------------------------------------------+ \n" );
		}
	}
	else
	{
		diretivaLaranja();
	}
	
	if(escidioma==1)
	{
	
	printf("+-----------------------------------------------------------------------------+ \n" );  
	printf("|                    Pressione qualquer tecla para continuar                  | \n" ); 
	printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");
		
	}
	else
	{
		
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                       press any key to continue                             | \n" );  
		printf("+-----------------------------------------------------------------------------+ \n" ); 
	
	getch(); 
	system("cls");	
	
	}
	
	
	final();		 
	
}
//********************************************************************************************************************

void menuInicio()
{
 	int t;	
	
	if(escidioma==1)
	{
	
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                                                                             | \n" );
		printf("|            Bem vindo ao programa de apoio a decisões clínicas               | \n" ); 
		printf("|                Pressione qualquer tecla para continuar                      | \n" );
		printf("|                                                                             | \n" );
		printf("|                                                                             | \n" );
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		
		getch();
		system("cls");
	
	}
	else
	{
		printf("+-----------------------------------------------------------------------------+ \n" ); 
		printf("|                                                                             | \n" );
		printf("|              Welcome to the Clinical Decision Support Program               | \n" ); 
		printf("|                       Press any key to continue                             | \n" );
		printf("|                                                                             | \n" ); 
		printf("|                                                                             | \n" );
		printf("+-----------------------------------------------------------------------------+ \n" ); 
			
		getch();
		system("cls");
			
				
	}
		
		
	diretivaVermelho();	

	
}
	

//******************************************************Cadastro enfermeiro*************************************************************************

void cadastroEnfermeiro()
{
	char nome1[20], endereco1[20], telefone1[10]; 
	char nome[20]="Claudio da Silva", endereco[20]="Rua Domingos 68", telefone[15]="31995493232";
	int i;
	
	//-------------------------------------inicio da leitura de valores do cadastro------------------------	
	
	
	
	
		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Usuário:                                                                  | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(usuario1);
			system("cls");
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| User:                                                                     | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(usuario1);
			system("cls");
		
		}
	
		
		for(i=0;i<15;i++)
		{
			usuario1[i]= toupper(usuario1[i]);
		}
		
		if(escidioma==1)
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Senha:                                                                    | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(senha1);
			system("cls");
			
		}
		else
		{
			
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Password:                                                                 | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(senha1);
			system("cls");
			
			
		}
		
		
		for(i=0;i<10;i++)
		{
			senha1[i]= toupper(senha1[i]);
		}
		
		
		
		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Nome:                                                                     | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(nome1);
			system("cls");
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Name:                                                                     | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(nome1);
			system("cls");
		
		}
	
		
		for(i=0;i<20;i++)
		{
			nome1[i]= toupper(nome1[i]);
		}
		
		
		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Endereço:                                                                 | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(endereco1);
			system("cls");
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Address:                                                                  | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(endereco1);
			system("cls");
		
		}
	
		
		for(i=0;i<20;i++)
		{
			endereco1[i]= toupper(endereco1[i]);
		}
		
		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Telefone:                                                                 | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(telefone1);
			system("cls");
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Telephone:                                                                | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(telefone1);
			system("cls");
		
		}
	
		
		for(i=0;i<10;i++)
		{
			telefone1[i]= toupper(telefone1[i]);
		}
		
	//----------------------------------------------------fim da leitura dos valores do cadastro---------------------------------			
		
			
		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("|                     Dados cadastrados com sucesso!                        | \n");
			printf("|                     Pressione qualquer tecla para continuar               | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			getch();
		
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("|                       Data successfully registered!                       | \n");
			printf("|                        press any key to continue                          | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			
			getch();
		
		}
	
		system("cls");	
			
		menuCadastro();
			
			
}


//*********************************************************Login enfermeiro**********************************************************

void loginEnfermeiro()
{
	char usuarioteste[10],senhateste[10];
	int i, controle=0;

		if (escidioma==1)
		{
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Usuário:                                                                  | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(usuarioteste);
			system("cls");
		} 
		else
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| User:                                                                     | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(usuarioteste);
			system("cls");
		
		}
	
		
		for(i=0;i<15;i++)
		{
			usuarioteste[i]= toupper(usuarioteste[i]);
		}
		
		if(escidioma==1)
		{
		
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| Senha:                                                                    | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(senhateste);
			system("cls");
			
		}
		else
		{
			
			printf("+---------------------------------------------------------------------------+ \n");
			printf("|                                                                           | \n");
			printf("| password:                                                                 | \n");
			printf("|                                                                           | \n");
			printf("+---------------------------------------------------------------------------+ \n");
			gets(senhateste);
			system("cls");
			
			
		}
		
		
		for(i=0;i<10;i++)
		{
			senhateste[i]= toupper(senhateste[i]);
		}
		
		
		if((strcmp(usuarioteste,usuario)==0)&&(strcmp(senhateste,senha)==0))
		{
			controle=1;
		
		}
		
		if((strcmp(usuarioteste,usuario1)==0)&&(strcmp(senhateste,senha1)==0))
		{
			controle=2;
				
		} 
			
			
		if((controle>0)&&(controle<3))
		{
			menuInicio();			
		}
		else
		{
			loginEnfermeiro();
		}
			
					
		

	
	
}

//*************************************************************************************************************************

//*****************************************************Escolha de diretivas**************************************
void menuCadastro()
{
 
	int esc;

	do
	{
		
	
		if(escidioma==1)
		{
		
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            Escolha a opção desejada!                        | \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            [1]-> Cadastrar                                  | \n" ); 
			printf("|                            [2]-> Entrar                                     | \n" );
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
		
			scanf("%d", &esc);
			system("cls");
			setbuf(stdin,NULL);
			
		}
		else
		{
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            Choose the desired option!                       | \n" ); 
			printf("|                                                                             | \n" );
			printf("|                            [1]-> Sign in                                    | \n" ); 
			printf("|                            [2]-> Log in                                     | \n" );
			printf("|                                                                             | \n" );
			printf("+-----------------------------------------------------------------------------+ \n" ); 
			
			scanf("%d", &esc);
			system("cls");
			setbuf(stdin,NULL);
			
		}
		
	}while((esc<1)||(esc>2));
	
		
	if(esc==1)
	{
		cadastroEnfermeiro();
	}
	else
	{
		loginEnfermeiro();
	}

	
	
}




// ***********************************************************************************************************************************************************

// ----------------------------------------------Bloco principal ------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"Portuguese");

	do
	{
	
		printf("+---------------------------------------------------------------------------+ \n");
		printf("|                                                                           | \n");
		printf("|                              Escolha o Idioma!                            | \n");
		printf("|                             (Choose Language)                             | \n");
		printf("|                                                                           | \n");
		printf("| [1]-> Português (Portuguese)                                              | \n");
		printf("| [2]-> Inglês (English)                                                    | \n");
		printf("|                                                                           | \n");
		printf("|                                                                           | \n");
		printf("+---------------------------------------------------------------------------+ \n");
		
		scanf("%d", &escidioma);
		system("cls");
		setbuf(stdin,NULL);
	
	
	}while((escidioma>2)||(escidioma<1));
	

	menuCadastro();
	
    
    return 0;
}


