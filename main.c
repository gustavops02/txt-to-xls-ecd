#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <libxl.h>
#include <stdlib.h>
#include <string.h>
#include "registros.h"

void manusearArquivoTxt(char* nomeArquivo, char* funcao);

void criarArquivoExcel(char* nomeArquivo,
    struct REGISTRO_0000 reg0000,
    struct REGISTRO_0001 reg0001,
    struct REGISTRO_0007 reg0007,
    struct REGISTRO_0990 reg0990,
    struct REGISTRO_I001 regI001,
    struct REGISTRO_I010 regI010,
    struct REGISTRO_I030 regI030,
    struct REGISTRO_I050 listaI050[],
    int tamanhoListaI050,
    struct REGISTRO_I051 listaI051[],
    int tamanhoListaI051,
    struct REGISTRO_I052 listaI052[],
    int tamanhoListaI052,
    struct REGISTRO_I075 listaI075[],
    int tamanhoListaI075,
    struct REGISTRO_I150 listaI150[],
    int tamanhoListaI150,
    struct REGISTRO_I155 listaI155[],
    int tamanhoListaI155,
    struct REGISTRO_I200 listaI200[],
    int tamanhoListaI200,
    struct REGISTRO_I250 listaI250[],
    int tamanhoListaI250,
    struct REGISTRO_I350 regI350,
    struct REGISTRO_I355 listaI355[],
    int tamanhoListaI355,
    struct REGISTRO_I990 regI990,
    struct REGISTRO_J001 regJ001,
    struct REGISTRO_J005 regJ005,
    struct REGISTRO_J100 listaJ100[],
    int tamanhoListaJ100,
    struct REGISTRO_J150 regJ150[],
    int tamanhoListaJ150,
    struct REGISTRO_J900 regJ900,
    struct REGISTRO_J990 regJ990,
    struct REGISTRO_9001 reg9001,
    struct REGISTRO_9900 lista9900[],
    int tamanhoLista9900,
    struct REGISTRO_9999 registro9999);
char* cststrsep(char** stringp, const char* delim);

int main() {
    char nomeArquivo[] = "arquivos/txt/SPED-TESTE.txt";
    manusearArquivoTxt(nomeArquivo, "r");
    return 0;
}

void manusearArquivoTxt(char* nomeArquivo, char* funcao) {
    FILE* arquivo = fopen(nomeArquivo, funcao);
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    char linha[250];
    struct REGISTRO_0000 registro0000;
    struct REGISTRO_0001 registro0001;
    struct REGISTRO_0007 registro0007;
    struct REGISTRO_0990 registro0990;
    struct REGISTRO_I001 registroI001;
    struct REGISTRO_I010 registroI010;
    struct REGISTRO_I030 registroI030;
    struct REGISTRO_I350 registroI350;
    struct REGISTRO_I990 registroI990;
    struct REGISTRO_J001 registroJ001;
    struct REGISTRO_J005 registroJ005;
    struct REGISTRO_J900 registroJ900;
    struct REGISTRO_J990 registroJ990;
    struct REGISTRO_9001 registro9001;
    struct REGISTRO_9999 registro9999;
    struct REGISTRO_I050* listaI050 = NULL;
    struct REGISTRO_I051* listaI051 = NULL;
    struct REGISTRO_I052* listaI052 = NULL;
    struct REGISTRO_I075* listaI075 = NULL;
    struct REGISTRO_I150* listaI150 = NULL;
    struct REGISTRO_I155* listaI155 = NULL;
    struct REGISTRO_I200* listaI200 = NULL;
    struct REGISTRO_I250* listaI250 = NULL;
    struct REGISTRO_I355* listaI355 = NULL;
    struct REGISTRO_J100* listaJ100 = NULL;
    struct REGISTRO_J150* listaJ150 = NULL;
    struct REGISTRO_9900* lista9900 = NULL;
    int tamanhoListaI050 = 0;
    int tamanhoListaI051 = 0;
    int tamanhoListaI052 = 0;
    int tamanhoListaI075 = 0;
    int tamanhoListaI150 = 0;
    int tamanhoListaI155 = 0;
    int tamanhoListaI200 = 0;
    int tamanhoListaI250 = 0;
    int tamanhoListaI355 = 0;
    int tamanhoListaJ100 = 0;
    int tamanhoListaJ150 = 0;
    int tamanhoLista9900 = 0;

    while (fgets(linha, sizeof(linha), arquivo)) {
        if (strstr(linha, "|0000|") != NULL) {
            registro0000 = registraEmStruct0000(linha);
        }
        else if (strstr(linha, "|0001|") != NULL) {
            registro0001 = registraEmStruct0001(linha);
        }
        else if (strstr(linha, "|0007|") != NULL) {
            registro0007 = registraEmStruct0007(linha);
        }
        else if (strstr(linha, "|0990|") != NULL) {
            registro0990 = registraEmStruct0990(linha);
        }
        else if (strstr(linha, "|I001|") != NULL) {
            registroI001 = registraEmStructI001(linha);
        }
        else if (strstr(linha, "|I010|") != NULL) {
            registroI010 = registraEmStructI010(linha);
        }
        else if (strstr(linha, "|I030|") != NULL) {
            registroI030 = registraEmStructI030(linha);
        }
        else if (strstr(linha, "|I050|") != NULL) {
            struct REGISTRO_I050 registroI050 = registraEmStructI050(linha);
            adicionarRegistroI050(&listaI050, &tamanhoListaI050, registroI050);
        }
        else if (strstr(linha, "|I051|") != NULL ) {
            struct REGISTRO_I051 regI051 = registraEmStructI051(linha);
            adicionarRegistroI051(&listaI051, &tamanhoListaI051, regI051);
        }
        else if (strstr(linha, "|I052|") != NULL) {
            struct REGISTRO_I052 regI052 = registraEmStructI052(linha);
            adicionarRegistroI052(&listaI052, &tamanhoListaI052, regI052);
        }
        else if (strstr(linha, "|I075|") != NULL) {
            struct REGISTRO_I075 regI075 = registraEmStructI075(linha);
            adicionarRegistroI075(&listaI075, &tamanhoListaI075, regI075);
        }
        else if (strstr(linha, "|I150|") != NULL) {
            struct REGISTRO_I150 regI150 = registraEmStructI150(linha);
            adicionarRegistroI150(&listaI150, &tamanhoListaI150, regI150);
        } 
        else if (strstr(linha, "|I155|") != NULL) {
            struct REGISTRO_I155 regI155 = registraEmStructI155(linha);
            adicionarRegistroI155(&listaI155, &tamanhoListaI155, regI155);
        }
        else if (strstr(linha, "|I200|") != NULL) {
            struct REGISTRO_I200 regI200 = registraEmStructI200(linha);
            adicionarRegistroI200(&listaI200, &tamanhoListaI200, regI200);
        }
        else if (strstr(linha, "|I250|") != NULL) {
            struct REGISTRO_I250 regI250 = registraEmStructI250(linha);
            adicionarRegistroI250(&listaI250, &tamanhoListaI250, regI250);
        }
        else if (strstr(linha, "|I350|") != NULL) {
            registroI350 = registraEmStructI350(linha);
        }
        else if (strstr(linha, "|I355|") != NULL) {
            struct REGISTRO_I355 regI355 = registraEmStructI355(linha);
            adicionarRegistroI355(&listaI355, &tamanhoListaI355, regI355);
        } 
        else if (strstr(linha, "|I990|") != NULL) {
            registroI990 = registraEmStructI990(linha);
        }
        else if (strstr(linha, "|J001|") != NULL) {
            registroJ001 = registraEmStructJ001(linha);
        }
        else if (strstr(linha, "|J005|") != NULL) {
            registroJ005 = registraEmStructJ005(linha);
        }
        else if (strstr(linha, "|J100|") != NULL) {
            struct REGISTRO_J100 regJ100 = registraEmStructJ100(linha);
            adicionarRegistroJ100(&listaJ100, &tamanhoListaJ100, regJ100);
        }
        else if (strstr(linha, "|J150|") != NULL) {
            struct REGISTRO_J150 regJ150 = registraEmStructJ150(linha);
            adicionarRegistroJ150(&listaJ150, &tamanhoListaJ150, regJ150);
        }
        else if (strstr(linha, "|J900|") != NULL) {
            registroJ900 = registraEmStructJ900(linha);
        }
        else if (strstr(linha, "|J990|") != NULL) {
            registroJ990 = registraEmStructJ990(linha);
        }
        else if (strstr(linha, "|9001|") != NULL) {
            registro9001 = registraEmStruct9001(linha);
        }
        else if (strstr(linha, "|9900|") != NULL) {
            struct REGISTRO_9900 reg9900 = registraEmStruct9900(linha);
            adicionarRegistro9900(&lista9900, &tamanhoLista9900, reg9900);
        }
        else if (strstr(linha, "|9999|") != NULL) {
            registro9999 = registraEmStruct9999(linha);
        }
    }

    fclose(arquivo);

    criarArquivoExcel("registros.xlsx", registro0000, registro0001, registro0007, registro0990, registroI001, registroI010, registroI030, listaI050, tamanhoListaI050, listaI051, tamanhoListaI051, listaI052, tamanhoListaI052, listaI075, tamanhoListaI075, listaI150, tamanhoListaI150, listaI155, tamanhoListaI155, listaI200, tamanhoListaI200, listaI250, tamanhoListaI250, registroI350, listaI355, tamanhoListaI355, registroI990, registroJ001, registroJ005, listaJ100, tamanhoListaJ100, listaJ150, tamanhoListaJ150, registroJ900, registroJ990, registro9001, lista9900, tamanhoLista9900, registro9999);
    free(listaI050);
    free(listaI051);
    free(listaI052);
    free(listaI075);
    free(listaI150);
    free(listaI155);
    free(listaI200);
    free(listaI250);
    free(listaI355);
    free(listaJ100);
    free(listaJ150);
    free(lista9900);
}

void criarArquivoExcel(char* nomeArquivo,
    struct REGISTRO_0000 reg0000,
    struct REGISTRO_0001 reg0001,
    struct REGISTRO_0007 reg0007,
    struct REGISTRO_0990 reg0990,
    struct REGISTRO_I001 regI001,
    struct REGISTRO_I010 regI010,
    struct REGISTRO_I030 regI030,
    struct REGISTRO_I050 listaI050[],
    int tamanhoListaI050,
    struct REGISTRO_I051 listaI051[],
    int tamanhoListaI051,
    struct REGISTRO_I052 listaI052[],
    int tamanhoListaI052,
    struct REGISTRO_I075 listaI075[],
    int tamanhoListaI075,
    struct REGISTRO_I150 listaI150[],
    int tamanhoListaI150,
    struct REGISTRO_I155 listaI155[],
    int tamanhoListaI155,
    struct REGISTRO_I200 listaI200[],
    int tamanhoListaI200, 
    struct REGISTRO_I250 listaI250[],
    int tamanhoListaI250,
    struct REGISTRO_I350 regI350,
    struct REGISTRO_I355 listaI355[],
    int tamanhoListaI355,
    struct REGISTRO_I990 regI990,
    struct REGISTRO_J001 regJ001,
    struct REGISTRO_J005 regJ005,
    struct REGISTRO_J100 regJ100[],
    int tamanhoListaJ100,
    struct REGISTRO_J150 regJ150[],
    int tamanhoListaJ150,
    struct REGISTRO_J900 regJ900,
    struct REGISTRO_J990 regJ990,
    struct REGISTRO_9001 reg9001,
    struct REGISTRO_9900 reg9900[],
    int tamanhoLista9900,
    struct REGISTRO_9999 reg9999)
{
    BookHandle book = xlCreateXMLBook();

    if (book) {
        FontHandle titleHandleFont = xlBookAddFont(book, NULL);
        xlFontSetBold(titleHandleFont, 1);

        FormatHandle format = xlBookAddFormatFromStyle(book, CELLSTYLE_20ACCENT3);
        xlFormatSetFont(format, titleHandleFont);

        SheetHandle sheet0000 = xlBookAddSheet(book, "0000", NULL);
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
            xlSheetWriteStr(sheet0000, 1, 10, "Inscrição Municipal", format);
            xlSheetWriteStr(sheet0000, 1, 11, "Situação especial", format);
            xlSheetWriteStr(sheet0000, 1, 12, "Situação início per.", format);
            xlSheetWriteStr(sheet0000, 1, 13, "Ind exis. NIRE", format);
            xlSheetWriteStr(sheet0000, 1, 14, "Finalidade", format);
            xlSheetWriteStr(sheet0000, 1, 15, "Hash Escr.", format);
            xlSheetWriteStr(sheet0000, 1, 16, "Ind entidade.", format);
            xlSheetWriteStr(sheet0000, 1, 17, "Tipo ECD", format);
            xlSheetWriteStr(sheet0000, 1, 18, "CNPJ da SCP", format);
            xlSheetWriteStr(sheet0000, 1, 19, "Ident. Moeda", format);
            xlSheetWriteStr(sheet0000, 1, 20, "Escr. Contábeis Consolidadas", format);
            xlSheetWriteStr(sheet0000, 1, 21, "Tipo Escrituração", format);
            xlSheetWriteStr(sheet0000, 1, 22, "Ind mudança plano de contas", format);
            xlSheetWriteStr(sheet0000, 1, 23, "Cod plano contas Ref.", format);


            xlSheetWriteStr(sheet0000, 2, 1, reg0000.codigo, NULL);
            xlSheetWriteStr(sheet0000, 2, 2, reg0000.lecd, NULL);
            xlSheetWriteStr(sheet0000, 2, 3, reg0000.dtinicio, NULL);
            xlSheetWriteStr(sheet0000, 2, 4, reg0000.dtfim, NULL);
            xlSheetWriteStr(sheet0000, 2, 5, reg0000.nome, NULL);
            xlSheetWriteStr(sheet0000, 2, 6, reg0000.cnpj, NULL);
            xlSheetWriteStr(sheet0000, 2, 7, reg0000.uf, NULL);
            xlSheetWriteStr(sheet0000, 2, 8, reg0000.inscricao_estadual, NULL);
            xlSheetWriteStr(sheet0000, 2, 9, reg0000.cod_mun, NULL);
            xlSheetWriteStr(sheet0000, 2, 10, reg0000.inscricao_municipal, NULL);
            xlSheetWriteStr(sheet0000, 2, 11, reg0000.ind_sit_esp, NULL);
            xlSheetWriteStr(sheet0000, 2, 12, &reg0000.ind_sit_ini_per, NULL);
            xlSheetWriteStr(sheet0000, 2, 13, &reg0000.ind_nire, NULL);
            xlSheetWriteStr(sheet0000, 2, 14, &reg0000.ind_fin_esc, NULL);
            xlSheetWriteStr(sheet0000, 2, 15, reg0000.cod_hash_sub, NULL);
            xlSheetWriteStr(sheet0000, 2, 16, &reg0000.ind_grande_porte, NULL);
            xlSheetWriteStr(sheet0000, 2, 17, &reg0000.tipo_ecd, NULL);
            xlSheetWriteStr(sheet0000, 2, 18, reg0000.cod_scp, NULL);
            xlSheetWriteStr(sheet0000, 2, 19, &reg0000.ident_mf, NULL);
            xlSheetWriteStr(sheet0000, 2, 20, &reg0000.ind_esc_cons, NULL);
            xlSheetWriteStr(sheet0000, 2, 21, &reg0000.ind_centralizada, NULL);
            xlSheetWriteStr(sheet0000, 2, 22, &reg0000.ind_mudanc_pc, NULL);
            xlSheetWriteStr(sheet0000, 2, 23, reg0000.cod_plan_ref, NULL);
        }

        SheetHandle sheet0001 = xlBookAddSheet(book, "0001", NULL);
        if (sheet0001) {
            xlSheetWriteStr(sheet0001, 1, 1, "Código", format);
            xlSheetWriteStr(sheet0001, 1, 2, "Indicador de movimento", format);
            xlSheetWriteStr(sheet0001, 2, 1, reg0001.codigo, NULL);
            xlSheetWriteStr(sheet0001, 2, 2, &reg0001.ind_dad, NULL);
        }

        SheetHandle sheet0007 = xlBookAddSheet(book, "0007", NULL);
        if (sheet0007) {
            xlSheetWriteStr(sheet0007, 1, 1, "Código", format);
            xlSheetWriteStr(sheet0007, 1, 2, "Cód Inst. Resp", format);
            xlSheetWriteStr(sheet0007, 1, 3, "Cód Cadastral PJ", format);
            xlSheetWriteStr(sheet0007, 2, 1, reg0007.codigo, NULL);
            xlSheetWriteStr(sheet0007, 2, 2, reg0007.cod_ent_ref, NULL);
            xlSheetWriteStr(sheet0007, 2, 3, reg0007.cod_inscr, NULL);
        }

        SheetHandle sheet0990 = xlBookAddSheet(book, "0990", NULL);
        if (sheet0990) {
            xlSheetWriteStr(sheet0990, 1, 1, "Código", format);
            xlSheetWriteStr(sheet0990, 1, 2, "Qtd. linhas", format);
            xlSheetWriteStr(sheet0990, 2, 1, reg0990.codigo, NULL);
            xlSheetWriteNum(sheet0990, 2, 2, reg0990.qtd_lin, NULL);
        }

        SheetHandle sheetI001 = xlBookAddSheet(book, "I001", NULL);
        if(sheetI001) {

            xlSheetWriteStr(sheetI001, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI001, 1, 2, "Ind. Mov", format);
            xlSheetWriteStr(sheetI001, 2, 1, regI001.codigo, NULL);
            xlSheetWriteStr(sheetI001, 2, 2, &regI001.ind_dad, NULL);
        }

        SheetHandle sheetI010 = xlBookAddSheet(book, "I010", NULL);
        if (sheetI010) {

            xlSheetWriteStr(sheetI010, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI010, 1, 2, "Forma Escr.", format);
            xlSheetWriteStr(sheetI010, 1, 3, "Cod Versão", format);
            xlSheetWriteStr(sheetI010, 2, 1, regI010.codigo, NULL);
            xlSheetWriteStr(sheetI010, 2, 2, regI010.ind_esc, NULL);
            xlSheetWriteStr(sheetI010, 2, 3, regI010.cod_ver_lc, NULL);
        }

        SheetHandle sheetI030 = xlBookAddSheet(book, "I030", NULL);
        if (sheetI030) {

            xlSheetWriteStr(sheetI030, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI030, 1, 2, " Termo abertura", format);
            xlSheetWriteStr(sheetI030, 1, 3, "Nº Ordem", format);
            xlSheetWriteStr(sheetI030, 1, 4, "Natureza Livro", format);
            xlSheetWriteStr(sheetI030, 1, 5, "Qtd Linhas", format);
            xlSheetWriteStr(sheetI030, 1, 6, "Nome", format);
            xlSheetWriteStr(sheetI030, 1, 7, "NIRE", format);
            xlSheetWriteStr(sheetI030, 1, 8, "CNPJ", format);
            xlSheetWriteStr(sheetI030, 1, 9, "Data Arquivamento", format);
            xlSheetWriteStr(sheetI030, 1, 10, "Data Arquivamento Conv.", format);
            xlSheetWriteStr(sheetI030, 1, 11, "Município", format);
            xlSheetWriteStr(sheetI030, 1, 12, "Data Encerramento Exercicio", format);

            xlSheetWriteStr(sheetI030, 2, 1, regI030.codigo, NULL);
            xlSheetWriteStr(sheetI030, 2, 2, regI030.dnrc_abert, NULL);
            xlSheetWriteNum(sheetI030, 2, 3, regI030.num_ord, NULL);
            xlSheetWriteStr(sheetI030, 2, 4, regI030.nat_livr, NULL);
            xlSheetWriteNum(sheetI030, 2, 5, regI030.qtd_lin, NULL);
            xlSheetWriteStr(sheetI030, 2, 6, regI030.nome, NULL);
            xlSheetWriteStr(sheetI030, 2, 7, regI030.nire, NULL);
            xlSheetWriteStr(sheetI030, 2, 8, regI030.cnpj, NULL);
            xlSheetWriteStr(sheetI030, 2, 9, regI030.dt_arq, NULL);
            xlSheetWriteStr(sheetI030, 2, 10, regI030.dt_arq_conv, NULL);
            xlSheetWriteStr(sheetI030, 2, 11, regI030.desc_mun, NULL);
            xlSheetWriteStr(sheetI030, 2, 12, regI030.dt_ex_social,NULL);
        }

        SheetHandle sheetI050 = xlBookAddSheet(book, "I050", NULL);
        if (sheetI050) {
            xlSheetWriteStr(sheetI050, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI050, 1, 2, "Data Inclusão/Alteração", format);
            xlSheetWriteStr(sheetI050, 1, 3, "Código da Natureza", format);
            xlSheetWriteStr(sheetI050, 1, 4, "Indicador Tipo Conta", format);
            xlSheetWriteStr(sheetI050, 1, 5, "Nível", format);
            xlSheetWriteStr(sheetI050, 1, 6, "Cód Conta Analitica", format);
            xlSheetWriteStr(sheetI050, 1, 7, "Cód Conta Sintetica", format);
            xlSheetWriteStr(sheetI050, 1, 8, "Nome da Conta Analítica", format);

            for (int i = 0; i < tamanhoListaI050; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI050, linha, 1, listaI050[i].codigo, NULL);
                xlSheetWriteStr(sheetI050, linha, 2, listaI050[i].dt_alt, NULL);
                xlSheetWriteStr(sheetI050, linha, 3, listaI050[i].cod_nat, NULL);
                xlSheetWriteStr(sheetI050, linha, 4, &listaI050[i].ind_cta, NULL);
                xlSheetWriteStr(sheetI050, linha, 5, listaI050[i].nivel, NULL);
                xlSheetWriteStr(sheetI050, linha, 6, listaI050[i].cod_cta, NULL);
                xlSheetWriteStr(sheetI050, linha, 7, listaI050[i].cod_cta_sup, NULL);
                xlSheetWriteStr(sheetI050, linha, 8, listaI050[i].cta, NULL);
            }
        }

        SheetHandle sheetI051 = xlBookAddSheet(book, "I051", NULL);
        if (sheetI051) {
            xlSheetWriteStr(sheetI051, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI051, 1, 2, "Cód Centro Custo", format);
            xlSheetWriteStr(sheetI051, 1, 3, "Cód Cta. Plano Ref", format);
            for (int i = 0; i < tamanhoListaI051; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI051, linha, 1, listaI051[i].codigo, NULL);
                xlSheetWriteStr(sheetI051, linha, 2, listaI051[i].cod_ccus, NULL);
                xlSheetWriteStr(sheetI051, linha, 3, listaI051[i].cod_cta_ref, NULL);
            }
        }

        SheetHandle sheetI052 = xlBookAddSheet(book, "I052", NULL);
        if (sheetI052) {
            xlSheetWriteStr(sheetI052, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI052, 1, 2, "Cód Centro Custo", format);
            xlSheetWriteStr(sheetI052, 1, 3, "Cód Aglutinação", format);

            for (int i = 0; i < tamanhoListaI052; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI052, linha, 1, listaI052[i].codigo, NULL);
                xlSheetWriteStr(sheetI052, linha, 2, listaI052[i].cod_ccus, NULL);
                xlSheetWriteStr(sheetI052, linha, 3, listaI052[i].cod_agl, NULL);
            }
        }

        SheetHandle sheetI075 = xlBookAddSheet(book, "I075", NULL);
        if (sheetI075) {
            xlSheetWriteStr(sheetI075, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI075, 1, 2, "Cód. Histórico", format);
            xlSheetWriteStr(sheetI075, 1, 3, "Descrição", format);

            for (int i = 0; i < tamanhoListaI075; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI075, linha, 1, listaI075[i].codigo, NULL);
                xlSheetWriteStr(sheetI075, linha, 2, listaI075[i].cod_hist, NULL);
                xlSheetWriteStr(sheetI075, linha, 3, listaI075[i].descr_hist, NULL);
            }
        }

        SheetHandle sheetI150 = xlBookAddSheet(book, "I150", NULL);
        if (sheetI150) {
            xlSheetWriteStr(sheetI150, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI150, 1, 2, "Data Inicio", format);
            xlSheetWriteStr(sheetI150, 1, 3, "Data Fim", format);

            for (int i = 0; i < tamanhoListaI150; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI150, linha, 1, listaI150[i].codigo, NULL);
                xlSheetWriteStr(sheetI150, linha, 2, listaI150[i].dt_ini, NULL);
                xlSheetWriteStr(sheetI150, linha, 3, listaI150[i].dt_fin, NULL);
            }
        }

        SheetHandle sheetI155 = xlBookAddSheet(book, "I155", NULL);
        if (sheetI155) {
            xlSheetWriteStr(sheetI155, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI155, 1, 2, "Cód Conta", format);
            xlSheetWriteStr(sheetI155, 1, 3, "Cód Centro Custos", format);
            xlSheetWriteStr(sheetI155, 1, 4, "Saldo Inicial Per", format);
            xlSheetWriteStr(sheetI155, 1, 5, "Indicador Saldo Inicial (D/C)", format);
            xlSheetWriteStr(sheetI155, 1, 6, "Total Débitos", format);
            xlSheetWriteStr(sheetI155, 1, 7, "Total Créditos", format);
            xlSheetWriteStr(sheetI155, 1, 8, "Saldo Final Per.", format);
            xlSheetWriteStr(sheetI155, 1, 9, "Indicador Saldo Final (D/C)", format);

            for (int i = 0; i < tamanhoListaI155; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI155, linha, 1, listaI155[i].codigo, NULL);
                xlSheetWriteStr(sheetI155, linha, 2, listaI155[i].cod_cta, NULL);
                xlSheetWriteStr(sheetI155, linha, 3, listaI155[i].cod_ccus, NULL);
                xlSheetWriteStr(sheetI155, linha, 4, listaI155[i].vl_saldo_ini, NULL);
                xlSheetWriteStr(sheetI155, linha, 5, listaI155[i].vl_saldo_ini, NULL);
                xlSheetWriteStr(sheetI155, linha, 6, listaI155[i].vl_deb, NULL);
                xlSheetWriteStr(sheetI155, linha, 7, listaI155[i].vl_cred, NULL);
                xlSheetWriteStr(sheetI155, linha, 8, listaI155[i].vl_sld_fin, NULL);
                xlSheetWriteStr(sheetI155, linha, 9, listaI155[i].vl_sld_fin, NULL);
            }
        }

        SheetHandle sheetI200 = xlBookAddSheet(book, "I200", NULL);

        if (sheetI200) {
            xlSheetWriteStr(sheetI200, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI200, 1, 2, "Num. Lcto", format);
            xlSheetWriteStr(sheetI200, 1, 3, "Data Lcto", format);
            xlSheetWriteStr(sheetI200, 1, 4, "Valor Lcto", format);
            xlSheetWriteStr(sheetI200, 1, 5, "Tipo Lcto", format);
            xlSheetWriteStr(sheetI200, 1, 6, "Data Ocorrência", format);

            for(int i = 0; i < tamanhoListaI200; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI200, linha, 1, listaI200[i].codigo, NULL);
                xlSheetWriteStr(sheetI200, linha, 2, listaI200[i].num_lcto, NULL);
                xlSheetWriteStr(sheetI200, linha, 3, listaI200[i].dt_lcto, NULL);
                xlSheetWriteStr(sheetI200, linha, 4, listaI200[i].vl_lcto, NULL);
                xlSheetWriteStr(sheetI200, linha, 5, listaI200[i].ind_lcto, NULL);
                xlSheetWriteStr(sheetI200, linha, 6, listaI200[i].dt_lcto_ext, NULL);
            }
        }

        SheetHandle sheetI250 = xlBookAddSheet(book, "I250", NULL);

        if (sheetI250) {
            xlSheetWriteStr(sheetI250, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI250, 1, 2, "Cód. Conta", format);
            xlSheetWriteStr(sheetI250, 1, 3, "Cód. Centro Custos", format);
            xlSheetWriteStr(sheetI250, 1, 4, "Valor Partida", format);
            xlSheetWriteStr(sheetI250, 1, 5, "Natureza", format);
            xlSheetWriteStr(sheetI250, 1, 6, "Nº Arquivo", format);
            xlSheetWriteStr(sheetI250, 1, 7, "Cód Histórico", format);
            xlSheetWriteStr(sheetI250, 1, 8, "Histórico", format);
            xlSheetWriteStr(sheetI250, 1, 9, "Id. Participante", format);

            for (int i = 0; i < tamanhoListaI250; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI250, linha, 1, listaI250[i].codigo, NULL);
                xlSheetWriteStr(sheetI250, linha, 2, listaI250[i].cod_cta, NULL);
                xlSheetWriteStr(sheetI250, linha, 3, listaI250[i].cod_ccus, NULL);
                xlSheetWriteStr(sheetI250, linha, 4, listaI250[i].vl_dc, NULL);
                xlSheetWriteStr(sheetI250, linha, 5, listaI250[i].ind_dc, NULL);
                xlSheetWriteStr(sheetI250, linha, 6, listaI250[i].num_arq, NULL);
                xlSheetWriteStr(sheetI250, linha, 7, listaI250[i].cod_hist_pad, NULL);
                xlSheetWriteStr(sheetI250, linha, 8, listaI250[i].hist, NULL);
                xlSheetWriteStr(sheetI250, linha, 9, listaI250[i].cod_part, NULL);
            }
        }

        SheetHandle sheetI350 = xlBookAddSheet(book, "I350", NULL);
        if (sheetI350) {
            xlSheetWriteStr(sheetI350, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI350, 1, 2, "Data Apuração", format);

            xlSheetWriteStr(sheetI350, 2, 1, regI350.codigo, format);
            xlSheetWriteStr(sheetI350, 2, 2, regI350.dt_res, format);
        }

        SheetHandle sheetI355 = xlBookAddSheet(book, "I355", NULL);
        if (sheetI355) {
            xlSheetWriteStr(sheetI355, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI355, 1, 2, "Cód. Conta", format);
            xlSheetWriteStr(sheetI355, 1, 3, "Cód. Centro Custos", format);
            xlSheetWriteStr(sheetI355, 1, 4, "Valor Conta", format);
            xlSheetWriteStr(sheetI355, 1, 5, "Indicador Saldo Final", format);

            for (int i = 0; i < tamanhoListaI355; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetI355, linha, 1, listaI355[i].codigo, format);
                xlSheetWriteStr(sheetI355, linha, 2, listaI355[i].cod_cta, format);
                xlSheetWriteStr(sheetI355, linha, 3, listaI355[i].cod_ccus, format);
                xlSheetWriteStr(sheetI355, linha, 4, listaI355[i].vl_cta, format);
                xlSheetWriteStr(sheetI355, linha, 5, listaI355[i].ind_dc, format);
            }
        }

        SheetHandle sheetI990 = xlBookAddSheet(book, "I990", NULL);
        if (sheetI990) {
            xlSheetWriteStr(sheetI990, 1, 1, "Código", format);
            xlSheetWriteStr(sheetI990, 1, 2, "Nº Linhas", format);

            xlSheetWriteStr(sheetI990, 2, 1, regI990.codigo, format);
            xlSheetWriteStr(sheetI990, 2, 2, regI990.qtd_lin_i, format);
        }

        SheetHandle sheetJ001 = xlBookAddSheet(book, "J001", NULL);
        if (sheetJ001) {
            xlSheetWriteStr(sheetJ001, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ001, 1, 2, "Indicador de Movimento", format);
            xlSheetWriteStr(sheetJ001, 2, 1, regJ001.codigo, format);
            xlSheetWriteStr(sheetJ001, 2, 2, regJ001.ind_dad, format);
        }

        SheetHandle sheetJ005 = xlBookAddSheet(book, "J005", NULL);
        if (sheetJ005) {
            xlSheetWriteStr(sheetJ005, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ005, 1, 2, "Data Início", format);
            xlSheetWriteStr(sheetJ005, 1, 3, "Data Fim", format);
            xlSheetWriteStr(sheetJ005, 1, 4, "Identificador demonstrações", format);
            xlSheetWriteStr(sheetJ005, 1, 5, "Cabeçalhos demonstrações", format);

            xlSheetWriteStr(sheetJ005, 2, 1, regJ005.codigo, format);
            xlSheetWriteStr(sheetJ005, 2, 2, regJ005.dt_ini, format);
            xlSheetWriteStr(sheetJ005, 2, 3, regJ005.dt_fin, format);
            xlSheetWriteStr(sheetJ005, 2, 4, regJ005.id_dem, format);
            xlSheetWriteStr(sheetJ005, 2, 5, regJ005.cab_dem, format);
        }

        SheetHandle sheetJ100 = xlBookAddSheet(book, "J100", NULL);
        if (sheetJ100) {
            xlSheetWriteStr(sheetJ100, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ100, 1, 2, "Cód. Aglutinação", format);
            xlSheetWriteStr(sheetJ100, 1, 3, "Ind Cód. Aglutinação", format);
            xlSheetWriteStr(sheetJ100, 1, 4, "Nivel", format);
            xlSheetWriteStr(sheetJ100, 1, 5, "Cód Aglutinação Superior", format);
            xlSheetWriteStr(sheetJ100, 1, 6, "Ind. Grupo Balanço", format);
            xlSheetWriteStr(sheetJ100, 1, 7, "Descrição Cód. Aglutinação", format);
            xlSheetWriteStr(sheetJ100, 1, 8, "Valor inicial do cód.", format);
            xlSheetWriteStr(sheetJ100, 1, 9, "Indicador sit. saldo inicial", format);
            xlSheetWriteStr(sheetJ100, 1, 10, "Valor final cód. aglutinação", format);
            xlSheetWriteStr(sheetJ100, 1, 11, "Indicador sit. saldo final", format);
            xlSheetWriteStr(sheetJ100, 1, 12, "Referência", format);

            for (int i = 0; i < tamanhoListaJ100; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetJ100, linha, 1, regJ100[i].codigo, format);
                xlSheetWriteStr(sheetJ100, linha, 2, regJ100[i].cod_agl, format);
                xlSheetWriteStr(sheetJ100, linha, 3, regJ100[i].ind_cod_agl, format);
                xlSheetWriteStr(sheetJ100, linha, 4, regJ100[i].nivel_agl, format);
                xlSheetWriteStr(sheetJ100, linha, 5, regJ100[i].cod_agl_sup, format);
                xlSheetWriteStr(sheetJ100, linha, 6, regJ100[i].ind_grp_bal, format);
                xlSheetWriteStr(sheetJ100, linha, 7, regJ100[i].descr_cod_agl, format);
                xlSheetWriteStr(sheetJ100, linha, 8, regJ100[i].vl_cta_ini, format);
                xlSheetWriteStr(sheetJ100, linha, 9, regJ100[i].ind_dc_cta_ini, format);
                xlSheetWriteStr(sheetJ100, linha, 10, regJ100[i].vl_cta_fin, format);
                xlSheetWriteStr(sheetJ100, linha, 11, regJ100[i].ind_dc_cta_fin, format);
                xlSheetWriteStr(sheetJ100, linha, 12, regJ100[i].nota_exp_ref, format);
            }
        }

        SheetHandle sheetJ150 = xlBookAddSheet(book, "J150", NULL);
        if (sheetJ150) {
            xlSheetWriteStr(sheetJ150, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ150, 1, 2, "Nº ordem", format);
            xlSheetWriteStr(sheetJ150, 1, 3, "Cód. aglutinação", format);
            xlSheetWriteStr(sheetJ150, 1, 4, "Nivel", format);
            xlSheetWriteStr(sheetJ150, 1, 5, "Ind cód. aglutinação", format);
            xlSheetWriteStr(sheetJ150, 1, 6, "Nível Cód. Aglutinação", format);
            xlSheetWriteStr(sheetJ150, 1, 7, "Cód Aglutinação Superior", format);
            xlSheetWriteStr(sheetJ150, 1, 8, "Descrição", format);
            xlSheetWriteStr(sheetJ150, 1, 9, "Valor Saldo Final", format);
            xlSheetWriteStr(sheetJ150, 1, 10, "Indicador Saldo Final", format);
            xlSheetWriteStr(sheetJ150, 1, 11, "Valor final", format);
            xlSheetWriteStr(sheetJ150, 1, 12, "Ind Sit. Valor Final", format);
            xlSheetWriteStr(sheetJ150, 1, 13, "Ind DRE", format);

            for (int i = 0; i < tamanhoListaJ150; i++) {
                int linha = i + 2;
                xlSheetWriteStr(sheetJ150, linha, 1, regJ150[i].codigo, format);
                xlSheetWriteStr(sheetJ150, linha, 2, regJ150[i].nu_ordem, format);
                xlSheetWriteStr(sheetJ150, linha, 3, regJ150[i].cod_agl, format);
                xlSheetWriteStr(sheetJ150, linha, 4, regJ150[i].ind_cod_agl, format);
                xlSheetWriteStr(sheetJ150, linha, 5, regJ150[i].nivel_agl, format);
                xlSheetWriteStr(sheetJ150, linha, 6, regJ150[i].cod_agl_sup, format);
                xlSheetWriteStr(sheetJ150, linha, 7, regJ150[i].descr_cod_agl, format);
                xlSheetWriteStr(sheetJ150, linha, 8, regJ150[i].vl_cta_ini, format);
                xlSheetWriteStr(sheetJ150, linha, 9, regJ150[i].ind_dc_cta_ini, format);
                xlSheetWriteStr(sheetJ150, linha, 10, regJ150[i].vl_cta_fin, format);
                xlSheetWriteStr(sheetJ150, linha, 11, regJ150[i].ind_dc_cta_fin, format);
                xlSheetWriteStr(sheetJ150, linha, 12, regJ150[i].ind_grp_dre, format);
                xlSheetWriteStr(sheetJ150, linha, 13, regJ150[i].nota_exp_ref, format);
            }
        }

        SheetHandle sheetJ900 = xlBookAddSheet(book, "J900", NULL);
        if (sheetJ900) {
            xlSheetWriteStr(sheetJ900, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ900, 1, 2, "Encerramento", format);
            xlSheetWriteStr(sheetJ900, 1, 3, "nº Ordem", format);
            xlSheetWriteStr(sheetJ900, 1, 4, "Natureza Livro", format);
            xlSheetWriteStr(sheetJ900, 1, 5, "Nome", format);
            xlSheetWriteStr(sheetJ900, 1, 6, "Qtd Linhas", format);
            xlSheetWriteStr(sheetJ900, 1, 7, "Data Inicio Escrituração", format);
            xlSheetWriteStr(sheetJ900, 1, 8, "Data Final Escrituração", format);

            xlSheetWriteStr(sheetJ900, 2, 1, regJ900.codigo, format);
            xlSheetWriteStr(sheetJ900, 2, 2, regJ900.dnrc_encer, format);
            xlSheetWriteStr(sheetJ900, 2, 3, regJ900.num_ord, format);
            xlSheetWriteStr(sheetJ900, 2, 4, regJ900.nat_livro, format);
            xlSheetWriteStr(sheetJ900, 2, 5, regJ900.nome, format);
            xlSheetWriteStr(sheetJ900, 2, 6, regJ900.qtd_lin, format);
            xlSheetWriteStr(sheetJ900, 2, 7, regJ900.dt_ini_escr, format);
            xlSheetWriteStr(sheetJ900, 2, 8, regJ900.dt_fin_escr, format);
        }

        SheetHandle sheetJ990 = xlBookAddSheet(book, "J990", NULL);
        if (sheetJ990) {
            xlSheetWriteStr(sheetJ990, 1, 1, "Código", format);
            xlSheetWriteStr(sheetJ990, 1, 2, "Qtd Linhas", format);

            xlSheetWriteStr(sheetJ990, 2, 1, regJ990.codigo, format);
            xlSheetWriteStr(sheetJ990, 2, 2, regJ990.qtd_lin_j, format);
        }

        SheetHandle sheet9001 = xlBookAddSheet(book, "9001", NULL);
        if (sheet9001) {
            xlSheetWriteStr(sheet9001, 1, 1, "Código", format);
            xlSheetWriteStr(sheet9001, 1, 2, "Ind. Movimento", format);

            xlSheetWriteStr(sheet9001, 2, 1, reg9001.codigo, format);
            xlSheetWriteStr(sheet9001, 2, 2, reg9001.ind_dad, format);
        }

        SheetHandle sheet9900 = xlBookAddSheet(book, "9900", NULL);
        if (sheet9900) {
            xlSheetWriteStr(sheet9900, 1, 1, "Código", format);
            xlSheetWriteStr(sheet9900, 1, 2, "Registro/Campo", format);
            xlSheetWriteStr(sheet9900, 1, 3, "Qtd Linha", format);

            for (int i = 0; i < tamanhoLista9900; i++) {
                int linha = i + 2;
                if (reg9900[i].codigo[0] != '\0') {
                    xlSheetWriteStr(sheet9900, linha, 1, reg9900[i].codigo, format);
                }

                if (reg9900[i].reg_blc[0] != '\0') {
                    xlSheetWriteStr(sheet9900, linha, 2, reg9900[i].reg_blc, format);
                }

                if (reg9900[i].qtd_reg_blc[0] != '\0') {
                    xlSheetWriteStr(sheet9900, linha, 3, reg9900[i].qtd_reg_blc, format);
                }
            }
        }

        SheetHandle sheet9999 = xlBookAddSheet(book, "9999", NULL);
        if (sheet9999) {
            xlSheetWriteStr(sheet9999, 1, 1, "Código", format);
            xlSheetWriteStr(sheet9999, 1, 2, "Qtd. Linhas", format);
            xlSheetWriteStr(sheet9999, 2, 1, reg9999.codigo, format);
            xlSheetWriteStr(sheet9999, 2, 2, reg9999.qtd_lin, format);
        }

        xlBookSave(book, nomeArquivo);
        xlBookRelease(book);
    }
    else {
        printf("Erro ao criar arquivo excel.\n");
    }
}