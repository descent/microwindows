/*This (interface.c) file has been generated automatically by TinyDesigner. This file may get overwritten by TinyDesigner.DO NOT edit this file*/
#include<microwin/tnWidgets.h>
#include "interface.h"
#include "callback.h"

TN_WIDGET * create_window0(TN_WIDGET *parent)
{
TN_WIDGET *window0;
TN_WIDGET *textbox0;
TN_WIDGET *button0;
TN_WIDGET *button1;

window0=tnCreateWidget(TN_WINDOW,parent,3,16,TN_WIDTH,300,TN_HEIGHT,200,TN_ENABLED,TN_TRUE,TN_VISIBLE,TN_TRUE,TN_CAPTION,"Window",TN_END);
tnAttachData(window0,strdup("window0"));
textbox0=tnCreateWidget(TN_TEXTBOX,window0,111,41,TN_WIDTH,90,TN_HEIGHT,15,TN_ENABLED,TN_TRUE,TN_VISIBLE,TN_TRUE,TN_DEFAULTTEXT,"",TN_END);
tnAttachData(textbox0,strdup("textbox0"));
button0=tnCreateWidget(TN_BUTTON,window0,123,119,TN_WIDTH,60,TN_HEIGHT,30,TN_ENABLED,TN_TRUE,TN_VISIBLE,TN_TRUE,TN_CAPTION,"Click me!",TN_END);
tnAttachData(button0,strdup("button0"));
button1=tnCreateWidget(TN_BUTTON,window0,220,40,TN_WIDTH,30,TN_HEIGHT,30,TN_ENABLED,TN_TRUE,TN_VISIBLE,TN_TRUE,TN_CAPTION,"Clear",TN_END);
tnAttachData(button1,strdup("button1"));
tnRegisterCallBack(window0,CLOSED,on_window_close,NULL);
tnRegisterCallBack(button0,CLICKED,on_button_clicked,window0);
tnRegisterCallBack(button1,CLICKED,on_clear_clicked,textbox0);
return window0;
}

