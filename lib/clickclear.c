#include "clickclear.h"

int click_clear(int check_click[][4],int i, int j){
	if(check_click[i][j]!=1)
		return 0;
	else
		return 1;
}
