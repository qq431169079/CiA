{tento soubor je vygenerovan z lang.cz programem lang2inc}
const lang1str='cz';
{$ifdef lang_in_DS}
const hlasky1DS:array[erOk..__] of pchar=(
'',
'',
'Nedostatek pam�ti.',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'Nelze otev��t soubor.',
'Nelze ��st ze souboru.',
'',
'',
'',
'',
'',
'',
'',
'Nekorektn� parametry.',
'Soubor nenalezen.',
'',
'P��stup odep�en.',
'',
'',
'',
'',
'Neplatn� cesta.',
'Nelze ps�t do souboru.',
'',
'',
'',
'Selh�n� DPMI.',
'',
'',
'',
'Nedostatek konven�n� pam�ti.',
'Pot�ebuji DOS verze p�inejmen��m',
'Neplatny disk',
'Selhalo nastaven� fantom disku',
'Selhal test fantom disku',
'Zabils ko�ku, �ivot� m�la',
'Nelze vytvo�it soubor.',
'Nelze zav��t soubor.',
'P��li� velk� soubor.',
'V readonly m�du nelze zapisovat na disk.',
'Slu�ba Event Wait je obsazena.',
'Dialogov� okno je v�t�� ne� obrazovka, zkus vy��� rozli�en�.',
'M�lo pam�ti na vol�n� shellu "$".',
'Ne�sp��n� vol�n� shellu "$".',
'Selhalo na�ten� souboru.',
'Selhalo ulo�en� souboru.',
'Selhalo vol�n� shellu.',
'Adresa',
'Nejde nastavit zobrazovac� m�d.',
'Vadn� VESA BIOS. Po�i� si slu�n�j�� nebo pou�ij VGA rozli�en�.',
'Screen=nil. Je pot�eba nejprve nastavit n�jak� m�d.',
'Bitmapy maj� r�zn� modely. Je pot�eba je p�ev�st na spole�n�.',
'Vadn� font.',
'Pokus o nastaven�/konverzi fontu pro tyto ��ely p��li� velk�ho.',
'Chyba v INI souboru na ��dce:',
'Chybn� hexadecim�ln� ��slo v INI souboru na ��dce:',
'Intern� chyba INI readeru.',
'��slo mimo rozsah $..$ v INI souboru na ��dce:',
'Prom�nn� m� b�t ��slo v INI souboru na ��dce:',
'ReadOnly m�d, vynech�v�m pr�ci s',
'Alokuje� moc blok� konven�n� pam�ti. Pro autora: zvy� si maxDosBlocks.',
'blok� konven�n� pam�ti neuvoln�no.',
'Tvoje grafick� karta se zbl�znila. Volej doktora d.ment@email.cz!',
'Nenahazuje se ret, intern� chyba.',
'Fuj bios, slu�ba load user font zm�nila doublescanning.',
'minul� m�d neuvolnil timer',
'��dn� bitmapa na vstupu.',
'p��li� velk� li�ta.',
'',
'- TEST GRAFICK� KARTY -',
'�i� se instrukcemi na obrazovce.',
'Pokud jsi v okn�, p�epni do fullscreenu!',
'...ENTER - pokra�ov�n�...',
'Jestli se text h�be, stiskni ENTER.',
'V opa�n�m p��pad� ESC.',
'ENTER jestli se text cuk�, jinak ESC',
'Stiskni ENTER.',
'Stiskni ESC.',
'Je-li vid�t jen p�lkru�nice, stiskni ESC.',
'Stiskni ENTER, je-li cel�.',
'Stiskni MEZERN�K, je-li cel�.',
'Je-li sloupec textu uprost�ed obrazovky, stiskni ENTER. Je-li vych�len doprava nebo doleva, stiskni ESC.',
'Pokud se kurzor pohybuje kolmo (v jednom sloupci), stiskni ENTER. Jinak ESC.',
'Pokud se text pohybuje plynule, stiskni ENTER. Jinak ESC.',
'Pokud se text',
'pohybuje plynule,',
'stiskni ENTER.',
'Jinak ESC.',
'',
'Postr�d�m soubor',
'Soubor $ ji� existuje.',
'Adres�� $ neexistuje.',
'Nelze otev��t soubor',
'Nelze ��st ze souboru',
'Nelze na��st cel� soubor',
'Nelze vytvo�it soubor',
'Nelze ps�t do souboru',
'asi je m�lo m�sta na disku.',
'Nelze zav��t soubor',
'Nelze p�ejmenovat soubor',
'Nelze smazat soubor',
'na',
'Nelze zjistit velikost souboru',
'Nelze zjistit atributy souboru',
'Nelze nastavit atributy souboru',
'Nelze vytvo�it adres��',
'Nelze vstoupit do adres��e',
'Nelze smazat adres��',
'B�hem akce nastala chyba.',
'Pokra�uj;Pok.v�dy;Skon�i;Sko.v�dy',
'�patn� ��seln� soustava',
'�patn� cifra na vstupu.',
'Chyba p��stupu ke streamu',
'Nelze inicializovat stream',
'�ten� za koncem streamu',
'Nelze ps�t do streamu',
'Get neregistrovan�ho typu',
'Put neregistrovan�ho typu',
'M�dium chr�n�no proti z�pisu.',
'Disk',
'Disky',
'NEP�IPRAVEN',
'Zas nic.',
'P�ECP�NO!',
'P��LI� MNOHO',
'SOUBOR�!',
'�ekejte,',
'pros�m',
'�ad�m..',
'Zadej masku.',
'ADRES��',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'D�len� nulou.',
'P�ekro�en� mez� pole nebo typu.',
'P�ete�en� stacku.',
'Nedostatek pam�ti.',
'Invalid pointer operation.',
'Floating point overflow.',
'Floating point underflow.',
'Invalid floating point operation.',
'Overlay manager not installed.',
'Overlay file read error.',
'Pou�it� neinicializovan�ho objektu.',
'Vol�n� abstraktn� metody.',
'Stream registration error.',
'Indexov�n� v kolekci mimo rozsah.',
'P�ete�en� kolekce.',
'Aritmetick� p�ete�en�.',
'General Protection Fault, hehe :).',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'',
'Break, taky �e�en�.',
'',
'Pouziti: FN [options] [zdroj [cil]]',
'  -i jen vypise informace o fontech zdroj',
'  -f jen vypise informace o formatech',
'  -p prevede font na proporcionalni',
'  -ncislo prevede font na neproporcionalni, cislo je sirka, zadne cislo=detekce',
'  -r umozni prejmenovat font (nazev v headeru, ne nazev souboru)',
'  -first-last rika, ze font obsahuje pouze znaky first az last (napr. -32-255)',
'  -wcislo udava sirku znaku ve FNT v pixelech, implicitne 8',
'  -scislo posune vsechny znaky nahoru (tak lze vytvorit superscript)',
'  -k prevede font z CentralEurope na Kameniky (chces jinou konverzi? call me)',
'  -v zpracuje vsechny fonty obsazene v souboru',
'  -cslovo nejake slovo obsazene v .FON v headeru kazdeho fontu, implicitne (c)',
'   (neznam format .FON, fonty vyhledavam podle tohoto slova)',
'  :lang volba jazyka (:cz nebo :eng)',
'  Pokud je zadan jen zdroj, font se nastavi na obrazovce.',
'  Pokud je zadan i cil, program se pokusi o konverzi.',
'  Zdroj i cil mohou obsahovat * a ? (napr. FN *.fnt *.fn).',
'',
'Formaty (serazene od nejjednodussiho k nejkomplexnejsimu):',
'  FNT - nespakovane bitmapy, sirka 8 pixelu, vyska se autodetekuje',
'  FNP - jako FNT ale pred kazdym znakem je byte sirka(0-8)',
'  RIF - magic "af"; pchar copyright; word vyska(0-24),lastchar (firstchar=32);',
'        tablo[word ofs_od_zacatku_bitmap,sirka(0-16)]; hromada bitmap',
'  FN  - magic "�m�on� "; pchar name; char firstchar,lastchar; short sizeover,',
'        sizeunder; short addspace; byte future; tablo[short relx,rely;',
'        byte sir,vys,shift; word ofs_od_zacatku_souboru]; hromada bitmap',
'  FON - copyright, copyright, copyright, chaos, copyright...',
'',
'Nejak moc parametru.',
'Nezn�m� parametr',
'Chaos 1, sezen mi popis formatu FON.',
'Chaos 2, sezen mi popis formatu FON.',
'Fontu:',
'Pouzit font cislo',
'Font',
'Vyska',
'���ka $ neodpovida parametrum - neni nasobkem $ (znaku*sirka).',
'Prilis velky font.',
'Interni chyba, spatna velikost vygenerovaneho fn.',
'Expand failed.',
'Shrink failed.',
'Z�pis do form�tu .',
'nen� podporov�n.',
'Load $.',
'Rename (zadej libovolne dlouhe jmeno fontu, uklada se do headeru):',
'Proporc.',
'Noprop.',
'Superscript.',
'Show.',
'Save',
'Nezn�m� form�t souboru.',
'',
'Pro takov� form�t nem�m loader.',
'Pro takov� form�t nem�m writer.',
'Nepodporovan� �ernob�l� obr�zek!',
'Nepodporovan� typ komprese!',
'Nepodporovan� barevn� hloubka!',
'Postr�d�m paletu!',
'Neo�ek�van� paleta!',
'Chyba v datech!',
'P��li� mnoho Huffmanov�ch tabulek!',
'P��li� mnoho kvantiza�n�ch tabulek!',
'P��li� mnoho barevn�ch slo�ek!',
'Neprokl�dan� obr�zky nejsou podporov�ny!',
'Nespr�vn� po�et barevn�ch slo�ek!',
'Chybn� velikost zna�ky DRI!',
'Chybn� velikost hlavi�ky souboru!',
'DHL nen� podporov�no!',
'Nalezena nezn�m� zna�ka v datech!',
'Barevn� model CMYK nen� podporov�n!',
'Barevn� model YIQ nen� podporov�n!',
'Nezn�m� barevn� model!',
'Aritmetick� komprese nen� podporov�na!',
'Soubory typu HSI JPEG nejsou podporov�ny!',
'Neo�ek�van� zna�ka konce souboru!',
'Nebyla definov�na ��dn� Huffmanova dekompresn� tabulka!',
'Nepodporovan� typ prokl�d�n�!',
'Neo�ek�van� zna�ka v datech!',
'Prokl�d�n� obr�zk� nen� podporov�no!',
'P��li� velk� obr�zek!',
'Podporov�ny jsou pouze 256barevn� obr�zky!',
'Chyba CRC v hlavi�ce souboru!',
'Nalezen neo�ek�van� konec souboru!',
'Obr�zky v progresivn�m m�du nejsou podporov�ny!',
'Nezn�m� typ komprese!',
'Dekompresn� buffer v�t�� ne� 32KB nen� podporov�n!',
'Nezn�m� typ filtru!',
'Chybn� velikost nekomprimovan�ho bloku!',
'Alfa kan�l nen� podporov�n!',
'P��li� velk� animace pro indirect player.',
'Pam�� sta�� jen na $% obr�zku.',
'',
'Nepovolen� n�zev samplu: $',
'',
'Nekorektn� popis pozad�:',
'Syntatick� chyba v popisu pozad�:',
'Nezn�m� barva:',
'',
'Chybn� n�zev projektu, nastuduj roz���enou hv�zdi�kovou konvenci...',
'Nejd��v kompiluj - pouzij parametr 1.',
'je v seznamu v�ckr�t!',
'Zadej jmeno $. DM souboru.',
'Nazvi obsah $. DM souboru.',
'Pokud to neni Root, je to AddOn k',
'(ve vyrazu muzes pouzit *,?,[varianta1|varianta2|...])',
'2-3 pismenna zkratka nazvu.',
'',
'(vede na n�j odkaz ze str�nky $).',
'Neza�azen� str�nka: $.',
'Str�nka $ nen� fit! (beru jen str�nky verz� 200..$)',
'Obr�zek $ pou�it� na str�nce $ neexistuje.',
'Vylu�uji z projektu',
'Nehled�m na velikost',
'Prohl���m vazby uvnit� projektu...',
'Nena�el jsem ��dn� str�nky, ze kter�ch bych .DM sestavil.',
'Velikost projektu',
'',
'M�lo pam�ti pro skript v Parlanu.',
'',
'P��li� mnoho modul� na str�nce.',
'',
'P�ekro�en maxim�ln� po�et sloupc� na str�nce.',
'',
'Zkracuji text.',
'',
'Moc mal� buffer pro dmtext.',
'Soubor vytvo�en p��li� novou verz� Ma�iny.',
'Chyb� str�nka template.',
'Str�nka m� ne�pln� header, mo�n� k tomu do�lo zm�nou template.',
'Mezi �ablonami vznikla smy�ka.',
'',
'P�ekro�en maxim�ln� po�et DM soubor�.',
'P�ekro�en maxim�ln� po�et projekt�.',
'P��li� mnoho DM soubor� v jednom projektu.',
'Nezkompilov�no',
'mus� b�t root',
'rulez',
'sux',
'none',
'Hled�m DMs v',
'verze',
'Chyb�',
'ale m��e� si vybrat n�hradn� jazyk.',
'',
'Sorry, p�ekro�en max.po�et vno�en�.',
'Nelze obnovit str�nku (m�lo pam�ti nebo intern� chyba).',
'Nastaven� palety (ovl�d�n�: my�, mezern�k, z,x)',
'ESC=v�echno zp�t',
'ENTER=hotovo',
'set',
'Setup',
'help',
'MiniHelp',
'rip',
'Ripper',
'shell',
'DOS shell',
'bye',
'Konec',
'zkou��m velikost',
'P�etekl ministack.',
'Podtekl ministack.',
'Export do:',
'screenshot',
'obr�zek cel� str�nky',
'hol� text str�nky',
'V�he�: hol� str�nka',
'HTML: hol� str�nka',
'HTML: str�nka a obr�zky',
'HTML: cel� site, i podstr�nky',
'Ma�ina: hol� str�nka',
'Ma�ina: pln� vybaven� str�nka',
'Ma�ina: cel� site, i podstr�nky',
'Str�nka neobsahuje ��dn� textov� data.',
' Kde hledat hudbu',
'$ nem� vlastn� hudbu.',
'Soubor $ neexistuje.',
'Jak� modul/mp3 chce� pustit?',
'Jak� adres�� chce� pustit?',
'V adres��i nejsou ��dn� moduly/mp3.',
'Na�teno modul�: $',
' Pustit modul/mp3 z projektu.',
' Pustit modul/mp3 z disku.',
' Pustit adres�� z disku.',
'Hr�t rad�i podle abecedy.',
'Hr�t rad�i v n�hodn�m po�ad�.',
'Kdy st��dat hudbu...',
'Nikdy.',
'Po dohr�n�.',
'Po minut�.',
'Po $ minut�ch.',
' Hr�t p�edchoz�.',
' Hr�t dal��.',
' Hr�t n�hodn�.',
'Vypnout hudbu.',
'Stopnout $.',
'Zp�t k $.',
'Zp�t k hudb� z $.',
'Spustil jsi Ma�inu bez audiosyst�mu.',
'Toto menu.',
'Setup.',
'Vstup na str�nku.',
'Str�nky podle autor�.',
'Volba projektu.',
'Volba rozli�en�.',
'Volba jazyka.',
'Export str�nky.',
' Hudba.',
'N�hl� smrt.',
'Hlavn� menu.',
'Editor palety.',
'Mezern�k',
'Link vede na',
'Tento form�t nen� podporov�n.',
'odkazuje na',
'kter��to soubor nebyl nalezen.',
'Nejde vygenerovat button (�patn� parametry nebo m�lo pam�ti).',
'Adres�� pro exportovan� soubory.',
'Ripping z�stal nedokon�en.',
'Projekt zat�m nem� tituln� str�nku.',
'Vytvo� str�nku "title".',
'Pozor, prohl��en� str�nek historick�ch',
'verz� 0.xx nen� zcela bezpe�n�.',
'',
'Zkou��m',
'Instaluji',
'do',
'Zap�n�m readonly re�im.',
'P��kazem "SET DM=cesta" m��e� nastavit kam m� Ma�ina ukl�dat sv� soubory.',
'Konfigura�n� soubor $ je vytvo�en nov�j�� verz� Ma�iny.',
'Pokud chce� mermomoc� pou��vat tuto star�� verzi, bude� ho muset smazat.',
'Instaluji Ma�inu do',
'Updatuji Masinu v',
'Parametry:       /pou�it�: "dm [parametry]", nap�. "dm 4" prohl��en� v textm�du',
' ?,H     - vyp��e tento seznam parametr�',
' S       - safe mode (bezpe�nej�� re�im - bez hw scrolu apod)',
' O       - oldies but goldies (�te i .DM soubory verze 0.xx, ale bez z�ruk)',
' R       - readonly mode (v�bec nezapisuje na disk)',
' D,DP,DM,DW,DC,DA,DS - r�zn� debugovac� m�dy, lze kombinovat',
'           (debug general,pal,mem,writer,cache,atoms,scripts)',
' I       - instalace (do $ nebo %DM%)',
' E       - editor (tvorba vlastn�ch stranek..)',
' 1       - kompil�tor projektu (vygeneruje seznam soubor� $)',
' 2       - linker projektu (soubory z $ spoj� do .DM)',
' VGA,VESA,NOVGA,NOVESA - vynut� nebo zak��e VGA nebo VESA m�dy',
' OsaRelaceLimit - omez� rozli�en� v ose x nebo y dan�m po�tem pixel�',
'           (p��klady: y=480, xlt800, "x<800", x!=360, "y<100"...)',
' +bit�   - pou�ije pouze m�dy s tolika bity na pixel (4,8,15,16,24,32)',
' -bit�   - vynech� m�dy s tolika bity na pixel       (4=textm�d)',
' :jazyk  - volba jazyka (:cz nebo :eng)',
' adres�� - tam hled� dal�� .DM soubory',
' soubor  - rovnou otev�e zadan� soubor (.DM nebo str�nka editoru)',
' soubor.swp [MB]-zvet�� pam�� otev�en�m swapfile (implicitn� 16MB) (nestabiln�)',
'Program je ji� jednou spu�t�n, m�m rozb�hnout dal�� kopii? [Ano/Ne/Kec��]',
'AaNnKk',
'Verze p�ilinkovan�ho ini souboru neodpov�d� verzi programu.',
'Jazyk p�ilinkovan�ho ini souboru neodpov�d� jeho n�zvu.',
'',
'Ano;Storno',
'Intern� chyba, �patn� odhad velikosti str�nky.',
'sloupec',
'bajt�',
'Str�nka',
'nejde ulo�it. Zadej jin� n�zev.',
'Vyber str�nku nebo napi� nov� jm�no.',
'Ve sloupci nen� m�sto, ud�lej ho ve zdroj�ku nebo jdi do jin�ho sloupce.',
'Vyber obr�zek...',
'Vyber skript...',
'Vyber si font...',
'Kter� font chce� nahradit?',
'Dal�� font ti ned�m, u� m�� na str�nce jin� �ty�i.',
'Odkaz vede na...',
'M�m tento sloupec slou�it s p�edchoz�m?',
'Vlo�en�m obr�zku zru��� textury na pozad�. Pokra�ovat?',
'Definuj pozad� zp�sobem popsan�m v helpu (F1).',
'Velikost str�nky (SIRKAxVYSKA) (���ka�$).',
'Doporu�en� rozli�en� (SIRKAxVYSKA).',
'N�zev str�nky.',
'Autor str�nky.',
'Flags',
'Zab�j�m zl� d�mony...',
'Upozorn�n�: Nem�� VESA BIOS.',
'Upozorn�n�: Nem�� my�.',
'Check Event Wait...',
'Tv�j opera�n� syst�m moment�ln� nepodporuje standardn� slu�bu Event Wait.',
'M��u pokra�ovat, ale potom neru��m za v�sledek.',
'Check OS...',
'Upozorn�n�: Scrolling je plynulej�� bez Windows.',
'Check memory...',
'Upozorn�n�: V�c pam�ti by ne�kodilo ;-)',
'Nem�� moc voln� pam�ti. M��u pokra�ovat, ale mohou nastat probl�my.',
'Nastaven� se projev� a� p�i p���t�m spu�t�n� editoru.',
'Vyber si jednu z v�ce sad parametr� skriptu.',
'Skript',
'parametr',
'm� nezn�m� typ',
'nem� zdokumentovan� parametry.',
'nepodporuje parametry',
'parametr typu script/link/... mus� b�t posledn�.',
'',
'Kategorie textu',
'Norm�ln� text',
'Odli�en� text (spoluautor, citace, k�d)',
'Zv�razn�n� text, odkazy',
'Siln� zv�razn�n� text',
'',
'Bez helpu ani r�nu',
'Novinky',
'!ednews.cz',
'To nejd�le�it�j�� b�hem prvn� minuty',
'!1stmin.cz',
'Co omrknout pak - hlavn� kapitola',
'!editor.cz',
'Kl�vesnice a my�',
'!keys.cz',
'Menu editoru',
'!edmenu.cz',
'Obr�zky a animace',
'!picture.cz',
'Pozad� a textury',
'!texture.cz',
'Zvuk a hudba',
'!sound.cz',
'Projekty',
'!project.cz',
'Atomy, skripty, ParLan',
'!parlan.cz',
'Chyby a hroucen�',
'!bugz.cz',
'Popis form�tu',
'!format.cz',
'',
'Zarovn�n� textu v odstavci',
'implicitn�, jako o odstavec v��',
'zde zarovn�vat doleva',
'zde zarovn�vat doleva i doprava',
'zde centrovat',
'zde zarovn�vat doprava',
'',
'Pomocn� funkce',
'Velikost str�nky',
'Template str�nka',
' N�zev str�nky',
' Autor str�nky',
' Doporu�en� rozli�en�',
' Obr�zek na pozad�',
' Definice pozad�/barev',
' Seznam font�',
' Sampl >�  (welcome)',
' Sampl  � (wel.again)',
' Sampl  �> (yessir)',
' Sampl �  (goback)',
' Sampl � (boom)',
' Hudba',
' Flagy',
'Zarovnat odstavec...',
'Vycentrovat sloupec',
'Rozli�en� editoru',
'P�ehodit Y a Z',
'');

{$else}

procedure hlasky1CS;assembler;asm
 dw 1234,1234,1234,1252,1252,1252,1252,1252,1252,1252,1252,1252
 dw 1252,1252,1273,1295,1295,1295,1295,1295,1295,1295,1295,1316
 dw 1333,1333,1349,1349,1349,1349,1349,1364,1386,1386,1386,1386
 dw 1399,1399,1399,1399,1427,1459,1472,1502,1526,1551,1573,1593
 dw 1613,1653,1683,1743,1776,1804,1828,1852,1874,1880,1911,1973
 dw 2024,2085,2096,2159,2188,2238,2264,2310,2355,2387,2457,2491
 dw 2556,2589,2644,2670,2694,2713,2713,2736,2768,2808,2833,2868
 dw 2890,2926,2940,2952,2993,3019,3048,3152,3228,3285,3298,3315
 dw 3329,3339,3339,3355,3377,3398,3418,3439,3463,3484,3505,3532
 dw 3551,3575,3594,3596,3626,3656,3687,3709,3735,3755,3780,3813
 dw 3836,3859,3884,3910,3933,3954,3979,4004,4033,4037,4042,4053
 dw 4061,4070,4082,4090,4098,4104,4111,4123,4130,4130,4130,4130
 dw 4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130
 dw 4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130
 dw 4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130
 dw 4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130,4130
 dw 4130,4130,4130,4130,4130,4130,4130,4130,4130,4143,4174,4191
 dw 4209,4235,4259,4284,4317,4347,4371,4406,4431,4457,4490,4508
 dw 4530,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564
 dw 4564,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564
 dw 4564,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564,4564
 dw 4564,4564,4564,4564,4583,4583,4618,4659,4696,4731,4810,4874
 dw 4952,5011,5079,5156,5202,5280,5340,5376,5433,5486,5544,5544
 dw 5602,5668,5726,5804,5873,5950,6020,6092,6152,6152,6172,6188
 dw 6224,6260,6266,6283,6287,6292,6354,6372,6421,6435,6449,6467
 dw 6483,6490,6556,6564,6571,6583,6588,6592,6615,6615,6646,6677
 dw 6709,6736,6766,6783,6802,6817,6851,6886,6916,6956,6989,7016
 dw 7049,7070,7103,7138,7172,7194,7232,7273,7306,7361,7390,7418
 dw 7454,7475,7517,7546,7580,7627,7648,7698,7717,7756,7783,7824
 dw 7854,7854,7880,7880,7904,7937,7951,7951,8018,8055,8076,8102
 dw 8128,8161,8215,8242,8242,8275,8297,8348,8390,8409,8429,8463
 dw 8520,8537,8537,8570,8570,8601,8601,8646,8646,8660,8660,8687
 dw 8729,8752,8814,8844,8844,8881,8916,8958,8972,8985,8990,8993
 dw 8997,9009,9014,9019,9054,9054,9089,9144,9191,9207,9219,9222
 dw 9227,9231,9239,9242,9248,9253,9262,9265,9270,9286,9304,9322
 dw 9332,9342,9362,9379,9398,9416,9439,9468,9488,9517,9548,9586
 dw 9604,9625,9645,9673,9699,9734,9751,9781,9808,9833,9858,9887
 dw 9907,9913,9924,9934,9948,9965,9978,9993,10007,10018,10027,10044
 dw 10080,10090,10096,10113,10134,10149,10165,10178,10193,10201,10212,10224
 dw 10238,10246,10258,10287,10298,10328,10389,10421,10447,10482,10505,10543
 dw 10574,10574,10581,10590,10592,10615,10688,10743,10815,10834,10851,10930
 dw 10970,11031,11106,11157,11217,11278,11315,11361,11421,11474,11536,11604
 dw 11669,11739,11803,11842,11880,11945,12024,12097,12103,12162,12217,12217
 dw 12227,12273,12280,12285,12292,12323,12359,12431,12447,12462,12478,12504
 dw 12554,12570,12609,12663,12709,12750,12785,12799,12813,12818,12839,12867
 dw 12889,12908,12981,13028,13039,13087,13102,13141,13208,13261,13305,13311
 dw 13319,13333,13363,13384,13432,13432,13447,13460,13499,13522,13543,13543
 dw 13561,13568,13578,13614,13624,13657,13667,13683,13691,13703,13713,13730
 dw 13741,13757,13768,13780,13789,13797,13808,13830,13840,13856,13864,13877
 dw 13887,13887,13913,13944,13965,13996,14009,14031,14031,14045,14061,14077
 dw 14091,14105,14126,14144,14166,14179,14199,14221,14240,14259,14276,14282
 dw 14288,14308,14327,14344,14358
 db 'Nedostatek pam�ti.'
 db 'Nelze otev��t soubor.'
 db 'Nelze ��st ze souboru.'
 db 'Nekorektn� parametry.'
 db 'Soubor nenalezen.'
 db 'P��stup odep�en.'
 db 'Neplatn� cesta.'
 db 'Nelze ps�t do souboru.'
 db 'Selh�n� DPMI.'
 db 'Nedostatek konven�n� pam�ti.'
 db 'Pot�ebuji DOS verze p�inejmen��m'
 db 'Neplatny disk'
 db 'Selhalo nastaven� fantom disku'
 db 'Selhal test fantom disku'
 db 'Zabils ko�ku, �ivot� m�la'
 db 'Nelze vytvo�it soubor.'
 db 'Nelze zav��t soubor.'
 db 'P��li� velk� soubor.'
 db 'V readonly m�du nelze zapisovat na disk.'
 db 'Slu�ba Event Wait je obsazena.'
 db 'Dialogov� okno je v�t�� ne� obrazovka, zkus vy��� rozli�en�.'
 db 'M�lo pam�ti na vol�n� shellu "$".'
 db 'Ne�sp��n� vol�n� shellu "$".'
 db 'Selhalo na�ten� souboru.'
 db 'Selhalo ulo�en� souboru.'
 db 'Selhalo vol�n� shellu.'
 db 'Adresa'
 db 'Nejde nastavit zobrazovac� m�d.'
 db 'Vadn� VESA BIOS. Po�i� si slu�n�j�� nebo pou�ij VGA rozli�en�.'
 db 'Screen=nil. Je pot�eba nejprve nastavit n�jak� m�d.'
 db 'Bitmapy maj� r�zn� modely. Je pot�eba je p�ev�st na spole�n�.'
 db 'Vadn� font.'
 db 'Pokus o nastaven�/konverzi fontu pro tyto ��ely p��li� velk�ho.'
 db 'Chyba v INI souboru na ��dce:'
 db 'Chybn� hexadecim�ln� ��slo v INI souboru na ��dce:'
 db 'Intern� chyba INI readeru.'
 db '��slo mimo rozsah $..$ v INI souboru na ��dce:'
 db 'Prom�nn� m� b�t ��slo v INI souboru na ��dce:'
 db 'ReadOnly m�d, vynech�v�m pr�ci s'
 db 'Alokuje� moc blok� konven�n� pam�ti. Pro autora: zvy� si maxDosBlocks.'
 db 'blok� konven�n� pam�ti neuvoln�no.'
 db 'Tvoje grafick� karta se zbl�znila. Volej doktora d.ment@email.cz!'
 db 'Nenahazuje se ret, intern� chyba.'
 db 'Fuj bios, slu�ba load user font zm�nila doublescanning.'
 db 'minul� m�d neuvolnil timer'
 db '��dn� bitmapa na vstupu.'
 db 'p��li� velk� li�ta.'
 db '- TEST GRAFICK� KARTY -'
 db '�i� se instrukcemi na obrazovce.'
 db 'Pokud jsi v okn�, p�epni do fullscreenu!'
 db '...ENTER - pokra�ov�n�...'
 db 'Jestli se text h�be, stiskni ENTER.'
 db 'V opa�n�m p��pad� ESC.'
 db 'ENTER jestli se text cuk�, jinak ESC'
 db 'Stiskni ENTER.'
 db 'Stiskni ESC.'
 db 'Je-li vid�t jen p�lkru�nice, stiskni ESC.'
 db 'Stiskni ENTER, je-li cel�.'
 db 'Stiskni MEZERN�K, je-li cel�.'
 db 'Je-li sloupec textu uprost�ed obrazovky, stiskni ENTER. Je-li vych�len doprava nebo doleva, stiskni ESC.'
 db 'Pokud se kurzor pohybuje kolmo (v jednom sloupci), stiskni ENTER. Jinak ESC.'
 db 'Pokud se text pohybuje plynule, stiskni ENTER. Jinak ESC.'
 db 'Pokud se text'
 db 'pohybuje plynule,'
 db 'stiskni ENTER.'
 db 'Jinak ESC.'
 db 'Postr�d�m soubor'
 db 'Soubor $ ji� existuje.'
 db 'Adres�� $ neexistuje.'
 db 'Nelze otev��t soubor'
 db 'Nelze ��st ze souboru'
 db 'Nelze na��st cel� soubor'
 db 'Nelze vytvo�it soubor'
 db 'Nelze ps�t do souboru'
 db 'asi je m�lo m�sta na disku.'
 db 'Nelze zav��t soubor'
 db 'Nelze p�ejmenovat soubor'
 db 'Nelze smazat soubor'
 db 'na'
 db 'Nelze zjistit velikost souboru'
 db 'Nelze zjistit atributy souboru'
 db 'Nelze nastavit atributy souboru'
 db 'Nelze vytvo�it adres��'
 db 'Nelze vstoupit do adres��e'
 db 'Nelze smazat adres��'
 db 'B�hem akce nastala chyba.'
 db 'Pokra�uj;Pok.v�dy;Skon�i;Sko.v�dy'
 db '�patn� ��seln� soustava'
 db '�patn� cifra na vstupu.'
 db 'Chyba p��stupu ke streamu'
 db 'Nelze inicializovat stream'
 db '�ten� za koncem streamu'
 db 'Nelze ps�t do streamu'
 db 'Get neregistrovan�ho typu'
 db 'Put neregistrovan�ho typu'
 db 'M�dium chr�n�no proti z�pisu.'
 db 'Disk'
 db 'Disky'
 db 'NEP�IPRAVEN'
 db 'Zas nic.'
 db 'P�ECP�NO!'
 db 'P��LI� MNOHO'
 db 'SOUBOR�!'
 db '�ekejte,'
 db 'pros�m'
 db '�ad�m..'
 db 'Zadej masku.'
 db 'ADRES��'
 db 'D�len� nulou.'
 db 'P�ekro�en� mez� pole nebo typu.'
 db 'P�ete�en� stacku.'
 db 'Nedostatek pam�ti.'
 db 'Invalid pointer operation.'
 db 'Floating point overflow.'
 db 'Floating point underflow.'
 db 'Invalid floating point operation.'
 db 'Overlay manager not installed.'
 db 'Overlay file read error.'
 db 'Pou�it� neinicializovan�ho objektu.'
 db 'Vol�n� abstraktn� metody.'
 db 'Stream registration error.'
 db 'Indexov�n� v kolekci mimo rozsah.'
 db 'P�ete�en� kolekce.'
 db 'Aritmetick� p�ete�en�.'
 db 'General Protection Fault, hehe :).'
 db 'Break, taky �e�en�.'
 db 'Pouziti: FN [options] [zdroj [cil]]'
 db '  -i jen vypise informace o fontech zdroj'
 db '  -f jen vypise informace o formatech'
 db '  -p prevede font na proporcionalni'
 db '  -ncislo prevede font na neproporcionalni, cislo je sirka, zadne cislo=detekce'
 db '  -r umozni prejmenovat font (nazev v headeru, ne nazev souboru)'
 db '  -first-last rika, ze font obsahuje pouze znaky first az last (napr. -32-255)'
 db '  -wcislo udava sirku znaku ve FNT v pixelech, implicitne 8'
 db '  -scislo posune vsechny znaky nahoru (tak lze vytvorit superscript)'
 db '  -k prevede font z CentralEurope na Kameniky (chces jinou konverzi? call me)'
 db '  -v zpracuje vsechny fonty obsazene v souboru'
 db '  -cslovo nejake slovo obsazene v .FON v headeru kazdeho fontu, implicitne (c)'
 db '   (neznam format .FON, fonty vyhledavam podle tohoto slova)'
 db '  :lang volba jazyka (:cz nebo :eng)'
 db '  Pokud je zadan jen zdroj, font se nastavi na obrazovce.'
 db '  Pokud je zadan i cil, program se pokusi o konverzi.'
 db '  Zdroj i cil mohou obsahovat * a ? (napr. FN *.fnt *.fn).'
 db 'Formaty (serazene od nejjednodussiho k nejkomplexnejsimu):'
 db '  FNT - nespakovane bitmapy, sirka 8 pixelu, vyska se autodetekuje'
 db '  FNP - jako FNT ale pred kazdym znakem je byte sirka(0-8)'
 db '  RIF - magic "af"; pchar copyright; word vyska(0-24),lastchar (firstchar=32);'
 db '        tablo[word ofs_od_zacatku_bitmap,sirka(0-16)]; hromada bitmap'
 db '  FN  - magic "�m�on� "; pchar name; char firstchar,lastchar; short sizeover,'
 db '        sizeunder; short addspace; byte future; tablo[short relx,rely;'
 db '        byte sir,vys,shift; word ofs_od_zacatku_souboru]; hromada bitmap'
 db '  FON - copyright, copyright, copyright, chaos, copyright...'
 db 'Nejak moc parametru.'
 db 'Nezn�m� parametr'
 db 'Chaos 1, sezen mi popis formatu FON.'
 db 'Chaos 2, sezen mi popis formatu FON.'
 db 'Fontu:'
 db 'Pouzit font cislo'
 db 'Font'
 db 'Vyska'
 db '���ka $ neodpovida parametrum - neni nasobkem $ (znaku*sirka).'
 db 'Prilis velky font.'
 db 'Interni chyba, spatna velikost vygenerovaneho fn.'
 db 'Expand failed.'
 db 'Shrink failed.'
 db 'Z�pis do form�tu .'
 db 'nen� podporov�n.'
 db 'Load $.'
 db 'Rename (zadej libovolne dlouhe jmeno fontu, uklada se do headeru):'
 db 'Proporc.'
 db 'Noprop.'
 db 'Superscript.'
 db 'Show.'
 db 'Save'
 db 'Nezn�m� form�t souboru.'
 db 'Pro takov� form�t nem�m loader.'
 db 'Pro takov� form�t nem�m writer.'
 db 'Nepodporovan� �ernob�l� obr�zek!'
 db 'Nepodporovan� typ komprese!'
 db 'Nepodporovan� barevn� hloubka!'
 db 'Postr�d�m paletu!'
 db 'Neo�ek�van� paleta!'
 db 'Chyba v datech!'
 db 'P��li� mnoho Huffmanov�ch tabulek!'
 db 'P��li� mnoho kvantiza�n�ch tabulek!'
 db 'P��li� mnoho barevn�ch slo�ek!'
 db 'Neprokl�dan� obr�zky nejsou podporov�ny!'
 db 'Nespr�vn� po�et barevn�ch slo�ek!'
 db 'Chybn� velikost zna�ky DRI!'
 db 'Chybn� velikost hlavi�ky souboru!'
 db 'DHL nen� podporov�no!'
 db 'Nalezena nezn�m� zna�ka v datech!'
 db 'Barevn� model CMYK nen� podporov�n!'
 db 'Barevn� model YIQ nen� podporov�n!'
 db 'Nezn�m� barevn� model!'
 db 'Aritmetick� komprese nen� podporov�na!'
 db 'Soubory typu HSI JPEG nejsou podporov�ny!'
 db 'Neo�ek�van� zna�ka konce souboru!'
 db 'Nebyla definov�na ��dn� Huffmanova dekompresn� tabulka!'
 db 'Nepodporovan� typ prokl�d�n�!'
 db 'Neo�ek�van� zna�ka v datech!'
 db 'Prokl�d�n� obr�zk� nen� podporov�no!'
 db 'P��li� velk� obr�zek!'
 db 'Podporov�ny jsou pouze 256barevn� obr�zky!'
 db 'Chyba CRC v hlavi�ce souboru!'
 db 'Nalezen neo�ek�van� konec souboru!'
 db 'Obr�zky v progresivn�m m�du nejsou podporov�ny!'
 db 'Nezn�m� typ komprese!'
 db 'Dekompresn� buffer v�t�� ne� 32KB nen� podporov�n!'
 db 'Nezn�m� typ filtru!'
 db 'Chybn� velikost nekomprimovan�ho bloku!'
 db 'Alfa kan�l nen� podporov�n!'
 db 'P��li� velk� animace pro indirect player.'
 db 'Pam�� sta�� jen na $% obr�zku.'
 db 'Nepovolen� n�zev samplu: $'
 db 'Nekorektn� popis pozad�:'
 db 'Syntatick� chyba v popisu pozad�:'
 db 'Nezn�m� barva:'
 db 'Chybn� n�zev projektu, nastuduj roz���enou hv�zdi�kovou konvenci...'
 db 'Nejd��v kompiluj - pouzij parametr 1.'
 db 'je v seznamu v�ckr�t!'
 db 'Zadej jmeno $. DM souboru.'
 db 'Nazvi obsah $. DM souboru.'
 db 'Pokud to neni Root, je to AddOn k'
 db '(ve vyrazu muzes pouzit *,?,[varianta1|varianta2|...])'
 db '2-3 pismenna zkratka nazvu.'
 db '(vede na n�j odkaz ze str�nky $).'
 db 'Neza�azen� str�nka: $.'
 db 'Str�nka $ nen� fit! (beru jen str�nky verz� 200..$)'
 db 'Obr�zek $ pou�it� na str�nce $ neexistuje.'
 db 'Vylu�uji z projektu'
 db 'Nehled�m na velikost'
 db 'Prohl���m vazby uvnit� projektu...'
 db 'Nena�el jsem ��dn� str�nky, ze kter�ch bych .DM sestavil.'
 db 'Velikost projektu'
 db 'M�lo pam�ti pro skript v Parlanu.'
 db 'P��li� mnoho modul� na str�nce.'
 db 'P�ekro�en maxim�ln� po�et sloupc� na str�nce.'
 db 'Zkracuji text.'
 db 'Moc mal� buffer pro dmtext.'
 db 'Soubor vytvo�en p��li� novou verz� Ma�iny.'
 db 'Chyb� str�nka template.'
 db 'Str�nka m� ne�pln� header, mo�n� k tomu do�lo zm�nou template.'
 db 'Mezi �ablonami vznikla smy�ka.'
 db 'P�ekro�en maxim�ln� po�et DM soubor�.'
 db 'P�ekro�en maxim�ln� po�et projekt�.'
 db 'P��li� mnoho DM soubor� v jednom projektu.'
 db 'Nezkompilov�no'
 db 'mus� b�t root'
 db 'rulez'
 db 'sux'
 db 'none'
 db 'Hled�m DMs v'
 db 'verze'
 db 'Chyb�'
 db 'ale m��e� si vybrat n�hradn� jazyk.'
 db 'Sorry, p�ekro�en max.po�et vno�en�.'
 db 'Nelze obnovit str�nku (m�lo pam�ti nebo intern� chyba).'
 db 'Nastaven� palety (ovl�d�n�: my�, mezern�k, z,x)'
 db 'ESC=v�echno zp�t'
 db 'ENTER=hotovo'
 db 'set'
 db 'Setup'
 db 'help'
 db 'MiniHelp'
 db 'rip'
 db 'Ripper'
 db 'shell'
 db 'DOS shell'
 db 'bye'
 db 'Konec'
 db 'zkou��m velikost'
 db 'P�etekl ministack.'
 db 'Podtekl ministack.'
 db 'Export do:'
 db 'screenshot'
 db 'obr�zek cel� str�nky'
 db 'hol� text str�nky'
 db 'V�he�: hol� str�nka'
 db 'HTML: hol� str�nka'
 db 'HTML: str�nka a obr�zky'
 db 'HTML: cel� site, i podstr�nky'
 db 'Ma�ina: hol� str�nka'
 db 'Ma�ina: pln� vybaven� str�nka'
 db 'Ma�ina: cel� site, i podstr�nky'
 db 'Str�nka neobsahuje ��dn� textov� data.'
 db ' Kde hledat hudbu'
 db '$ nem� vlastn� hudbu.'
 db 'Soubor $ neexistuje.'
 db 'Jak� modul/mp3 chce� pustit?'
 db 'Jak� adres�� chce� pustit?'
 db 'V adres��i nejsou ��dn� moduly/mp3.'
 db 'Na�teno modul�: $'
 db ' Pustit modul/mp3 z projektu.'
 db ' Pustit modul/mp3 z disku.'
 db ' Pustit adres�� z disku.'
 db 'Hr�t rad�i podle abecedy.'
 db 'Hr�t rad�i v n�hodn�m po�ad�.'
 db 'Kdy st��dat hudbu...'
 db 'Nikdy.'
 db 'Po dohr�n�.'
 db 'Po minut�.'
 db 'Po $ minut�ch.'
 db ' Hr�t p�edchoz�.'
 db ' Hr�t dal��.'
 db ' Hr�t n�hodn�.'
 db 'Vypnout hudbu.'
 db 'Stopnout $.'
 db 'Zp�t k $.'
 db 'Zp�t k hudb� z $.'
 db 'Spustil jsi Ma�inu bez audiosyst�mu.'
 db 'Toto menu.'
 db 'Setup.'
 db 'Vstup na str�nku.'
 db 'Str�nky podle autor�.'
 db 'Volba projektu.'
 db 'Volba rozli�en�.'
 db 'Volba jazyka.'
 db 'Export str�nky.'
 db ' Hudba.'
 db 'N�hl� smrt.'
 db 'Hlavn� menu.'
 db 'Editor palety.'
 db 'Mezern�k'
 db 'Link vede na'
 db 'Tento form�t nen� podporov�n.'
 db 'odkazuje na'
 db 'kter��to soubor nebyl nalezen.'
 db 'Nejde vygenerovat button (�patn� parametry nebo m�lo pam�ti).'
 db 'Adres�� pro exportovan� soubory.'
 db 'Ripping z�stal nedokon�en.'
 db 'Projekt zat�m nem� tituln� str�nku.'
 db 'Vytvo� str�nku "title".'
 db 'Pozor, prohl��en� str�nek historick�ch'
 db 'verz� 0.xx nen� zcela bezpe�n�.'
 db 'Zkou��m'
 db 'Instaluji'
 db 'do'
 db 'Zap�n�m readonly re�im.'
 db 'P��kazem "SET DM=cesta" m��e� nastavit kam m� Ma�ina ukl�dat sv� soubory.'
 db 'Konfigura�n� soubor $ je vytvo�en nov�j�� verz� Ma�iny.'
 db 'Pokud chce� mermomoc� pou��vat tuto star�� verzi, bude� ho muset smazat.'
 db 'Instaluji Ma�inu do'
 db 'Updatuji Masinu v'
 db 'Parametry:       /pou�it�: "dm [parametry]", nap�. "dm 4" prohl��en� v textm�du'
 db ' ?,H     - vyp��e tento seznam parametr�'
 db ' S       - safe mode (bezpe�nej�� re�im - bez hw scrolu apod)'
 db ' O       - oldies but goldies (�te i .DM soubory verze 0.xx, ale bez z�ruk)'
 db ' R       - readonly mode (v�bec nezapisuje na disk)'
 db ' D,DP,DM,DW,DC,DA,DS - r�zn� debugovac� m�dy, lze kombinovat'
 db '           (debug general,pal,mem,writer,cache,atoms,scripts)'
 db ' I       - instalace (do $ nebo %DM%)'
 db ' E       - editor (tvorba vlastn�ch stranek..)'
 db ' 1       - kompil�tor projektu (vygeneruje seznam soubor� $)'
 db ' 2       - linker projektu (soubory z $ spoj� do .DM)'
 db ' VGA,VESA,NOVGA,NOVESA - vynut� nebo zak��e VGA nebo VESA m�dy'
 db ' OsaRelaceLimit - omez� rozli�en� v ose x nebo y dan�m po�tem pixel�'
 db '           (p��klady: y=480, xlt800, "x<800", x!=360, "y<100"...)'
 db ' +bit�   - pou�ije pouze m�dy s tolika bity na pixel (4,8,15,16,24,32)'
 db ' -bit�   - vynech� m�dy s tolika bity na pixel       (4=textm�d)'
 db ' :jazyk  - volba jazyka (:cz nebo :eng)'
 db ' adres�� - tam hled� dal�� .DM soubory'
 db ' soubor  - rovnou otev�e zadan� soubor (.DM nebo str�nka editoru)'
 db ' soubor.swp [MB]-zvet�� pam�� otev�en�m swapfile (implicitn� 16MB) (nestabiln�)'
 db 'Program je ji� jednou spu�t�n, m�m rozb�hnout dal�� kopii? [Ano/Ne/Kec��]'
 db 'AaNnKk'
 db 'Verze p�ilinkovan�ho ini souboru neodpov�d� verzi programu.'
 db 'Jazyk p�ilinkovan�ho ini souboru neodpov�d� jeho n�zvu.'
 db 'Ano;Storno'
 db 'Intern� chyba, �patn� odhad velikosti str�nky.'
 db 'sloupec'
 db 'bajt�'
 db 'Str�nka'
 db 'nejde ulo�it. Zadej jin� n�zev.'
 db 'Vyber str�nku nebo napi� nov� jm�no.'
 db 'Ve sloupci nen� m�sto, ud�lej ho ve zdroj�ku nebo jdi do jin�ho sloupce.'
 db 'Vyber obr�zek...'
 db 'Vyber skript...'
 db 'Vyber si font...'
 db 'Kter� font chce� nahradit?'
 db 'Dal�� font ti ned�m, u� m�� na str�nce jin� �ty�i.'
 db 'Odkaz vede na...'
 db 'M�m tento sloupec slou�it s p�edchoz�m?'
 db 'Vlo�en�m obr�zku zru��� textury na pozad�. Pokra�ovat?'
 db 'Definuj pozad� zp�sobem popsan�m v helpu (F1).'
 db 'Velikost str�nky (SIRKAxVYSKA) (���ka�$).'
 db 'Doporu�en� rozli�en� (SIRKAxVYSKA).'
 db 'N�zev str�nky.'
 db 'Autor str�nky.'
 db 'Flags'
 db 'Zab�j�m zl� d�mony...'
 db 'Upozorn�n�: Nem�� VESA BIOS.'
 db 'Upozorn�n�: Nem�� my�.'
 db 'Check Event Wait...'
 db 'Tv�j opera�n� syst�m moment�ln� nepodporuje standardn� slu�bu Event Wait.'
 db 'M��u pokra�ovat, ale potom neru��m za v�sledek.'
 db 'Check OS...'
 db 'Upozorn�n�: Scrolling je plynulej�� bez Windows.'
 db 'Check memory...'
 db 'Upozorn�n�: V�c pam�ti by ne�kodilo ;-)'
 db 'Nem�� moc voln� pam�ti. M��u pokra�ovat, ale mohou nastat probl�my.'
 db 'Nastaven� se projev� a� p�i p���t�m spu�t�n� editoru.'
 db 'Vyber si jednu z v�ce sad parametr� skriptu.'
 db 'Skript'
 db 'parametr'
 db 'm� nezn�m� typ'
 db 'nem� zdokumentovan� parametry.'
 db 'nepodporuje parametry'
 db 'parametr typu script/link/... mus� b�t posledn�.'
 db 'Kategorie textu'
 db 'Norm�ln� text'
 db 'Odli�en� text (spoluautor, citace, k�d)'
 db 'Zv�razn�n� text, odkazy'
 db 'Siln� zv�razn�n� text'
 db 'Bez helpu ani r�nu'
 db 'Novinky'
 db '!ednews.cz'
 db 'To nejd�le�it�j�� b�hem prvn� minuty'
 db '!1stmin.cz'
 db 'Co omrknout pak - hlavn� kapitola'
 db '!editor.cz'
 db 'Kl�vesnice a my�'
 db '!keys.cz'
 db 'Menu editoru'
 db '!edmenu.cz'
 db 'Obr�zky a animace'
 db '!picture.cz'
 db 'Pozad� a textury'
 db '!texture.cz'
 db 'Zvuk a hudba'
 db '!sound.cz'
 db 'Projekty'
 db '!project.cz'
 db 'Atomy, skripty, ParLan'
 db '!parlan.cz'
 db 'Chyby a hroucen�'
 db '!bugz.cz'
 db 'Popis form�tu'
 db '!format.cz'
 db 'Zarovn�n� textu v odstavci'
 db 'implicitn�, jako o odstavec v��'
 db 'zde zarovn�vat doleva'
 db 'zde zarovn�vat doleva i doprava'
 db 'zde centrovat'
 db 'zde zarovn�vat doprava'
 db 'Pomocn� funkce'
 db 'Velikost str�nky'
 db 'Template str�nka'
 db ' N�zev str�nky'
 db ' Autor str�nky'
 db ' Doporu�en� rozli�en�'
 db ' Obr�zek na pozad�'
 db ' Definice pozad�/barev'
 db ' Seznam font�'
 db ' Sampl >�  (welcome)'
 db ' Sampl  � (wel.again)'
 db ' Sampl  �> (yessir)'
 db ' Sampl �  (goback)'
 db ' Sampl � (boom)'
 db ' Hudba'
 db ' Flagy'
 db 'Zarovnat odstavec...'
 db 'Vycentrovat sloupec'
 db 'Rozli�en� editoru'
 db 'P�ehodit Y a Z'
end;

{$endif}
