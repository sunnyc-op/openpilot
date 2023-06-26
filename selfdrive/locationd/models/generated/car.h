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
void car_err_fun(double *nom_x, double *delta_x, double *out_1040027927212675814);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_9107044817363040035);
void car_H_mod_fun(double *state, double *out_4006186746843356751);
void car_f_fun(double *state, double dt, double *out_5755230077963766157);
void car_F_fun(double *state, double dt, double *out_5176520417360409202);
void car_h_25(double *state, double *unused, double *out_6241277463871127850);
void car_H_25(double *state, double *unused, double *out_2920667220908313772);
void car_h_24(double *state, double *unused, double *out_6408601504971015290);
void car_H_24(double *state, double *unused, double *out_8871871394693052087);
void car_h_30(double *state, double *unused, double *out_8568017081584401416);
void car_H_30(double *state, double *unused, double *out_1607029109219294426);
void car_h_26(double *state, double *unused, double *out_6877569246848720456);
void car_H_26(double *state, double *unused, double *out_820836097965742452);
void car_h_27(double *state, double *unused, double *out_3204491412426795165);
void car_H_27(double *state, double *unused, double *out_616564961964648791);
void car_h_29(double *state, double *unused, double *out_3566343813923555771);
void car_H_29(double *state, double *unused, double *out_1096797764904902242);
void car_h_28(double *state, double *unused, double *out_2260981559525132730);
void car_H_28(double *state, double *unused, double *out_866832506660424009);
void car_h_31(double *state, double *unused, double *out_5966083401586621961);
void car_H_31(double *state, double *unused, double *out_2951313182785274200);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}