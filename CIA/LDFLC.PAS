{旼컴C.I.A.컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴훩erze 2.00컴커
 쿞 timto souborem smi byt nakladano pouze v souladu s podminkami uvedenymi�
 퀆 dokumentaci C.I.A. Pouzitim souboru potvrzujes, ze podminky akceptujes.�
 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�}

{
---------------------------------------------------------------------------
                                Loader
---------------------------------------------------------------------------

K praci s obrazkem ve formatu Xxxx staci Uses Loadery,LdXxxx;
a dal pracovat s funkcemi z unity Loadery.

Protoze FLI/FLC je ale animace, neni zde implementovano nahravani obrazku,
pouze zjisteni informaci o rozmerech.

Prehravace jsou v unite FlcPlay.

}

Unit      LdFlc;
Interface {$i define.inc}
Implementation
Uses      Chyby, Objects, Vga,Fajly,Loadery;

var hdr:array[1..6] of word;

function GetInfo(s:PStream;var model,x,y:word):TError;far;
begin
 s^.Read(hdr,SizeOf(hdr));
 model:=model_packed;
 x:=hdr[5];
 y:=hdr[6];
 GetInfo:=erOk;
end;

begin
 picRegister('FLI',isPlayable+isGraphics+isFixedSize,GetInfo,nil,nil,'');
 picRegister('FLC',isPlayable+isGraphics+isFixedSize,GetInfo,nil,nil,'');
end.