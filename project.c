#include<gtk/gtk.h>
#include<stdlib.h>

GtkWidget* window;
GtkWidget* timelabel;
GtkWidget* scorelabel;
GtkWidget* donelabel;
GtkWidget* spacelabel1;
GtkWidget* spacelabel2;
GtkWidget* spacelabel3;
GtkWidget* spacelabel4;
GtkWidget* spacelabel5;
GtkWidget* spacelabel6;
GtkWidget* spacelabel7;
GtkWidget* spacelabel8;
GtkWidget* vbox1;
GtkWidget* hbox1;
GtkWidget* hbox2;
GtkWidget* hbox3;
GtkWidget* hbox4;
GtkWidget* button1;
GtkWidget* button2;
GtkWidget* button3;
GtkWidget* button4;
GtkWidget* button5;
GtkWidget* button6;
GtkWidget* button7;
GtkWidget* button8;
GtkWidget* button9;
GtkWidget* button10;
GtkWidget* button11;
GtkWidget* button12;
GtkWidget* button13;
GtkWidget* button14;
GtkWidget* button15;
GtkWidget* button16;
char random_card[5][4][4];	//5개의 4*4 문양 저장.
int Time = 60;		//1분
char buf[100];		//시간 출력을 위한 버퍼
char buf2[100];	//done 출력을 위한 버퍼
char buf3[100];	//버튼에 문자를 출력하기위한 버퍼
char buf4[100];	//버튼에 문자를 출력하기위한 버퍼
char buf5[100];	//점수 출력을 위한 버퍼
int version;
char first;
char second;
int m=0;				//분을 저장할 변수
int s=0;				//초를 저장할 변수
int cnt=0;			//맞춘 수를 저장해줄 변수
int click = 0;		//첫번째로 카드를 뒤집는건지 두번째 인지 판별하는 변수.
int i=0;		//카드 2개를 다 눌렀는데 틀렸을 경우 그 버튼들을 다시 가려 주기 위한 변수.
int start =0;		//게임의 시작 여부를 알리는 부분.
int done_label()	//시간이 0이 될 경우 done를 출력해는 부분
{
	sprintf(buf2,"%s","done");
	gtk_label_set_text(GTK_LABEL(donelabel),buf2);
	return 0;
} 
void card_set(){
	random_card[0][0][0] = 'A';
	random_card[0][0][1] = 'B';
	random_card[0][0][2] = 'C';
	random_card[0][0][3] = 'D';
	random_card[0][1][0] = 'A';
	random_card[0][1][1] = 'F';
	random_card[0][1][2] = 'G';
	random_card[0][1][3] = 'H';
	random_card[0][2][0] = 'E';
	random_card[0][2][1] = 'E';
	random_card[0][2][2] = 'F';
	random_card[0][2][3] = 'G';
	random_card[0][3][0] = 'H';
	random_card[0][3][1] = 'C';
	random_card[0][3][2] = 'B';
	random_card[0][3][3] = 'D';

	random_card[1][0][0] = 'T';
	random_card[1][0][1] = 'Y';
	random_card[1][0][2] = 'U';
	random_card[1][0][3] = 'I';
	random_card[1][1][0] = 'O';
	random_card[1][1][1] = 'P';
	random_card[1][1][2] = 'T';
	random_card[1][1][3] = 'P';
	random_card[1][2][0] = 'O';
	random_card[1][2][1] = 'R';
	random_card[1][2][2] = 'E';
	random_card[1][2][3] = 'R';
	random_card[1][3][0] = 'Y';
	random_card[1][3][1] = 'U';
	random_card[1][3][2] = 'E';
	random_card[1][3][3] = 'I';

	random_card[2][0][0] = 'A';
	random_card[2][0][1] = 'A';
	random_card[2][0][2] = 'A';
	random_card[2][0][3] = 'A';
	random_card[2][1][0] = 'A';
	random_card[2][1][1] = 'A';
	random_card[2][1][2] = 'A';
	random_card[2][1][3] = 'A';
	random_card[2][2][0] = 'A';
	random_card[2][2][1] = 'A';
	random_card[2][2][2] = 'A';
	random_card[2][2][3] = 'A';
	random_card[2][3][0] = 'A';
	random_card[2][3][1] = 'A';
	random_card[2][3][2] = 'A';
	random_card[2][3][3] = 'A';

	random_card[3][0][0] = 'q';
	random_card[3][0][1] = 'w';
	random_card[3][0][2] = 'e';
	random_card[3][0][3] = 'Q';
	random_card[3][1][0] = 'A';
	random_card[3][1][1] = 'a';
	random_card[3][1][2] = 'E';
	random_card[3][1][3] = 'e';
	random_card[3][2][0] = 'D';
	random_card[3][2][1] = 'A';
	random_card[3][2][2] = 'Q';
	random_card[3][2][3] = 'D';
	random_card[3][3][0] = 'a';
	random_card[3][3][1] = 'q';
	random_card[3][3][2] = 'w';
	random_card[3][3][3] = 'E';

	random_card[4][0][0] = '1';
	random_card[4][0][1] = '3';
	random_card[4][0][2] = 'A';
	random_card[4][0][3] = 'D';
	random_card[4][1][0] = 'd';
	random_card[4][1][1] = 'a';
	random_card[4][1][2] = 'c';
	random_card[4][1][3] = '3';
	random_card[4][2][0] = 'c';
	random_card[4][2][1] = '1';
	random_card[4][2][2] = 'd';
	random_card[4][2][3] = 'A';
	random_card[4][3][0] = 'D';
	random_card[4][3][1] = '4';
	random_card[4][3][2] = '4';
	random_card[4][3][3] = 'a';
}
int space()		//모든 button에 빈공간을 넣어주는 부분.
{
	gtk_button_set_label(GTK_BUTTON(button1)," ");
	gtk_button_set_label(GTK_BUTTON(button2)," ");
	gtk_button_set_label(GTK_BUTTON(button3)," ");
	gtk_button_set_label(GTK_BUTTON(button4)," ");
	gtk_button_set_label(GTK_BUTTON(button5)," ");
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
	return 0;
}
int timer_handler(gpointer data)	
{
	if(start == 1){
		Time -= 1;
		m=Time/60;
		s=Time%60;
		//buf에 Remaining Time: m:s를 저장 한뒤
		sprintf(buf,"Remaining Time: %d:%02d",m,s);
		//timelabel에 buf값 출력
		gtk_label_set_text(GTK_LABEL(timelabel),buf);
		if(Time > 0)	return 1; //시간이 아직 0:00보다 클 경우 계속 실행
		else{		//시간이 0과 같거나 작을경우
			return done_label();
		}
	}
}
int same(){
	if(first == second){
		return 1;
	}else{
		return 0;
	}
}
void buttonClicked(GtkWidget *widget){	
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
		return;
	}
	else{
		++click;
		if(click == 1){
			if(widget == button1){
				sprintf(buf3,"%c",random_card[version][0][0]);
				gtk_button_set_label(GTK_BUTTON(button1),buf3);
				first = random_card[version][0][0];
			}else if(widget == button2){
				sprintf(buf3,"%c",random_card[version][0][1]);
				gtk_button_set_label(GTK_BUTTON(button2),buf3);
				first = random_card[version][0][1];
			}else if(widget == button3){
				sprintf(buf3,"%c",random_card[version][0][2]);
				gtk_button_set_label(GTK_BUTTON(button1),buf3);
				first = random_card[version][0][2];
			}else if(widget == button4){
				sprintf(buf3,"%c",random_card[version][0][3]);
				gtk_button_set_label(GTK_BUTTON(button4),buf3);
				first = random_card[version][0][3];
			}else if(widget == button5){
				sprintf(buf3,"%c",random_card[version][1][0]);
				gtk_button_set_label(GTK_BUTTON(button5),buf3);
				first = random_card[version][1][0];
			}else if(widget == button6){
				sprintf(buf3,"%c",random_card[version][1][1]);
				gtk_button_set_label(GTK_BUTTON(button6),buf3);
				first = random_card[version][1][1];
			}else if(widget == button7){
				sprintf(buf3,"%c",random_card[version][1][2]);
				gtk_button_set_label(GTK_BUTTON(button7),buf3);
				first = random_card[version][1][2];
			}else if(widget == button8){
				sprintf(buf3,"%c",random_card[version][1][3]);
				gtk_button_set_label(GTK_BUTTON(button8),buf3);
				first = random_card[version][1][3];
			}else if(widget == button9){
				sprintf(buf3,"%c",random_card[version][2][0]);
				gtk_button_set_label(GTK_BUTTON(button9),buf3);
				first = random_card[version][2][0];
			}else if(widget == button10){
				sprintf(buf3,"%c",random_card[version][2][1]);
				gtk_button_set_label(GTK_BUTTON(button10),buf3);
				first = random_card[version][2][1];
			}else if(widget == button11){
				sprintf(buf3,"%c",random_card[version][2][2]);
				gtk_button_set_label(GTK_BUTTON(button11),buf3);
				first = random_card[version][2][2];
			}else if(widget == button12){
				sprintf(buf3,"%c",random_card[version][2][3]);
				gtk_button_set_label(GTK_BUTTON(button12),buf3);
				first = random_card[version][2][3];
			}else if(widget == button13){
				sprintf(buf3,"%c",random_card[version][3][0]);
				gtk_button_set_label(GTK_BUTTON(button13),buf3);
				first = random_card[version][3][0];
			}else if(widget == button14){
				sprintf(buf3,"%c",random_card[version][3][1]);
				gtk_button_set_label(GTK_BUTTON(button14),buf3);
				first = random_card[version][3][1];
			}else if(widget == button15){
				sprintf(buf3,"%c",random_card[version][3][2]);
				gtk_button_set_label(GTK_BUTTON(button15),buf3);
				first = random_card[version][3][2];
			}else if(widget == button16){
				sprintf(buf3,"%c",random_card[version][3][3]);
				gtk_button_set_label(GTK_BUTTON(button16),buf3);
				first = random_card[version][3][3];
			}
		}
		//문제 맞추면 점수 올리는 부분.
		if(click == 2)
		{
			if(widget == button1)
				second = random_card[version][0][0];
			else if(widget == button2)
				second = random_card[version][0][1];
			else if(widget == button3)
				second = random_card[version][0][2];
			else if(widget == button4)
				second = random_card[version][0][3];
			else if(widget == button5)
				second = random_card[version][1][0];
			else if(widget == button6)
				second = random_card[version][1][1];
			else if(widget == button7)
				second = random_card[version][1][2];
			else if(widget == button8)
				second = random_card[version][1][3];
			else if(widget == button9)
				second = random_card[version][2][0];
			else if(widget == button10)
				second = random_card[version][2][1];
			else if(widget == button11)
				second = random_card[version][2][2];
			else if(widget == button12)
				second = random_card[version][2][3];
			else if(widget == button13)
				second = random_card[version][3][0];
			else if(widget == button14)
				second = random_card[version][3][1];
			else if(widget == button15)
				second = random_card[version][3][2];
			else if(widget == button16)
				second == random_card[version][3][3];
		
			if(same()==1){
				cnt++;
				sprintf(buf5,"score : %d",cnt);
				gtk_label_set_text(GTK_LABEL(scorelabel),buf5);
			}
			else
			{
				sprintf(buf5,"score : %d",cnt);
				gtk_label_set_text(GTK_LABEL(scorelabel),buf5);
				return;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	srand((unsigned)time(NULL)); //계속 바뀌는 랜덤값을 받기 위한 부분
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	i=rand()%4;
	timelabel = gtk_label_new("Remaining Time: 1:00");
	g_timeout_add(1000, timer_handler,0);
	vbox1 = gtk_vbox_new(TRUE,0);
	gtk_widget_set_size_request(timelabel,300,50);
	gtk_container_add(GTK_CONTAINER(vbox1),timelabel);

	hbox1 = gtk_hbox_new(TRUE,0);
	//처음 모든 버튼에 빈 공간을 삽입 후 출력
	button1 = gtk_button_new_with_label("1");
	button2 = gtk_button_new_with_label("2");
	button3 = gtk_button_new_with_label("3");
	button4 = gtk_button_new_with_label("4");
	button5 = gtk_button_new_with_label(" ");
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

	scorelabel = gtk_label_new("Score : 0");
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



