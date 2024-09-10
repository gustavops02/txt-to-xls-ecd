#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <libxl.h>
#include <stdlib.h>
#include <string.h>
#include "registros.h"


void manusearArquivoTxt(char* nomeArquivo, char* funcao);
void criarArquivoExcel(char* nomeArquivo);
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

    if (fgets(linha, sizeof(linha), arquivo)) {
        struct REGISTRO_0000 registro = registraEmStruct0000(linha);
        printf("codigo: %s\n", registro.codigo);
        printf("lecd: %s\n", registro.lecd);
        printf("dtinicio: %s\n", registro.dtinicio);
        printf("dtfim: %s\n", registro.dtfim);
        printf("nome: %s\n", registro.nome);
        printf("cnpj: %s\n", registro.cnpj);
        printf("uf: %s\n", registro.uf);
        printf("inscricao_estadual: %s\n", registro.inscricao_estadual);
        printf("cod_mun: %s\n", registro.cod_mun);
        printf("inscricao_municipal: %s\n", registro.inscricao_municipal);
        printf("ind_sit_esp: %c\n", registro.ind_sit_esp);
        printf("ind_sit_ini_per: %d\n", registro.ind_sit_ini_per);
        printf("ind_nire: %c\n", registro.ind_nire);
        printf("ind_fin_esc: %c\n", registro.ind_fin_esc);
        printf("cod_hash_sub: %s\n", registro.cod_hash_sub);
        printf("ind_grande_porte: %c\n", registro.ind_grande_porte);
        printf("tipo_ecd: %c\n", registro.tipo_ecd);
        printf("cod_scp: %s\n", registro.cod_scp);
        printf("ident_mf: %c\n", registro.ident_mf);
        printf("ind_esc_cons: %c\n", registro.ind_esc_cons);
        printf("ind_centralizada: %c\n", registro.ind_centralizada);
        printf("ind_mudanc_pc: %c\n", registro.ind_mudanc_pc);
        printf("cod_plan_ref: %s\n", registro.cod_plan_ref);
    }

    fclose(arquivo);
}

void criarArquivoExcel(char* nomeArquivo) {
    BookHandle book = xlCreateXMLBook();
    if (book) {
        SheetHandle sheet = xlBookAddSheet(book, L"Sheet1", NULL);
        if (sheet) {
            xlSheetWriteStr(sheet, 1, 0, L"Hello, World !", NULL);
            xlSheetWriteNum(sheet, 2, 0, 1000, NULL);
        }
        xlBookSave(book, nomeArquivo);
        xlBookRelease(book);
    }
}