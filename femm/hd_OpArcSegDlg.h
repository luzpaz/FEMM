// hd_OpArcSegDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// hdCOpArcSegDlg dialog

class hdCOpArcSegDlg : public CDialog {
  // Construction
  public:
  hdCOpArcSegDlg(CWnd* pParent = NULL); // standard constructor
  int cursel;
  int condsel;
  CArray<CBoundaryProp, CBoundaryProp&>* plineproplist;
  CArray<CCircuit, CCircuit&>* pcircproplist;

  // Dialog Data
  //{{AFX_DATA(hdCOpArcSegDlg)
  enum { IDD = IDD_HD_OPARCSEGDLG };
  CComboBox m_arcsegcond;
  CComboBox m_ArcSegBdry;
  double m_MaxSeg;
  BOOL m_hide;
  int m_ingroup;
  //}}AFX_DATA

  // Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(hdCOpArcSegDlg)
  protected:
  virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support
  //}}AFX_VIRTUAL

  // Implementation
  protected:
  // Generated message map functions
  //{{AFX_MSG(hdCOpArcSegDlg)
  virtual BOOL OnInitDialog();
  virtual void OnOK();
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
  public:
  CLuaEdit m_IDC_ingroup, m_IDC_MaxSeg;
};
