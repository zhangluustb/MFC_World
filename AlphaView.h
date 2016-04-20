// AlphaView.h : interface of the CAlphaView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ALPHAVIEW_H__E9048D0F_86A8_4101_9559_4E485DF55875__INCLUDED_)
#define AFX_ALPHAVIEW_H__E9048D0F_86A8_4101_9559_4E485DF55875__INCLUDED_
#include "AlphaDoc.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAlphaView : public CView
{
protected: // create from serialization only
	CAlphaView();
	DECLARE_DYNCREATE(CAlphaView)

// Attributes
public:
	CAlphaDoc* GetDocument();

// Operations
public:
	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAlphaView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAlphaView();
	CStringArray m_strArray;
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAlphaView)
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	afx_msg void OnPhone1();
	afx_msg void OnPhone2();
	afx_msg void OnPhone3();
	afx_msg void OnPhone4();
	DECLARE_MESSAGE_MAP()
private:
	CString m_strLine;
	CMenu m_menu;
	int m_nIndex;
};


#ifndef _DEBUG  // debug version in AlphaView.cpp
inline CAlphaDoc* CAlphaView::GetDocument()
   { return (CAlphaDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALPHAVIEW_H__E9048D0F_86A8_4101_9559_4E485DF55875__INCLUDED_)
