{旼컴C.I.A.컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴훩erze 2.00컴커
 쿞 timto souborem smi byt nakladano pouze v souladu s podminkami uvedenymi�
 퀆 dokumentaci C.I.A. Pouzitim souboru potvrzujes, ze podminky akceptujes.�
 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�

 Priklad: file selector, path selector

}

{$m 30000,0,90000}

Uses
 Stringy,Dialogy,Vga,Lang1,Fajly,Key,Sys,Objects;

Var
 s:TScreen;
 soubor:string;
 adresar:string;

Begin
 { Inicializuje zadany textovy nebo graficky mod }
 s.init(model_text,80,25,0);
 { Muzes nastavit samozrejme libovolny mod, treba
   s.init(model_tc,640,480,0); }

 { Zepta se na soubor }
 soubor:=dlgSelector(
   {nektere z moznych flagu, prehled vsech je v dialogy.pas}
    dlgEscReturnsNothing{pri stisku ESC vrati '', ne preselect}
   +dlgForbidNew        {fileselector neumozni zadat neexistujici soubor}
   +dlgRatherBig        {fileselector si otevre spise vetsi okno}
   +dlgShowDetailTab    {fileselector ukazuje detaily o souborech}
   +dlgShowDirectory    {fileselector ukazuje aktualni adresar}
   +dlgShowQuickFindStr {fileselector ukazuje quickfind (alt+pismena)}
   +dlgSearchFromCursor,{quickfind hleda od kurzoru, ne od zacatku}
   {titulek}
   'Kde mas tajna data?',
   {maska pro vyber, lze i velmi obecne vyrazy s vice adresari}
   '*.*',
   {preselect,implicitni hodnota}
   'c:\autoexec.bat'
   );

 { Zepta se na adresar }
 adresar:=dlgPathBrowser(0,'Kam nainstalovat myprog?','*.* myprog','c:\');

 { Ukonci praci s modem }
 s.Done;

 { Vypise vysledky }
 writeln('Vybral jsi soubor: '+soubor);
 writeln('a adresar: '+adresar);
End.