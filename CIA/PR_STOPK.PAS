{旼컴C.I.A.컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴훩erze 2.00컴커
 쿞 timto souborem smi byt nakladano pouze v souladu s podminkami uvedenymi�
 퀆 dokumentaci C.I.A. Pouzitim souboru potvrzujes, ze podminky akceptujes.�
 읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�

 Priklad: mikrosekundove stopky

}

{$m 4000,0,20000}

Uses Sys;

Var  stopky:TStopky;

Begin
 {implicitni presnost je 5 milisekund, mikrosekundovou si musime vyzadat}
 SetPreciseClock(true);

 {pustime stopky}
 stopky.Start;

 {operace jejiz casovou slozitost merime}
 write('Vypsat tento text trvalo...');

 {zastavime je, cimz se do mikro ulozi cas v mikrosekundach}
 stopky.Stop;

 writeln(stopky.mikro,' mikrosekund.');

 {dalsi metody stopek jsou nadeklarovany v sys.pas}
End.