//{{AFX_INCLUDES()
//#include "scrollbar.h"
//}}AFX_INCLUDES
#if !defined(AFX_FRMBMPSE_H__03DB3040_76CC_11D5_8752_00D009619765__INCLUDED_)
#define AFX_FRMBMPSE_H__03DB3040_76CC_11D5_8752_00D009619765__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FrmBmpSe.h : header file
//
#include "DlgListBox.h"
/////////////////////////////////////////////////////////////////////////////
// CFrmBmpSe dialog
#include "MImage.h"
#include "DlgImgScroll.h"
class CFrmBmpSe : public CDialog
{
// Construction
public:
	void RefDlgSize();
	virtual  ~CFrmBmpSe();
	void SetWidth(int Width);
	void SetHeight(int Height);
	void LoadAllImage();
	CFrmBmpSe(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFrmBmpSe)
	enum { IDD = IDD_BMPSE };
	CDlgListBox	m_List1;
	CString	m_csList1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFrmBmpSe)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool m_bDisplayFrmData;
	void InitList();
	int incY;
	int incX;
	void OnImgClick(int Index);
	int OldIndex;
	CMenu m_popMenu;
	CDlgImgScroll * m_pDlgImgLst;
	// Generated message map functions
	//{{AFX_MSG(CFrmBmpSe)
	afx_msg 	void OnActivate(UINT nState, CWnd *pWndOther, BOOL bMinimized);
	virtual BOOL OnInitDialog();
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSelchangeList1();
	afx_msg void OnChangeVscrollbar();
	afx_msg void OnChangeHscrollbar();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnClose();
	afx_msg void OnMenDispresult();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
extern CFrmBmpSe frmBmpSe;
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRMBMPSE_H__03DB3040_76CC_11D5_8752_00D009619765__INCLUDED_)
