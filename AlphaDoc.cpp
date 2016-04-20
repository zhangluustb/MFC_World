// AlphaDoc.cpp : implementation of the CAlphaDoc class
//

#include "stdafx.h"
#include "Alpha.h"

#include "AlphaDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAlphaDoc

IMPLEMENT_DYNCREATE(CAlphaDoc, CDocument)

BEGIN_MESSAGE_MAP(CAlphaDoc, CDocument)
	//{{AFX_MSG_MAP(CAlphaDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAlphaDoc construction/destruction

CAlphaDoc::CAlphaDoc()
{
	// TODO: add one-time construction code here

}

CAlphaDoc::~CAlphaDoc()
{
}

BOOL CAlphaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAlphaDoc serialization

void CAlphaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CAlphaDoc diagnostics

#ifdef _DEBUG
void CAlphaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAlphaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAlphaDoc commands
