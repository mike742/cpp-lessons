#include "ScoreDialog.h"
#include "AtlControls.h"


LRESULT ScoreDialog::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled) {
	return EndDialog(0);
}

LRESULT ScoreDialog::OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled) {
	CenterWindow();
	InitControls();
	return 1;
}
void ScoreDialog::InitControls() {

    const int lineHeight = 30;
    RECT rc;
    
    GetClientRect(&rc);
    InflateRect(&rc, -20, -20);
    rc.top = 10;
    rc.bottom = rc.top + lineHeight;
    ATLControls::CStatic header;
    header.Create(m_hWnd, &rc, _T("�� ������ ����� �� ���. ��������� ������� ���������."));

    OffsetRect(&rc, 0, lineHeight);
    RECT label = rc;
    label.right = 80;
    ATLControls::CStatic edit_label;
    edit_label.Create(m_hWnd, &label, _T("Edit: "));

    OffsetRect(&label, 100, 0);
    ATLControls::CEdit edit;
    edit.Create(m_hWnd, &label, _T("1234"), WS_CHILD | WS_VISIBLE | WS_TABSTOP);

    OffsetRect(&label, 100, 0);
    ATLControls::CButton edit_button;
    edit_button.Create(m_hWnd, &label, _T("Show"), WS_CHILD | WS_VISIBLE | WS_TABSTOP);
    edit_button.SetDlgCtrlID(444);

};