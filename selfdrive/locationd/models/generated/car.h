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
void car_err_fun(double *nom_x, double *delta_x, double *out_7993826638469671041);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6872437970603061319);
void car_H_mod_fun(double *state, double *out_1464355962343517398);
void car_f_fun(double *state, double dt, double *out_5102955014358730093);
void car_F_fun(double *state, double dt, double *out_9048448311538473730);
void car_h_25(double *state, double *unused, double *out_9198405633225898005);
void car_H_25(double *state, double *unused, double *out_4623670418875926061);
void car_h_24(double *state, double *unused, double *out_5164120523058568211);
void car_H_24(double *state, double *unused, double *out_2794721214801000832);
void car_h_30(double *state, double *unused, double *out_5150035142204281747);
void car_H_30(double *state, double *unused, double *out_2105337460368677434);
void car_h_26(double *state, double *unused, double *out_4314739759498429104);
void car_H_26(double *state, double *unused, double *out_8365173737749982285);
void car_h_27(double *state, double *unused, double *out_8216321539890599893);
void car_H_27(double *state, double *unused, double *out_118256610815265783);
void car_h_29(double *state, double *unused, double *out_5647363758193935527);
void car_H_29(double *state, double *unused, double *out_1595106116054285250);
void car_h_28(double *state, double *unused, double *out_3214648272229754248);
void car_H_28(double *state, double *unused, double *out_6677505133123815824);
void car_h_31(double *state, double *unused, double *out_1367065789729604426);
void car_H_31(double *state, double *unused, double *out_4593024456998965633);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}