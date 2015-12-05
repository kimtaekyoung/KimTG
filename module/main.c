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
