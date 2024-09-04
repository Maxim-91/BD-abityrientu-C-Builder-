//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBClient.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <DBTables.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TTable *Table1;
        TEdit *Edit1;
        TEdit *Edit2;
        TEdit *Edit3;
        TEdit *Edit4;
        TEdit *Edit5;
        TEdit *Edit6;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TPanel *Panel1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N6;
        TMenuItem *N7;
        TGroupBox *GroupBox1;
        TEdit *Edit7;
        TBitBtn *BitBtn1;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TEdit *Edit8;
        TEdit *Edit9;
        TEdit *Edit10;
        TEdit *Edit11;
        TEdit *Edit12;
        TDataSource *DataSource2;
        TDBGrid *DBGrid2;
        TDBNavigator *DBNavigator2;
        TTable *Table2;
        TLabel *Label7;
        TButton *Button2;
        TButton *Button4;
        TLabel *Label8;
        TMainMenu *MainMenu1;
        TMenuItem *N1;
        TMenuItem *N5;
        TMenuItem *N4;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N12;
        TMenuItem *N13;
        TMenuItem *N14;
        TMenuItem *N15;
        TMenuItem *N16;
        TMenuItem *N17;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        TSpeedButton *SpeedButton5;
        TSpeedButton *SpeedButton6;
        TSpeedButton *SpeedButton7;
        TMenuItem *N2;
        TMenuItem *N3;
        void __fastcall N6Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall N14Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall N15Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall N16Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall N13Click(TObject *Sender);
        void __fastcall N17Click(TObject *Sender);
        void __fastcall SpeedButton6Click(TObject *Sender);
        void __fastcall SpeedButton7Click(TObject *Sender);
        void __fastcall SpeedButton5Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 