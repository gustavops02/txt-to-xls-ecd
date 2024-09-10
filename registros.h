
#ifndef MYHEADER_H
#define MYHEADER_H

#define BLOCO_0000_QTD 23

struct REGISTRO_0000 registraEmStruct0000(char* linha);
char* cststrsep(char** stringp, const char* delim);

struct REGISTRO_0000 {
	char codigo[5];
	char lecd[5];
	char dtinicio[12];
	char dtfim[12];
	char nome[255];
	char cnpj[15];
	char uf[3];
	char inscricao_estadual[12];
	char cod_mun[8];
	char inscricao_municipal[12];
	char ind_sit_esp;
	int ind_sit_ini_per;
	char ind_nire;
	char ind_fin_esc;
	char cod_hash_sub[40];
	char ind_grande_porte;
	char tipo_ecd;
	char cod_scp[14];
	char ident_mf;
	char ind_esc_cons;
	char ind_centralizada;
	char ind_mudanc_pc;
	char cod_plan_ref[2];

};

struct REGISTRO_0001 {
	char codigo[4];
	char ind_dad;
};

struct REGISTRO_0007 {
	char codigo[4];
	char cod_ent_ref[5];
	char cod_inscr[12];
};

struct REGISTRO_0020 {
	char codigo[4];
	char ind_dec;
	char cnpj[14];
	char uf[2];
	char inscricao_estadual[15];
	char cod_mun[7];
	char inscricao_municipal[15];
	char nire[11];
};

struct REGISTRO_0035 {
	char codigo[4];
	char cod_scp[14];
	char nome_scp[50];
};

struct REGISTRO_0150 {
	char codigo[4];
	char cod_part[15];
	char nome[50];
	char cod_pais[6];
	char cnpj[14];
	char cpf[11];
	char nit[11];
	char uf[2];
	char inscricao_estadual[12];
	char inscricao_estadual_st[15];
	char codigo_municipal[7];
	char inscricao_municipal[12];
	char suframa[9];
};

struct REGISTRO_0180 {
	char codigo[4];
	char cod_rel[2];
	char dt_ini_rel[10];
	char dt_fin_rel[10];
};

struct REGISTRO_0990 {
	char codigo[4];
	int qtd_lin; 
};

struct REGISTRO_C001 {
	char codigo[4];
	char ind_dad;
};

struct REGISTRO_C040 {
	char codigo[4];
	char hash_ecd_rec[40];
	char dt_ini_ecd_rec[9];
	char dt_fin_ecd_rec[9];
	char cnpj_ecd_rec[14];
	char ind_esc;
	char cod_ver_lc[10];
	char num_ord[9];
	char nat_livr[80];
	char ind_sit_esp_ecd_rec;
	char ind_nire_ecd_rec;
	char ind_fin_esc_ecd_rec;
	char tip_ecd_rec;
	char cod_scp_ecd_rec_cnpj[14];
	char ident_mf_ecd_rec;
	char ind_esc_cons_ecd_rec;
	char ind_centralizada_ecd_rec;
	char ind_mudanca_pc_ecd_rec;
	char ind_plano_ref_ecd_rec[2];
};

struct REGISTRO_C050 {
	char codigo[4];
	char dt_alt[10];
	char cod_nat[2];
	char ind_cta;
	int nivel;
	char cod_conta[10];
	char cod_conta_sup[10];
	char conta[10];
};

struct REGISTRO_C051 {
	char codigo[4];
	char cod_ccus[12];
	char cod_cta_ref[12];

};

struct REGISTRO_C052 {
	char codigo[4];
	char cod_ccus[12];
	char cod_agl[12];
};

struct REGISTRO_C150 {
	char codigo[4];
	char dt_ini[10];
	char dt_fin[10];
};

struct REGISTRO_C155 {
	char codigo[4];
	char cod_cta_rec[20];
	char cod_ccus_rec[20];
	char vl_sld_ini_rec[19];
	char ind_dc_ini_rec;
	char vl_deb_rec[19];
	char vl_cred_rec[19];
	char vl_sld_fin_rec[19];
	char ind_dc_fin_rec;
};

struct REGISTRO_C600 {
	char codigo[4];
	char dt_ini[10];
	char dt_fin[10];
	char id_dem;
	char cab_dem[65535];

};

struct REGISTRO_C950 {
	char codigo[4];
	char cod_agl[10];
	char nivel_agl[10];
	char descr_cod_agl[50];
	char vl_cta_fin[19];
	char ind_dc_cta_fin;
};

struct REGISTRO_C990 {
	char codigo[4];
	int qtd_lin_0;
};

struct REGISTRO_I001 {
	char codigo[4];
	char ind_dad;
};

struct REGISTRO_I010 {
	char codigo[4];
	char ind_esc;
	char cod_ver_lc[9];
};

struct REGISTRO_I012 {
	char codigo[4];
	int num_ord;
	char nat_livr[80];
	char tipo;
	char cod_hash_aux[40];
};

struct REGISTRO_I015 {
	char codigo[4];
	char cod_cta_res[40];
};

struct REGISTRO_I020 {
	char codigo[4];
	char reg_cod[4];
	int num_ad;
	char campo[40];
	char descricao[255];
	char tipo;
};

struct REGISTRO_I030 {
	char codigo[4];
	char dnrc_abert[17];
	int num_ord;
	char nat_livr[80];
	int qtd_lin;
	char nome[150];
	char nire[11];
	char cnpj[14];
	char dt_arq[10];
	char dt_arq_conv[10];
	char desc_mun[40];
	char dt_ex_social[10];
};

struct REGISTRO_I050 {
	char codigo[5];
	char dt_alt[10];
	char cod_nat[3];
	char ind_cta;
	int nivel;
	char cod_cta[20];
	char cod_cta_sup[45];
	char cta[40];
};

struct REGISTRO_I051 {
	char codigo[5];
	char cod_ccus[20];
	char cod_cta_red[35];
};

struct REGISTRO_I052 {
	char codigo[5];
	char cod_ccus[20];
	char cod_agl[35];
};

struct REGISTRO_I053 {
	char codigo[5];
	char cod_idt[7];
	char cod_cnt_corr[45];
	char nat_sub_cnt[2];
};

struct REGISTRO_I075 {
	char codigo[5];
	char cod_hist[20];
	char descr_hist[75];
};

struct REGISTRO_I100 {
	char codigo[5];
	char dt_alt[10];
	char cod_ccus[30];
	char ccus[50];
};

struct REGISTRO_I150 {
	char codigo[5];
	char dt_ini[10];
	char dt_fin[10];
};

struct REGISTRO_I155 {
	char codigo[5];
	char cod_cta[19];
	char cod_ccus[19];
	double vl_saldo_ini;
	char ind_dc_ini;
	double vl_deb;
	double vl_cred;
	double vl_sld_fin;
	char ind_dc_fin;	
	double vl_sld_ini_mf;
	double ind_dc_ini_mf;
	double vl_deb_mf;
	double vl_cred_mf;
	double vl_sld_fin_mf;
	char ind_dc_fin_mf;
};

struct REGISTRO_I157 {
	char codigo[5];
	char cod_cta[19];
	char cod_ccus[19];
	double vl_sld_ini;
	char ind_dc_ini;
	double vl_sld_ini_mf;
	char ind_dc_ini_mf;
};

struct REIGISTRO_I200 {
	char codigo[5];
	char num_lcto[20];
	char dt_lcto[10];
	double vl_lcto;
	char ind_lcto;
	char dt_lcto_ext[10];
	double vl_lcto_mf;
};

struct REGISTRO_I250 {
	char codigo[5];
	char cod_cta[19];
	char cod_ccus[19];
	double vl_dc;
	char ind_dc;
	char num_arq[29];
	char cod_hist_pad[20];
	char hist[65535];
	char cod_part[45];
};

struct REGISTRO_I300 {
	char codigo[5];
	char dt_bcte[10];
};

struct REGISTRO_I310 {
	char codigo[5];
	char cod_cta[19];
	char cod_ccus[19];
	double val_debd;
	double val_credd;
	double val_deb_mf;
	double val_cred_mf;
};

struct REGISTRO_I350 {
	char codigo[5];
	char dt_res[10];
};

struct REGISTRO_I355 {
	char codigo[5];
	char cod_cta[19];
	char cod_ccus[19];
	double vl_cta;
	char ind_dc;
	double vl_cta_mf;
	char ind_dc_mf;
};

struct REGISTRO_I500 {
	char codigo[5];
	int tam_fonte;
};

struct REGISTRO_I510 {
	char codigo[5];
	char nm_campo[16];
	char desc_campo[50];
	char tipo_campo;
	char tam_campo[3];
	char dec_campo[3];
	char col_campo[3];
};

struct REGISTRO_I550 {
	char codigo[5];
	char rz_cont;
};

struct REGISTRO_I555 {
	char codigo[5];
	char rz_cont_tot;
};

struct REGISTRO_I990 {
	char codigo[5];
	int qtd_lin_i;
};

struct REGISTRO_J001 {
	char codigo[5];
	char ind_dad;
};

struct REGISTRO_J005 {
	char codigo[5];
	char dt_ini[10];
	char dt_fin[10];
	char id_dem;
	char cab_dem[65535];
};

struct REGISTRO_J100 {
	char codigo[5];
	char cod_agl[200];
	char ind_cod_agl;
	int nivel_agl;
	char cod_agl_sup[50];
	char ind_grp_bal;
	char descr_cod_agl[50];
	double vl_cta_ini;
	char ind_dc_cta_ini;
	double vl_cta_fin;
	char ind_dc_cta_fin;
	char nota_exp_ref[12];
};

struct REGISTRO_J150 {
	char codigo[5];
	int nu_ordem;
	char cod_agl[19];
	char ind_cod_agl;
	int nivel_agl;
	char cod_agl_sup[19];
	char descr_cod_agl[20];
	double vl_cta_ini;
	char ind_dc_cta_ini;
	double vl_cta_fin;
	char ind_dc_cta_fin;
	char ind_grp_dre;
	char nota_exp_ref[12];
};

struct REGISTRO_J210 {
	char codigo[5];
	char ind_tip;
	char cod_agl[19];
	char descr_cod_agl[20];
	double vl_cta_ini;
	char ind_dc_cta_ini;
	double vl_cta_fin;
	char ind_dc_cta_fin;
	char nota_exp_ref[12];
};

struct REGISTRO_J215 {
	char codigo[5];
	char cod_hist_fat[30];
	char desc_fat[75];
	double vl_fat_cont;
	char ind_dc_fat;
};

struct REGISTRO_J800 {
	char codigo[5];
	char tipo_doc[4];
	char desc_rtf[90];
	char hash_rtf[50];
	char arq_rtf[256];
	char ind_fim_rtf[10];
};

struct REGISTRO_J801 {
	char codigo[5];
	char desc_rtf[90];
	char cod_mot_subs[15];
	char hash_rtf[50];
	char arq_rtf[256];
	char ind_fim_rtf[10];
};

struct REGISTRO_J900 {
	char codigo[5];
	char dnrc_encer[30];
	int num_ord;
	char nat_livro[80];
	char nome[90];
	int qtd_lin;
	char dt_ini_escr[10];
	char dt_fin_escr[10];
};

struct REGISTRO_J930 {
	char codigo[5];
	char ident_nome[40];
	char ident_cpf_cnpj[14];
	char ident_qualif[40];
	char cod_assin[3];
	char ind_crc[19];
	char email[60];
	char fone[14];
	char uf_crc[3];
	char num_seq_crc[29];
	char dt_crc[10];
	char ind_resp_legal[1];
};

struct REGISTRO_J932 {
	char codigo[5];
	char ident_nom_t[90];
	char ident_cpf_cnpj_t[14];
	char ident_qualif_t[29];
	char cod_assin_t[3];
	char ind_crc_t[18];
	char email_t[60];
	char fone_t[14];
	char uf_crc_t[3];
	char num_seq_crc_t[20];
	char dt_crc_t[10];
};

struct REGISTRO_J935 {
	char codigo[5];
	char ni_ccpf_cnpj[14];
	char nome_auditor_firma[70];
	char cod_cvm_auditor[29];
};

struct REGISTRO_J990 {
	char codigo[5];
	int qtd_lin_j;
};

struct REGISTRO_K001 {
	char codigo[5];
	int ind_dad;
};

struct REGISTRO_K030 {
	char codigo[5];
	char dt_ini[10];
	char dt_fin[10];
};

struct REGISTRO_K100 {
	char codigo[5];
	int cod_pais;
	int emp_cod;
	char cnpj[14];
	char nome[100];
	float per_part[10];
	char evento[1];
	float per_cons[10];
	char data_ini_emp[10];
	char data_fin_emp[10];
};

struct REGISTRO_K110 {
	char codigo[5];
	int evento;
	char dt_evento[10];
};

struct REGISTRO_K115 {
	char codigo[5];
	char emp_cod_part[6];
	int cond_part;
	float per_evt;
};

struct REGISTRO_K200 {
	char codigo[5];
	char cod_nat[4];
	char ind_cta[2];
	int nivel;
	char cod_cta[23];
	char cod_cta_sup[23];
	char cta[40];
};

struct REGISTRO_K210 {
	char codigo[5];
	int cod_emp;
	char cod_cta_emp[20];
};

struct REGISTRO_K300 {
	char codigo[5];
	char cod_cta[40];
	float val_ag;
	char ind_val_ag[2];
	float val_el;
	char ind_val_el[2];
	float val_cs;
	char ind_val_cs[2];
};

struct REGISTRO_K310 {
	char codigo[5];
	char emp_cod_parte[10];
	float valor;
	char ind_valor[2];
};

struct REGISTRO_K315 {
	char codigo[5];
	char emp_cod_contra[7];
	char cod_contra[10];
	float valor;
	char ind_valor[2];
};

struct REGISTRO_K990 {
	char codigo[5];
	int qtd_lin_k;
};
struct REGISTRO_9001 {
	char codigo[5];
	char ind_dad;
};
struct REGISTRO_9900 {
	char codigo[5];
	char reg_blc[6];
	int qtd_reg_blc;
};

struct REGISTRO_9990 {
	char codigo[5];
	int qtd_lin_9;
};

struct Registro_9999 {
	char codigo[5];
	int qtd_lin;
};

#endif