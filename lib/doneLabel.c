#include "doneLabel.h"
#include "globalVar.h"
#include <stdio.h>

int done_label()
{
	sprintf(buf2,"%s","done");
	gtk_label_set_text(GTK_LABEL(donelabel),buf2);
	return 0;
}

void testtest() {
	printf("#");
}
