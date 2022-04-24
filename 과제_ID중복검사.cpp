// 아이디 중복검사 확인!
// 교수님이 해주셨던 것이어서 복습하였습니다.





void CMemberMgrDlg::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (UpdateData() == FALSE) {
		return;
	}

	//공백을 제거한다
	m_strID = m_strID.Trim();
	m_strName = m_strName.Trim();
	m_strAddress = m_strAddress.Trim();
	m_strPhone1 = m_strPhone1.Trim();
	m_strPhone2 = m_strPhone2.Trim();
	m_strPhone3 = m_strPhone3.Trim();

	//값입력 여부 확인
	if (IsEmpty(m_strID, _T("아이디를 입력해주세요"), IDC_EDIT_ID)) return;
	if (IsEmpty(m_strName, _T("이름을 입력해주세요"), IDC_EDIT_NAME)) return;
	if (IsEmpty(m_strAddress, _T("주소를 입력해주세요"), IDC_EDIT_ADRESS)) return;
	if (IsEmpty(m_strPhone1, _T("전화번호를 입력해주세요"), IDC_EDIT_PHONE1)) return;
	if (IsEmpty(m_strPhone2, _T("전화번호를 입력해주세요"), IDC_EDIT_PHONE2)) return;
	if (IsEmpty(m_strPhone3, _T("전화번호를 입력해주세요"), IDC_EDIT_PHONE3)) return;

	//아이디 중복 확인
	//부모 윈도우 얻기 
	// 
	//등록시에만 중복여부 확인 
	CWnd* pWndId = GetDlgItem(IDC_EDIT_ID);
	if (pWndId != nullptr && pWndId->IsWindowEnabled()) {

		CMemberPtr pMember = m_memberMgr.GetMember(m_strID);
			if (pMember != nullptr && !pMember->m_strId.IsEmpty()) {
				AfxMessageBox(_T("아이디가 중복 되었습니다"));
				return;
			}
//		}
	}

	CDialogEx::OnOK();
}
