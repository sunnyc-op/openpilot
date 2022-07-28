#include "car.h"

namespace {
#define DIM 9
#define EDIM 9
#define MEDIM 9
typedef void (*Hfun)(double *, double *, double *);

double mass;

void set_mass(double x){ mass = x;}

double rotational_inertia;

void set_rotational_inertia(double x){ rotational_inertia = x;}

double center_to_front;

void set_center_to_front(double x){ center_to_front = x;}

double center_to_rear;

void set_center_to_rear(double x){ center_to_rear = x;}

double stiffness_front;

void set_stiffness_front(double x){ stiffness_front = x;}

double stiffness_rear;

void set_stiffness_rear(double x){ stiffness_rear = x;}
const static double MAHA_THRESH_25 = 3.8414588206941227;
const static double MAHA_THRESH_24 = 5.991464547107981;
const static double MAHA_THRESH_30 = 3.8414588206941227;
const static double MAHA_THRESH_26 = 3.8414588206941227;
const static double MAHA_THRESH_27 = 3.8414588206941227;
const static double MAHA_THRESH_29 = 3.8414588206941227;
const static double MAHA_THRESH_28 = 3.8414588206941227;
const static double MAHA_THRESH_31 = 3.8414588206941227;

/******************************************************************************
 *                       Code generated with sympy 1.9                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_1686522100585820793) {
   out_1686522100585820793[0] = delta_x[0] + nom_x[0];
   out_1686522100585820793[1] = delta_x[1] + nom_x[1];
   out_1686522100585820793[2] = delta_x[2] + nom_x[2];
   out_1686522100585820793[3] = delta_x[3] + nom_x[3];
   out_1686522100585820793[4] = delta_x[4] + nom_x[4];
   out_1686522100585820793[5] = delta_x[5] + nom_x[5];
   out_1686522100585820793[6] = delta_x[6] + nom_x[6];
   out_1686522100585820793[7] = delta_x[7] + nom_x[7];
   out_1686522100585820793[8] = delta_x[8] + nom_x[8];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_5290514215088536873) {
   out_5290514215088536873[0] = -nom_x[0] + true_x[0];
   out_5290514215088536873[1] = -nom_x[1] + true_x[1];
   out_5290514215088536873[2] = -nom_x[2] + true_x[2];
   out_5290514215088536873[3] = -nom_x[3] + true_x[3];
   out_5290514215088536873[4] = -nom_x[4] + true_x[4];
   out_5290514215088536873[5] = -nom_x[5] + true_x[5];
   out_5290514215088536873[6] = -nom_x[6] + true_x[6];
   out_5290514215088536873[7] = -nom_x[7] + true_x[7];
   out_5290514215088536873[8] = -nom_x[8] + true_x[8];
}
void H_mod_fun(double *state, double *out_3033381394250389877) {
   out_3033381394250389877[0] = 1.0;
   out_3033381394250389877[1] = 0;
   out_3033381394250389877[2] = 0;
   out_3033381394250389877[3] = 0;
   out_3033381394250389877[4] = 0;
   out_3033381394250389877[5] = 0;
   out_3033381394250389877[6] = 0;
   out_3033381394250389877[7] = 0;
   out_3033381394250389877[8] = 0;
   out_3033381394250389877[9] = 0;
   out_3033381394250389877[10] = 1.0;
   out_3033381394250389877[11] = 0;
   out_3033381394250389877[12] = 0;
   out_3033381394250389877[13] = 0;
   out_3033381394250389877[14] = 0;
   out_3033381394250389877[15] = 0;
   out_3033381394250389877[16] = 0;
   out_3033381394250389877[17] = 0;
   out_3033381394250389877[18] = 0;
   out_3033381394250389877[19] = 0;
   out_3033381394250389877[20] = 1.0;
   out_3033381394250389877[21] = 0;
   out_3033381394250389877[22] = 0;
   out_3033381394250389877[23] = 0;
   out_3033381394250389877[24] = 0;
   out_3033381394250389877[25] = 0;
   out_3033381394250389877[26] = 0;
   out_3033381394250389877[27] = 0;
   out_3033381394250389877[28] = 0;
   out_3033381394250389877[29] = 0;
   out_3033381394250389877[30] = 1.0;
   out_3033381394250389877[31] = 0;
   out_3033381394250389877[32] = 0;
   out_3033381394250389877[33] = 0;
   out_3033381394250389877[34] = 0;
   out_3033381394250389877[35] = 0;
   out_3033381394250389877[36] = 0;
   out_3033381394250389877[37] = 0;
   out_3033381394250389877[38] = 0;
   out_3033381394250389877[39] = 0;
   out_3033381394250389877[40] = 1.0;
   out_3033381394250389877[41] = 0;
   out_3033381394250389877[42] = 0;
   out_3033381394250389877[43] = 0;
   out_3033381394250389877[44] = 0;
   out_3033381394250389877[45] = 0;
   out_3033381394250389877[46] = 0;
   out_3033381394250389877[47] = 0;
   out_3033381394250389877[48] = 0;
   out_3033381394250389877[49] = 0;
   out_3033381394250389877[50] = 1.0;
   out_3033381394250389877[51] = 0;
   out_3033381394250389877[52] = 0;
   out_3033381394250389877[53] = 0;
   out_3033381394250389877[54] = 0;
   out_3033381394250389877[55] = 0;
   out_3033381394250389877[56] = 0;
   out_3033381394250389877[57] = 0;
   out_3033381394250389877[58] = 0;
   out_3033381394250389877[59] = 0;
   out_3033381394250389877[60] = 1.0;
   out_3033381394250389877[61] = 0;
   out_3033381394250389877[62] = 0;
   out_3033381394250389877[63] = 0;
   out_3033381394250389877[64] = 0;
   out_3033381394250389877[65] = 0;
   out_3033381394250389877[66] = 0;
   out_3033381394250389877[67] = 0;
   out_3033381394250389877[68] = 0;
   out_3033381394250389877[69] = 0;
   out_3033381394250389877[70] = 1.0;
   out_3033381394250389877[71] = 0;
   out_3033381394250389877[72] = 0;
   out_3033381394250389877[73] = 0;
   out_3033381394250389877[74] = 0;
   out_3033381394250389877[75] = 0;
   out_3033381394250389877[76] = 0;
   out_3033381394250389877[77] = 0;
   out_3033381394250389877[78] = 0;
   out_3033381394250389877[79] = 0;
   out_3033381394250389877[80] = 1.0;
}
void f_fun(double *state, double dt, double *out_4269104301005912718) {
   out_4269104301005912718[0] = state[0];
   out_4269104301005912718[1] = state[1];
   out_4269104301005912718[2] = state[2];
   out_4269104301005912718[3] = state[3];
   out_4269104301005912718[4] = state[4];
   out_4269104301005912718[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] - 9.8000000000000007*state[8] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_4269104301005912718[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_4269104301005912718[7] = state[7];
   out_4269104301005912718[8] = state[8];
}
void F_fun(double *state, double dt, double *out_7343636465908864501) {
   out_7343636465908864501[0] = 1;
   out_7343636465908864501[1] = 0;
   out_7343636465908864501[2] = 0;
   out_7343636465908864501[3] = 0;
   out_7343636465908864501[4] = 0;
   out_7343636465908864501[5] = 0;
   out_7343636465908864501[6] = 0;
   out_7343636465908864501[7] = 0;
   out_7343636465908864501[8] = 0;
   out_7343636465908864501[9] = 0;
   out_7343636465908864501[10] = 1;
   out_7343636465908864501[11] = 0;
   out_7343636465908864501[12] = 0;
   out_7343636465908864501[13] = 0;
   out_7343636465908864501[14] = 0;
   out_7343636465908864501[15] = 0;
   out_7343636465908864501[16] = 0;
   out_7343636465908864501[17] = 0;
   out_7343636465908864501[18] = 0;
   out_7343636465908864501[19] = 0;
   out_7343636465908864501[20] = 1;
   out_7343636465908864501[21] = 0;
   out_7343636465908864501[22] = 0;
   out_7343636465908864501[23] = 0;
   out_7343636465908864501[24] = 0;
   out_7343636465908864501[25] = 0;
   out_7343636465908864501[26] = 0;
   out_7343636465908864501[27] = 0;
   out_7343636465908864501[28] = 0;
   out_7343636465908864501[29] = 0;
   out_7343636465908864501[30] = 1;
   out_7343636465908864501[31] = 0;
   out_7343636465908864501[32] = 0;
   out_7343636465908864501[33] = 0;
   out_7343636465908864501[34] = 0;
   out_7343636465908864501[35] = 0;
   out_7343636465908864501[36] = 0;
   out_7343636465908864501[37] = 0;
   out_7343636465908864501[38] = 0;
   out_7343636465908864501[39] = 0;
   out_7343636465908864501[40] = 1;
   out_7343636465908864501[41] = 0;
   out_7343636465908864501[42] = 0;
   out_7343636465908864501[43] = 0;
   out_7343636465908864501[44] = 0;
   out_7343636465908864501[45] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_7343636465908864501[46] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_7343636465908864501[47] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_7343636465908864501[48] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_7343636465908864501[49] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_7343636465908864501[50] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_7343636465908864501[51] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_7343636465908864501[52] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_7343636465908864501[53] = -9.8000000000000007*dt;
   out_7343636465908864501[54] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_7343636465908864501[55] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_7343636465908864501[56] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7343636465908864501[57] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7343636465908864501[58] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_7343636465908864501[59] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_7343636465908864501[60] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_7343636465908864501[61] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7343636465908864501[62] = 0;
   out_7343636465908864501[63] = 0;
   out_7343636465908864501[64] = 0;
   out_7343636465908864501[65] = 0;
   out_7343636465908864501[66] = 0;
   out_7343636465908864501[67] = 0;
   out_7343636465908864501[68] = 0;
   out_7343636465908864501[69] = 0;
   out_7343636465908864501[70] = 1;
   out_7343636465908864501[71] = 0;
   out_7343636465908864501[72] = 0;
   out_7343636465908864501[73] = 0;
   out_7343636465908864501[74] = 0;
   out_7343636465908864501[75] = 0;
   out_7343636465908864501[76] = 0;
   out_7343636465908864501[77] = 0;
   out_7343636465908864501[78] = 0;
   out_7343636465908864501[79] = 0;
   out_7343636465908864501[80] = 1;
}
void h_25(double *state, double *unused, double *out_6268149180721984815) {
   out_6268149180721984815[0] = state[6];
}
void H_25(double *state, double *unused, double *out_5034949041209502471) {
   out_5034949041209502471[0] = 0;
   out_5034949041209502471[1] = 0;
   out_5034949041209502471[2] = 0;
   out_5034949041209502471[3] = 0;
   out_5034949041209502471[4] = 0;
   out_5034949041209502471[5] = 0;
   out_5034949041209502471[6] = 1;
   out_5034949041209502471[7] = 0;
   out_5034949041209502471[8] = 0;
}
void h_24(double *state, double *unused, double *out_274257889243291553) {
   out_274257889243291553[0] = state[4];
   out_274257889243291553[1] = state[5];
}
void H_24(double *state, double *unused, double *out_4564491559166163747) {
   out_4564491559166163747[0] = 0;
   out_4564491559166163747[1] = 0;
   out_4564491559166163747[2] = 0;
   out_4564491559166163747[3] = 0;
   out_4564491559166163747[4] = 1;
   out_4564491559166163747[5] = 0;
   out_4564491559166163747[6] = 0;
   out_4564491559166163747[7] = 0;
   out_4564491559166163747[8] = 0;
   out_4564491559166163747[9] = 0;
   out_4564491559166163747[10] = 0;
   out_4564491559166163747[11] = 0;
   out_4564491559166163747[12] = 0;
   out_4564491559166163747[13] = 0;
   out_4564491559166163747[14] = 1;
   out_4564491559166163747[15] = 0;
   out_4564491559166163747[16] = 0;
   out_4564491559166163747[17] = 0;
}
void h_30(double *state, double *unused, double *out_2371728295996557069) {
   out_2371728295996557069[0] = state[4];
}
void H_30(double *state, double *unused, double *out_4905610094066262401) {
   out_4905610094066262401[0] = 0;
   out_4905610094066262401[1] = 0;
   out_4905610094066262401[2] = 0;
   out_4905610094066262401[3] = 0;
   out_4905610094066262401[4] = 1;
   out_4905610094066262401[5] = 0;
   out_4905610094066262401[6] = 0;
   out_4905610094066262401[7] = 0;
   out_4905610094066262401[8] = 0;
}
void h_26(double *state, double *unused, double *out_5063415138432143744) {
   out_5063415138432143744[0] = state[7];
}
void H_26(double *state, double *unused, double *out_1293445722335446247) {
   out_1293445722335446247[0] = 0;
   out_1293445722335446247[1] = 0;
   out_1293445722335446247[2] = 0;
   out_1293445722335446247[3] = 0;
   out_1293445722335446247[4] = 0;
   out_1293445722335446247[5] = 0;
   out_1293445722335446247[6] = 0;
   out_1293445722335446247[7] = 1;
   out_1293445722335446247[8] = 0;
}
void h_27(double *state, double *unused, double *out_6952687677152241854) {
   out_6952687677152241854[0] = state[3];
}
void H_27(double *state, double *unused, double *out_2730846782265837490) {
   out_2730846782265837490[0] = 0;
   out_2730846782265837490[1] = 0;
   out_2730846782265837490[2] = 0;
   out_2730846782265837490[3] = 1;
   out_2730846782265837490[4] = 0;
   out_2730846782265837490[5] = 0;
   out_2730846782265837490[6] = 0;
   out_2730846782265837490[7] = 0;
   out_2730846782265837490[8] = 0;
}
void h_29(double *state, double *unused, double *out_3315238148898219504) {
   out_3315238148898219504[0] = state[1];
}
void H_29(double *state, double *unused, double *out_1017484055396286457) {
   out_1017484055396286457[0] = 0;
   out_1017484055396286457[1] = 1;
   out_1017484055396286457[2] = 0;
   out_1017484055396286457[3] = 0;
   out_1017484055396286457[4] = 0;
   out_1017484055396286457[5] = 0;
   out_1017484055396286457[6] = 0;
   out_1017484055396286457[7] = 0;
   out_1017484055396286457[8] = 0;
}
void h_28(double *state, double *unused, double *out_1411241056478120252) {
   out_1411241056478120252[0] = state[0];
}
void H_28(double *state, double *unused, double *out_2981114326961612708) {
   out_2981114326961612708[0] = 1;
   out_2981114326961612708[1] = 0;
   out_2981114326961612708[2] = 0;
   out_2981114326961612708[3] = 0;
   out_2981114326961612708[4] = 0;
   out_2981114326961612708[5] = 0;
   out_2981114326961612708[6] = 0;
   out_2981114326961612708[7] = 0;
   out_2981114326961612708[8] = 0;
}
void h_31(double *state, double *unused, double *out_95444797579831046) {
   out_95444797579831046[0] = state[8];
}
void H_31(double *state, double *unused, double *out_5065595003086462899) {
   out_5065595003086462899[0] = 0;
   out_5065595003086462899[1] = 0;
   out_5065595003086462899[2] = 0;
   out_5065595003086462899[3] = 0;
   out_5065595003086462899[4] = 0;
   out_5065595003086462899[5] = 0;
   out_5065595003086462899[6] = 0;
   out_5065595003086462899[7] = 0;
   out_5065595003086462899[8] = 1;
}
#include <eigen3/Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<double, DIM, DIM, Eigen::RowMajor> DDM;
typedef Eigen::Matrix<double, EDIM, EDIM, Eigen::RowMajor> EEM;
typedef Eigen::Matrix<double, DIM, EDIM, Eigen::RowMajor> DEM;

void predict(double *in_x, double *in_P, double *in_Q, double dt) {
  typedef Eigen::Matrix<double, MEDIM, MEDIM, Eigen::RowMajor> RRM;

  double nx[DIM] = {0};
  double in_F[EDIM*EDIM] = {0};

  // functions from sympy
  f_fun(in_x, dt, nx);
  F_fun(in_x, dt, in_F);


  EEM F(in_F);
  EEM P(in_P);
  EEM Q(in_Q);

  RRM F_main = F.topLeftCorner(MEDIM, MEDIM);
  P.topLeftCorner(MEDIM, MEDIM) = (F_main * P.topLeftCorner(MEDIM, MEDIM)) * F_main.transpose();
  P.topRightCorner(MEDIM, EDIM - MEDIM) = F_main * P.topRightCorner(MEDIM, EDIM - MEDIM);
  P.bottomLeftCorner(EDIM - MEDIM, MEDIM) = P.bottomLeftCorner(EDIM - MEDIM, MEDIM) * F_main.transpose();

  P = P + dt*Q;

  // copy out state
  memcpy(in_x, nx, DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
}

// note: extra_args dim only correct when null space projecting
// otherwise 1
template <int ZDIM, int EADIM, bool MAHA_TEST>
void update(double *in_x, double *in_P, Hfun h_fun, Hfun H_fun, Hfun Hea_fun, double *in_z, double *in_R, double *in_ea, double MAHA_THRESHOLD) {
  typedef Eigen::Matrix<double, ZDIM, ZDIM, Eigen::RowMajor> ZZM;
  typedef Eigen::Matrix<double, ZDIM, DIM, Eigen::RowMajor> ZDM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, EDIM, Eigen::RowMajor> XEM;
  //typedef Eigen::Matrix<double, EDIM, ZDIM, Eigen::RowMajor> EZM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, 1> X1M;
  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> XXM;

  double in_hx[ZDIM] = {0};
  double in_H[ZDIM * DIM] = {0};
  double in_H_mod[EDIM * DIM] = {0};
  double delta_x[EDIM] = {0};
  double x_new[DIM] = {0};


  // state x, P
  Eigen::Matrix<double, ZDIM, 1> z(in_z);
  EEM P(in_P);
  ZZM pre_R(in_R);

  // functions from sympy
  h_fun(in_x, in_ea, in_hx);
  H_fun(in_x, in_ea, in_H);
  ZDM pre_H(in_H);

  // get y (y = z - hx)
  Eigen::Matrix<double, ZDIM, 1> pre_y(in_hx); pre_y = z - pre_y;
  X1M y; XXM H; XXM R;
  if (Hea_fun){
    typedef Eigen::Matrix<double, ZDIM, EADIM, Eigen::RowMajor> ZAM;
    double in_Hea[ZDIM * EADIM] = {0};
    Hea_fun(in_x, in_ea, in_Hea);
    ZAM Hea(in_Hea);
    XXM A = Hea.transpose().fullPivLu().kernel();


    y = A.transpose() * pre_y;
    H = A.transpose() * pre_H;
    R = A.transpose() * pre_R * A;
  } else {
    y = pre_y;
    H = pre_H;
    R = pre_R;
  }
  // get modified H
  H_mod_fun(in_x, in_H_mod);
  DEM H_mod(in_H_mod);
  XEM H_err = H * H_mod;

  // Do mahalobis distance test
  if (MAHA_TEST){
    XXM a = (H_err * P * H_err.transpose() + R).inverse();
    double maha_dist = y.transpose() * a * y;
    if (maha_dist > MAHA_THRESHOLD){
      R = 1.0e16 * R;
    }
  }

  // Outlier resilient weighting
  double weight = 1;//(1.5)/(1 + y.squaredNorm()/R.sum());

  // kalman gains and I_KH
  XXM S = ((H_err * P) * H_err.transpose()) + R/weight;
  XEM KT = S.fullPivLu().solve(H_err * P.transpose());
  //EZM K = KT.transpose(); TODO: WHY DOES THIS NOT COMPILE?
  //EZM K = S.fullPivLu().solve(H_err * P.transpose()).transpose();
  //std::cout << "Here is the matrix rot:\n" << K << std::endl;
  EEM I_KH = Eigen::Matrix<double, EDIM, EDIM>::Identity() - (KT.transpose() * H_err);

  // update state by injecting dx
  Eigen::Matrix<double, EDIM, 1> dx(delta_x);
  dx  = (KT.transpose() * y);
  memcpy(delta_x, dx.data(), EDIM * sizeof(double));
  err_fun(in_x, delta_x, x_new);
  Eigen::Matrix<double, DIM, 1> x(x_new);

  // update cov
  P = ((I_KH * P) * I_KH.transpose()) + ((KT.transpose() * R) * KT);

  // copy out state
  memcpy(in_x, x.data(), DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
  memcpy(in_z, y.data(), y.rows() * sizeof(double));
}




}
extern "C" {

void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_25, H_25, NULL, in_z, in_R, in_ea, MAHA_THRESH_25);
}
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<2, 3, 0>(in_x, in_P, h_24, H_24, NULL, in_z, in_R, in_ea, MAHA_THRESH_24);
}
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_30, H_30, NULL, in_z, in_R, in_ea, MAHA_THRESH_30);
}
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_26, H_26, NULL, in_z, in_R, in_ea, MAHA_THRESH_26);
}
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_27, H_27, NULL, in_z, in_R, in_ea, MAHA_THRESH_27);
}
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_29, H_29, NULL, in_z, in_R, in_ea, MAHA_THRESH_29);
}
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_28, H_28, NULL, in_z, in_R, in_ea, MAHA_THRESH_28);
}
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
  update<1, 3, 0>(in_x, in_P, h_31, H_31, NULL, in_z, in_R, in_ea, MAHA_THRESH_31);
}
void car_err_fun(double *nom_x, double *delta_x, double *out_1686522100585820793) {
  err_fun(nom_x, delta_x, out_1686522100585820793);
}
void car_inv_err_fun(double *nom_x, double *true_x, double *out_5290514215088536873) {
  inv_err_fun(nom_x, true_x, out_5290514215088536873);
}
void car_H_mod_fun(double *state, double *out_3033381394250389877) {
  H_mod_fun(state, out_3033381394250389877);
}
void car_f_fun(double *state, double dt, double *out_4269104301005912718) {
  f_fun(state,  dt, out_4269104301005912718);
}
void car_F_fun(double *state, double dt, double *out_7343636465908864501) {
  F_fun(state,  dt, out_7343636465908864501);
}
void car_h_25(double *state, double *unused, double *out_6268149180721984815) {
  h_25(state, unused, out_6268149180721984815);
}
void car_H_25(double *state, double *unused, double *out_5034949041209502471) {
  H_25(state, unused, out_5034949041209502471);
}
void car_h_24(double *state, double *unused, double *out_274257889243291553) {
  h_24(state, unused, out_274257889243291553);
}
void car_H_24(double *state, double *unused, double *out_4564491559166163747) {
  H_24(state, unused, out_4564491559166163747);
}
void car_h_30(double *state, double *unused, double *out_2371728295996557069) {
  h_30(state, unused, out_2371728295996557069);
}
void car_H_30(double *state, double *unused, double *out_4905610094066262401) {
  H_30(state, unused, out_4905610094066262401);
}
void car_h_26(double *state, double *unused, double *out_5063415138432143744) {
  h_26(state, unused, out_5063415138432143744);
}
void car_H_26(double *state, double *unused, double *out_1293445722335446247) {
  H_26(state, unused, out_1293445722335446247);
}
void car_h_27(double *state, double *unused, double *out_6952687677152241854) {
  h_27(state, unused, out_6952687677152241854);
}
void car_H_27(double *state, double *unused, double *out_2730846782265837490) {
  H_27(state, unused, out_2730846782265837490);
}
void car_h_29(double *state, double *unused, double *out_3315238148898219504) {
  h_29(state, unused, out_3315238148898219504);
}
void car_H_29(double *state, double *unused, double *out_1017484055396286457) {
  H_29(state, unused, out_1017484055396286457);
}
void car_h_28(double *state, double *unused, double *out_1411241056478120252) {
  h_28(state, unused, out_1411241056478120252);
}
void car_H_28(double *state, double *unused, double *out_2981114326961612708) {
  H_28(state, unused, out_2981114326961612708);
}
void car_h_31(double *state, double *unused, double *out_95444797579831046) {
  h_31(state, unused, out_95444797579831046);
}
void car_H_31(double *state, double *unused, double *out_5065595003086462899) {
  H_31(state, unused, out_5065595003086462899);
}
void car_predict(double *in_x, double *in_P, double *in_Q, double dt) {
  predict(in_x, in_P, in_Q, dt);
}
void car_set_mass(double x) {
  set_mass(x);
}
void car_set_rotational_inertia(double x) {
  set_rotational_inertia(x);
}
void car_set_center_to_front(double x) {
  set_center_to_front(x);
}
void car_set_center_to_rear(double x) {
  set_center_to_rear(x);
}
void car_set_stiffness_front(double x) {
  set_stiffness_front(x);
}
void car_set_stiffness_rear(double x) {
  set_stiffness_rear(x);
}
}

const EKF car = {
  .name = "car",
  .kinds = { 25, 24, 30, 26, 27, 29, 28, 31 },
  .feature_kinds = {  },
  .f_fun = car_f_fun,
  .F_fun = car_F_fun,
  .err_fun = car_err_fun,
  .inv_err_fun = car_inv_err_fun,
  .H_mod_fun = car_H_mod_fun,
  .predict = car_predict,
  .hs = {
    { 25, car_h_25 },
    { 24, car_h_24 },
    { 30, car_h_30 },
    { 26, car_h_26 },
    { 27, car_h_27 },
    { 29, car_h_29 },
    { 28, car_h_28 },
    { 31, car_h_31 },
  },
  .Hs = {
    { 25, car_H_25 },
    { 24, car_H_24 },
    { 30, car_H_30 },
    { 26, car_H_26 },
    { 27, car_H_27 },
    { 29, car_H_29 },
    { 28, car_H_28 },
    { 31, car_H_31 },
  },
  .updates = {
    { 25, car_update_25 },
    { 24, car_update_24 },
    { 30, car_update_30 },
    { 26, car_update_26 },
    { 27, car_update_27 },
    { 29, car_update_29 },
    { 28, car_update_28 },
    { 31, car_update_31 },
  },
  .Hes = {
  },
  .sets = {
    { "mass", car_set_mass },
    { "rotational_inertia", car_set_rotational_inertia },
    { "center_to_front", car_set_center_to_front },
    { "center_to_rear", car_set_center_to_rear },
    { "stiffness_front", car_set_stiffness_front },
    { "stiffness_rear", car_set_stiffness_rear },
  },
  .extra_routines = {
  },
};

ekf_init(car);
