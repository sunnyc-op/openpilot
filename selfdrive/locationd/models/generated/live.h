#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_5834698563058751852);
void live_err_fun(double *nom_x, double *delta_x, double *out_4551778613262176225);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_6507307579328985080);
void live_H_mod_fun(double *state, double *out_2944519432004620697);
void live_f_fun(double *state, double dt, double *out_4787033309393199537);
void live_F_fun(double *state, double dt, double *out_3436111882846278325);
void live_h_4(double *state, double *unused, double *out_9005088952734900117);
void live_H_4(double *state, double *unused, double *out_6170015058849545423);
void live_h_9(double *state, double *unused, double *out_7159739524475622057);
void live_H_9(double *state, double *unused, double *out_5928825412219954778);
void live_h_10(double *state, double *unused, double *out_4714610444686356390);
void live_H_10(double *state, double *unused, double *out_3555931460627110693);
void live_h_12(double *state, double *unused, double *out_282882114802560714);
void live_H_12(double *state, double *unused, double *out_5548916033801951756);
void live_h_31(double *state, double *unused, double *out_4420967260717887798);
void live_H_31(double *state, double *unused, double *out_2803353001476938047);
void live_h_32(double *state, double *unused, double *out_7175403914380037657);
void live_H_32(double *state, double *unused, double *out_98328488575188110);
void live_h_13(double *state, double *unused, double *out_1928575231743882511);
void live_H_13(double *state, double *unused, double *out_4295954109841081646);
void live_h_14(double *state, double *unused, double *out_7159739524475622057);
void live_H_14(double *state, double *unused, double *out_5928825412219954778);
void live_h_33(double *state, double *unused, double *out_2956601391758169155);
void live_H_33(double *state, double *unused, double *out_347204003161919557);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}