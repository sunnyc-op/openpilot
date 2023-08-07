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
void live_H(double *in_vec, double *out_4807142075463382285);
void live_err_fun(double *nom_x, double *delta_x, double *out_7412155299889977464);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_8350443363147182962);
void live_H_mod_fun(double *state, double *out_4237102934037822439);
void live_f_fun(double *state, double dt, double *out_5340635661340599048);
void live_F_fun(double *state, double dt, double *out_523357434622050767);
void live_h_4(double *state, double *unused, double *out_1048598004501182029);
void live_H_4(double *state, double *unused, double *out_1168638456688347593);
void live_h_9(double *state, double *unused, double *out_6286007020317367918);
void live_H_9(double *state, double *unused, double *out_1409828103317938238);
void live_h_10(double *state, double *unused, double *out_3227711564827954896);
void live_H_10(double *state, double *unused, double *out_7385279975076658293);
void live_h_12(double *state, double *unused, double *out_3342739700644367683);
void live_H_12(double *state, double *unused, double *out_1789737481735941260);
void live_h_31(double *state, double *unused, double *out_5969579601317964810);
void live_H_31(double *state, double *unused, double *out_4535300514060954969);
void live_h_32(double *state, double *unused, double *out_3727367271000713586);
void live_H_32(double *state, double *unused, double *out_2379563989633161387);
void live_h_13(double *state, double *unused, double *out_6078393691717366243);
void live_H_13(double *state, double *unused, double *out_1819552044907514389);
void live_h_14(double *state, double *unused, double *out_6286007020317367918);
void live_H_14(double *state, double *unused, double *out_1409828103317938238);
void live_h_33(double *state, double *unused, double *out_3235860380462578965);
void live_H_33(double *state, double *unused, double *out_7685857518699812573);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}