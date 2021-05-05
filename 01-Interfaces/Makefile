TablasDeConversion.exe: TablasDeConversion.o Conversion.o PrintTable.o
	gcc TablasDeConversion.o Conversion.o PrintTable.o -o TablasDeConversion.exe -std=c18
ConversionTest.exe: ConversionTest.o Conversion.o PrintTable.o
	gcc ConversionTest.o Conversion.o PrintTable.o -o ConversionTest.exe -std=c18
TablasDeConversion.o: TablasDeConversion.c Conversion.h 
	gcc -c TablasDeConversion.c -o TablasDeConversion.o -std=c18
ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c -o ConversionTest.o -std=c18
Conversion.o: Conversion.h Conversion.c
	gcc -c Conversion.c -o Conversion.o -std=c18
PrintTable.o: PrintTable.h PrintTable.c
	gcc -c PrintTable.c -o PrintTable.o -std=c18



.PHONY: clean
clean:
	rm -f TablasDeConversion.o ConversionTest.o Conversion.o PrintTable.o TablasDeConversion.exe ConversionTest.exe