#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <libxl.h>
#include <stdlib.h>
#include <string.h>

#include "registros.h"

struct REGISTRO_0000 registraEmStruct0000(char* linha) {
    struct REGISTRO_0000 registro;

    char* campo;

    int campoIndex = 0;
    char* linhaCopia = strdup(linha);
    char* cursor = linhaCopia;


    while ((campo = cststrsep(&cursor, "|")) != NULL) {
        switch (campoIndex) {
        case 0:
            break;
        case 1:
            strncpy(registro.codigo, campo, sizeof(registro.codigo) - 1);
            registro.codigo[sizeof(registro.codigo) - 1] = '\0';
            break;
        case 2:
            strncpy(registro.lecd, campo, sizeof(registro.lecd) - 1);
            registro.lecd[sizeof(registro.lecd) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.dtinicio, campo, sizeof(registro.dtinicio) - 1);
            registro.dtinicio[sizeof(registro.dtinicio) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.dtfim, campo, sizeof(registro.dtfim) - 1);
            registro.dtfim[sizeof(registro.dtfim) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.nome, campo, sizeof(registro.nome) - 1);
            registro.nome[sizeof(registro.nome) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.cnpj, campo, sizeof(registro.cnpj) - 1);
            registro.cnpj[sizeof(registro.cnpj) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.uf, campo, sizeof(registro.uf) - 1);
            registro.uf[sizeof(registro.uf) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.inscricao_estadual, campo, sizeof(registro.inscricao_estadual) - 1);
            registro.inscricao_estadual[sizeof(registro.inscricao_estadual) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.cod_mun, campo, sizeof(registro.cod_mun) - 1);
            registro.cod_mun[sizeof(registro.cod_mun) - 1] = '\0';
            break;
        case 10:
            strncpy(registro.inscricao_municipal, campo, sizeof(registro.inscricao_municipal) - 1);
            registro.inscricao_municipal[sizeof(registro.inscricao_municipal) - 1] = '\0';
            break;
        case 11:
            registro.ind_sit_esp = campo[0];
            break;
        case 12:
            registro.ind_sit_ini_per = strtol(campo, NULL, 10);
            break;
        case 13:
            registro.ind_nire = campo[0];
            break;
        case 14:
            registro.ind_fin_esc = campo[0];
            break;
        case 15:
            strncpy(registro.cod_hash_sub, campo, sizeof(registro.cod_hash_sub) - 1);
            registro.cod_hash_sub[sizeof(registro.cod_hash_sub) - 1] = '\0';
            break;
        case 16:
            registro.ind_grande_porte = campo[0];
            break;
        case 17:
            registro.tipo_ecd = campo[0];
            break;
        case 18:
            strncpy(registro.cod_scp, campo, sizeof(registro.cod_scp) - 1);
            registro.cod_scp[sizeof(registro.cod_scp) - 1] = '\0';
            break;
        case 19:
            registro.ident_mf = campo[0];
            break;
        case 20:
            registro.ind_esc_cons = campo[0];
            break;
        case 21:
            registro.ind_centralizada = campo[0];
            break;
        case 22:
            registro.ind_mudanc_pc = campo[0];
            break;
        case 23:
            strncpy(registro.cod_plan_ref, campo, sizeof(registro.cod_plan_ref) - 1);
            registro.cod_plan_ref[sizeof(registro.cod_plan_ref) - 1] = '\0';
            break;
        default:
            break;
        }

        campoIndex++;
    }

    free(linhaCopia);

    return registro;
}

struct REGISTRO_0001 registraEmStruct0001(char* linha) {
    struct REGISTRO_0001 registro;

    char* campo;

    int campoIndex = 0;
    char* linhaCopia = strdup(linha);
    char* cursor = linhaCopia;

    while ((campo = cststrsep(&cursor, "|")) != NULL) {
        switch (campoIndex) {
            case 0: 
                break;
            case 1:
                strncpy(registro.codigo, campo, sizeof(registro.codigo) - 1);
                registro.codigo[sizeof(registro.codigo) - 1] = '\0';
                break;
            case 2:
                registro.ind_dad = campo[0];
                break;
            default:
                break;
        }
        campoIndex++;
    }

    free(linhaCopia);
    return registro;
}

char* cststrsep(char** stringp, const char* delim) {
    char* inicio = *stringp;
    if (inicio == NULL) {
        return NULL;
    }

    char* p = strpbrk(inicio, delim);
    if (p == NULL) {
        *stringp = NULL;
        return inicio;
    }

    *p = '\0';
    *stringp = p + 1;
    return inicio;
}