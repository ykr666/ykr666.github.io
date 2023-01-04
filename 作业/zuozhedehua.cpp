// zuozhedehua.cpp : implementation file
//

#include "stdafx.h"
#include "ื๗าต.h"
#include "zuozhedehua.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// zuozhedehua dialog


zuozhedehua::zuozhedehua(CWnd* pParent /*=NULL*/)
	: CDialog(zuozhedehua::IDD, pParent)
{
	
	//{{AFX_DATA_INIT(zuozhedehua)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void zuozhedehua::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(zuozhedehua)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(zuozhedehua, CDialog)
	//{{AFX_MSG_MAP(zuozhedehua)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// zuozhedehua message handlers

void zuozhedehua::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void zuozhedehua::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
