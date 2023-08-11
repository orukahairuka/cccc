/******
 * homework circkefill 0505 fryday
 * Sakurai Erika 2353702
 * 
*****/

#include <stdio.h>
#include <handy.h>

int main(){
    HgOpen(400,400);

    HgSetFillColor(HG_RED);// set red color
    HgCircleFill(120,120,100,1);//firstcircle

    HgSetFillColor(HG_BLUE);// set blue color
    HgCircleFill(120,280,100,1);//secondcircle

    HgSetFillColor(HG_GREEN);// set green color
    HgCircleFill(280,280,100,1); //thirdcircle


    HgSetFillColor(HG_YELLOW); //set yellow color
    HgCircleFill(280,120,100,1); //second circle

    HgGetChar();
    HgClose(); 
    return 0;

}
