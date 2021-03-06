{旼컴C.I.A.컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴훩erze 2.00컴커
 쿞 timto souborem smi byt nakladano pouze v souladu s podminkami uvedenymi�
 퀆 dokumentaci C.I.A. Pouzitim souboru potvrzujes, ze podminky akceptujes.�
 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�}

Unit      CS;
Interface {$i define.inc}
Uses      Chyby,Memo, Stringy;
Function  Init:TError;
Procedure Done;

{

===========================================================================
                          Co tato unita umi
===========================================================================

 Pri konverzich kodovani nastavaji typicky tri pripady.

 1) Prichazi vstup z klavesnice, my ho mame hned zobrazovat, ale nevime
    v jakem kodovani je.

  Resenim je plne automaticka konverze poskytovana fci csAutoDecodedChar.
  Ta sleduje cetnosti znaku a podle toho detekuje o jake kodovani se jedna
  a preklada znaky do nastaveneho vystupniho (implicitne kamenici).

 2) K dispozici je naraz cely vstup v neznamem kodovani a my ho mame zobrazit.

  Lze pouzit predchozi plne automaticke reseni.
  Jeho nevyhodou ale je moznost chyb v prvnich znacich dokud jeste nelze
  kodovani jednoznacne zdetekovat.

  Resenim je poloautomaticka konverze.
  Je nutne nejprve vynulovat registry: proc csClearHits.
  Pote cely vstup znak po znaku naladovat do proc csHit(c:char), ktera
  eviduje cetnosti znaku.
  Proc csSetCoding vyhodnoti v jakym kodovani znaky byly a nastavi podle toho
  vstupni dekoder (csCoding).
  Nyni uz lze znak po znaku prekladat procedurou csXlat(var c:char).

 3) Zname vstupni kodovani.

  Staci nastavit vstupni kodovani do csCoding a pak na preklad jednoho znaku
  volat proc csXlat.
}

{---------------------------------------------------------------------------
 Kodovaci tabulky pro cestinu...lze podle chuti pridat dalsi.
 ---------------------------------------------------------------------------}

Type      string40=string[40];

Const     Kamenici :string40 = '닲눍몮젩궍뼗쨨쥋뙇벆'+{nas standard}
                               '돍�옊쓯땺뿦넡뀞렂뒮�';
          IsoLatin2:string40 = '移曜엌殺澐下瓆昶드牒'+{svetovy standard}
                               '揭휜�北苽粕ヒ鞠칠텃�';
          PcLatin2 :string40 = '貊잶㏃젩궍뀥釀쥋뼊볤'+{ms silenstvi}
                               '룡�譁玆�먬�쎮腦럶묅�';
          Win1250  :string40 = '�싪�욣殺澐�얂艇堊淹�'+{ms silenstvi}
                               '�듗�롙죌�粕띜鞠캬툐�';
          UsAscii  :string40 = 'escrzyaieuutndoallor'+{zadny blbiny decka}
                               'ESCRZYAIEUUTNDOALLOR';{tohle funguje}
          codings=4;
          coding:array[0..codings] of pstring=(
            pstring(@UsAscii),
            pstring(@Kamenici),
            pstring(@IsoLatin2),
            pstring(@PcLatin2),
            pstring(@Win1250));

{---------------------------------------------------------------------------
 Poloautomaticka konverze kodovani.
 ---------------------------------------------------------------------------}

PROCEDURE csClearHits;      {priprava-vynuluje registry}
PROCEDURE csHit(c:char);    {tudy tam natriskas znaky v neznamym kodovani}
PROCEDURE csSetCoding;      {vyhodnoti v jakym kodovani byly a nastavi podle toho vstupni dekoder (csCoding)}
PROCEDURE csSetPreferred;   {-"- ale nastavi csPreferred}
PROCEDURE csXlat(var c:char);{prelozi jeden znak}

Var       csCoding:pstring; {aktualni kodovani vstupu}
          csPreferred:byte; {ma-li urcit kodovani a vic jich je stejne pravdepodobnych, vybere toto}

{---------------------------------------------------------------------------
 Plne automaticka konverze kodovani.
 ---------------------------------------------------------------------------}

FUNCTION  csAutoDecodedChar(c:char):char;{vloz znak, vypadne dekodovany}


{賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽賽�}
                          IMPLEMENTATION
{複複複複複複複複複複複複複複複複複複複複複複複複複複複複複複複複複複�}


var       codinghits:array[1..codings] of longint;

PROCEDURE csClearHits;
begin
 fillchar(codinghits,sizeof(codinghits),0);
end;

PROCEDURE csHit(c:char);
var i:byte;
begin
 for i:=1 to codings do
  if system.pos(c,coding[i]^)>0 then inc(codinghits[i]);
end;

FUNCTION csBest:byte;
var best,i:byte;
begin
 best:=csPreferred;
 if (best<1) or (best>codings) then best:=1;
 for i:=1 to codings do
  if codinghits[i]>codinghits[best] then best:=i;
 csBest:=best;
end;

PROCEDURE csSetCoding;
begin
 csCoding:=coding[csBest];
end;

PROCEDURE csSetPreferred;
begin
 csPreferred:=csBest;
end;

PROCEDURE csXlat(var c:char);
begin
 XlatChar(c,csCoding,kodovani);
end;

{---------------------------------------------------------------------------
 Automaticka konverze jednoho znaku.
 Na vstupu autodetekuje kameniky, isolatin2, pclatin2, win1250.
 Na vystupu jsou implicitne kamenici, ale lze prenastavit
 (kodovani:=pstring(@IsoLatin2) apod).
 V prvnich konvertenych znacich (dokud nelze jednoznacne rozhodnout) se muze
 plest.
 ---------------------------------------------------------------------------}
FUNCTION csAutoDecodedChar(c:char):char;
begin
 csHit(c);
 csSetCoding;
 XlatChar(c,csCoding,kodovani);
 csAutoDecodedChar:=c;
end;


{같같같같같같같같같같같같같같같같INIT/DONE같같같같같같같같같같같같같같같같같�}

const unita='cs';
var result:TError;

procedure UserInit;
 begin
  kodovani         :=pstring(@Kamenici);
  bezkodovani      :=pstring(@UsAscii);
  csCoding         :=kodovani;
  csClearHits;
 end;

procedure UserDone;
 begin
 end;

{$i initdone.inc}
{$ifdef autoinit}
BEGIN
 erCheck(Init);
{$endif}
END.