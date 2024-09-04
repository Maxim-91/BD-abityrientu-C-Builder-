//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
typedef struct
{
 int shkola,n;
 float sbal;
} Tstud;
Tstud vika[4];
Tstud vika2[4];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N6Click(TObject *Sender)
{
  if (N6->Checked==true)
 {
  N8->Checked=true;
  CheckBox1->Checked=true;
 }
 else
 {
  N8->Checked=false;
  CheckBox1->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
 if (N7->Checked==true)
 {
  CheckBox2->Checked=true;
  N9->Checked=true;
 }
 else
 {
  CheckBox2->Checked=false;
  N9->Checked=false;
 }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Table1->Insert();
 Table1->Fields->Fields[1]->AsString=Edit1->Text;
 Table1->Fields->Fields[2]->AsString=Edit2->Text;
 Table1->Fields->Fields[3]->AsString=Edit3->Text;
 Table1->Fields->Fields[4]->AsFloat=StrToInt(Edit4->Text);
 Table1->Fields->Fields[5]->AsFloat=StrToInt(Edit5->Text);
 Table1->Fields->Fields[6]->AsFloat=StrToFloat(Edit6->Text);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 int i,j;
 
// жодної прибраної галочки при пошуку:


 if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

// 1 прибрана галочка при пошуку:


 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 // 2 прибраних галочек при пошуку:


 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



   else  if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



   else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else  if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }


  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }


 // 3 прибраних галочек при пошуку:


  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit10->Text==Table1->Fields->Fields[4]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit8->Text==Table1->Fields->Fields[2]->AsFloat&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else    if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }


 else     if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }


// 4 прибраних галочек при пошуку:
  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit11->Text==Table1->Fields->Fields[5]->AsString&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }




  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit10->Text==Table1->Fields->Fields[4]->AsString&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit10->Text==Table1->Fields->Fields[4]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[1]->AsString&&
           Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }




  else   if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[1]->AsString&&
           Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



   else  if (CheckBox1->Checked==true&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[1]->AsString&&
           Edit9->Text==Table1->Fields->Fields[2]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }




   else  if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsString&&
           Edit9->Text==Table1->Fields->Fields[3]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



   else  if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsString&&
           Edit10->Text==Table1->Fields->Fields[4]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

// 5 прибраних галочек при пошуку:



   else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==true)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit12->Text==Table1->Fields->Fields[6]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==true&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit11->Text==Table1->Fields->Fields[5]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==true&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit10->Text==Table1->Fields->Fields[4]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }




 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==true&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit9->Text==Table1->Fields->Fields[3]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==true&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit8->Text==Table1->Fields->Fields[2]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }



 else if (CheckBox1->Checked==true&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }

 // 6 прибраних галочек при пошуку:

    else if (CheckBox1->Checked==false&&
     CheckBox2->Checked==false&&
     CheckBox3->Checked==false&&
     CheckBox4->Checked==false&&
     CheckBox5->Checked==false&&
     CheckBox6->Checked==false)
     {
      Table1->First();
      for (i=0;i<Table1->RecordCount;i++)
      {
       if (Edit7->Text==Table1->Fields->Fields[1]->AsFloat)
       {
        Table2->Insert();
        Table2->Fields->Fields[1]->AsString=Table1->Fields->Fields[1]->AsString;
        Table2->Fields->Fields[2]->AsString=Table1->Fields->Fields[2]->AsString;
        Table2->Fields->Fields[3]->AsString=Table1->Fields->Fields[3]->AsString;
        Table2->Fields->Fields[4]->AsFloat=Table1->Fields->Fields[4]->AsFloat;
        Table2->Fields->Fields[5]->AsFloat=Table1->Fields->Fields[5]->AsFloat;
        Table2->Fields->Fields[6]->AsFloat=Table1->Fields->Fields[6]->AsFloat;
       }
       Table1->Next();
      }
     }





 }


//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
 int i;
 AnsiString d;
 d="";

  a: if (!Table2->Fields->Fields[4]->AsFloat==0&&
         !Table2->Fields->Fields[5]->AsFloat==0&&
         !Table2->Fields->Fields[6]->AsFloat==0)
  {
   Table2->First();
   Table2->Delete();
   goto a;
  }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
 int i,j,b=0,k,l,a=1;;

 Table1->First();
 for (i=0;i<Table1->RecordCount;i++)
 {
  vika[i].shkola=Table1->Fields->Fields[5]->AsFloat;
  vika[i].sbal=Table1->Fields->Fields[6]->AsFloat;
 }

 for (i=0;i<Table1->RecordCount;i++)
 {
  if (vika[i].shkola==0) goto s;

  vika2[b].shkola=vika[i].shkola;
  vika2[b].sbal=vika[i].sbal;
  if (vika[i].sbal>4) a=1;
  else a=0;
  for (j=i+1;j<Table1->RecordCount;j++)
  {
   if (vika2[b].shkola==vika[j].shkola&&
       vika[j].sbal>4)
   {
     a++;
     vika[j].shkola=0;
     vika[j].sbal=0;
   }
  }
  vika2[b].n=a;
  b++;
  s:
 }

 k=vika2[0].n;
 for (i=1;i<=b;i++)
 {
  if (k<vika2[i].n)
  {
   k=vika2[i].n;
   l=i;
  }
 }

 Label8->Caption=vika2[l].shkola;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::N4Click(TObject *Sender)
{
  Form1->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
 if (CheckBox1->Checked==true)
 {
  N8->Checked=true;
  N6->Checked=true;
 }
 else
 {
  N8->Checked=false;
  N6->Checked=false;
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N8Click(TObject *Sender)
{
 if (N8->Checked==true)
 {
  CheckBox1->Checked=true;
  N6->Checked=true;
 }
 else
 {
  CheckBox1->Checked=false;
  N6->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
if (CheckBox2->Checked==true)
 {
  N9->Checked=true;
  N7->Checked=true;
 }
 else
 {
  N9->Checked=false;
  N7->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
 if (N9->Checked==true)
 {
  CheckBox2->Checked=true;
  N7->Checked=true;
 }
 else
 {
  CheckBox2->Checked=false;
  N7->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
 if (CheckBox3->Checked==true)
 {
  N10->Checked=true;
  N14->Checked=true;
 }
 else
 {
  N10->Checked=false;
  N14->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
if (N10->Checked==true)
 {
  CheckBox3->Checked=true;
  N14->Checked=true;
 }
 else
 {
  CheckBox3->Checked=false;
  N14->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
if (N14->Checked==true)
 {
  CheckBox3->Checked=true;
  N10->Checked=true;
 }
 else
 {
  CheckBox3->Checked=false;
  N10->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
 if (CheckBox4->Checked==true)
 {
  N11->Checked=true;
  N15->Checked=true;
 }
 else
 {
  N11->Checked=false;
  N15->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
if (N11->Checked==true)
 {
  CheckBox4->Checked=true;
  N15->Checked=true;
 }
 else
 {
  CheckBox4->Checked=false;
  N11->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
if (N15->Checked==true)
 {
  CheckBox4->Checked=true;
  N11->Checked=true;
 }
 else
 {
  CheckBox4->Checked=false;
  N11->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
 if (CheckBox5->Checked==true)
 {
  N12->Checked=true;
  N16->Checked=true;
 }
 else
 {
  N12->Checked=false;
  N16->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
 if (N12->Checked==true)
 {
  CheckBox5->Checked=true;
  N16->Checked=true;
 }
 else
 {
  CheckBox5->Checked=false;
  N16->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject *Sender)
{
 if (N16->Checked==true)
 {
  CheckBox5->Checked=true;
  N12->Checked=true;
 }
 else
 {
  CheckBox5->Checked=false;
  N12->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox6Click(TObject *Sender)
{
 if (CheckBox6->Checked==true)
 {
  N13->Checked=true;
  N17->Checked=true;
 }
 else
 {
  N13->Checked=false;
  N17->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
 if (N13->Checked==true)
 {
  CheckBox6->Checked=true;
  N17->Checked=true;
 }
 else
 {
  CheckBox6->Checked=false;
  N17->Checked=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N17Click(TObject *Sender)
{
 if (N17->Checked==true)
 {
  CheckBox6->Checked=true;
  N13->Checked=true;
 }
 else
 {
  CheckBox6->Checked=false;
  N13->Checked=false;
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
 AboutBox->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
 WinHelp(Form1,"HELP.hlp", HELP_CONTEXT, 2);         
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
 Form1->Close();        
}
//---------------------------------------------------------------------------









void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
  Table1->Delete();         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
  Table1->Insert();         
}
//---------------------------------------------------------------------------

