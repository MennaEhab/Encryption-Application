#include <afxwin.h>
#include "resource.h"
#include <string>
#include "ARC4.h"
#include <iostream>




class CExample : public CWinApp {
public:
    BOOL InitInstance();
};


class CExampleDlg : public CDialog {

public:
    enum { IDD = IDD_DIALOG1
    };

    CExampleDlg();
    ~CExampleDlg();
    DECLARE_MESSAGE_MAP()

    afx_msg void OnBnClickedButton1();
    afx_msg void OnEnChangeEdit1();
    afx_msg void OnEnChangeEdit2();


    void DoDataExchange(CDataExchange* pDX);

private :

    CString key;
    CString text;


};


CExampleDlg::CExampleDlg() :CDialog(CExampleDlg::IDD), key(_T(""))
, text(_T(""))
{

}

CExampleDlg::~CExampleDlg() {

}BEGIN_MESSAGE_MAP(CExampleDlg, CDialog)
ON_BN_CLICKED(IDC_BUTTON1, &CExampleDlg::OnBnClickedButton1)
ON_EN_CHANGE(IDC_EDIT1, &CExampleDlg::OnEnChangeEdit1)
ON_EN_CHANGE(IDC_EDIT2, &CExampleDlg::OnEnChangeEdit2)
END_MESSAGE_MAP()


void CExampleDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

   
    DDX_Text(pDX, IDC_EDIT1, key);
    DDX_Text(pDX, IDC_EDIT2, text);
}

void CExampleDlg::OnEnChangeEdit1()
{
   
    GetDlgItemText(IDC_EDIT1, key);
     
}


void CExampleDlg::OnEnChangeEdit2()
{
    GetDlgItemText(IDC_EDIT2, text);
}



/*  on click button start encryption */ 

void CExampleDlg::OnBnClickedButton1()
{

    ARC4 RC4_object;
    std::string Encrypted_string;

    /*empty text or key error handling */

    if (key == "")
    {
        AfxMessageBox(L"Please enter key ", MB_OK | MB_ICONSTOP);
    }
    else if(text == "")
    {
        AfxMessageBox(L"please enter plaintext", MB_OK | MB_ICONSTOP);
    }
    else
    {
        /* convert from CString key and text to string  */

        std::string key_str(CW2A(key.GetString()));
        std::string text_str(CW2A(text.GetString()));

        /* alocate the memory to store the message after encryption */

        unsigned char* encrepted_text = (unsigned char*)malloc(text_str.size() + 1);

        /* set key and start encryption */

        RC4_object.setKey((unsigned char*)key_str.c_str(), key_str.length());

        RC4_object.encrypt((unsigned char*)text_str.c_str(), encrepted_text, text_str.length());

        /* add the hex chars to string   */

        Encrypted_string = RC4_object.EncryptedText_to_hexString(encrepted_text, text_str.size());

        /* change string to Cstring */

        CString Encrypted_CString(Encrypted_string.c_str());

        /* show message box with the encrypted msg */

        AfxMessageBox(Encrypted_CString, MB_OK );

    }
 
}

BOOL CExample::InitInstance() {
    CExampleDlg myDlg;
    m_pMainWnd = &myDlg;
    myDlg.DoModal();
    return TRUE;
}

CExample MyApp;