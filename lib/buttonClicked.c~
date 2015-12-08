#include<gtk/gtk.h>

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

