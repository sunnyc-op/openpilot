#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_1686522100585820793);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_5290514215088536873);
void car_H_mod_fun(double *state, double *out_3033381394250389877);
void car_f_fun(double *state, double dt, double *out_4269104301005912718);
void car_F_fun(double *state, double dt, double *out_7343636465908864501);
void car_h_25(double *state, double *unused, double *out_6268149180721984815);
void car_H_25(double *state, double *unused, double *out_5034949041209502471);
void car_h_24(double *state, double *unused, double *out_274257889243291553);
void car_H_24(double *state, double *unused, double *out_4564491559166163747);
void car_h_30(double *state, double *unused, double *out_2371728295996557069);
void car_H_30(double *state, double *unused, double *out_4905610094066262401);
void car_h_26(double *state, double *unused, double *out_5063415138432143744);
void car_H_26(double *state, double *unused, double *out_1293445722335446247);
void car_h_27(double *state, double *unused, double *out_6952687677152241854);
void car_H_27(double *state, double *unused, double *out_2730846782265837490);
void car_h_29(double *state, double *unused, double *out_3315238148898219504);
void car_H_29(double *state, double *unused, double *out_1017484055396286457);
void car_h_28(double *state, double *unused, double *out_1411241056478120252);
void car_H_28(double *state, double *unused, double *out_2981114326961612708);
void car_h_31(double *state, double *unused, double *out_95444797579831046);
void car_H_31(double *state, double *unused, double *out_5065595003086462899);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}