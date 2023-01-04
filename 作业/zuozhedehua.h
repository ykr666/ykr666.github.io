#if !defined(AFX_ZUOZHEDEHUA_H__C827C928_7A2E_4B2E_85F2_AEAEBEBC0FA1__INCLUDED_)
#define AFX_ZUOZHEDEHUA_H__C827C928_7A2E_4B2E_85F2_AEAEBEBC0FA1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// zuozhedehua.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// zuozhedehua dialog

class zuozhedehua : public CDialog
{
// Construction
public:
	zuozhedehua(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(zuozhedehua)
	enum { IDD = IDD_ZUOZHEDEHUA_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(zuozhedehua)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(zuozhedehua)
	virtual void OnOK();
	afx_msg void OnChangeEdit1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZUOZHEDEHUA_H__C827C928_7A2E_4B2E_85F2_AEAEBEBC0FA1__INCLUDED_)
