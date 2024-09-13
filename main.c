#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <libxl.h>
#include <stdlib.h>
#include <string.h>
#include "registros.h"

void manusearArquivoTxt(char* nomeArquivo, char* funcao);
void criarArquivoExcel(char* nomeArquivo, struct REGISTRO_0000 reg0000, struct REGISTRO_0001 reg0001);
char* cststrsep(char** stringp, const char* delim);

int main() {
    char nomeArquivo[] = "arquivos/txt/SPED-TESTE.txt";
    manusearArquivoTxt(nomeArquivo, "r");
    return 0;
}

void manusearArquivoTxt(char* nomeArquivo, char* funcao) {
    FILE* arquivo = fopen(nomeArquivo, funcao);

    if (arquivo == NULL) {
        printf("erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    char linha[250];
    struct REGISTRO_0000 registro0000;
    struct REGISTRO_0001 registro0001;

    if (fgets(linha, sizeof(linha), arquivo)) {
        printf("\n--- Linha 1 ---\n\n");
        registro0000 = registraEmStruct0000(linha);
        printf("linha 1 mapeada \n");
    }

    if (fgets(linha, sizeof(linha), arquivo)) {
        printf("\n--- Linha 2 ---\n\n");
        registro0001 = registraEmStruct0001(linha);
        printf("linha 2 mapeada \n");
    }

    fclose(arquivo);

    criarArquivoExcel("registros.xlsx", registro0000, registro0001);
}

void criarArquivoExcel(char* nomeArquivo, struct REGISTRO_0000 reg0000, struct REGISTRO_0001 reg0001) {
    BookHandle book = xlCreateXMLBook();


    if (book) {
        FontHandle titleHandleFont = xlBookAddFont(book, NULL);

        xlFontSetBold(titleHandleFont, 1);

        FormatHandle format = xlBookAddFormatFromStyle(book, CELLSTYLE_20ACCENT3);
        xlFormatSetFont(format, titleHandleFont);

        SheetHandle sheet0000 = xlBookAddSheet(book, "Registro 0000", NULL);

        if (sheet0000) {
            xlSheetWriteStr(sheet0000, 1, 1, "Código", format);
            xlSheetWriteStr(sheet0000, 1, 2, "LECD", format);
            xlSheetWriteStr(sheet0000, 1, 3, "Data Início", format);
            xlSheetWriteStr(sheet0000, 1, 4, "Data Fim", format);
            xlSheetWriteStr(sheet0000, 1, 5, "Nome", format);
            xlSheetWriteStr(sheet0000, 1, 6, "CNPJ", format);
            xlSheetWriteStr(sheet0000, 1, 7, "UF", format);
            xlSheetWriteStr(sheet0000, 1, 8, "Inscrição Estadual", format);
            xlSheetWriteStr(sheet0000, 1, 9, "Código Municipal", format);
            xlSheetWriteStr(sheet0000, 2, 1, reg0000.codigo, NULL);
            xlSheetWriteStr(sheet0000, 2, 2, reg0000.lecd, NULL);
            xlSheetWriteStr(sheet0000, 2, 3, reg0000.dtinicio, NULL);
            xlSheetWriteStr(sheet0000, 2, 4, reg0000.dtfim, NULL);
            xlSheetWriteStr(sheet0000, 2, 5, reg0000.nome, NULL);
            xlSheetWriteStr(sheet0000, 2, 6, reg0000.cnpj, NULL);
            xlSheetWriteStr(sheet0000, 2, 7, reg0000.uf, NULL);
            xlSheetWriteStr(sheet0000, 2, 8, reg0000.inscricao_estadual, NULL);
            xlSheetWriteStr(sheet0000, 2, 9, reg0000.cod_mun, NULL);
        }

        SheetHandle sheet0001 = xlBookAddSheet(book, "Registro 0001", NULL);
        
        if (sheet0001) {
            xlSheetWriteStr(sheet0001, 1, 1, "Codigo", format);
            xlSheetWriteStr(sheet0001, 1, 2, "Indicador de movimento", format);
            xlSheetWriteStr(sheet0001, 2, 1, reg0001.codigo, NULL);
            xlSheetWriteStr(sheet0001, 2, 2, &reg0001.ind_dad, NULL);
        }
        xlBookSave(book, nomeArquivo);
        xlBookRelease(book);
    }
    else {
        printf("Erro ao criar arquivo excel.\n");
    }
}