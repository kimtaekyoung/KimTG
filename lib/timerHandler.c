#include<gtk/gtk.h>
#include<string.h>
#include "timerHandler.h"
#include "cardClear.h"
#include "doneLabel.h"
#include "globalVar.h"

int timer_handler(gpointer data)	
{	
	Time -= 1;
	m=Time/60;
	s=Time%60;
	//buf에 Remaining Time: m:s를 저장 한뒤
	sprintf(buf,"Remaining Time: %d:%02d",m,s);
	//timelabel에 buf값 출력
	gtk_label_set_text(GTK_LABEL(timelabel),buf);
	if(Time > 0 && cnt<8 )	return 1; //시간이 아직 0:00보다 클 경우 계속 실행
	else{		//시간이 0과 같거나 작을경우
		sleep(1);
		cclear();
		testtest();
		return done_label();
	}
}
