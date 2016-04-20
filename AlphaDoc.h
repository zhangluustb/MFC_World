// AlphaDoc.h : interface of the CAlphaDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ALPHADOC_H__9A93A4FB_A9D6_43EF_8E75_ABD723AE11C5__INCLUDED_)
#define AFX_ALPHADOC_H__9A93A4FB_A9D6_43EF_8E75_ABD723AE11C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CAlphaDoc : public CDocument
{
protected: // create from serialization only
	CAlphaDoc();
	DECLARE_DYNCREATE(CAlphaDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAlphaDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAlphaDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAlphaDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALPHADOC_H__9A93A4FB_A9D6_43EF_8E75_ABD723AE11C5__INCLUDED_)
