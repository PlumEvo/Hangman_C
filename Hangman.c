#include <stdio.h>

void Main_Screen_Title(void){ //Title for Menu
	printf("--------------------------------------------\n");
	printf("| #  #   #   #   #  #### #   #   #   #   # |\n");
	printf("| #  #  # #  ##  # #     ## ##  # #  ##  # |\n");
	printf("| #### ##### # # # #  ## # # # ##### # # # |\n");
	printf("| #  # #   # #  ## #   # #   # #   # #  ## |\n");
	printf("| #  # #   # #   #  ###  #   # #   # #   # |\n");
  	printf("--------------------------------------------\n\n");
}

void Main_Screen_Options(void){ //Displaying Menus
	printf("\n\tP: Play\n");
	printf("\tI: Instructions\n");
	printf("\tC: Credits\n");
	printf("\tQ: Quit\n");
	printf("\n\n\tEnter Option : ");
}

void Play_Game(void){
	printf("\nPlay Game");
}

void Display_Instruction(void){
	printf("\tInstruction");
}

void Display_Credits(void){
	printf("\tCredits");
}
void Close_Program(void){
	printf("\tClose Program");
}
void Display_Error(void){
	printf("\tEnter Valid Option");
}


void main(void){
	
	Main_Screen_Title();
	Main_Screen_Options();
	
	char Menu_Option ;
	
	scanf("%c",&Menu_Option);
	
	if(Menu_Option=='P'||Menu_Option=='p'){
		system("cls");
		Play_Game();
	}
	else if(Menu_Option=='I'||Menu_Option=='i'){
		system("cls");
		Display_Instruction();
	}
	else if(Menu_Option=='C'||Menu_Option=='c'){
		system("cls");
		Display_Credits();
	}
	else if(Menu_Option=='Q'||Menu_Option=='q'){
		system("cls");
		Close_Game();
	}
	else{
		Display_Error();
	}
}
