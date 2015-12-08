#include<gtk/gtk.h>
#include "globalVar.h"

void space()		//모든 button에 빈공간을 넣어주는 부분.
{
	if(check[0][0] != 1){
		gtk_button_set_label(GTK_BUTTON(button1)," ");
	}
	if(check[0][1] != 1){
		gtk_button_set_label(GTK_BUTTON(button2)," ");
	}
	if(check[0][2] != 1){
		gtk_button_set_label(GTK_BUTTON(button3)," ");
	}
	if(check[0][3] != 1){
		gtk_button_set_label(GTK_BUTTON(button4)," ");
	}
	if(check[1][0] != 1){
		gtk_button_set_label(GTK_BUTTON(button5)," ");
	}
	if(check[1][1] != 1){
		gtk_button_set_label(GTK_BUTTON(button6)," ");
	}
	if(check[1][2] != 1){
		gtk_button_set_label(GTK_BUTTON(button7)," ");
	}
	if(check[1][3] != 1){
		gtk_button_set_label(GTK_BUTTON(button8)," ");
	}
	if(check[2][0] != 1){
		gtk_button_set_label(GTK_BUTTON(button9)," ");
	}
	if(check[2][1] != 1){
		gtk_button_set_label(GTK_BUTTON(button10)," ");
	}
	if(check[2][2] != 1){
		gtk_button_set_label(GTK_BUTTON(button11)," ");
	}
	if(check[2][3] != 1){
		gtk_button_set_label(GTK_BUTTON(button12)," ");
	}
	if(check[3][0] != 1){
		gtk_button_set_label(GTK_BUTTON(button13)," ");
	}
	if(check[3][1] != 1){
		gtk_button_set_label(GTK_BUTTON(button14)," ");
	}
	if(check[3][2] != 1){
		gtk_button_set_label(GTK_BUTTON(button15)," ");
	}
	if(check[3][3] != 1){
		gtk_button_set_label(GTK_BUTTON(button16)," ");
	}	
	return;
}
