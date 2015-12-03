int timer_handler(gpointer data)	
{	
	Time -= 1;
	m=Time/60;
	s=Time%60;
	
	sprintf(buf,"Remaining Time: %d:%02d",m,s);
	
	gtk_label_set_text(GTK_LABEL(timelabel),buf);
	if(Time > 0 && cnt<8 )	return 1; 
	else{		
		sleep(1);
		clear();
		return done_label();
	}
}
