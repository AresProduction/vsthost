// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__9052BAF9_9D44_11D5_8163_4000001054B2__INCLUDED_)
#define AFX_MAINFRM_H__9052BAF9_9D44_11D5_8163_4000001054B2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// Fenster CMainMdiClient 

class CMainMdiClient : public CWnd
{
// Konstruktion
public:
	CMainMdiClient();

// Attribute
public:

// Operationen
public:
   WNDPROC *GetSuperWndProcAddr();

// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CMainMdiClient)
	//}}AFX_VIRTUAL

// Implementierung
public:
	BOOL SetBitmap(UINT idResource);
    void SetBackgroundColor(COLORREF clrBk) { clrBack = clrBk; }
	virtual ~CMainMdiClient();

	// Generierte Nachrichtenzuordnungsfunktionen
protected:
	//{{AFX_MSG(CMainMdiClient)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

protected:
	CBitmap *pBmp;
    COLORREF clrBack;
};


class CMainFrame : public CMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
    HACCEL GetAccelTable() { return m_hAccelTable; }

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;
    CMainMdiClient m_wndMDIClient;
// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__9052BAF9_9D44_11D5_8163_4000001054B2__INCLUDED_)
