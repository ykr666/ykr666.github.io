; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "作业.h"

ClassCount=4
Class1=CMyApp
Class2=CMyDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_ZUOZHEDEHUA_DIALOG
Resource4=IDD_MY_DIALOG
Class4=zuozhedehua
Resource5=IDR_MENU1

[CLS:CMyApp]
Type=0
HeaderFile=作业.h
ImplementationFile=作业.cpp
Filter=N

[CLS:CMyDlg]
Type=0
HeaderFile=作业Dlg.h
ImplementationFile=作业Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=ID_About

[CLS:CAboutDlg]
Type=0
HeaderFile=作业Dlg.h
ImplementationFile=作业Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=ID_MENUITEM32775

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=11
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_BUTTON1,button,1342242816
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_ver,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_thisver,static,1342308352
Control11=IDC_BUTTON2,button,1342242816

[DLG:IDD_MY_DIALOG]
Type=1
Class=CMyDlg
ControlCount=5
Control1=IDCANCEL,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT1,edit,1352730756
Control4=IDC_BUTTON1,button,1342242816
Control5=IDC_BUTTON2,button,1342242816

[MNU:IDR_MENU1]
Type=1
Class=CAboutDlg
Command1=ID_MENUITEM32771
Command2=ID_MENUITEM32772
Command3=ID_MENUITEM32773
Command4=ID_MENUITEM32774
Command5=ID_MENUITEM32775
Command6=ID_About
CommandCount=6

[DLG:IDD_ZUOZHEDEHUA_DIALOG]
Type=1
Class=zuozhedehua
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDC_EDIT1,edit,1350633604

[CLS:zuozhedehua]
Type=0
HeaderFile=zuozhedehua.h
ImplementationFile=zuozhedehua.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

