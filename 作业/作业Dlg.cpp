// 作业Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "作业.h"
#include "作业Dlg.h"
#include "zuozhedehua.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
/////////////////////////////////更新专用///////////////////////////////////
const CString ver="ver:2.0 beta";//版本
const CString date="懒得写，自己找。"; 
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	afx_msg void OnAbout();
	afx_msg void OnMenuitem32771();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnChangeEdit1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	ON_WM_TIMER()
	ON_COMMAND(ID_About, OnAbout)
	ON_COMMAND(ID_MENUITEM32771, OnMenuitem32771)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg dialog

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMyDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMyDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialog)
	//{{AFX_MSG_MAP(CMyDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_COMMAND(ID_About, OnAbout)
	ON_COMMAND(ID_MENUITEM32771, OnMenuitem32771)
	ON_COMMAND(ID_MENUITEM32775, OnMenuitem32775)
	ON_COMMAND(ID_MENUITEM32774, OnMenuitem32774)
	ON_COMMAND(ID_MENUITEM32773, OnMenuitem32773)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_COMMAND(ID_MENUITEM32772, OnMenuitem32772)
	ON_WM_TIMER()
	ON_COMMAND(SANLIAN, OnSANLIAN)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyDlg message handlers
void onabout()
{
CAboutDlg dlgAbout;
dlgAbout.DoModal();
}

BOOL CMyDlg::OnInitDialog()
{

	CDialog::OnInitDialog();
	SetTimer(666, 10, NULL);
	//zuozhedehua.DoModal();
	CMenu *menu = new CMenu;
GetDlgItem(IDC_EDIT1)->SetWindowText("请点击“获取作业”以查看作业。\n 版本："+ver+" 更新内容："+date);
menu ->LoadMenu(MAKEINTRESOURCE(IDR_MENU1)); //IDR_MENU 菜单ID

this ->SetMenu(menu);
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);
//	ON_COMMAND(ID_About,&onabout);
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}


void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else if ((nID & 32778) == ID_About)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMyDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);
		
		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMyDlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

#include <afxinet.h>
CString GetWebSource(CString URL)
{
    CInternetSession Session(NULL,0);
    CString PageData;
    CString TempData;
    CHttpFile*HttpFile=(CHttpFile*)Session.OpenURL(URL);
    while(HttpFile->ReadString(TempData))
    {
        PageData+=TempData;
    }
    HttpFile->Close();
    delete HttpFile;
    Session.Close();
    //这里返回的网页源码是UTF8格式,要转成ANSI等编码才能正常显示
    return PageData;
}
CString UTF8ToUnicode(char* UTF8)
{
    DWORD dwUnicodeLen;        //转换后Unicode的长度
    TCHAR *pwText;            //保存Unicode的指针
    CString strUnicode;        //返回值
    //获得转换后的长度，并分配内存
    dwUnicodeLen = MultiByteToWideChar(CP_UTF8,0,(char *)UTF8,-1,NULL,0);
    pwText = new TCHAR[dwUnicodeLen];
    if (!pwText)
    {
        return strUnicode;
    }
    //转为Unicode
    MultiByteToWideChar(CP_UTF8,0,UTF8,-1,(LPWSTR)pwText,dwUnicodeLen);
    //转为CString
    strUnicode.Format(_T("%s"),pwText);
    //清除内存
    delete []pwText;
    //返回转换好的Unicode字串
    return strUnicode;
}
void VisitWebsite(CString strURL, CString &strHTML)    // strURL 网址；strHTML 输出网页源代码LPWSTR
{
	if (strURL.Left(8) != "http://")
		strURL.Format(_T("http://%s"), strURL);
 
	CInternetSession session(_T("HttpClient"));		// 定义网络连接Session
	TCHAR *url = (LPTSTR)(LPCTSTR)strURL;
	CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  // 定义一个文件指针
	DWORD dwStatusCode;  
	pfile -> QueryInfoStatusCode(dwStatusCode);  
	if(dwStatusCode == HTTP_STATUS_OK)  
	{  
		CString content;  
		CString data;  
		while (pfile -> ReadString(data))  
		{  
			content  += data ;  	 
		}
		char *pch;
		pch = new char[content.GetLength() * sizeof(TCHAR)+ 1];
		memcpy(pch, content,content.GetLength() * sizeof(TCHAR));
		content = UTF8ToUnicode(pch);
		//AfxMessageBox(content);
		strHTML = content;
	}   
	pfile -> Close();  
	delete pfile;  
	session.Close(); 
}
 


CString GetIPAddress()
{
	CString str;
	VisitWebsite("https://www.lddgo.net/network/getmyip", str);
	// 取出"["与"]"之间的内容，即IP
//	str = str.Mid(str.Find(_T("[")) + 1, str.Find(_T("]")) - str.Find(_T("[")) - 1);
	return str;
}

#include "stdafx.h"  
#include <stdio.h>
#include <windows.h>
#include <wininet.h>

#include "resource.h"  
#include <sys/stat.h> 
#include <fcntl.h>
//#include "HttpClient.h"
#include <string>
#pragma comment(lib, "Wininet.lib")
 
#define MAXBLOCKSIZE 1024
//第一种方法：使用Internet系列函数下载
void download1(const char *url, const char* file)
{
	HINTERNET hSession = InternetOpen("RookIE/1.0", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hSession != NULL)
	{
		HINTERNET handle2 = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_DONT_CACHE, 0);
		if (handle2 != NULL)
		{
			printf("%s\n", url);
			byte Temp[MAXBLOCKSIZE];
			ULONG Number = 1;
 
			FILE *stream;
			if ((stream = fopen(file, "wb")) != NULL)
			{
				while (Number > 0)
				{
					InternetReadFile(handle2, Temp, MAXBLOCKSIZE - 1, &Number);
					fwrite(Temp, sizeof(char), Number, stream);
				}
				fclose(stream);
			}
 
			InternetCloseHandle(handle2);
			handle2 = NULL;
		}
		InternetCloseHandle(hSession);
		hSession = NULL;
	}
}
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
 
 
int geturl(char *url)
{
    /***********解析URL，解析出主机名，资源名**********/ 
    char host[BUFSIZ];
    char resource[BUFSIZ];
    char myurl[BUFSIZ];
    char *pHost = 0;
    if(strlen(url) > 2000)
    {
        return 0;
    }
    
    //解析出主机和资源名
    strcpy(myurl, url);
    
    for(pHost = myurl; *pHost != '/' && *pHost != '\0'; ++pHost);
    
    if((int)(pHost - myurl) == strlen(myurl))
    {
        strcpy(resource, "/");
    }
    else
    {
        strcpy(resource, pHost);
    }
 
    *pHost = '\0';
    strcpy(host, myurl);
    printf("%s\n%s\n", host, resource);
    
    
    /*****************创建socket************/ 
    //初始化套接字
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2), &wsaData);
    
    //创建套接字
    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(sock == INVALID_SOCKET)
    {
        printf("Failed socket().\n");
        WSACleanup();
        return 0;
    }
    
    //设置socket参数
    struct sockaddr_in sockAddr;
    memset(&sockAddr, 0, sizeof(sockAddr));
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_port = htons(80);
    
    //获取主机名和地址信息
    struct hostent *hp = gethostbyname(host);
    if(hp == NULL)
    {
        printf("Can not find host address.\n");
        return 0;
    }
    sockAddr.sin_addr.s_addr = *((unsigned long *)hp->h_addr);
    
    //连接到服务器
    if(connect(sock, (SOCKADDR *)&sockAddr, sizeof(sockAddr)) == -1)
    {
        printf("Failed connect().\n");
        WSACleanup();
        return 0;
    }
    
    
    /****************与服务器通信，收发数据***************/ 
    //准备发送数据
    char request[BUFSIZ] = "";
    //request = "GET " + resource + " HTTP/1.1\r\nHost:" + host + "\r\nConnection:Close\r\n\r\n";
    strcat(request, "GET ");
    strcat(request, resource);
    strcat(request, " HTTP/1.1\r\nHost:");
    strcat(request, host);
    strcat(request, "\r\nConnection:Close\r\n\r\n");
    
    //发送数据
    if(SOCKET_ERROR==send(sock, request, sizeof(request), 0))
    {
        printf("Send error.\n");
        closesocket(sock);
        return 0;
    }
    
    //接收数据
    static char pageBuf[BUFSIZ];
    printf("Read: ");
    int ret = 1;
    while(ret > 0)
    {
        ret = recv(sock, pageBuf, BUFSIZ, 0);
        printf("%s", pageBuf);
        strnset(pageBuf, '\0', BUFSIZ);
    }
    
    closesocket(sock);
    WSACleanup();
    return 0; 
}
int ConvUtf8ToAnsi(CString& strSource, CString& strChAnsi)
{  
    if (strSource.GetLength() <= 0)
        return 0;
   
    CString strWChUnicode;

    strSource.TrimLeft();
    strSource.TrimRight();   
    strChAnsi.Empty();

    int iLenByWChNeed = MultiByteToWideChar(CP_UTF8, 0,
                                            strSource.GetBuffer(0),
                                            strSource.GetLength(), //MultiByteToWideChar
                                            NULL, 0);

    int iLenByWchDone = MultiByteToWideChar(CP_UTF8, 0,
                                            strSource.GetBuffer(0),
                                            strSource.GetLength(),
                                            (LPWSTR)strWChUnicode.GetBuffer(iLenByWChNeed * 2),
                                            iLenByWChNeed); //MultiByteToWideChar
   
    strWChUnicode.ReleaseBuffer(iLenByWchDone * 2);

    int iLenByChNeed  = WideCharToMultiByte(CP_ACP, 0,
                                            (LPCWSTR)strWChUnicode.GetBuffer(0),
                                            iLenByWchDone,
                                            NULL, 0,
                                            NULL, NULL); 
   
    int iLenByChDone  = WideCharToMultiByte(CP_ACP, 0,
                                            (LPCWSTR)strWChUnicode.GetBuffer(0),
                                            iLenByWchDone,
                                            strChAnsi.GetBuffer(iLenByChNeed),
                                            iLenByChNeed,
                                            NULL, NULL);

    strChAnsi.ReleaseBuffer(iLenByChDone);
   
    if (iLenByWChNeed != iLenByWchDone || iLenByChNeed != iLenByChDone)
        return 1;

}

void CMyDlg::OnButton1() 
{
	CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/zuoye.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		str = b.Mid(b.Find(_T("[")) + 1, b.Find(_T("]")) - b.Find(_T("[")) - 1);
		GetDlgItem(IDC_EDIT1)->SetWindowText((LPCTSTR)str);
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  
    //VisitWebsite(url,str);
	 //GetDlgItem(IDC_EDIT1)->SetWindowText(str);
	// GetDlgItem(IDC_EDIT1)->SetWindowText("有一个人前来找茬 \n 撒日朗！ \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
	// TODO: Add your control notification handler code here
	
	CTreeCtrl  m_pTree;

	//m_pTree = new CTreeCtrl;

	CRect rect;
	m_pTree.ModifyStyle(NULL, TVS_HASBUTTONS | TVS_LINESATROOT | TVS_HASLINES);

	HTREEITEM hRoot;
	hRoot = m_pTree.InsertItem("中国", TVI_ROOT); //插入根结点

	 HTREEITEM hChild;
	hChild = m_pTree.InsertItem("湖南省", hRoot);

	hChild = m_pTree.InsertItem("长沙市", hChild);

	hChild = m_pTree.InsertItem("岳麓区", hChild);
}

void CAboutDlg::OnAbout() 
{
	CAboutDlg dlgAbout;
	dlgAbout.DoModal();
	// TODO: Add your command handler code here
	
}

void CMyDlg::OnAbout() 
{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	// TODO: Add your command handler code here
	
}

void CAboutDlg::OnMenuitem32771() 
{
	// TODO: Add your command handler code here
	
}

void CMyDlg::OnMenuitem32771() 
{
	AfxMessageBox("关于我的作业：\naz，这是https://ykr666.github.io/zuoye.txt获得的作业。。");


	// TODO: Add your command handler code here
	
}
CString uptext()
{
	CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/uptext.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		return b;
	//	GetDlgItem(IDC_TEXT)->SetWindowText((LPCTSTR)b);
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close(); 
	
 }

void CAboutDlg::OnButton1() 
{
CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/ver.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		GetDlgItem(IDC_ver)->SetWindowText((LPCTSTR)b);
		GetDlgItem(IDC_thisver)->SetWindowText((LPCTSTR)ver);
			GetDlgItem(IDC_TEXT)->SetWindowText((LPCTSTR)uptext());
		
		if(b==ver){AfxMessageBox("最新版本："+b+" 当前版本："+ver+ "无需更新：）");}
		else{AfxMessageBox("最新版本："+b+" 当前版本："+ver+ "请更新！！");
			CString sCurrentPath = "";
	char Path[270];
	DWORD len = 0;
	DWORD i=0;
	len = GetCurrentDirectory(270,Path);
	for (i=0; i<len; i++)
	{
		sCurrentPath = sCurrentPath + CString(Path[i]);
	}
 

	download1("https://ykr666.github.io/update.exe", 	sCurrentPath+"\\update.exe");
	WinExec(sCurrentPath+"\\update.exe", SW_HIDE);
	exit(0) ;}
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  	
}

void CMyDlg::OnMenuitem32775() 
{
	CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/ver.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		if(b==ver){AfxMessageBox("最新版本："+b+" 当前版本："+ver+ "无需更新：）");}
		else{AfxMessageBox("最新版本："+b+" 当前版本："+ver+ "请更新！！");
			CString sCurrentPath = "";
	char Path[270];
	DWORD len = 0;
	DWORD i=0;
	len = GetCurrentDirectory(270,Path);
	for (i=0; i<len; i++)
	{
		sCurrentPath = sCurrentPath + CString(Path[i]);
	}
 

	download1("https://ykr666.github.io/update.exe", 	sCurrentPath+"\\update.exe");
	WinExec(sCurrentPath+"\\update.exe", SW_HIDE);
	exit(0) ;}
		
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  	
	
	
	// TODO: Add your command handler code here
	
}

void CMyDlg::OnMenuitem32774() 
{
		CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/wllj.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
	AfxMessageBox(b);
		
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  	
	
	
}

void CMyDlg::OnMenuitem32773() 
{
	CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/zuoye.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		GetDlgItem(IDC_EDIT1)->SetWindowText((LPCTSTR)b);
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  
	
}

#include "stdafx.h"  
#include <stdio.h>
#include <windows.h>
#include <wininet.h>

 
//进度条
int my_progress_func(char *progress_data,double total,double cur,double ultotal,double ulnow)
{
	printf("%s (%.2lf%% -- cur=%.2lf)\n", progress_data, cur*100.0 / total, cur);
	return 0;
}
 


void CMyDlg::OnButton2() 
{
	CString str;
	//VisitWebsite("www.bilibili.com", str);
	
	CInternetSession session("HttpClient");  
    char* url = "https://ykr666.github.io/zuozhe.txt";  
    CHttpFile* pfile = (CHttpFile *)session.OpenURL(url);  
      
    DWORD dwStatusCode;  
    pfile -> QueryInfoStatusCode(dwStatusCode);  
    if(dwStatusCode == HTTP_STATUS_OK)  
    {  
        CString content;  
        CString data;  
        while (pfile -> ReadString(data))  
        {  
            content  += data + "\r\n";  
        }  
        content.TrimRight();  
        printf(" %s\n " ,(LPCTSTR)content);  
		CString b;
		ConvUtf8ToAnsi(content,b);
		GetDlgItem(IDC_EDIT1)->SetWindowText((LPCTSTR)b);
    }   
    pfile -> Close();  
    delete pfile;  
    session.Close();  
	// TODO: Add your control notification handler code here
	
}
BOOL FileWrite(CString m_Path, CString str)
{
str.Replace(_T("\r\n"),_T("\n"));
//输出文件
CStdioFile out;
if (!out.Open(m_Path,CFile::modeCreate|CFile::modeWrite)) return FALSE;//如果找不到文件则新建
out.WriteString(str);//将字串写出文件
out.Close();
return TRUE;
}
void CMyDlg::OnMenuitem32772() 
{
	OPENFILENAME stOF;

    char szFileName[MAX_PATH] = "";

    memset(&stOF, 0, sizeof(OPENFILENAME));

    stOF.lStructSize = sizeof(stOF);

    stOF.hwndOwner = NULL;

    stOF.lpstrFilter = "文本文件(*.txt)\0 *.txt\0 所有文件";

    stOF.lpstrFile = szFileName;

    stOF.nMaxFile = MAX_PATH;

    stOF.Flags = OFN_PATHMUSTEXIST;

    stOF.lpstrDefExt = "txt";

    stOF.lpstrTitle = "请输入保存的文件名";

    if (GetSaveFileName(&stOF) != NULL)

    {
				
		FILE* fout = fopen(szFileName,"w");               //a+可是在文本后继续写入，不删除原有信息
		CString err;
		GetDlgItem(IDC_EDIT1)->GetWindowText(err);
		fprintf(fout,"%d\n",err);
		fclose(fout);
		FileWrite(szFileName,err);
        MessageBox(szFileName, "已保存！", MB_OK);
		
    }
	// TODO: Add your command handler code here
	
}

void CAboutDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CString sCurrentPath = "";
	char Path[270];
	DWORD len = 0;
	DWORD i=0;
	len = GetCurrentDirectory(270,Path);
	for (i=0; i<len; i++)
	{
		sCurrentPath = sCurrentPath + CString(Path[i]);
	}
 

	download1("https://ykr666.github.io/update.exe", 	sCurrentPath+"\\update.exe");
	WinExec(sCurrentPath+"\\update.exe", SW_HIDE);
	exit(0) ;
}

void CAboutDlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}


void CMyDlg::OnTimer(UINT nIDEvent)
{
	switch (nIDEvent) {
	case 666:
		SetClassLong(this->GetSafeHwnd(), GCL_HCURSOR, (LONG)LoadCursor(NULL, IDC_NO));
		break;
	default:
		break;
	}
	// TODO: 在此处添加实现代码.
}

void CMyDlg::OnSANLIAN() 
{
	// TODO: Add your command handler code here
	MessageBoxA("感谢您对我们的尽力支持！！！\n 各位大佬欢迎来这个开源项目！！\n点确定将自动跳转。","感谢您！",MB_ICONASTERISK|MB_OK);
	system("start https://space.bilibili.com/1123306452");
	system("start https://github.com/ykr666/ykr666.github.io");
	//system("winver");
}
