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
void live_H(double *in_vec, double *out_2197647651745530361);
void live_err_fun(double *nom_x, double *delta_x, double *out_410081131431810136);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_8196087757170391419);
void live_H_mod_fun(double *state, double *out_4506999560653098295);
void live_f_fun(double *state, double dt, double *out_3475354349641466463);
void live_F_fun(double *state, double dt, double *out_6177591270598375438);
void live_h_4(double *state, double *unused, double *out_3343835946944536111);
void live_H_4(double *state, double *unused, double *out_4681646443276856681);
void live_h_9(double *state, double *unused, double *out_8732152029332626607);
void live_H_9(double *state, double *unused, double *out_4922836089906447326);
void live_h_10(double *state, double *unused, double *out_577731237262049607);
void live_H_10(double *state, double *unused, double *out_3790005931074958373);
void live_h_12(double *state, double *unused, double *out_4726645795282182541);
void live_H_12(double *state, double *unused, double *out_8745641222400733140);
void live_h_31(double *state, double *unused, double *out_1576013522014619042);
void live_H_31(double *state, double *unused, double *out_6000078190075719431);
void live_h_32(double *state, double *unused, double *out_8457294058836217405);
void live_H_32(double *state, double *unused, double *out_3216420025657301838);
void live_h_13(double *state, double *unused, double *out_5343902782053117618);
void live_H_13(double *state, double *unused, double *out_1322613355155105198);
void live_h_14(double *state, double *unused, double *out_8732152029332626607);
void live_H_14(double *state, double *unused, double *out_4922836089906447326);
void live_h_33(double *state, double *unused, double *out_8179746101716890928);
void live_H_33(double *state, double *unused, double *out_7247878568421229955);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}