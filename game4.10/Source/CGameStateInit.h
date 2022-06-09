#include "InitalPageMenu.h"
#include "SelCharacterConfig.h"
#include <memory>
namespace game_framework {
	class CGameStateInit : public CGameState {
	public:
		CGameStateInit(CGame* g);
		void OnInit();  								// �C������Ȥιϧγ]�w
		void OnBeginState();							// �]�w�C�������һݪ��ܼ�
		void OnKeyUp(UINT, UINT, UINT); 				// �B�z��LUp���ʧ@
		void OnLButtonDown(UINT nFlags, CPoint point);  // �B�z�ƹ����ʧ@
		void OnMouseMove(UINT nFlags, CPoint point);	// �B�z�ƹ����ʧ@
		void ScreenClear();
		void SetAnimation();
		void SetCountdownAni();
		void SetPhotoStickers();
		~CGameStateInit();
	protected:
		void OnShow();									// ��ܳo�Ӫ��A���C���e��
	private:
		CMovingBitmap logo,black;	// csie��logo
		CAnimation attackScreen,countDown; //�ݧ�W �٨S�﨤���ʵe 
		StartBtn * startBtn;
		SettingBtn * settingBtn;
		SelectCharacterMenu* selectCharacterMenu;
		PhotoSticker *photoSticker_1P, *photoSticker_2P;
		Seclecter* photoSticker_seclecter;
		vector<int> bitmap;
		vector<int> picStickers{ PHOTOSTICKER_WOODY,PHOTOSTICKER_FREEZE,PHOTOSTICKER_HENRY}, picIDs{BITMAP_NUMBER_0,BITMAP_NUMBER_1,BITMAP_NUMBER_2}, picNames{NAME_WOODY,NAME_FREEZE,NAME_HENRY};
		//".\\res\\Woody\\woody_f.bmp",
		int keyCount;
		int cursorXY[2];
		int cursorClickLift;
		int characterID[2];
		int characterIsSeclected ;
		int loadedImg;
		int enterCounter;
		boolean MOUSE_ENABLE,SELECT_ENTER,SELECTOR_ENABLE;
 
		
	};
}