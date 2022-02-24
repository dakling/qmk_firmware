enum combo_events {
  AE_ADIA,
  OE_ODIA,
  UE_UDIA,
  AS_SS,
  FA_Q,
  JMINS_P,
  JK_ESC,
  DF_CC,
  SF_CX,
  DFJ_CCZ,
  DFK_CCR,
  DFL_CCL,
  SDF_CXCS,
  BI_TH,
  BI_CH,
  BI_SH,
  BI_GH,
  BI_WH,
  BI_PH,
  BI_PP,
  BI_QU,
  BI_IN,
  BI_ING,
  TRI_THI,
  TRI_THA,
  TRI_ENT,
  TRI_ION,
  TRI_FOR,
  TRI_HAVE,
  TRI_HAS,
  W_THE,
  W_BY,
  W_NOT,
  W_WITH,
  W_AND
  /* COMBO_LENGTH */
};
/* uint16_t COMBO_LEN = COMBO_LENGTH; */

//  german characters
const uint16_t PROGMEM ae_adia[] = {KC_E, MOD_A, COMBO_END};
const uint16_t PROGMEM oe_odia[] = {KC_E, KC_O, COMBO_END};
const uint16_t PROGMEM ue_udia[] = {KC_E, KC_U, COMBO_END};
const uint16_t PROGMEM as_ss[] =   {MOD_A, MOD_S, COMBO_END};

// awkward to reach letters and symbols
const uint16_t PROGMEM fa_q[] = {MOD_F, MOD_A, COMBO_END};
const uint16_t PROGMEM jmins_p[] = {MOD_J, MOD_MINS, COMBO_END};

//  shortcuts
const uint16_t PROGMEM jk_esc[] = {MOD_J, MOD_K, COMBO_END};
const uint16_t PROGMEM df_cc[] = {MOD_D, MOD_F, COMBO_END};
const uint16_t PROGMEM sf_cx[] = {MOD_S, MOD_F, COMBO_END};
const uint16_t PROGMEM dfj_ccz[] = {MOD_J, MOD_D, MOD_F, COMBO_END};
const uint16_t PROGMEM dfk_ccr[] = {MOD_K, MOD_D, MOD_F, COMBO_END};
const uint16_t PROGMEM dfl_ccl[] = {MOD_L, MOD_D, MOD_F, COMBO_END};
const uint16_t PROGMEM sdf_cxcs[] = {MOD_S, MOD_D, MOD_F, COMBO_END};

// common bigrams
const uint16_t PROGMEM bi_th[] = {MOD_J, MOD_L, COMBO_END};
const uint16_t PROGMEM bi_ch[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM bi_sh[] = {MOD_S, MOD_D, COMBO_END};
const uint16_t PROGMEM bi_gh[] = {MOD_F, KC_G, COMBO_END};
const uint16_t PROGMEM bi_wh[] = {KC_W, MOD_F, COMBO_END};
const uint16_t PROGMEM bi_ph[] = {MOD_K, MOD_MINS, COMBO_END};
const uint16_t PROGMEM bi_pp[] = {MOD_J, MOD_K, MOD_MINS, COMBO_END};
const uint16_t PROGMEM bi_qu[] = {MOD_A, MOD_D, COMBO_END};
const uint16_t PROGMEM bi_in[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM bi_ing[] = {KC_M, KC_COMM, COMBO_END};

// common trigrams
const uint16_t PROGMEM tri_thi[] = {MO_RS, MOD_J, MOD_L, COMBO_END};
const uint16_t PROGMEM tri_tha[] = {MO_RS, MOD_K, MOD_L, COMBO_END};
const uint16_t PROGMEM tri_ent[] = {MO_LW, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM tri_ion[] = {MO_RS, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM tri_for[] = {MO_LW, MOD_F, MOD_D, COMBO_END};
const uint16_t PROGMEM tri_have[] = {MO_LW, MOD_S, MOD_D, COMBO_END};
const uint16_t PROGMEM tri_has[] = {MO_LW, MOD_S, MOD_A, COMBO_END};

// common words
const uint16_t PROGMEM w_the[] = {MOD_L, MOD_MINS, COMBO_END};
const uint16_t PROGMEM w_by[] = {KC_V, DE_Y, COMBO_END};
const uint16_t PROGMEM w_not[] = {MOD_K, MOD_L, COMBO_END};
const uint16_t PROGMEM w_with[] = {MO_LW, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM w_and[] = {KC_X, KC_C, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [AE_ADIA] = COMBO_ACTION(ae_adia),
  [OE_ODIA] = COMBO_ACTION(oe_odia),
  [UE_UDIA] = COMBO_ACTION(ue_udia),
  [AS_SS] = COMBO_ACTION(as_ss),
  [FA_Q] = COMBO_ACTION(fa_q),
  [JMINS_P] = COMBO_ACTION(jmins_p),
  [JK_ESC] = COMBO_ACTION(jk_esc),
  [DF_CC] = COMBO_ACTION(df_cc),
  [SF_CX] = COMBO_ACTION(sf_cx),
  [DFJ_CCZ] = COMBO_ACTION(dfj_ccz),
  [DFK_CCR] = COMBO_ACTION(dfk_ccr),
  [DFL_CCL] = COMBO_ACTION(dfl_ccl),
  [SDF_CXCS] = COMBO_ACTION(sdf_cxcs),
  [BI_TH] = COMBO_ACTION(bi_th),
  [BI_CH] = COMBO_ACTION(bi_ch),
  [BI_SH] = COMBO_ACTION(bi_sh),
  [BI_GH] = COMBO_ACTION(bi_gh),
  [BI_WH] = COMBO_ACTION(bi_wh),
  [BI_PH] = COMBO_ACTION(bi_ph),
  [BI_PP] = COMBO_ACTION(bi_pp),
  [BI_QU] = COMBO_ACTION(bi_qu),
  [BI_IN] = COMBO_ACTION(bi_in),
  [BI_ING] = COMBO_ACTION(bi_ing),
  [TRI_THI] = COMBO_ACTION(tri_thi),
  [TRI_THA] = COMBO_ACTION(tri_tha),
  [TRI_ENT] = COMBO_ACTION(tri_ent),
  [TRI_ION] = COMBO_ACTION(tri_ion),
  [TRI_FOR] = COMBO_ACTION(tri_for),
  [TRI_HAVE] = COMBO_ACTION(tri_have),
  [TRI_HAS] = COMBO_ACTION(tri_has),
  [W_THE] = COMBO_ACTION(w_the),
  [W_BY] = COMBO_ACTION(w_by),
  [W_NOT] = COMBO_ACTION(w_not),
  [W_WITH] = COMBO_ACTION(w_with),
  [W_AND] = COMBO_ACTION(w_and),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case AE_ADIA:
      if (pressed) {
          tap_code16(DE_ADIA);
      }
      break;
    case OE_ODIA:
      if (pressed) {
          tap_code16(DE_ODIA);
      }
      break;
    case UE_UDIA:
      if (pressed) {
          tap_code16(DE_UDIA);
      }
      break;
    case AS_SS:
      if (pressed) {
          tap_code16(DE_SS);
      }
      break;
    case JK_ESC:
      if (pressed) {
          tap_code16(KC_ESC);
      }
      break;
    case FA_Q:
      if (pressed) {
          tap_code16(KC_Q);
      }
      break;
    case JMINS_P:
      if (pressed) {
          tap_code16(KC_P);
      }
      break;
    case DF_CC:
      if (pressed) {
          tap_code16(C(KC_C));
      }
      break;
    case SF_CX:
      if (pressed) {
          tap_code16(C(KC_X));
      }
      break;
    case DFJ_CCZ:
      if (pressed) {
          tap_code16(C(KC_C));
          tap_code16(C(DE_Z));
      }
      break;
    case DFK_CCR:
      if (pressed) {
          tap_code16(C(KC_C));
          tap_code16(C(KC_R));
      }
      break;
    case DFL_CCL:
      if (pressed) {
          tap_code16(C(KC_C));
          tap_code16(C(KC_L));
          tap_code16(KC_E);
      }
      break;
    case SDF_CXCS:
      if (pressed) {
          tap_code16(C(KC_X));
          tap_code16(C(KC_S));
      }
      break;
    case BI_TH:
      if (pressed) {
          tap_code16(KC_T);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_SH:
      if (pressed) {
          tap_code16(KC_S);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_CH:
      if (pressed) {
          tap_code16(KC_C);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_GH:
      if (pressed) {
          tap_code16(KC_G);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_WH:
      if (pressed) {
          tap_code16(KC_W);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_PH:
      if (pressed) {
          tap_code16(KC_P);
          clear_mods();
          tap_code16(KC_H);
      }
      break;
    case BI_PP:
      if (pressed) {
          tap_code16(KC_P);
          clear_mods();
          tap_code16(KC_P);
      }
      break;
    case BI_QU:
      if (pressed) {
          tap_code16(KC_Q);
          clear_mods();
          tap_code16(KC_U);
      }
      break;
    case BI_IN:
      if (pressed) {
          tap_code16(KC_I);
          clear_mods();
          tap_code16(KC_N);
      }
      break;
    case BI_ING:
      if (pressed) {
          tap_code16(KC_I);
          clear_mods();
          tap_code16(KC_N);
          tap_code16(KC_G);
          tap_code16(KC_SPC);
      }
      break;
    case TRI_THI:
      if (pressed) {
          tap_code16(KC_T);
          clear_mods();
          tap_code16(KC_H);
          tap_code16(KC_I);
          tap_code16(KC_S);
          tap_code16(KC_SPC);
      }
      break;
    case TRI_THA:
      if (pressed) {
          tap_code16(KC_T);
          clear_mods();
          tap_code16(KC_H);
          tap_code16(KC_A);
          tap_code16(KC_T);
          tap_code16(KC_SPC);
      }
      break;
    case TRI_HAVE:
      if (pressed) {
          tap_code16(KC_H);
          clear_mods();
          tap_code16(KC_A);
          tap_code16(KC_V);
          tap_code16(KC_E);
          tap_code16(KC_SPC);
      }
      break;
    case TRI_ION:
      if (pressed) {
          tap_code16(KC_T);
          tap_code16(KC_I);
          tap_code16(KC_O);
          tap_code16(KC_N);
      }
      break;
    case TRI_FOR:
      if (pressed) {
          tap_code16(KC_F);
          clear_mods();
          tap_code16(KC_O);
          tap_code16(KC_R);
      }
      break;
    case TRI_ENT:
      if (pressed) {
          tap_code16(KC_E);
          clear_mods();
          tap_code16(KC_N);
          tap_code16(KC_T);
      }
      break;
    case TRI_HAS:
      if (pressed) {
          tap_code16(KC_H);
          clear_mods();
          tap_code16(KC_A);
          tap_code16(KC_S);
          tap_code16(KC_SPC);
      }
      break;
    case W_THE:
      if (pressed) {
          tap_code16(KC_T);
          clear_mods();
          tap_code16(KC_H);
          tap_code16(KC_E);
          tap_code16(KC_SPC);
      }
      break;
    case W_BY:
      if (pressed) {
          tap_code16(KC_B);
          clear_mods();
          tap_code16(DE_Y);
          tap_code16(KC_SPC);
      }
      break;
    case W_NOT:
      if (pressed) {
          tap_code16(KC_N);
          clear_mods();
          tap_code16(KC_O);
          tap_code16(KC_T);
          tap_code16(KC_SPC);
      }
      break;
    case W_WITH:
      if (pressed) {
          tap_code16(KC_W);
          clear_mods();
          tap_code16(KC_I);
          tap_code16(KC_T);
          tap_code16(KC_H);
          tap_code16(KC_SPC);
      }
      break;
    case W_AND:
      if (pressed) {
          tap_code16(KC_A);
          clear_mods();
          tap_code16(KC_N);
          tap_code16(KC_D);
          tap_code16(KC_SPC);
      }
      break;
  }
}
