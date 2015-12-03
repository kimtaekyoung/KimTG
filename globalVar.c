const gchar* random_card[5][4][4];	//5개의 4*4 문양 저장.
int Time = 60;		//1분
char buf[100];		//시간 출력을 위한 버퍼
char buf2[100];	//done 출력을 위한 버퍼
char buf3[100];	//버튼에 문자를 출력하기위한 버퍼
char buf4[100];	//버튼에 문자를 출력하기위한 버퍼
char buf5[100];	//점수 출력을 위한 버퍼
int version=0;
const char* first;
const char* second;
int m=0;				//분을 저장할 변수
int s=0;				//초를 저장할 변수
int cnt = 0;				//맞춘 수를 저장해줄 변수
int score = 0;			//점수를 저장하는 변수(맞추면 +5 틀리면 -1);
int click = 0;		//첫번째로 카드를 뒤집는건지 두번째 인지 판별하는 변수.
int check[4][4] = {0,};	//맞춘 문제에 해당하는 버튼들을 open상태로 놔둠.
int click_check[4][4] = {0,};//버튼이 클릭 되었는지 확인.
int start =0;		//게임의 시작 여부를 알리는 부분.
int first_1, first_2, second_1, second_2;
int i=0;
int done_label()	//시간이 0이 될 경우 done를 출력해는 부분
{
	sprintf(buf2,"%s","done");
	gtk_label_set_text(GTK_LABEL(donelabel),buf2);
	return 0;
}
