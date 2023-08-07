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
void err_fun(double *nom_x, double *delta_x, double *out_4357349640118668261) {
   out_4357349640118668261[0] = delta_x[0] + nom_x[0];
   out_4357349640118668261[1] = delta_x[1] + nom_x[1];
   out_4357349640118668261[2] = delta_x[2] + nom_x[2];
   out_4357349640118668261[3] = delta_x[3] + nom_x[3];
   out_4357349640118668261[4] = delta_x[4] + nom_x[4];
   out_4357349640118668261[5] = delta_x[5] + nom_x[5];
   out_4357349640118668261[6] = delta_x[6] + nom_x[6];
   out_4357349640118668261[7] = delta_x[7] + nom_x[7];
   out_4357349640118668261[8] = delta_x[8] + nom_x[8];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_1126178887815320573) {
   out_1126178887815320573[0] = -nom_x[0] + true_x[0];
   out_1126178887815320573[1] = -nom_x[1] + true_x[1];
   out_1126178887815320573[2] = -nom_x[2] + true_x[2];
   out_1126178887815320573[3] = -nom_x[3] + true_x[3];
   out_1126178887815320573[4] = -nom_x[4] + true_x[4];
   out_1126178887815320573[5] = -nom_x[5] + true_x[5];
   out_1126178887815320573[6] = -nom_x[6] + true_x[6];
   out_1126178887815320573[7] = -nom_x[7] + true_x[7];
   out_1126178887815320573[8] = -nom_x[8] + true_x[8];
}
void H_mod_fun(double *state, double *out_7323184606116964341) {
   out_7323184606116964341[0] = 1.0;
   out_7323184606116964341[1] = 0;
   out_7323184606116964341[2] = 0;
   out_7323184606116964341[3] = 0;
   out_7323184606116964341[4] = 0;
   out_7323184606116964341[5] = 0;
   out_7323184606116964341[6] = 0;
   out_7323184606116964341[7] = 0;
   out_7323184606116964341[8] = 0;
   out_7323184606116964341[9] = 0;
   out_7323184606116964341[10] = 1.0;
   out_7323184606116964341[11] = 0;
   out_7323184606116964341[12] = 0;
   out_7323184606116964341[13] = 0;
   out_7323184606116964341[14] = 0;
   out_7323184606116964341[15] = 0;
   out_7323184606116964341[16] = 0;
   out_7323184606116964341[17] = 0;
   out_7323184606116964341[18] = 0;
   out_7323184606116964341[19] = 0;
   out_7323184606116964341[20] = 1.0;
   out_7323184606116964341[21] = 0;
   out_7323184606116964341[22] = 0;
   out_7323184606116964341[23] = 0;
   out_7323184606116964341[24] = 0;
   out_7323184606116964341[25] = 0;
   out_7323184606116964341[26] = 0;
   out_7323184606116964341[27] = 0;
   out_7323184606116964341[28] = 0;
   out_7323184606116964341[29] = 0;
   out_7323184606116964341[30] = 1.0;
   out_7323184606116964341[31] = 0;
   out_7323184606116964341[32] = 0;
   out_7323184606116964341[33] = 0;
   out_7323184606116964341[34] = 0;
   out_7323184606116964341[35] = 0;
   out_7323184606116964341[36] = 0;
   out_7323184606116964341[37] = 0;
   out_7323184606116964341[38] = 0;
   out_7323184606116964341[39] = 0;
   out_7323184606116964341[40] = 1.0;
   out_7323184606116964341[41] = 0;
   out_7323184606116964341[42] = 0;
   out_7323184606116964341[43] = 0;
   out_7323184606116964341[44] = 0;
   out_7323184606116964341[45] = 0;
   out_7323184606116964341[46] = 0;
   out_7323184606116964341[47] = 0;
   out_7323184606116964341[48] = 0;
   out_7323184606116964341[49] = 0;
   out_7323184606116964341[50] = 1.0;
   out_7323184606116964341[51] = 0;
   out_7323184606116964341[52] = 0;
   out_7323184606116964341[53] = 0;
   out_7323184606116964341[54] = 0;
   out_7323184606116964341[55] = 0;
   out_7323184606116964341[56] = 0;
   out_7323184606116964341[57] = 0;
   out_7323184606116964341[58] = 0;
   out_7323184606116964341[59] = 0;
   out_7323184606116964341[60] = 1.0;
   out_7323184606116964341[61] = 0;
   out_7323184606116964341[62] = 0;
   out_7323184606116964341[63] = 0;
   out_7323184606116964341[64] = 0;
   out_7323184606116964341[65] = 0;
   out_7323184606116964341[66] = 0;
   out_7323184606116964341[67] = 0;
   out_7323184606116964341[68] = 0;
   out_7323184606116964341[69] = 0;
   out_7323184606116964341[70] = 1.0;
   out_7323184606116964341[71] = 0;
   out_7323184606116964341[72] = 0;
   out_7323184606116964341[73] = 0;
   out_7323184606116964341[74] = 0;
   out_7323184606116964341[75] = 0;
   out_7323184606116964341[76] = 0;
   out_7323184606116964341[77] = 0;
   out_7323184606116964341[78] = 0;
   out_7323184606116964341[79] = 0;
   out_7323184606116964341[80] = 1.0;
}
void f_fun(double *state, double dt, double *out_1959300645020303815) {
   out_1959300645020303815[0] = state[0];
   out_1959300645020303815[1] = state[1];
   out_1959300645020303815[2] = state[2];
   out_1959300645020303815[3] = state[3];
   out_1959300645020303815[4] = state[4];
   out_1959300645020303815[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] - 9.8000000000000007*state[8] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_1959300645020303815[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_1959300645020303815[7] = state[7];
   out_1959300645020303815[8] = state[8];
}
void F_fun(double *state, double dt, double *out_4766937505185307902) {
   out_4766937505185307902[0] = 1;
   out_4766937505185307902[1] = 0;
   out_4766937505185307902[2] = 0;
   out_4766937505185307902[3] = 0;
   out_4766937505185307902[4] = 0;
   out_4766937505185307902[5] = 0;
   out_4766937505185307902[6] = 0;
   out_4766937505185307902[7] = 0;
   out_4766937505185307902[8] = 0;
   out_4766937505185307902[9] = 0;
   out_4766937505185307902[10] = 1;
   out_4766937505185307902[11] = 0;
   out_4766937505185307902[12] = 0;
   out_4766937505185307902[13] = 0;
   out_4766937505185307902[14] = 0;
   out_4766937505185307902[15] = 0;
   out_4766937505185307902[16] = 0;
   out_4766937505185307902[17] = 0;
   out_4766937505185307902[18] = 0;
   out_4766937505185307902[19] = 0;
   out_4766937505185307902[20] = 1;
   out_4766937505185307902[21] = 0;
   out_4766937505185307902[22] = 0;
   out_4766937505185307902[23] = 0;
   out_4766937505185307902[24] = 0;
   out_4766937505185307902[25] = 0;
   out_4766937505185307902[26] = 0;
   out_4766937505185307902[27] = 0;
   out_4766937505185307902[28] = 0;
   out_4766937505185307902[29] = 0;
   out_4766937505185307902[30] = 1;
   out_4766937505185307902[31] = 0;
   out_4766937505185307902[32] = 0;
   out_4766937505185307902[33] = 0;
   out_4766937505185307902[34] = 0;
   out_4766937505185307902[35] = 0;
   out_4766937505185307902[36] = 0;
   out_4766937505185307902[37] = 0;
   out_4766937505185307902[38] = 0;
   out_4766937505185307902[39] = 0;
   out_4766937505185307902[40] = 1;
   out_4766937505185307902[41] = 0;
   out_4766937505185307902[42] = 0;
   out_4766937505185307902[43] = 0;
   out_4766937505185307902[44] = 0;
   out_4766937505185307902[45] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_4766937505185307902[46] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_4766937505185307902[47] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_4766937505185307902[48] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_4766937505185307902[49] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_4766937505185307902[50] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_4766937505185307902[51] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_4766937505185307902[52] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_4766937505185307902[53] = -9.8000000000000007*dt;
   out_4766937505185307902[54] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_4766937505185307902[55] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_4766937505185307902[56] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_4766937505185307902[57] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_4766937505185307902[58] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_4766937505185307902[59] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_4766937505185307902[60] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_4766937505185307902[61] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_4766937505185307902[62] = 0;
   out_4766937505185307902[63] = 0;
   out_4766937505185307902[64] = 0;
   out_4766937505185307902[65] = 0;
   out_4766937505185307902[66] = 0;
   out_4766937505185307902[67] = 0;
   out_4766937505185307902[68] = 0;
   out_4766937505185307902[69] = 0;
   out_4766937505185307902[70] = 1;
   out_4766937505185307902[71] = 0;
   out_4766937505185307902[72] = 0;
   out_4766937505185307902[73] = 0;
   out_4766937505185307902[74] = 0;
   out_4766937505185307902[75] = 0;
   out_4766937505185307902[76] = 0;
   out_4766937505185307902[77] = 0;
   out_4766937505185307902[78] = 0;
   out_4766937505185307902[79] = 0;
   out_4766937505185307902[80] = 1;
}
void h_25(double *state, double *unused, double *out_2746693973836595354) {
   out_2746693973836595354[0] = state[6];
}
void H_25(double *state, double *unused, double *out_5786110295815758105) {
   out_5786110295815758105[0] = 0;
   out_5786110295815758105[1] = 0;
   out_5786110295815758105[2] = 0;
   out_5786110295815758105[3] = 0;
   out_5786110295815758105[4] = 0;
   out_5786110295815758105[5] = 0;
   out_5786110295815758105[6] = 1;
   out_5786110295815758105[7] = 0;
   out_5786110295815758105[8] = 0;
}
void h_24(double *state, double *unused, double *out_3040119791267470643) {
   out_3040119791267470643[0] = state[4];
   out_3040119791267470643[1] = state[5];
}
void H_24(double *state, double *unused, double *out_2371818783672703645) {
   out_2371818783672703645[0] = 0;
   out_2371818783672703645[1] = 0;
   out_2371818783672703645[2] = 0;
   out_2371818783672703645[3] = 0;
   out_2371818783672703645[4] = 1;
   out_2371818783672703645[5] = 0;
   out_2371818783672703645[6] = 0;
   out_2371818783672703645[7] = 0;
   out_2371818783672703645[8] = 0;
   out_2371818783672703645[9] = 0;
   out_2371818783672703645[10] = 0;
   out_2371818783672703645[11] = 0;
   out_2371818783672703645[12] = 0;
   out_2371818783672703645[13] = 0;
   out_2371818783672703645[14] = 1;
   out_2371818783672703645[15] = 0;
   out_2371818783672703645[16] = 0;
   out_2371818783672703645[17] = 0;
}
void h_30(double *state, double *unused, double *out_5134578676917453831) {
   out_5134578676917453831[0] = state[4];
}
void H_30(double *state, double *unused, double *out_1258413965688149907) {
   out_1258413965688149907[0] = 0;
   out_1258413965688149907[1] = 0;
   out_1258413965688149907[2] = 0;
   out_1258413965688149907[3] = 0;
   out_1258413965688149907[4] = 1;
   out_1258413965688149907[5] = 0;
   out_1258413965688149907[6] = 0;
   out_1258413965688149907[7] = 0;
   out_1258413965688149907[8] = 0;
}
void h_26(double *state, double *unused, double *out_4531262792240976314) {
   out_4531262792240976314[0] = state[7];
}
void H_26(double *state, double *unused, double *out_2044606976941701881) {
   out_2044606976941701881[0] = 0;
   out_2044606976941701881[1] = 0;
   out_2044606976941701881[2] = 0;
   out_2044606976941701881[3] = 0;
   out_2044606976941701881[4] = 0;
   out_2044606976941701881[5] = 0;
   out_2044606976941701881[6] = 0;
   out_2044606976941701881[7] = 1;
   out_2044606976941701881[8] = 0;
}
void h_27(double *state, double *unused, double *out_3690203826738257789) {
   out_3690203826738257789[0] = state[3];
}
void H_27(double *state, double *unused, double *out_916349346112275004) {
   out_916349346112275004[0] = 0;
   out_916349346112275004[1] = 0;
   out_916349346112275004[2] = 0;
   out_916349346112275004[3] = 1;
   out_916349346112275004[4] = 0;
   out_916349346112275004[5] = 0;
   out_916349346112275004[6] = 0;
   out_916349346112275004[7] = 0;
   out_916349346112275004[8] = 0;
}
void h_29(double *state, double *unused, double *out_5284052014821942848) {
   out_5284052014821942848[0] = state[1];
}
void H_29(double *state, double *unused, double *out_1768645310002542091) {
   out_1768645310002542091[0] = 0;
   out_1768645310002542091[1] = 1;
   out_1768645310002542091[2] = 0;
   out_1768645310002542091[3] = 0;
   out_1768645310002542091[4] = 0;
   out_1768645310002542091[5] = 0;
   out_1768645310002542091[6] = 0;
   out_1768645310002542091[7] = 0;
   out_1768645310002542091[8] = 0;
}
void h_28(double *state, double *unused, double *out_8357498729557444681) {
   out_8357498729557444681[0] = state[0];
}
void H_28(double *state, double *unused, double *out_3732275581567868342) {
   out_3732275581567868342[0] = 1;
   out_3732275581567868342[1] = 0;
   out_3732275581567868342[2] = 0;
   out_3732275581567868342[3] = 0;
   out_3732275581567868342[4] = 0;
   out_3732275581567868342[5] = 0;
   out_3732275581567868342[6] = 0;
   out_3732275581567868342[7] = 0;
   out_3732275581567868342[8] = 0;
}
void h_31(double *state, double *unused, double *out_6384143502090617704) {
   out_6384143502090617704[0] = state[8];
}
void H_31(double *state, double *unused, double *out_1418398874708350405) {
   out_1418398874708350405[0] = 0;
   out_1418398874708350405[1] = 0;
   out_1418398874708350405[2] = 0;
   out_1418398874708350405[3] = 0;
   out_1418398874708350405[4] = 0;
   out_1418398874708350405[5] = 0;
   out_1418398874708350405[6] = 0;
   out_1418398874708350405[7] = 0;
   out_1418398874708350405[8] = 1;
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
void car_err_fun(double *nom_x, double *delta_x, double *out_4357349640118668261) {
  err_fun(nom_x, delta_x, out_4357349640118668261);
}
void car_inv_err_fun(double *nom_x, double *true_x, double *out_1126178887815320573) {
  inv_err_fun(nom_x, true_x, out_1126178887815320573);
}
void car_H_mod_fun(double *state, double *out_7323184606116964341) {
  H_mod_fun(state, out_7323184606116964341);
}
void car_f_fun(double *state, double dt, double *out_1959300645020303815) {
  f_fun(state,  dt, out_1959300645020303815);
}
void car_F_fun(double *state, double dt, double *out_4766937505185307902) {
  F_fun(state,  dt, out_4766937505185307902);
}
void car_h_25(double *state, double *unused, double *out_2746693973836595354) {
  h_25(state, unused, out_2746693973836595354);
}
void car_H_25(double *state, double *unused, double *out_5786110295815758105) {
  H_25(state, unused, out_5786110295815758105);
}
void car_h_24(double *state, double *unused, double *out_3040119791267470643) {
  h_24(state, unused, out_3040119791267470643);
}
void car_H_24(double *state, double *unused, double *out_2371818783672703645) {
  H_24(state, unused, out_2371818783672703645);
}
void car_h_30(double *state, double *unused, double *out_5134578676917453831) {
  h_30(state, unused, out_5134578676917453831);
}
void car_H_30(double *state, double *unused, double *out_1258413965688149907) {
  H_30(state, unused, out_1258413965688149907);
}
void car_h_26(double *state, double *unused, double *out_4531262792240976314) {
  h_26(state, unused, out_4531262792240976314);
}
void car_H_26(double *state, double *unused, double *out_2044606976941701881) {
  H_26(state, unused, out_2044606976941701881);
}
void car_h_27(double *state, double *unused, double *out_3690203826738257789) {
  h_27(state, unused, out_3690203826738257789);
}
void car_H_27(double *state, double *unused, double *out_916349346112275004) {
  H_27(state, unused, out_916349346112275004);
}
void car_h_29(double *state, double *unused, double *out_5284052014821942848) {
  h_29(state, unused, out_5284052014821942848);
}
void car_H_29(double *state, double *unused, double *out_1768645310002542091) {
  H_29(state, unused, out_1768645310002542091);
}
void car_h_28(double *state, double *unused, double *out_8357498729557444681) {
  h_28(state, unused, out_8357498729557444681);
}
void car_H_28(double *state, double *unused, double *out_3732275581567868342) {
  H_28(state, unused, out_3732275581567868342);
}
void car_h_31(double *state, double *unused, double *out_6384143502090617704) {
  h_31(state, unused, out_6384143502090617704);
}
void car_H_31(double *state, double *unused, double *out_1418398874708350405) {
  H_31(state, unused, out_1418398874708350405);
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
