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
'');

{$else}

procedure hlasky1CS;assembler;asm
 dw 698,698,698,716,716,716,716,716,716,716,716,716
 dw 716,716,737,759,759,759,759,759,759,759,759,780
 dw 797,797,813,813,813,813,813,828,850,850,850,850
 dw 863,863,863,863,891,923,936,966,990,1015,1037,1057
 dw 1077,1117,1147,1207,1240,1268,1292,1316,1338,1344,1375,1437
 dw 1488,1549,1560,1623,1652,1702,1728,1774,1819,1851,1921,1955
 dw 2020,2053,2108,2134,2158,2177,2177,2200,2232,2272,2297,2332
 dw 2354,2390,2404,2416,2457,2483,2512,2616,2692,2749,2762,2779
 dw 2793,2803,2803,2819,2841,2862,2882,2903,2927,2948,2969,2996
 dw 3015,3039,3058,3060,3090,3120,3151,3173,3199,3219,3244,3277
 dw 3300,3323,3348,3374,3397,3418,3443,3468,3497,3501,3506,3517
 dw 3525,3534,3546,3554,3562,3568,3575,3587,3594,3594,3594,3594
 dw 3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594
 dw 3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594
 dw 3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594
 dw 3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594,3594
 dw 3594,3594,3594,3594,3594,3594,3594,3594,3594,3607,3638,3655
 dw 3673,3699,3723,3748,3781,3811,3835,3870,3895,3921,3954,3972
 dw 3994,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028
 dw 4028,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028
 dw 4028,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028,4028
 dw 4028,4028,4028,4028,4047,4047,4082,4123,4160,4195,4274,4338
 dw 4416,4475,4543,4620,4666,4744,4804,4840,4897,4950,5008,5008
 dw 5066,5132,5190,5268,5337,5414,5484,5556,5616,5616,5636,5652
 dw 5688,5724,5730,5747,5751,5756,5818,5836,5885,5899,5913,5931
 dw 5947,5954,6020,6028,6035,6047,6052,6056,6079,6079,6110,6141
 dw 6173,6200,6230,6247,6266,6281,6315,6350,6380,6420,6453,6480
 dw 6513,6534,6567,6602,6636,6658,6696,6737,6770,6825,6854,6882
 dw 6918,6939,6981,7010,7044,7091,7112,7162,7181,7220,7247,7288
 dw 7318
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
end;

{$endif}
