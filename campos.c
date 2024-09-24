#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <libxl.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <locale.h>

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

struct REGISTRO_0007 registraEmStruct0007(char* linha) {
    struct REGISTRO_0007 registro;

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
            strncpy(registro.cod_ent_ref, campo, sizeof(registro.cod_ent_ref) - 1);
            registro.cod_ent_ref[sizeof(registro.cod_ent_ref) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_inscr, campo, sizeof(registro.cod_inscr) - 1);
            registro.cod_inscr[sizeof(registro.cod_inscr) - 1] = '\0';
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_0990 registraEmStruct0990(char* linha) {
    struct REGISTRO_0990 registro;

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
            registro.qtd_lin = atoi(campo);
            break;
        default:
            break;
        }
        campoIndex++;
    }

    free(linhaCopia);
    return registro;
}

struct REGISTRO_I001 registraEmStructI001(char* linha){
    struct REGISTRO_I001 registro;

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

struct REGISTRO_I010 registraEmStructI010(char* linha) {
    struct REGISTRO_I010 registro;

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
            strncpy(registro.ind_esc, campo, sizeof(registro.ind_esc) - 1);
            registro.ind_esc[sizeof(registro.ind_esc) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_ver_lc, campo, sizeof(registro.cod_ver_lc) - 1);
            registro.cod_ver_lc[sizeof(registro.cod_ver_lc) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }

    free(linhaCopia);
    return registro;
}

struct REGISTRO_I030 registraEmStructI030(char* linha) {
    struct REGISTRO_I030 registro;

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
            strncpy(registro.dnrc_abert, campo, sizeof(registro.dnrc_abert) - 1);
            registro.dnrc_abert[sizeof(registro.dnrc_abert) - 1] = '\0';
            break;
        case 3:
            registro.num_ord = atoi(campo);
            break;
        case 4:
            strncpy(registro.nat_livr, campo, sizeof(registro.nat_livr) - 1);
            registro.nat_livr[sizeof(registro.nat_livr) - 1] = '\0';
            break;
        case 5:
            registro.qtd_lin = atoi(campo);
            break;
        case 6:
            strncpy(registro.nome, campo, sizeof(registro.nome) - 1);
            registro.nome[sizeof(registro.nome) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.nire, campo, sizeof(registro.nire) - 1);
            registro.nire[sizeof(registro.nire) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.cnpj, campo, sizeof(registro.cnpj) - 1);
            registro.cnpj[sizeof(registro.cnpj) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.dt_arq, campo, sizeof(registro.dt_arq) - 1);
            registro.dt_arq[sizeof(registro.dt_arq) - 1] = '\0';
            break;
        case 10:
            strncpy(registro.dt_arq_conv, campo, sizeof(registro.dt_arq_conv) - 1);
            registro.dt_arq_conv[sizeof(registro.dt_arq_conv) - 1] = '\0';
            break;
        case 11:
            strncpy(registro.desc_mun, campo, sizeof(registro.desc_mun) - 1);
            registro.desc_mun[sizeof(registro.desc_mun) - 1] = '\0';
            break;
        case 12:
            strncpy(registro.dt_ex_social, campo, sizeof(registro.dt_ex_social) - 1);
            registro.dt_ex_social[sizeof(registro.dt_ex_social) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }

    free(linhaCopia);
    return registro;
}

struct REGISTRO_I050 registraEmStructI050(char* linha) {
    
    struct REGISTRO_I050 registro;
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
            strncpy(registro.dt_alt, campo, sizeof(registro.dt_alt) - 1);
            registro.dt_alt[sizeof(registro.dt_alt) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_nat, campo, sizeof(registro.cod_nat) - 1);
            registro.cod_nat[sizeof(registro.cod_nat) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.ind_cta, campo, sizeof(registro.ind_cta) - 1);
            registro.ind_cta[sizeof(registro.ind_cta) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.nivel, campo, sizeof(registro.nivel) - 1);
            registro.nivel[sizeof(registro.nivel) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.cod_cta, campo, sizeof(registro.cod_cta) - 1);
            registro.cod_cta[sizeof(registro.cod_cta) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.cod_cta_sup, campo, sizeof(registro.cod_cta_sup) - 1);
            registro.cod_cta_sup[sizeof(registro.cod_cta_sup) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.cta, campo, sizeof(registro.cta) - 1);
            registro.cta[sizeof(registro.cta) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I051 registraEmStructI051(char* linha) {

    struct REGISTRO_I051 registro;
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
            strncpy(registro.cod_ccus, campo, sizeof(registro.cod_ccus) - 1);
            registro.cod_ccus[sizeof(registro.cod_ccus) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_cta_ref, campo, sizeof(registro.cod_cta_ref) - 1);
            registro.cod_cta_ref[sizeof(registro.cod_cta_ref) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I052 registraEmStructI052(char* linha) {

    struct REGISTRO_I052 registro;
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
            strncpy(registro.cod_ccus, campo, sizeof(registro.cod_ccus) - 1);
            registro.cod_ccus[sizeof(registro.cod_ccus) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_agl, campo, sizeof(registro.cod_agl) - 1);
            registro.cod_agl[sizeof(registro.cod_agl) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I075 registraEmStructI075(char* linha) {

    struct REGISTRO_I075 registro;
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
            strncpy(registro.cod_hist, campo, sizeof(registro.cod_hist) - 1);
            registro.cod_hist[sizeof(registro.cod_hist) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.descr_hist, campo, sizeof(registro.descr_hist) - 1);
            registro.descr_hist[sizeof(registro.descr_hist) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I150 registraEmStructI150(char* linha) {

    struct REGISTRO_I150 registro;
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
            strncpy(registro.dt_ini, campo, sizeof(registro.dt_ini) - 1);
            registro.dt_ini[sizeof(registro.dt_ini) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.dt_fin, campo, sizeof(registro.dt_fin) - 1);
            registro.dt_fin[sizeof(registro.dt_fin) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I155 registraEmStructI155(char* linha) {

    struct REGISTRO_I155 registro;
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
            strncpy(registro.cod_cta, campo, sizeof(registro.cod_cta) - 1);
            registro.cod_cta[sizeof(registro.cod_cta) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_ccus, campo, sizeof(registro.cod_ccus) - 1);
            registro.cod_ccus[sizeof(registro.cod_ccus) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.vl_saldo_ini, campo, sizeof(registro.vl_saldo_ini) - 1);
            registro.vl_saldo_ini[sizeof(registro.vl_saldo_ini) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.ind_dc_ini, campo, sizeof(registro.ind_dc_ini) - 1);
            registro.ind_dc_ini[sizeof(registro.ind_dc_ini) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.vl_deb, campo, sizeof(registro.vl_deb) - 1);
            registro.vl_deb[sizeof(registro.vl_deb) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.vl_cred, campo, sizeof(registro.vl_cred) - 1);
            registro.vl_cred[sizeof(registro.vl_cred) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.vl_sld_fin, campo, sizeof(registro.vl_sld_fin) - 1);
            registro.vl_sld_fin[sizeof(registro.vl_sld_fin) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.ind_dc_fin, campo, sizeof(registro.ind_dc_fin) - 1);
            registro.ind_dc_fin[sizeof(registro.ind_dc_fin) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I200 registraEmStructI200(char* linha) {
    struct REGISTRO_I200 registro;
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
            strncpy(registro.num_lcto, campo, sizeof(registro.num_lcto) - 1);
            registro.num_lcto[sizeof(registro.num_lcto) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.dt_lcto, campo, sizeof(registro.dt_lcto) - 1);
            registro.dt_lcto[sizeof(registro.dt_lcto) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.vl_lcto, campo, sizeof(registro.vl_lcto) - 1);
            registro.vl_lcto[sizeof(registro.vl_lcto) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.ind_lcto, campo, sizeof(registro.ind_lcto) - 1);
            registro.ind_lcto[sizeof(registro.ind_lcto) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.dt_lcto_ext, campo, sizeof(registro.dt_lcto_ext) - 1);
            registro.dt_lcto_ext[sizeof(registro.dt_lcto_ext) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I250 registraEmStructI250(char* linha) {
    struct REGISTRO_I250 registro;
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
            strncpy(registro.cod_cta, campo, sizeof(registro.cod_cta) - 1);
            registro.cod_cta[sizeof(registro.cod_cta) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_ccus, campo, sizeof(registro.cod_ccus) - 1);
            registro.cod_ccus[sizeof(registro.cod_ccus) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.vl_dc, campo, sizeof(registro.vl_dc) - 1);
            registro.vl_dc[sizeof(registro.vl_dc) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.ind_dc, campo, sizeof(registro.ind_dc) - 1);
            registro.ind_dc[sizeof(registro.ind_dc) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.num_arq, campo, sizeof(registro.num_arq) - 1);
            registro.num_arq[sizeof(registro.num_arq) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.cod_hist_pad, campo, sizeof(registro.cod_hist_pad) - 1);
            registro.cod_hist_pad[sizeof(registro.cod_hist_pad) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.hist, campo, sizeof(registro.hist) - 1);
            registro.hist[sizeof(registro.hist) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.cod_part, campo, sizeof(registro.cod_part) - 1);
            registro.cod_part[sizeof(registro.cod_part) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I350 registraEmStructI350(char* linha) {
    struct REGISTRO_I350 registro;
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
            strncpy(registro.dt_res, campo, sizeof(registro.dt_res) - 1);
            registro.dt_res[sizeof(registro.dt_res) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I355 registraEmStructI355(char* linha) {
    struct REGISTRO_I355 registro;
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
            strncpy(registro.cod_cta, campo, sizeof(registro.cod_cta) - 1);
            registro.cod_cta[sizeof(registro.cod_cta) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_ccus, campo, sizeof(registro.cod_ccus) - 1);
            registro.cod_ccus[sizeof(registro.cod_ccus) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.vl_cta, campo, sizeof(registro.vl_cta) - 1);
            registro.vl_cta[sizeof(registro.vl_cta) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.ind_dc, campo, sizeof(registro.ind_dc) - 1);
            registro.ind_dc[sizeof(registro.ind_dc) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.vl_cta_mf, campo, sizeof(registro.vl_cta_mf) - 1);
            registro.vl_cta_mf[sizeof(registro.vl_cta_mf) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.ind_dc_mf, campo, sizeof(registro.ind_dc_mf) - 1);
            registro.ind_dc_mf[sizeof(registro.ind_dc_mf) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_I990 registraEmStructI990(char* linha) {
    struct REGISTRO_I990 registro;
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
            registro.qtd_lin_i = atoi(campo);
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J001 registraEmStructJ001(char* linha) {
    struct REGISTRO_J001 registro;
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
            strncpy(registro.ind_dad, campo, sizeof(registro.ind_dad) - 1);
            registro.ind_dad[sizeof(registro.ind_dad) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J005 registraEmStructJ005(char* linha) {
    struct REGISTRO_J005 registro;
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
            strncpy(registro.dt_ini, campo, sizeof(registro.dt_ini) - 1);
            registro.dt_ini[sizeof(registro.dt_ini) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.dt_fin, campo, sizeof(registro.dt_fin) - 1);
            registro.dt_fin[sizeof(registro.dt_fin) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.id_dem, campo, sizeof(registro.id_dem) - 1);
            registro.id_dem[sizeof(registro.id_dem) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.cab_dem, campo, sizeof(registro.cab_dem) - 1);
            registro.cab_dem[sizeof(registro.cab_dem) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J100 registraEmStructJ100(char* linha) {
    struct REGISTRO_J100 registro;
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
            strncpy(registro.cod_agl, campo, sizeof(registro.cod_agl) - 1);
            registro.cod_agl[sizeof(registro.cod_agl) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.ind_cod_agl, campo, sizeof(registro.ind_cod_agl) - 1);
            registro.ind_cod_agl[sizeof(registro.ind_cod_agl) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.nivel_agl, campo, sizeof(registro.nivel_agl) - 1);
            registro.nivel_agl[sizeof(registro.nivel_agl) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.cod_agl_sup, campo, sizeof(registro.cod_agl_sup) - 1);
            registro.cod_agl_sup[sizeof(registro.cod_agl_sup) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.ind_grp_bal, campo, sizeof(registro.ind_grp_bal) - 1);
            registro.ind_grp_bal[sizeof(registro.ind_grp_bal) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.descr_cod_agl, campo, sizeof(registro.descr_cod_agl) - 1);
            registro.descr_cod_agl[sizeof(registro.descr_cod_agl) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.vl_cta_ini, campo, sizeof(registro.vl_cta_ini) - 1);
            registro.vl_cta_ini[sizeof(registro.vl_cta_ini) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.ind_dc_cta_ini, campo, sizeof(registro.ind_dc_cta_ini) - 1);
            registro.ind_dc_cta_ini[sizeof(registro.ind_dc_cta_ini) - 1] = '\0';
            break;
        case 10:
            strncpy(registro.vl_cta_fin, campo, sizeof(registro.vl_cta_fin) - 1);
            registro.vl_cta_fin[sizeof(registro.vl_cta_fin) - 1] = '\0';
            break;
        case 11:
            strncpy(registro.ind_dc_cta_fin, campo, sizeof(registro.ind_dc_cta_fin) - 1);
            registro.ind_dc_cta_fin[sizeof(registro.ind_dc_cta_fin) - 1] = '\0';
            break;
        case 12:
            strncpy(registro.nota_exp_ref, campo, sizeof(registro.nota_exp_ref) - 1);
            registro.nota_exp_ref[sizeof(registro.nota_exp_ref) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J150 registraEmStructJ150(char* linha) {
    struct REGISTRO_J150 registro;
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
            strncpy(registro.nu_ordem, campo, sizeof(registro.nu_ordem) - 1);
            registro.nu_ordem[sizeof(registro.nu_ordem) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.cod_agl, campo, sizeof(registro.cod_agl) - 1);
            registro.cod_agl[sizeof(registro.cod_agl) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.ind_cod_agl, campo, sizeof(registro.ind_cod_agl) - 1);
            registro.ind_cod_agl[sizeof(registro.ind_cod_agl) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.nivel_agl, campo, sizeof(registro.nivel_agl) - 1);
            registro.nivel_agl[sizeof(registro.nivel_agl) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.cod_agl_sup, campo, sizeof(registro.cod_agl_sup) - 1);
            registro.cod_agl_sup[sizeof(registro.cod_agl_sup) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.descr_cod_agl, campo, sizeof(registro.descr_cod_agl) - 1);
            registro.descr_cod_agl[sizeof(registro.descr_cod_agl) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.vl_cta_ini, campo, sizeof(registro.vl_cta_ini) - 1);
            registro.vl_cta_ini[sizeof(registro.vl_cta_ini) - 1] = '\0';
            break;
        case 9:
            strncpy(registro.ind_dc_cta_ini, campo, sizeof(registro.ind_dc_cta_ini) - 1);
            registro.ind_dc_cta_ini[sizeof(registro.ind_dc_cta_ini) - 1] = '\0';
            break;
        case 10:
            strncpy(registro.vl_cta_fin, campo, sizeof(registro.vl_cta_fin) - 1);
            registro.vl_cta_fin[sizeof(registro.vl_cta_fin) - 1] = '\0';
            break;
        case 11:
            strncpy(registro.ind_dc_cta_fin, campo, sizeof(registro.ind_dc_cta_fin) - 1);
            registro.ind_dc_cta_fin[sizeof(registro.ind_dc_cta_fin) - 1] = '\0';
            break;
        case 12:
            strncpy(registro.ind_grp_dre, campo, sizeof(registro.ind_grp_dre) - 1);
            registro.ind_grp_dre[sizeof(registro.ind_grp_dre) - 1] = '\0';
            break;
        case 13:
            strncpy(registro.nota_exp_ref, campo, sizeof(registro.nota_exp_ref) - 1);
            registro.nota_exp_ref[sizeof(registro.nota_exp_ref) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J900 registraEmStructJ900(char* linha) {
    struct REGISTRO_J900 registro;
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
            strncpy(registro.dnrc_encer, campo, sizeof(registro.dnrc_encer) - 1);
            registro.dnrc_encer[sizeof(registro.dnrc_encer) - 1] = '\0';
            break;
        case 3:
            strncpy(registro.num_ord, campo, sizeof(registro.num_ord) - 1);
            registro.num_ord[sizeof(registro.num_ord) - 1] = '\0';
            break;
        case 4:
            strncpy(registro.nat_livro, campo, sizeof(registro.nat_livro) - 1);
            registro.nat_livro[sizeof(registro.nat_livro) - 1] = '\0';
            break;
        case 5:
            strncpy(registro.nome, campo, sizeof(registro.nome) - 1);
            registro.nome[sizeof(registro.nome) - 1] = '\0';
            break;
        case 6:
            strncpy(registro.qtd_lin, campo, sizeof(registro.qtd_lin) - 1);
            registro.qtd_lin[sizeof(registro.qtd_lin) - 1] = '\0';
            break;
        case 7:
            strncpy(registro.dt_ini_escr, campo, sizeof(registro.dt_ini_escr) - 1);
            registro.dt_ini_escr[sizeof(registro.dt_ini_escr) - 1] = '\0';
            break;
        case 8:
            strncpy(registro.dt_fin_escr, campo, sizeof(registro.dt_fin_escr) - 1);
            registro.dt_fin_escr[sizeof(registro.dt_fin_escr) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_J990 registraEmStructJ990(char* linha) {
    struct REGISTRO_J990 registro;
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
            strncpy(registro.qtd_lin_j, campo, sizeof(registro.qtd_lin_j) - 1);
            registro.qtd_lin_j[sizeof(registro.qtd_lin_j) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_9001 registraEmStruct9001(char* linha) {
    struct REGISTRO_9001 registro;
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
            strncpy(registro.ind_dad, campo, sizeof(registro.ind_dad) - 1);
            registro.ind_dad[sizeof(registro.ind_dad) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_9900 registraEmStruct9900(char* linha) {
    struct REGISTRO_9900 registro;
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
            strncpy(registro.reg_blc, campo, sizeof(registro.reg_blc) - 1);
            registro.reg_blc[sizeof(registro.reg_blc) - 1] = '\0';
            break;
        case 3: 
            strncpy(registro.qtd_reg_blc, campo, sizeof(registro.qtd_reg_blc) - 1);
            registro.qtd_reg_blc[sizeof(registro.qtd_reg_blc) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

struct REGISTRO_9999 registraEmStruct9999(char* linha) {
    struct REGISTRO_9999 registro;
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
            strncpy(registro.qtd_lin, campo, sizeof(registro.qtd_lin) - 1);
            registro.qtd_lin[sizeof(registro.qtd_lin) - 1] = '\0';
            break;
        default:
            break;
        }
        campoIndex++;
    }
    free(linhaCopia);
    return registro;
}

void adicionarRegistroI050(struct REGISTRO_I050** lista, int* tamanho, struct REGISTRO_I050 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I050));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI051(struct REGISTRO_I051** lista, int* tamanho, struct REGISTRO_I051 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I051));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI052(struct REGISTRO_I052** lista, int* tamanho, struct REGISTRO_I052 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I052));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI075(struct REGISTRO_I075** lista, int* tamanho, struct REGISTRO_I075 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I075));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI150(struct REGISTRO_I150** lista, int* tamanho, struct REGISTRO_I150 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I150));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI155(struct REGISTRO_I155** lista, int* tamanho, struct REGISTRO_I155 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I155));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI200(struct REGISTRO_I200** lista, int* tamanho, struct REGISTRO_I200 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I200));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI250(struct REGISTRO_I250** lista, int* tamanho, struct REGISTRO_I250 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I250));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroI355(struct REGISTRO_I355** lista, int* tamanho, struct REGISTRO_I355 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_I355));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroJ100(struct REGISTRO_J100** lista, int* tamanho, struct REGISTRO_J100 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_J100));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistroJ150(struct REGISTRO_J150** lista, int* tamanho, struct REGISTRO_J150 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_J150));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
}

void adicionarRegistro9900(struct REGISTRO_9900** lista, int* tamanho, struct REGISTRO_9900 nvRegistro) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(struct REGISTRO_9900));
    (*lista)[*tamanho] = nvRegistro;
    (*tamanho)++;
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