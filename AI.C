
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int area,area1,area2;
 void *img;
 void *imgg;
 void *imggg;
////////////////
void design()
{
setbkcolor(15);
///////////////////////////
setcolor(9);
setfillstyle(1,9);
circle(40,20,40);
floodfill(40,20,9);
setcolor(15);
setfillstyle(1,15);
circle(40,20,30);
floodfill(40,20,15);

setcolor(9);
setfillstyle(1,9);
circle(120,20,40);
floodfill(120,20,9);
setcolor(15);
setfillstyle(1,15);
circle(120,20,30);
floodfill(120,20,15);

setcolor(9);
setfillstyle(1,9);
circle(200,20,40);
floodfill(200,20,9);
setcolor(15);
setfillstyle(1,15);
circle(200,20,30);
floodfill(200,20,15);

setcolor(9);
setfillstyle(1,9);
circle(280,20,40);
floodfill(280,20,9);
setcolor(15);
setfillstyle(1,15);
circle(280,20,30);
floodfill(280,20,15);

setcolor(9);
setfillstyle(1,9);
circle(360,20,40);
floodfill(360,20,9);
setcolor(15);
setfillstyle(1,15);
circle(360,20,30);
floodfill(360,20,15);

setcolor(9);
setfillstyle(1,9);
circle(440,20,40);
floodfill(440,20,9);
setcolor(15);
setfillstyle(1,15);
circle(440,20,30);
floodfill(440,20,15);

setcolor(9);
setfillstyle(1,9);
circle(520,20,40);
floodfill(520,20,9);
setcolor(15);
setfillstyle(1,15);
circle(520,20,30);
floodfill(520,20,15);

setcolor(9);
setfillstyle(1,9);
circle(600,20,40);
floodfill(600,20,9);
setcolor(15);
setfillstyle(1,15);
circle(600,20,30);
floodfill(600,20,15);
////////////////////////////////////////////////
setcolor(9);
setfillstyle(1,9);
circle(40,450,40);  //////////////////////////////////
floodfill(40,450,9);
setcolor(15);
setfillstyle(1,15);
circle(40,450,30);
floodfill(40,450,15);

setcolor(9);
setfillstyle(1,9);
circle(120,450,40);
floodfill(120,450,9);
setcolor(15);
setfillstyle(1,15);
circle(120,450,30);
floodfill(120,450,15);

setcolor(9);
setfillstyle(1,9);
circle(200,450,40);
floodfill(200,450,9);
setcolor(15);
setfillstyle(1,15);
circle(200,450,30);
floodfill(200,450,15);

setcolor(9);
setfillstyle(1,9);
circle(280,450,40);
floodfill(280,450,9);
setcolor(15);
setfillstyle(1,15);
circle(280,450,30);
floodfill(280,450,15);

setcolor(9);
setfillstyle(1,9);
circle(360,450,40);
floodfill(360,450,9);
setcolor(15);
setfillstyle(1,15);
circle(360,450,30);
floodfill(360,450,15);

setcolor(9);
setfillstyle(1,9);
circle(440,450,40);
floodfill(440,450,9);
setcolor(15);
setfillstyle(1,15);
circle(440,450,30);
floodfill(440,450,15);

setcolor(9);
setfillstyle(1,9);
circle(520,450,40);
floodfill(520,450,9);
setcolor(15);
setfillstyle(1,15);
circle(520,450,30);
floodfill(520,450,15);

setcolor(9);
setfillstyle(1,9);
circle(600,450,40);
floodfill(600,450,9);
setcolor(15);
setfillstyle(1,15);
circle(600,450,30);
floodfill(600,450,15);

setcolor(7);
setfillstyle(1,7);
rectangle(20,70,25,400);
floodfill(22,125,7);

setcolor(7);
setfillstyle(1,7);
rectangle(615,70,620,400);
floodfill(617,125,7);

setcolor(7);
setfillstyle(1,7);
rectangle(595,70,600,400);
floodfill(597,125,7);

setcolor(7);
setfillstyle(1,7);
rectangle(40,70,45,400);
floodfill(42,125,7);
}

////////////////////////////////
void welcome()
{
//////////////////////////
design();
settextstyle(0,0,8);
setcolor(8);
outtextxy(110,220,"WELCOME");
settextstyle(1,0,3);
 setcolor(7);
 outtextxy(290,370,"Press enter to continue...");
 getch();
 cleardevice();
}

/////////////////////////////////////////////////////////

void first()
{
 design();
 settextstyle(1,0,4);
 setcolor(8);
 outtextxy(260,75,"PROJECT");
 outtextxy(300,110,"ON");
 outtextxy(85,145,"MISSIONARIES AND CANNIBALS");
 outtextxy(260,180,"PROBLEM");
 settextstyle(1,0,2);
 setcolor(15);
 outtextxy(110,230,"Submitted to:-");
 outtextxy(365,230,"Submitted by;-");
 settextstyle(3,0,1);
 setcolor(1);
 outtextxy(110,280,"Dr.Mohit K.Sharma(H.O.D)");
 outtextxy(110,310,"Ms.Simrat Kaur");
 outtextxy(110,330,"(Project Guide)");
 outtextxy(365,280,"Kiranjot Kaur(5207)");
 outtextxy(365,310,"Harnoor Kaur(5215)");
 getch();
 cleardevice();
}

///////////////////////////////////////////////////

void thanks()
{
cleardevice();
design();
settextstyle(0,0,8);
setcolor(8);
outtextxy(120,220,"THANKS");

 getch();
// cleardevice();
}
//////////////////////////////////
void scene()
{
 //////water
 setbkcolor(15);
 setcolor(1);
 setfillstyle(2,1);
 rectangle(200,350,460,620);
 floodfill(282,362,1);
 /////////////leftground
 setcolor(2);
 setfillstyle(9,2);
 rectangle(0,320,200,620);
 floodfill(10,340,2);
 ////////////////////rightground
 setcolor(2);
 setfillstyle(9,2);
 rectangle(460,320,700,620);
 floodfill(462,325,2);
 /////////////////clouds
 setcolor(7);
 setfillstyle(1,7);
 ellipse(100,50,0,180,25,20);
 ellipse(125,70,260,90,20,20);
 ellipse(100,90,180,360,20,20);
 ellipse(80,70,90,270,20,20);
 floodfill(140,70,7);
 ///2nd cloud
 setcolor(7);
 setfillstyle(1,7);
 ellipse(225,80,0,180,25,20);
 ellipse(250,100,260,90,20,20);
 ellipse(225,120,180,360,20,20);
 ellipse(205,100,90,270,20,20);
 floodfill(265,100,7);
 //3RD
 setcolor(7);
 setfillstyle(1,7);
 ellipse(500,40,0,180,30,25);
 ellipse(530,65,285,90,40,30);
 ellipse(515,95,210,360,25,30);
 ellipse(470,65,85,235,30,25);
 ellipse(480,85,180,300,30,30);
 floodfill(540,70,7);


// getch();
// cleardevice();
}
///////////////////////////
void scene1()
{
 scene();
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,10,"SCENE:-");
 getch();
 cleardevice();
}
///////////////////////////////////
void startstate()
{
 scene();
 settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,10,"START STATE:-");
 /////////////////////////////////boat
 setcolor(6);
 line(200,300,340,300);
 setcolor(6);
 setfillstyle(9,6);
 ellipse(270,300,180,360,70,47);
 floodfill(268,305,6);
 setcolor(6);
 line(320,200,320,300);
setcolor(6);
 setfillstyle(3,6);
 rectangle(320,200,350,220);
 floodfill(322,202,6);
//////////////////////missionaries

 setcolor(1);
 setfillstyle(1,1);
 line(0,300,24,300);
 line(0,300,12,260);
 line(24,300,12,260);
 floodfill(3,298,1);
 setcolor(1);
 line(6,300,6,320);
 line(18,300,18,320);
 setcolor(1);
 circle(12,248,12);
 ////////////////////////////rest2missionaries
 area=imagesize(0,235,25,320);
 img = malloc(area);
 getimage(0,235,25,320,img);
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 //////////////////////////////cannibal
 setcolor(4);
 setfillstyle(1,4);
 line(100,300,124,300);
 line(100,300,112,260);
 line(124,300,112,260);
 floodfill(103,298,4);
 setcolor(4);
 line(106,300,106,320);
 line(118,300,118,320);
 setcolor(4);
 circle(112,248,12);
 line(103,230,103,239);
 line(103,230,106,238);
 line(121,230,121,239);
 line(121,230,118,238);
 /////////////////////////rest2cannibals
 area=imagesize(0,235,25,320);
 imgg = malloc(area1);
 getimage(100,228,125,320,imgg);
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);

 getch();
 cleardevice();
}
///////////////////////////////////
void arti()
{
 design();
 settextstyle(1,0,4);
 setcolor(8);
 outtextxy(60,75,"ARITIFICIAL INTELLIGENCE");
 settextstyle(3,0,1);
 setcolor(1);
 outtextxy(55,130,"Artificial Intelligence is a wide ranging branch of computer ");
 outtextxy(55,160,"science concerned with building smart machines capable of ");
 outtextxy(55,190,"performance tasks that typically require human intelligence.");
 outtextxy(48,220,"While AI is an interdiscipilinary science with multiple approches");
 outtextxy(55,250,"advancements in a machine learning and deep learning,in a");
 outtextxy(48,280,"particular,are creating a paradigm shift in the virtually every");
 outtextxy(55,310,"sector of the tech industry.");
 getch();
 cleardevice();
}
/////////////////////////////////////
void states()
{
 design();
 settextstyle(1,0,4);
 setcolor(8);
 outtextxy(55,75,"STATE SPACE REPRESENTATION");
 settextstyle(3,0,1);
 setcolor(1);
 outtextxy(55,130,"State space Representation involves defining an INITIAL STATE");
 outtextxy(55,160,"and GOAL STATE and then determining sequence of actions,");
 outtextxy(55,190,"called states,to follow :-");
 outtextxy(48,230,"* State : A state can be an Initial state, goal state, or any");
 outtextxy(48,260,"other possible state that can be generated by applying rules ");
 outtextxy(55,290,"between them.");
 outtextxy(55,320,"* Space: In an AI problem, space refers to the exhaustive ");
 outtextxy(55,350," collection of all conceivable states.");

 getch();
 cleardevice();
}
////////////////
void states1()
{
design();
settextstyle(3,0,1);
setcolor(1);
outtextxy(55,100,"* Search : This technique move from the begining state to ");
outtextxy(48,130," the desired state by applying good rules while traversing the");
outtextxy(55,160," space of all possible states.");
getch();
cleardevice();
}
////////////////////////////////////////////////

void mcdefinition()
{
  design();
  settextstyle(1,0,4);
 setcolor(8);
 outtextxy(60,75,"MISSIONARIES AND CANNIBALS");
 settextstyle(3,0,1);
 setcolor(1);
 outtextxy(55,130,"In this problem,3 missionaries and 3 cannibals must cross a ");
 outtextxy(55,160,"river using a boat which can carry atmost 2 people under");
 outtextxy(55,190,"the constraint that for both banks,if there are missionaries");
 outtextxy(55,220,"present on the bank, they cannot be outnumbered by the");
 outtextxy(55,250,"cannibals (if they were , the cannibals would eat the");
 outtextxy(55,280,"missionaries).The boat cannot cross the river by itself with");
 outtextxy(55,310,"no people on the boat.");
  getch();
  cleardevice();
}
//////////////////////////////////////////////////////
void element1()
{
 setcolor(1);
 setfillstyle(1,1);
 line(0,300,24,300);
 line(0,300,12,260);
 line(24,300,12,260);
 floodfill(3,298,1);
 setcolor(1);
 line(6,300,6,320);
 line(18,300,18,320);
 setcolor(1);
 circle(12,248,12);

 area=imagesize(0,235,25,320);
 img = malloc(area);
 getimage(0,235,25,320,img);
 putimage(200,200,img,XOR_PUT);
 putimage(300,200,img,XOR_PUT);
 putimage(400,200,img,XOR_PUT);

 setcolor(15);
 setfillstyle(1,15);
 rectangle(0,235,25,320);
 floodfill(2,237,15);

 design();
 settextstyle(1,0,4);
 setcolor(8);
 outtextxy(60,75,"Element 1:- 3 MISSIONARIES");


 getch();
 cleardevice();
}
/////////////////////////////////
void element2()
{
 setcolor(4);
 setfillstyle(1,4);
 line(100,300,124,300);
 line(100,300,112,260);
 line(124,300,112,260);
 floodfill(103,298,4);
 setcolor(4);
 line(106,300,106,320);
 line(118,300,118,320);
 setcolor(4);
 circle(112,248,12);
 line(103,230,103,239);
 line(103,230,106,238);
 line(121,230,121,239);
 line(121,230,118,238);

 area1=imagesize(100,228,125,320);
 imgg = malloc(area1);
 getimage(100,228,125,320,imgg);
 putimage(200,200,imgg,XOR_PUT);
 putimage(300,200,imgg,XOR_PUT);
  putimage(400,200,imgg,XOR_PUT);

  setcolor(15);
  setfillstyle(1,15);
  rectangle(100,228,125,320);
  floodfill(102,230,15);
  design();
  settextstyle(1,0,4);
 setcolor(8);
 outtextxy(60,75,"Element 2:- 3 CANNIBALS");



  getch();
  cleardevice();

}
///////////////////////////////////
void element3()
{
 setcolor(6);
 line(200,300,340,300);
 setcolor(6);
 setfillstyle(9,6);
 ellipse(270,300,180,360,70,47);
 floodfill(268,305,6);
 setcolor(6);
 line(310,200,310,300);
setcolor(6);
 setfillstyle(3,6);
 rectangle(310,200,340,220);
 floodfill(322,202,6);

 design();

 settextstyle(1,0,4);
 setcolor(8);
 outtextxy(60,75,"Element 3:- A BOAT");

 area2=imagesize(200,200,340,350);
 imggg = malloc(area2);
 getimage(200,200,340,350,imggg);


 getch();
 cleardevice();
}
//////////////////////////
void step1()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 1:-Initially,a missionary and a cannibal will cross the river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(230,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);
  putimage(260,208,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
///////////////////////////////////
void step2()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 2:-Reached the other side of river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(350,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);
  putimage(380,208,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////////////////////
void step3()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 3:-Cannibal will stay on the other side of river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(350,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////////////////
void step4()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 4:-Missionary will come back on the boat.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(230,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////
void step5()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 5:-Missionary will stay on the shore of river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(156,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
///////////////////////////
void step6()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 6:-Two cannibals will cross the river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(230,208,imgg,XOR_PUT);
 putimage(260,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
///////////////////////////
void step7()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 7:-River crossed by cannibals.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(350,208,imgg,XOR_PUT);
 putimage(380,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////
void step8()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 8:-One cannibal will drop off from the boat.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(350,208,imgg,XOR_PUT);
 putimage(582,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////////////////////////////////
void step9()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 9:-A cannibal will come back.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(230,208,imgg,XOR_PUT);
 putimage(582,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////
void step10()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 10:-Cannibal will stay on the shore of river.");
       ////////miss
 putimage(28,235,img,XOR_PUT);
 putimage(56,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(582,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////////
void step11()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 11:-Two missionaries will cross the river.");
       ////////miss
 putimage(230,215,img,XOR_PUT);
 putimage(260,215,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(582,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////////////////////
void step12()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 12:-River crossed by Missionaries.");
       ////////miss
 putimage(350,215,img,XOR_PUT);
 putimage(380,215,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(582,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////
void step13()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 13:-A cannibal and a missionary will stay on the other side");
 outtextxy(10,18,"of river.");
       ////////miss
 putimage(350,215,img,XOR_PUT);
 putimage(460,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(380,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////
void step14()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 14:-A cannibal and a missionary will come back.");
       ////////miss
 putimage(230,215,img,XOR_PUT);
 putimage(460,235,img,XOR_PUT);
 putimage(0,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(260,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
///////////////////////////////////
void step15()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 15:-Two missionaries will cross the river.");
       ////////miss
 putimage(230,215,img,XOR_PUT);
 putimage(460,235,img,XOR_PUT);
 putimage(260,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////////////////////////
void step16()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 16:-River crossed by Missionaries.");
       ////////miss
 putimage(380,215,img,XOR_PUT);
 putimage(460,235,img,XOR_PUT);
 putimage(350,215,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////
void step17()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 17:-Missionaries will drop off from the boat on the other");
 outtextxy(10,18, "side of river.");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////
void step18()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 18:-A cannibal will come back.");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(350,208,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////////
void step19()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 19:-River crossed by cannibal.");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(128,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(230,208,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////////

/////////////////////////////////////////
void step20()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 20:-Two cannibals will cross the river.");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(260,208,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(230,208,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////
void step21()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 21:-River crossed by cannibals");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(350,208,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(380,208,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////////////////
void step22()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 22:-Cannibals will drop off on the other side of river.");
       ////////miss
 putimage(350,215,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(580,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
/////////////////////////////////////////
void step23()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 23:-A missionary will cross the river to pick the cannibal.");
       ////////miss
 putimage(230,215,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(580,228,imgg,XOR_PUT);
 putimage(100,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
////////////////////////////////////
void step24()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 24:-A missionary and a cannibal will cross the river.");
       ////////miss
 putimage(230,215,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(580,228,imgg,XOR_PUT);
 putimage(260,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(200,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
///////////////////////////////////
void step25()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,5,"STEP 25:-River crossed.");
       ////////miss
 putimage(350,215,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(580,228,imgg,XOR_PUT);
 putimage(380,208,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////////////
void step26()
{
scene();
settextstyle(1,0,1);
 setcolor(1);
 outtextxy(10,10,"GOAL STATE ACHIEVED");
       ////////miss
 putimage(460,235,img,XOR_PUT);
 putimage(490,235,img,XOR_PUT);
 putimage(520,235,img,XOR_PUT);
 //canni
 putimage(580,228,imgg,XOR_PUT);
 putimage(550,228,imgg,XOR_PUT);
  putimage(610,228,imgg,XOR_PUT);

 putimage(320,200,imggg,XOR_PUT);////boat
getch();
cleardevice();
}
//////////////////////////////////////////////////
void main()
{
int gm,gd=DETECT;
//void *img;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
// design();
 welcome();
 first();
 arti();
 states();
 states1();
 mcdefinition();
 element1();
 element2();
 element3();
 scene1();
 startstate();
 step1();
 step2();
 step3();
 step4();
 step5();
 step6();
 step7();
 step8();
 step9();
 step10();
 step11();
 step12();
 step13();
 step14();
 step15();
 step16();
 step17();
 step18();
 step19();
 step20();
 step21();
 step22();
 step23();
 step24();
 step25();
 step26();
 thanks();
 getch();
 closegraph();
}
//////////////////////////////////////////////////////

