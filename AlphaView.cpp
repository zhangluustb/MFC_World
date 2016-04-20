// AlphaView.cpp : implementation of the CAlphaView class
//

#include "stdafx.h"
#include "Alpha.h"

#include "AlphaDoc.h"
#include "AlphaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAlphaView

IMPLEMENT_DYNCREATE(CAlphaView, CView)

BEGIN_MESSAGE_MAP(CAlphaView, CView)
	//{{AFX_MSG_MAP(CAlphaView)
	ON_WM_RBUTTONDOWN()
	ON_WM_CHAR()
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_COMMAND(IDM_PHONE1,OnPhone1)
	ON_COMMAND(IDM_PHONE2,OnPhone2)
	ON_COMMAND(IDM_PHONE3,OnPhone3)
	ON_COMMAND(IDM_PHONE4,OnPhone4)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAlphaView construction/destruction

CAlphaView::CAlphaView()
{
	// TODO: add construction code here
	m_strLine="";
	m_nIndex=-1;
}

CAlphaView::~CAlphaView()
{
}

BOOL CAlphaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAlphaView drawing

void CAlphaView::OnDraw(CDC* pDC)
{
	CAlphaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CAlphaView printing

BOOL CAlphaView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAlphaView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAlphaView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CAlphaView diagnostics

#ifdef _DEBUG
void CAlphaView::AssertValid() const
{
	CView::AssertValid();
}

void CAlphaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAlphaDoc* CAlphaView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAlphaDoc)));
	return (CAlphaDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAlphaView message handlers

void CAlphaView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMenu menu;
	menu.LoadMenu(IDR_MENU1);
	CMenu *pPopup=menu.GetSubMenu(0);
	//CMenu *pPopup=&menu;
	ClientToScreen(&point);
	pPopup->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y,
    GetParent());
	/*
	CMenu m_PopupMenu;
	m_PopupMenu.CreatePopupMenu();
	m_PopupMenu.AppendMenu(MF_STRING,114,"test1");
	m_PopupMenu.AppendMenu(MF_STRING,114,"test2");
	ClientToScreen(&point);
	m_PopupMenu.TrackPopupMenu(TPM_LEFTALIGN,point.x,point.y,this);
	*/
	CView::OnRButtonDown(nFlags, point);
}

void CAlphaView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call defaultCClientDC dc(this);
	CClientDC dc(this);
	if (0x0d==nChar)
	{
		if(0==++m_nIndex)
		{
			m_menu.CreatePopupMenu();
			GetParent()->GetMenu()->AppendMenu(MF_POPUP,(UINT)m_menu.m_hMenu,"PhoneBook");
			GetParent()->DrawMenuBar();
		}
		//m_menu.AppendMenu(MF_STRING,IDM_PHONE1+m_nIndex,m_strLine.Left(m_strLine.Find(' ')));
		m_menu.AppendMenu(MF_STRING,IDM_PHONE1+m_nIndex,m_strLine);
		m_strArray.Add(m_strLine);
		m_strLine.Empty();
		Invalidate();
	}
	else
	{
		m_strLine+=nChar;
		dc.TextOut(0,0,m_strLine);
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CAlphaView::OnPhone1()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(0));
}
void CAlphaView::OnPhone2()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(1));
}
void CAlphaView::OnPhone3()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(2));
}
void CAlphaView::OnPhone4()
{
	CClientDC dc(this);
	dc.TextOut(0,0,m_strArray.GetAt(3));
}


int CAlphaView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	//设置背景颜色和鼠标样式
	//SetClassLong(m_hWnd,GCL_HBRBACKGROUND,(LONG)GetStockObject(BLACK_BRUSH));
	SetClassLong(m_hWnd,GCL_HCURSOR,(LONG)LoadCursor(NULL,IDC_HELP));

	return 0;
}
