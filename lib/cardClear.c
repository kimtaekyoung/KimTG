#include "cardClear.h"
#include "globalVar.h"

void clear(){
	int a,b;
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			check[a][b] = 0;
		}
	}
	start = 0;
	cnt = 0;
	score = 0;
	Time=60;
	gtk_label_set_text(GTK_LABEL(timelabel),"Remaining Time: 1:00");
	sprintf(buf5,"맞춘 문제 수 : %d 점수 : %d",cnt,score);
	gtk_label_set_text(GTK_LABEL(scorelabel),buf5);
	gtk_button_set_label(GTK_BUTTON(button1),"1");
	gtk_button_set_label(GTK_BUTTON(button2),"2");
	gtk_button_set_label(GTK_BUTTON(button3),"3");
	gtk_button_set_label(GTK_BUTTON(button4),"4");
	gtk_button_set_label(GTK_BUTTON(button5),"5");
	gtk_button_set_label(GTK_BUTTON(button6)," ");
	gtk_button_set_label(GTK_BUTTON(button7)," ");
	gtk_button_set_label(GTK_BUTTON(button8)," ");
	gtk_button_set_label(GTK_BUTTON(button9)," ");
	gtk_button_set_label(GTK_BUTTON(button10)," ");
	gtk_button_set_label(GTK_BUTTON(button11)," ");
	gtk_button_set_label(GTK_BUTTON(button12)," ");
	gtk_button_set_label(GTK_BUTTON(button13)," ");
	gtk_button_set_label(GTK_BUTTON(button14)," ");
	gtk_button_set_label(GTK_BUTTON(button15)," ");
	gtk_button_set_label(GTK_BUTTON(button16)," ");
		
}
