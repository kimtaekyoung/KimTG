#include<gtk/gtk.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include "buttonClicked.h"
#include "cardClear.h"
#include "cardset.h"
#include "clickclear.h"
#include "doneLabel.h"
#include "space.h"
#include "timerHandler.h"
#include "globalVar.h"

void buttonClicked(GtkWidget *widget){	
	int i, j;
	if(start == 0){
		if(widget == button1)
			version = 0;
		else if(widget == button2)
			version = 1;
		else if(widget == button3)
			version = 2;
		else if(widget == button4)
			version = 3;
		else if(widget == button5)
			version = 4;
		space();
		start = 1;
		g_timeout_add(1000, timer_handler,0);
		return;
	}
	else{
		if(click == 0){
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					click_check[i][j] = click_clear(check,i,j);
				}
			}
			if(widget == button1){
				if(click_check[0][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button1),random_card[version][0][0]);
					first = random_card[version][0][0];
					click_check[0][0] = 1;
					first_1=0;
					first_2=0;
					click = 1;
				}
			}else if(widget == button2){
				if(click_check[0][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button2),random_card[version][0][1]);
					first = random_card[version][0][1];
					click_check[0][1] = 1;
					first_1=0;
					first_2=1;
					click = 1;
				}
			}else if(widget == button3){
				if(click_check[0][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button3),random_card[version][0][2]);
					first = random_card[version][0][2];
					click_check[0][2] = 1;
					first_1=0;
					first_2=2;
					click = 1;
				}
			}else if(widget == button4){
				if(click_check[0][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button4),random_card[version][0][3]);
					first = random_card[version][0][3];
					click_check[0][3] = 1;
					first_1=0;
					first_2=3;
					click = 1;
				}
			}else if(widget == button5){
				if(click_check[1][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button5),random_card[version][1][0]);
					first = random_card[version][1][0];
					click_check[1][0] = 1;
					first_1=1;
					first_2=0;
					click = 1;
				}
			}else if(widget == button6){
				if(click_check[1][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button6),random_card[version][1][1]);
					first = random_card[version][1][1];
					click_check[1][1] = 1;
					first_1=1;
					first_2=1;
					click = 1;
				}
			}else if(widget == button7){
				if(click_check[1][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button7),random_card[version][1][2]);
					first = random_card[version][1][2];
					click_check[1][2] = 1;
					first_1=1;
					first_2=2;
					click = 1;
				}
			}else if(widget == button8){
				if(click_check[1][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button8),random_card[version][1][3]);
					first = random_card[version][1][3];
					click_check[1][3] = 1;
					first_1=1;
					first_2=3;
					click = 1;
				}
			}else if(widget == button9){
				if(click_check[2][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button9),random_card[version][2][0]);
					first = random_card[version][2][0];
					click_check[2][0] = 1;
					first_1=2;
					first_2=0;
					click = 1;
				}
			}else if(widget == button10){
				if(click_check[2][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button10),random_card[version][2][1]);
					first = random_card[version][2][1];
					click_check[2][1] = 1;
					first_1=2;
					first_2=1;
					click = 1;
				}
			}else if(widget == button11){
				if(click_check[2][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button11),random_card[version][2][2]);
					first = random_card[version][2][2];
					click_check[2][2] = 1;
					first_1=2;
					first_2=2;
					click = 1;
				}
			}else if(widget == button12){
				if(click_check[2][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button12),random_card[version][2][3]);
					first = random_card[version][2][3];
					click_check[2][3] = 1;
					first_1=2;
					first_2=3;
					click = 1;
				}
			}else if(widget == button13){
				if(click_check[3][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button13),random_card[version][3][0]);
					first = random_card[version][3][0];
					click_check[3][0] = 1;
					first_1=3;
					first_2=0;
					click = 1;
				}
			}else if(widget == button14){
				if(click_check[3][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button14),random_card[version][3][1]);
					first = random_card[version][3][1];
					click_check[3][1] = 1;
					first_1=3;
					first_2=1;
					click = 1;
				}
			}else if(widget == button15){
				if(click_check[3][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button15),random_card[version][3][2]);
					first = random_card[version][3][2];
					click_check[3][2] = 1;
					first_1=3;
					first_2=2;
					click = 1;
				}
			}else if(widget == button16){
				if(click_check[3][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button16),random_card[version][3][3]);
					first = random_card[version][3][3];
					click_check[3][3] = 1;
					first_1=3;
					first_2=3;
					click = 1;
				}
			}
		}
		//문제 맞추면 점수 올리는 부분.
		else if(click == 1)
		{
			if(widget == button1){
				if(click_check[0][0] != 1){
					second = random_card[version][0][0];
					gtk_button_set_label(GTK_BUTTON(button1),random_card[version][0][0]);
					second_1=0;
					second_2=0;
					click = 0;
				}
			}
			else if(widget == button2){
				if(click_check[0][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button2),random_card[version][0][1]);
					second = random_card[version][0][1];
					second_1=0;
					second_2=1;
					click = 0;
				}
			}
			else if(widget == button3){
				if(click_check[0][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button3),random_card[version][0][2]);
					second = random_card[version][0][2];
					second_1=0;
					second_2=2;
					click = 0;
				}
			}
			else if(widget == button4){
				if(click_check[0][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button4),random_card[version][0][3]);
					second = random_card[version][0][3];
					second_1=0;
					second_2=3;
					click = 0;
				}
			}
			else if(widget == button5){
				if(click_check[1][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button5),random_card[version][1][0]);
					second = random_card[version][1][0];
					second_1=1;
					second_2=0;
					click = 0;
				}
			}
			else if(widget == button6){
				if(click_check[1][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button6),random_card[version][1][1]);
					second = random_card[version][1][1];
					second_1=1;
					second_2=1;
					click = 0;
				}
			}
			else if(widget == button7){
				if(click_check[1][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button7),random_card[version][1][2]);
					second = random_card[version][1][2];
					second_1=1;
					second_2=2;
					click = 0;
				}
			}
			else if(widget == button8){
				if(click_check[1][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button8),random_card[version][1][3]);
					second = random_card[version][1][3];
					second_1=1;
					second_2=3;
					click = 0;
				}
			}
			else if(widget == button9){
				if(click_check[2][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button9),random_card[version][2][0]);
					second = random_card[version][2][0];
					second_1=2;
					second_2=0;
					click = 0;
				}
			}
			else if(widget == button10){
				if(click_check[2][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button10),random_card[version][2][1]);
					second = random_card[version][2][1];
					second_1=2;
					second_2=1;
					click = 0;
				}
			}
			else if(widget == button11){
				if(click_check[2][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button11),random_card[version][2][2]);
					second = random_card[version][2][2];
					second_1=2;
					second_2=2;
					click = 0;
				}
			}
			else if(widget == button12){
				if(click_check[2][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button12),random_card[version][2][3]);
					second = random_card[version][2][3];
					second_1=2;
					second_2=3;
					click = 0;
				}
			}
			else if(widget == button13){
				if(click_check[3][0] != 1){
					gtk_button_set_label(GTK_BUTTON(button13),random_card[version][3][0]);
					second = random_card[version][3][0];
					second_1=3;
					second_2=0;
					click = 0;
				}
			}
			else if(widget == button14){
				if(click_check[3][1] != 1){
					gtk_button_set_label(GTK_BUTTON(button14),random_card[version][3][1]);
					second = random_card[version][3][1];
					second_1=3;
					second_2=1;
					click = 0;
				}
			}
			else if(widget == button15){
				if(click_check[3][2] != 1){
					gtk_button_set_label(GTK_BUTTON(button15),random_card[version][3][2]);
					second = random_card[version][3][2];
					second_1=3;
					second_2=2;
					click = 0;
				}
			}
			else if(widget == button16){
				if(click_check[3][3] != 1){
					gtk_button_set_label(GTK_BUTTON(button16),random_card[version][3][3]);
					second = random_card[version][3][3];
					second_1=3;
					second_2=3;
					click = 0;
				}
			}
			if(click==0){
				if(strcmp(first,second)==0 && ((first_1 != second_1) || (first_2 != second_2))){
					cnt++;
					score += 5;
					check[first_1][first_2] = 1;
					check[second_1][second_2] = 1;
					sprintf(buf5,"맞춘 문제 수 : %d 점수 : %d",cnt,score);
					gtk_label_set_text(GTK_LABEL(scorelabel),buf5);
				}
				else
				{
					int i,j;
					j=0;
					if(score != 0)
						score -= 1;
					for(i=0;i<400000;i++){
						j=j+1;
					}
					space();
					sprintf(buf5,"맞춘 문제 수 : %d 점수 : %d",cnt,score);
					gtk_label_set_text(GTK_LABEL(scorelabel),buf5);
				}
			}
		}
	}
	return;
}


int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	timelabel = gtk_label_new("Remaining Time: 1:00");
	vbox1 = gtk_vbox_new(TRUE,0);
	gtk_widget_set_size_request(timelabel,300,50);
	gtk_container_add(GTK_CONTAINER(vbox1),timelabel);
	
	hbox1 = gtk_hbox_new(TRUE,0);
	card_set();
	//처음 모든 버튼에 빈 공간을 삽입 후 출력
	button1 = gtk_button_new_with_label("1");
	button2 = gtk_button_new_with_label("2");
	button3 = gtk_button_new_with_label("3");
	button4 = gtk_button_new_with_label("4");
	button5 = gtk_button_new_with_label("5");
	button6 = gtk_button_new_with_label(" ");
	button7 = gtk_button_new_with_label(" ");
	button8 = gtk_button_new_with_label(" ");
	button9 = gtk_button_new_with_label(" ");
	button10 = gtk_button_new_with_label(" ");
	button11 = gtk_button_new_with_label(" ");
	button12 = gtk_button_new_with_label(" ");
	button13 = gtk_button_new_with_label(" ");
	button14 = gtk_button_new_with_label(" ");
	button15 = gtk_button_new_with_label(" ");
	button16 = gtk_button_new_with_label(" ");
	//spacelabel은 window창에 여백을 만들기위해 만들어준 부분.
	spacelabel1 = gtk_label_new("");
	spacelabel2 = gtk_label_new("");
	spacelabel3 = gtk_label_new("");
	spacelabel4 = gtk_label_new("");
	spacelabel5 = gtk_label_new("");
	spacelabel6 = gtk_label_new("");
	spacelabel7 = gtk_label_new("");
	spacelabel8 = gtk_label_new("");
	gtk_widget_set_size_request(button1,10,10);	
	gtk_widget_set_size_request(button2,10,10);	
	gtk_widget_set_size_request(button3,10,10);	
	gtk_widget_set_size_request(button4,10,10);

	gtk_container_add(GTK_CONTAINER(hbox1),spacelabel1);
	gtk_container_add(GTK_CONTAINER(hbox1),button1);	
	gtk_container_add(GTK_CONTAINER(hbox1),button2);		
	gtk_container_add(GTK_CONTAINER(hbox1),button3);		
	gtk_container_add(GTK_CONTAINER(hbox1),button4);
	gtk_container_add(GTK_CONTAINER(hbox1),spacelabel2);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox1);

	hbox2 = gtk_hbox_new(TRUE,0);
	gtk_widget_set_size_request(button5,10,10);	
	gtk_widget_set_size_request(button6,10,10);	
	gtk_widget_set_size_request(button7,10,10);	
	gtk_widget_set_size_request(button8,10,10);	
		
	gtk_container_add(GTK_CONTAINER(hbox2),spacelabel3);
	gtk_container_add(GTK_CONTAINER(hbox2),button5);		
	gtk_container_add(GTK_CONTAINER(hbox2),button6);		
	gtk_container_add(GTK_CONTAINER(hbox2),button7);		
	gtk_container_add(GTK_CONTAINER(hbox2),button8);
	gtk_container_add(GTK_CONTAINER(hbox2),spacelabel4);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox2);

	hbox3 = gtk_hbox_new(TRUE,0);
	gtk_widget_set_size_request(button9,10,10);	
	gtk_widget_set_size_request(button10,10,10);	
	gtk_widget_set_size_request(button11,10,10);	
	gtk_widget_set_size_request(button12,10,10);	

	gtk_container_add(GTK_CONTAINER(hbox3),spacelabel5);
	gtk_container_add(GTK_CONTAINER(hbox3),button9);		
	gtk_container_add(GTK_CONTAINER(hbox3),button10);		
	gtk_container_add(GTK_CONTAINER(hbox3),button11);		
	gtk_container_add(GTK_CONTAINER(hbox3),button12);
	gtk_container_add(GTK_CONTAINER(hbox3),spacelabel6);
	gtk_container_add(GTK_CONTAINER(vbox1),hbox3);
	
	hbox4 = gtk_hbox_new(TRUE,0);
	gtk_widget_set_size_request(button13,10,10);	
	gtk_widget_set_size_request(button14,10,10);	
	gtk_widget_set_size_request(button15,10,10);	
	gtk_widget_set_size_request(button16,10,10);
		
	gtk_container_add(GTK_CONTAINER(hbox4),spacelabel7);
	gtk_container_add(GTK_CONTAINER(hbox4),button13);		
	gtk_container_add(GTK_CONTAINER(hbox4),button14);		
	gtk_container_add(GTK_CONTAINER(hbox4),button15);		
	gtk_container_add(GTK_CONTAINER(hbox4),button16);
	gtk_container_add(GTK_CONTAINER(hbox4),spacelabel8);	
	gtk_container_add(GTK_CONTAINER(vbox1),hbox4);	

	scorelabel = gtk_label_new("맞춘 문제 수 : 0 점수 : 0");
	donelabel= gtk_label_new("   ");
	
	gtk_container_add(GTK_CONTAINER(vbox1),scorelabel);		
	gtk_container_add(GTK_CONTAINER(vbox1),donelabel);	
	//button클릭시 이벤트 발생 부분.
	g_signal_connect(G_OBJECT(button1),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button2),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button3),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button4),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button5),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button6),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button7),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button8),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button9),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button10),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button11),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button12),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button13),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button14),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button15),"clicked", G_CALLBACK(buttonClicked), NULL);
	g_signal_connect(G_OBJECT(button16),"clicked", G_CALLBACK(buttonClicked), NULL);
	gtk_container_add(GTK_CONTAINER(window),vbox1);
	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}


