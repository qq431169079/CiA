{旼컴C.I.A.컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴훩erze 2.00컴커
 쿞 timto souborem smi byt nakladano pouze v souladu s podminkami uvedenymi�
 퀆 dokumentaci C.I.A. Pouzitim souboru potvrzujes, ze podminky akceptujes.�
 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�}

Unit      Lang1;
Interface {$i define.inc}
Uses      Chyby, Stringy,Fajly;
Function  Init:TError;
Procedure Done;

{
 ---------------------------------------------------------------------------
             Ulozeni textovych resourcu (chybovych hlasek apod)
 ---------------------------------------------------------------------------

 Pokud ve svem programu chces mit chybove hlasky, ne jen kody chyb,
 mel bys v jeho Uses uvest prave jednu Lang* unitu.

 Lang1    zajisti ze soucasti vysledneho .exe budou hlasky v jednom jazyce.
 Lang2    zajisti ze soucasti vysledneho .exe budou hlasky ve dvou jazycich
          s moznosti za behu prepinat.
 LangFile zajisti ze hlasky v libovolne mnoha jazycich budou v samostatnych
          souborech, samozrejme s moznosti za behu prepinat.
}

Implementation

 {$define lang_in_DS}
 {$i lang1.inc}

 var      old_:function(code:TError):string;

 function my_(code:TError):string;far;
 begin
  my_:=Pc2Str(hlasky1DS[code]);
 end;

{같같같같같같같같같같같같같같같같INIT/DONE같같같같같같같같같같같같같같같같같�}

const unita='lang1';
var result:TError;

procedure UserInit;
 var i:integer;
 begin
  old_     :=_;
  _        :=my_;
  language :='cz';
  fileRegister('CZ',isLanguage);
 end;

procedure UserDone;
 begin
  _        :=old_;
 end;

{$i initdone.inc}
{$ifdef autoinit}
BEGIN
 erCheck(Init);
{$endif}
END.