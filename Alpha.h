// Alpha.h : main header file for the ALPHA application
//

#if !defined(AFX_ALPHA_H__ED88E5BC_3B05_457E_BAF2_6C7A912E9563__INCLUDED_)
#define AFX_ALPHA_H__ED88E5BC_3B05_457E_BAF2_6C7A912E9563__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAlphaApp:
// See Alpha.cpp for the implementation of this class
//

class CAlphaApp : public CWinApp
{
public:
	CAlphaApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAlphaApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CAlphaApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALPHA_H__ED88E5BC_3B05_457E_BAF2_6C7A912E9563__INCLUDED_)
