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
void err_fun(double *nom_x, double *delta_x, double *out_7993826638469671041) {
   out_7993826638469671041[0] = delta_x[0] + nom_x[0];
   out_7993826638469671041[1] = delta_x[1] + nom_x[1];
   out_7993826638469671041[2] = delta_x[2] + nom_x[2];
   out_7993826638469671041[3] = delta_x[3] + nom_x[3];
   out_7993826638469671041[4] = delta_x[4] + nom_x[4];
   out_7993826638469671041[5] = delta_x[5] + nom_x[5];
   out_7993826638469671041[6] = delta_x[6] + nom_x[6];
   out_7993826638469671041[7] = delta_x[7] + nom_x[7];
   out_7993826638469671041[8] = delta_x[8] + nom_x[8];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_6872437970603061319) {
   out_6872437970603061319[0] = -nom_x[0] + true_x[0];
   out_6872437970603061319[1] = -nom_x[1] + true_x[1];
   out_6872437970603061319[2] = -nom_x[2] + true_x[2];
   out_6872437970603061319[3] = -nom_x[3] + true_x[3];
   out_6872437970603061319[4] = -nom_x[4] + true_x[4];
   out_6872437970603061319[5] = -nom_x[5] + true_x[5];
   out_6872437970603061319[6] = -nom_x[6] + true_x[6];
   out_6872437970603061319[7] = -nom_x[7] + true_x[7];
   out_6872437970603061319[8] = -nom_x[8] + true_x[8];
}
void H_mod_fun(double *state, double *out_1464355962343517398) {
   out_1464355962343517398[0] = 1.0;
   out_1464355962343517398[1] = 0;
   out_1464355962343517398[2] = 0;
   out_1464355962343517398[3] = 0;
   out_1464355962343517398[4] = 0;
   out_1464355962343517398[5] = 0;
   out_1464355962343517398[6] = 0;
   out_1464355962343517398[7] = 0;
   out_1464355962343517398[8] = 0;
   out_1464355962343517398[9] = 0;
   out_1464355962343517398[10] = 1.0;
   out_1464355962343517398[11] = 0;
   out_1464355962343517398[12] = 0;
   out_1464355962343517398[13] = 0;
   out_1464355962343517398[14] = 0;
   out_1464355962343517398[15] = 0;
   out_1464355962343517398[16] = 0;
   out_1464355962343517398[17] = 0;
   out_1464355962343517398[18] = 0;
   out_1464355962343517398[19] = 0;
   out_1464355962343517398[20] = 1.0;
   out_1464355962343517398[21] = 0;
   out_1464355962343517398[22] = 0;
   out_1464355962343517398[23] = 0;
   out_1464355962343517398[24] = 0;
   out_1464355962343517398[25] = 0;
   out_1464355962343517398[26] = 0;
   out_1464355962343517398[27] = 0;
   out_1464355962343517398[28] = 0;
   out_1464355962343517398[29] = 0;
   out_1464355962343517398[30] = 1.0;
   out_1464355962343517398[31] = 0;
   out_1464355962343517398[32] = 0;
   out_1464355962343517398[33] = 0;
   out_1464355962343517398[34] = 0;
   out_1464355962343517398[35] = 0;
   out_1464355962343517398[36] = 0;
   out_1464355962343517398[37] = 0;
   out_1464355962343517398[38] = 0;
   out_1464355962343517398[39] = 0;
   out_1464355962343517398[40] = 1.0;
   out_1464355962343517398[41] = 0;
   out_1464355962343517398[42] = 0;
   out_1464355962343517398[43] = 0;
   out_1464355962343517398[44] = 0;
   out_1464355962343517398[45] = 0;
   out_1464355962343517398[46] = 0;
   out_1464355962343517398[47] = 0;
   out_1464355962343517398[48] = 0;
   out_1464355962343517398[49] = 0;
   out_1464355962343517398[50] = 1.0;
   out_1464355962343517398[51] = 0;
   out_1464355962343517398[52] = 0;
   out_1464355962343517398[53] = 0;
   out_1464355962343517398[54] = 0;
   out_1464355962343517398[55] = 0;
   out_1464355962343517398[56] = 0;
   out_1464355962343517398[57] = 0;
   out_1464355962343517398[58] = 0;
   out_1464355962343517398[59] = 0;
   out_1464355962343517398[60] = 1.0;
   out_1464355962343517398[61] = 0;
   out_1464355962343517398[62] = 0;
   out_1464355962343517398[63] = 0;
   out_1464355962343517398[64] = 0;
   out_1464355962343517398[65] = 0;
   out_1464355962343517398[66] = 0;
   out_1464355962343517398[67] = 0;
   out_1464355962343517398[68] = 0;
   out_1464355962343517398[69] = 0;
   out_1464355962343517398[70] = 1.0;
   out_1464355962343517398[71] = 0;
   out_1464355962343517398[72] = 0;
   out_1464355962343517398[73] = 0;
   out_1464355962343517398[74] = 0;
   out_1464355962343517398[75] = 0;
   out_1464355962343517398[76] = 0;
   out_1464355962343517398[77] = 0;
   out_1464355962343517398[78] = 0;
   out_1464355962343517398[79] = 0;
   out_1464355962343517398[80] = 1.0;
}
void f_fun(double *state, double dt, double *out_5102955014358730093) {
   out_5102955014358730093[0] = state[0];
   out_5102955014358730093[1] = state[1];
   out_5102955014358730093[2] = state[2];
   out_5102955014358730093[3] = state[3];
   out_5102955014358730093[4] = state[4];
   out_5102955014358730093[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] - 9.8000000000000007*state[8] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_5102955014358730093[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_5102955014358730093[7] = state[7];
   out_5102955014358730093[8] = state[8];
}
void F_fun(double *state, double dt, double *out_9048448311538473730) {
   out_9048448311538473730[0] = 1;
   out_9048448311538473730[1] = 0;
   out_9048448311538473730[2] = 0;
   out_9048448311538473730[3] = 0;
   out_9048448311538473730[4] = 0;
   out_9048448311538473730[5] = 0;
   out_9048448311538473730[6] = 0;
   out_9048448311538473730[7] = 0;
   out_9048448311538473730[8] = 0;
   out_9048448311538473730[9] = 0;
   out_9048448311538473730[10] = 1;
   out_9048448311538473730[11] = 0;
   out_9048448311538473730[12] = 0;
   out_9048448311538473730[13] = 0;
   out_9048448311538473730[14] = 0;
   out_9048448311538473730[15] = 0;
   out_9048448311538473730[16] = 0;
   out_9048448311538473730[17] = 0;
   out_9048448311538473730[18] = 0;
   out_9048448311538473730[19] = 0;
   out_9048448311538473730[20] = 1;
   out_9048448311538473730[21] = 0;
   out_9048448311538473730[22] = 0;
   out_9048448311538473730[23] = 0;
   out_9048448311538473730[24] = 0;
   out_9048448311538473730[25] = 0;
   out_9048448311538473730[26] = 0;
   out_9048448311538473730[27] = 0;
   out_9048448311538473730[28] = 0;
   out_9048448311538473730[29] = 0;
   out_9048448311538473730[30] = 1;
   out_9048448311538473730[31] = 0;
   out_9048448311538473730[32] = 0;
   out_9048448311538473730[33] = 0;
   out_9048448311538473730[34] = 0;
   out_9048448311538473730[35] = 0;
   out_9048448311538473730[36] = 0;
   out_9048448311538473730[37] = 0;
   out_9048448311538473730[38] = 0;
   out_9048448311538473730[39] = 0;
   out_9048448311538473730[40] = 1;
   out_9048448311538473730[41] = 0;
   out_9048448311538473730[42] = 0;
   out_9048448311538473730[43] = 0;
   out_9048448311538473730[44] = 0;
   out_9048448311538473730[45] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_9048448311538473730[46] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_9048448311538473730[47] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_9048448311538473730[48] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_9048448311538473730[49] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_9048448311538473730[50] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_9048448311538473730[51] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_9048448311538473730[52] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_9048448311538473730[53] = -9.8000000000000007*dt;
   out_9048448311538473730[54] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_9048448311538473730[55] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_9048448311538473730[56] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9048448311538473730[57] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9048448311538473730[58] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_9048448311538473730[59] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_9048448311538473730[60] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_9048448311538473730[61] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_9048448311538473730[62] = 0;
   out_9048448311538473730[63] = 0;
   out_9048448311538473730[64] = 0;
   out_9048448311538473730[65] = 0;
   out_9048448311538473730[66] = 0;
   out_9048448311538473730[67] = 0;
   out_9048448311538473730[68] = 0;
   out_9048448311538473730[69] = 0;
   out_9048448311538473730[70] = 1;
   out_9048448311538473730[71] = 0;
   out_9048448311538473730[72] = 0;
   out_9048448311538473730[73] = 0;
   out_9048448311538473730[74] = 0;
   out_9048448311538473730[75] = 0;
   out_9048448311538473730[76] = 0;
   out_9048448311538473730[77] = 0;
   out_9048448311538473730[78] = 0;
   out_9048448311538473730[79] = 0;
   out_9048448311538473730[80] = 1;
}
void h_25(double *state, double *unused, double *out_9198405633225898005) {
   out_9198405633225898005[0] = state[6];
}
void H_25(double *state, double *unused, double *out_4623670418875926061) {
   out_4623670418875926061[0] = 0;
   out_4623670418875926061[1] = 0;
   out_4623670418875926061[2] = 0;
   out_4623670418875926061[3] = 0;
   out_4623670418875926061[4] = 0;
   out_4623670418875926061[5] = 0;
   out_4623670418875926061[6] = 1;
   out_4623670418875926061[7] = 0;
   out_4623670418875926061[8] = 0;
}
void h_24(double *state, double *unused, double *out_5164120523058568211) {
   out_5164120523058568211[0] = state[4];
   out_5164120523058568211[1] = state[5];
}
void H_24(double *state, double *unused, double *out_2794721214801000832) {
   out_2794721214801000832[0] = 0;
   out_2794721214801000832[1] = 0;
   out_2794721214801000832[2] = 0;
   out_2794721214801000832[3] = 0;
   out_2794721214801000832[4] = 1;
   out_2794721214801000832[5] = 0;
   out_2794721214801000832[6] = 0;
   out_2794721214801000832[7] = 0;
   out_2794721214801000832[8] = 0;
   out_2794721214801000832[9] = 0;
   out_2794721214801000832[10] = 0;
   out_2794721214801000832[11] = 0;
   out_2794721214801000832[12] = 0;
   out_2794721214801000832[13] = 0;
   out_2794721214801000832[14] = 1;
   out_2794721214801000832[15] = 0;
   out_2794721214801000832[16] = 0;
   out_2794721214801000832[17] = 0;
}
void h_30(double *state, double *unused, double *out_5150035142204281747) {
   out_5150035142204281747[0] = state[4];
}
void H_30(double *state, double *unused, double *out_2105337460368677434) {
   out_2105337460368677434[0] = 0;
   out_2105337460368677434[1] = 0;
   out_2105337460368677434[2] = 0;
   out_2105337460368677434[3] = 0;
   out_2105337460368677434[4] = 1;
   out_2105337460368677434[5] = 0;
   out_2105337460368677434[6] = 0;
   out_2105337460368677434[7] = 0;
   out_2105337460368677434[8] = 0;
}
void h_26(double *state, double *unused, double *out_4314739759498429104) {
   out_4314739759498429104[0] = state[7];
}
void H_26(double *state, double *unused, double *out_8365173737749982285) {
   out_8365173737749982285[0] = 0;
   out_8365173737749982285[1] = 0;
   out_8365173737749982285[2] = 0;
   out_8365173737749982285[3] = 0;
   out_8365173737749982285[4] = 0;
   out_8365173737749982285[5] = 0;
   out_8365173737749982285[6] = 0;
   out_8365173737749982285[7] = 1;
   out_8365173737749982285[8] = 0;
}
void h_27(double *state, double *unused, double *out_8216321539890599893) {
   out_8216321539890599893[0] = state[3];
}
void H_27(double *state, double *unused, double *out_118256610815265783) {
   out_118256610815265783[0] = 0;
   out_118256610815265783[1] = 0;
   out_118256610815265783[2] = 0;
   out_118256610815265783[3] = 1;
   out_118256610815265783[4] = 0;
   out_118256610815265783[5] = 0;
   out_118256610815265783[6] = 0;
   out_118256610815265783[7] = 0;
   out_118256610815265783[8] = 0;
}
void h_29(double *state, double *unused, double *out_5647363758193935527) {
   out_5647363758193935527[0] = state[1];
}
void H_29(double *state, double *unused, double *out_1595106116054285250) {
   out_1595106116054285250[0] = 0;
   out_1595106116054285250[1] = 1;
   out_1595106116054285250[2] = 0;
   out_1595106116054285250[3] = 0;
   out_1595106116054285250[4] = 0;
   out_1595106116054285250[5] = 0;
   out_1595106116054285250[6] = 0;
   out_1595106116054285250[7] = 0;
   out_1595106116054285250[8] = 0;
}
void h_28(double *state, double *unused, double *out_3214648272229754248) {
   out_3214648272229754248[0] = state[0];
}
void H_28(double *state, double *unused, double *out_6677505133123815824) {
   out_6677505133123815824[0] = 1;
   out_6677505133123815824[1] = 0;
   out_6677505133123815824[2] = 0;
   out_6677505133123815824[3] = 0;
   out_6677505133123815824[4] = 0;
   out_6677505133123815824[5] = 0;
   out_6677505133123815824[6] = 0;
   out_6677505133123815824[7] = 0;
   out_6677505133123815824[8] = 0;
}
void h_31(double *state, double *unused, double *out_1367065789729604426) {
   out_1367065789729604426[0] = state[8];
}
void H_31(double *state, double *unused, double *out_4593024456998965633) {
   out_4593024456998965633[0] = 0;
   out_4593024456998965633[1] = 0;
   out_4593024456998965633[2] = 0;
   out_4593024456998965633[3] = 0;
   out_4593024456998965633[4] = 0;
   out_4593024456998965633[5] = 0;
   out_4593024456998965633[6] = 0;
   out_4593024456998965633[7] = 0;
   out_4593024456998965633[8] = 1;
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
void car_err_fun(double *nom_x, double *delta_x, double *out_7993826638469671041) {
  err_fun(nom_x, delta_x, out_7993826638469671041);
}
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6872437970603061319) {
  inv_err_fun(nom_x, true_x, out_6872437970603061319);
}
void car_H_mod_fun(double *state, double *out_1464355962343517398) {
  H_mod_fun(state, out_1464355962343517398);
}
void car_f_fun(double *state, double dt, double *out_5102955014358730093) {
  f_fun(state,  dt, out_5102955014358730093);
}
void car_F_fun(double *state, double dt, double *out_9048448311538473730) {
  F_fun(state,  dt, out_9048448311538473730);
}
void car_h_25(double *state, double *unused, double *out_9198405633225898005) {
  h_25(state, unused, out_9198405633225898005);
}
void car_H_25(double *state, double *unused, double *out_4623670418875926061) {
  H_25(state, unused, out_4623670418875926061);
}
void car_h_24(double *state, double *unused, double *out_5164120523058568211) {
  h_24(state, unused, out_5164120523058568211);
}
void car_H_24(double *state, double *unused, double *out_2794721214801000832) {
  H_24(state, unused, out_2794721214801000832);
}
void car_h_30(double *state, double *unused, double *out_5150035142204281747) {
  h_30(state, unused, out_5150035142204281747);
}
void car_H_30(double *state, double *unused, double *out_2105337460368677434) {
  H_30(state, unused, out_2105337460368677434);
}
void car_h_26(double *state, double *unused, double *out_4314739759498429104) {
  h_26(state, unused, out_4314739759498429104);
}
void car_H_26(double *state, double *unused, double *out_8365173737749982285) {
  H_26(state, unused, out_8365173737749982285);
}
void car_h_27(double *state, double *unused, double *out_8216321539890599893) {
  h_27(state, unused, out_8216321539890599893);
}
void car_H_27(double *state, double *unused, double *out_118256610815265783) {
  H_27(state, unused, out_118256610815265783);
}
void car_h_29(double *state, double *unused, double *out_5647363758193935527) {
  h_29(state, unused, out_5647363758193935527);
}
void car_H_29(double *state, double *unused, double *out_1595106116054285250) {
  H_29(state, unused, out_1595106116054285250);
}
void car_h_28(double *state, double *unused, double *out_3214648272229754248) {
  h_28(state, unused, out_3214648272229754248);
}
void car_H_28(double *state, double *unused, double *out_6677505133123815824) {
  H_28(state, unused, out_6677505133123815824);
}
void car_h_31(double *state, double *unused, double *out_1367065789729604426) {
  h_31(state, unused, out_1367065789729604426);
}
void car_H_31(double *state, double *unused, double *out_4593024456998965633) {
  H_31(state, unused, out_4593024456998965633);
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
