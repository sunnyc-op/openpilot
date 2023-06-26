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
void live_H(double *in_vec, double *out_6561920401057787819);
void live_err_fun(double *nom_x, double *delta_x, double *out_16477353932622553);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_7785115287148617816);
void live_H_mod_fun(double *state, double *out_5179096700905171275);
void live_f_fun(double *state, double dt, double *out_6097931550597603004);
void live_F_fun(double *state, double dt, double *out_5981841266691318099);
void live_h_4(double *state, double *unused, double *out_9198479962028836947);
void live_H_4(double *state, double *unused, double *out_6281287427493777947);
void live_h_9(double *state, double *unused, double *out_2057064782794859210);
void live_H_9(double *state, double *unused, double *out_6040097780864187302);
void live_h_10(double *state, double *unused, double *out_1204215357562160093);
void live_H_10(double *state, double *unused, double *out_1900819658776085935);
void live_h_12(double *state, double *unused, double *out_629444147086537644);
void live_H_12(double *state, double *unused, double *out_1261831019461816152);
void live_h_31(double *state, double *unused, double *out_7427230565770690149);
void live_H_31(double *state, double *unused, double *out_2914625370121170571);
void live_h_32(double *state, double *unused, double *out_8420318723687336568);
void live_H_32(double *state, double *unused, double *out_5801106792969625067);
void live_h_13(double *state, double *unused, double *out_5658429962566026922);
void live_H_13(double *state, double *unused, double *out_7350297393207904790);
void live_h_14(double *state, double *unused, double *out_2057064782794859210);
void live_H_14(double *state, double *unused, double *out_6040097780864187302);
void live_h_33(double *state, double *unused, double *out_2814960144407831509);
void live_H_33(double *state, double *unused, double *out_235931634517687033);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}