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
void err_fun(double *nom_x, double *delta_x, double *out_1040027927212675814) {
   out_1040027927212675814[0] = delta_x[0] + nom_x[0];
   out_1040027927212675814[1] = delta_x[1] + nom_x[1];
   out_1040027927212675814[2] = delta_x[2] + nom_x[2];
   out_1040027927212675814[3] = delta_x[3] + nom_x[3];
   out_1040027927212675814[4] = delta_x[4] + nom_x[4];
   out_1040027927212675814[5] = delta_x[5] + nom_x[5];
   out_1040027927212675814[6] = delta_x[6] + nom_x[6];
   out_1040027927212675814[7] = delta_x[7] + nom_x[7];
   out_1040027927212675814[8] = delta_x[8] + nom_x[8];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_9107044817363040035) {
   out_9107044817363040035[0] = -nom_x[0] + true_x[0];
   out_9107044817363040035[1] = -nom_x[1] + true_x[1];
   out_9107044817363040035[2] = -nom_x[2] + true_x[2];
   out_9107044817363040035[3] = -nom_x[3] + true_x[3];
   out_9107044817363040035[4] = -nom_x[4] + true_x[4];
   out_9107044817363040035[5] = -nom_x[5] + true_x[5];
   out_9107044817363040035[6] = -nom_x[6] + true_x[6];
   out_9107044817363040035[7] = -nom_x[7] + true_x[7];
   out_9107044817363040035[8] = -nom_x[8] + true_x[8];
}
void H_mod_fun(double *state, double *out_4006186746843356751) {
   out_4006186746843356751[0] = 1.0;
   out_4006186746843356751[1] = 0;
   out_4006186746843356751[2] = 0;
   out_4006186746843356751[3] = 0;
   out_4006186746843356751[4] = 0;
   out_4006186746843356751[5] = 0;
   out_4006186746843356751[6] = 0;
   out_4006186746843356751[7] = 0;
   out_4006186746843356751[8] = 0;
   out_4006186746843356751[9] = 0;
   out_4006186746843356751[10] = 1.0;
   out_4006186746843356751[11] = 0;
   out_4006186746843356751[12] = 0;
   out_4006186746843356751[13] = 0;
   out_4006186746843356751[14] = 0;
   out_4006186746843356751[15] = 0;
   out_4006186746843356751[16] = 0;
   out_4006186746843356751[17] = 0;
   out_4006186746843356751[18] = 0;
   out_4006186746843356751[19] = 0;
   out_4006186746843356751[20] = 1.0;
   out_4006186746843356751[21] = 0;
   out_4006186746843356751[22] = 0;
   out_4006186746843356751[23] = 0;
   out_4006186746843356751[24] = 0;
   out_4006186746843356751[25] = 0;
   out_4006186746843356751[26] = 0;
   out_4006186746843356751[27] = 0;
   out_4006186746843356751[28] = 0;
   out_4006186746843356751[29] = 0;
   out_4006186746843356751[30] = 1.0;
   out_4006186746843356751[31] = 0;
   out_4006186746843356751[32] = 0;
   out_4006186746843356751[33] = 0;
   out_4006186746843356751[34] = 0;
   out_4006186746843356751[35] = 0;
   out_4006186746843356751[36] = 0;
   out_4006186746843356751[37] = 0;
   out_4006186746843356751[38] = 0;
   out_4006186746843356751[39] = 0;
   out_4006186746843356751[40] = 1.0;
   out_4006186746843356751[41] = 0;
   out_4006186746843356751[42] = 0;
   out_4006186746843356751[43] = 0;
   out_4006186746843356751[44] = 0;
   out_4006186746843356751[45] = 0;
   out_4006186746843356751[46] = 0;
   out_4006186746843356751[47] = 0;
   out_4006186746843356751[48] = 0;
   out_4006186746843356751[49] = 0;
   out_4006186746843356751[50] = 1.0;
   out_4006186746843356751[51] = 0;
   out_4006186746843356751[52] = 0;
   out_4006186746843356751[53] = 0;
   out_4006186746843356751[54] = 0;
   out_4006186746843356751[55] = 0;
   out_4006186746843356751[56] = 0;
   out_4006186746843356751[57] = 0;
   out_4006186746843356751[58] = 0;
   out_4006186746843356751[59] = 0;
   out_4006186746843356751[60] = 1.0;
   out_4006186746843356751[61] = 0;
   out_4006186746843356751[62] = 0;
   out_4006186746843356751[63] = 0;
   out_4006186746843356751[64] = 0;
   out_4006186746843356751[65] = 0;
   out_4006186746843356751[66] = 0;
   out_4006186746843356751[67] = 0;
   out_4006186746843356751[68] = 0;
   out_4006186746843356751[69] = 0;
   out_4006186746843356751[70] = 1.0;
   out_4006186746843356751[71] = 0;
   out_4006186746843356751[72] = 0;
   out_4006186746843356751[73] = 0;
   out_4006186746843356751[74] = 0;
   out_4006186746843356751[75] = 0;
   out_4006186746843356751[76] = 0;
   out_4006186746843356751[77] = 0;
   out_4006186746843356751[78] = 0;
   out_4006186746843356751[79] = 0;
   out_4006186746843356751[80] = 1.0;
}
void f_fun(double *state, double dt, double *out_5755230077963766157) {
   out_5755230077963766157[0] = state[0];
   out_5755230077963766157[1] = state[1];
   out_5755230077963766157[2] = state[2];
   out_5755230077963766157[3] = state[3];
   out_5755230077963766157[4] = state[4];
   out_5755230077963766157[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] - 9.8000000000000007*state[8] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_5755230077963766157[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_5755230077963766157[7] = state[7];
   out_5755230077963766157[8] = state[8];
}
void F_fun(double *state, double dt, double *out_5176520417360409202) {
   out_5176520417360409202[0] = 1;
   out_5176520417360409202[1] = 0;
   out_5176520417360409202[2] = 0;
   out_5176520417360409202[3] = 0;
   out_5176520417360409202[4] = 0;
   out_5176520417360409202[5] = 0;
   out_5176520417360409202[6] = 0;
   out_5176520417360409202[7] = 0;
   out_5176520417360409202[8] = 0;
   out_5176520417360409202[9] = 0;
   out_5176520417360409202[10] = 1;
   out_5176520417360409202[11] = 0;
   out_5176520417360409202[12] = 0;
   out_5176520417360409202[13] = 0;
   out_5176520417360409202[14] = 0;
   out_5176520417360409202[15] = 0;
   out_5176520417360409202[16] = 0;
   out_5176520417360409202[17] = 0;
   out_5176520417360409202[18] = 0;
   out_5176520417360409202[19] = 0;
   out_5176520417360409202[20] = 1;
   out_5176520417360409202[21] = 0;
   out_5176520417360409202[22] = 0;
   out_5176520417360409202[23] = 0;
   out_5176520417360409202[24] = 0;
   out_5176520417360409202[25] = 0;
   out_5176520417360409202[26] = 0;
   out_5176520417360409202[27] = 0;
   out_5176520417360409202[28] = 0;
   out_5176520417360409202[29] = 0;
   out_5176520417360409202[30] = 1;
   out_5176520417360409202[31] = 0;
   out_5176520417360409202[32] = 0;
   out_5176520417360409202[33] = 0;
   out_5176520417360409202[34] = 0;
   out_5176520417360409202[35] = 0;
   out_5176520417360409202[36] = 0;
   out_5176520417360409202[37] = 0;
   out_5176520417360409202[38] = 0;
   out_5176520417360409202[39] = 0;
   out_5176520417360409202[40] = 1;
   out_5176520417360409202[41] = 0;
   out_5176520417360409202[42] = 0;
   out_5176520417360409202[43] = 0;
   out_5176520417360409202[44] = 0;
   out_5176520417360409202[45] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_5176520417360409202[46] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_5176520417360409202[47] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_5176520417360409202[48] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_5176520417360409202[49] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_5176520417360409202[50] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_5176520417360409202[51] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_5176520417360409202[52] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_5176520417360409202[53] = -9.8000000000000007*dt;
   out_5176520417360409202[54] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_5176520417360409202[55] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_5176520417360409202[56] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5176520417360409202[57] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5176520417360409202[58] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_5176520417360409202[59] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_5176520417360409202[60] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_5176520417360409202[61] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_5176520417360409202[62] = 0;
   out_5176520417360409202[63] = 0;
   out_5176520417360409202[64] = 0;
   out_5176520417360409202[65] = 0;
   out_5176520417360409202[66] = 0;
   out_5176520417360409202[67] = 0;
   out_5176520417360409202[68] = 0;
   out_5176520417360409202[69] = 0;
   out_5176520417360409202[70] = 1;
   out_5176520417360409202[71] = 0;
   out_5176520417360409202[72] = 0;
   out_5176520417360409202[73] = 0;
   out_5176520417360409202[74] = 0;
   out_5176520417360409202[75] = 0;
   out_5176520417360409202[76] = 0;
   out_5176520417360409202[77] = 0;
   out_5176520417360409202[78] = 0;
   out_5176520417360409202[79] = 0;
   out_5176520417360409202[80] = 1;
}
void h_25(double *state, double *unused, double *out_6241277463871127850) {
   out_6241277463871127850[0] = state[6];
}
void H_25(double *state, double *unused, double *out_2920667220908313772) {
   out_2920667220908313772[0] = 0;
   out_2920667220908313772[1] = 0;
   out_2920667220908313772[2] = 0;
   out_2920667220908313772[3] = 0;
   out_2920667220908313772[4] = 0;
   out_2920667220908313772[5] = 0;
   out_2920667220908313772[6] = 1;
   out_2920667220908313772[7] = 0;
   out_2920667220908313772[8] = 0;
}
void h_24(double *state, double *unused, double *out_6408601504971015290) {
   out_6408601504971015290[0] = state[4];
   out_6408601504971015290[1] = state[5];
}
void H_24(double *state, double *unused, double *out_8871871394693052087) {
   out_8871871394693052087[0] = 0;
   out_8871871394693052087[1] = 0;
   out_8871871394693052087[2] = 0;
   out_8871871394693052087[3] = 0;
   out_8871871394693052087[4] = 1;
   out_8871871394693052087[5] = 0;
   out_8871871394693052087[6] = 0;
   out_8871871394693052087[7] = 0;
   out_8871871394693052087[8] = 0;
   out_8871871394693052087[9] = 0;
   out_8871871394693052087[10] = 0;
   out_8871871394693052087[11] = 0;
   out_8871871394693052087[12] = 0;
   out_8871871394693052087[13] = 0;
   out_8871871394693052087[14] = 1;
   out_8871871394693052087[15] = 0;
   out_8871871394693052087[16] = 0;
   out_8871871394693052087[17] = 0;
}
void h_30(double *state, double *unused, double *out_8568017081584401416) {
   out_8568017081584401416[0] = state[4];
}
void H_30(double *state, double *unused, double *out_1607029109219294426) {
   out_1607029109219294426[0] = 0;
   out_1607029109219294426[1] = 0;
   out_1607029109219294426[2] = 0;
   out_1607029109219294426[3] = 0;
   out_1607029109219294426[4] = 1;
   out_1607029109219294426[5] = 0;
   out_1607029109219294426[6] = 0;
   out_1607029109219294426[7] = 0;
   out_1607029109219294426[8] = 0;
}
void h_26(double *state, double *unused, double *out_6877569246848720456) {
   out_6877569246848720456[0] = state[7];
}
void H_26(double *state, double *unused, double *out_820836097965742452) {
   out_820836097965742452[0] = 0;
   out_820836097965742452[1] = 0;
   out_820836097965742452[2] = 0;
   out_820836097965742452[3] = 0;
   out_820836097965742452[4] = 0;
   out_820836097965742452[5] = 0;
   out_820836097965742452[6] = 0;
   out_820836097965742452[7] = 1;
   out_820836097965742452[8] = 0;
}
void h_27(double *state, double *unused, double *out_3204491412426795165) {
   out_3204491412426795165[0] = state[3];
}
void H_27(double *state, double *unused, double *out_616564961964648791) {
   out_616564961964648791[0] = 0;
   out_616564961964648791[1] = 0;
   out_616564961964648791[2] = 0;
   out_616564961964648791[3] = 1;
   out_616564961964648791[4] = 0;
   out_616564961964648791[5] = 0;
   out_616564961964648791[6] = 0;
   out_616564961964648791[7] = 0;
   out_616564961964648791[8] = 0;
}
void h_29(double *state, double *unused, double *out_3566343813923555771) {
   out_3566343813923555771[0] = state[1];
}
void H_29(double *state, double *unused, double *out_1096797764904902242) {
   out_1096797764904902242[0] = 0;
   out_1096797764904902242[1] = 1;
   out_1096797764904902242[2] = 0;
   out_1096797764904902242[3] = 0;
   out_1096797764904902242[4] = 0;
   out_1096797764904902242[5] = 0;
   out_1096797764904902242[6] = 0;
   out_1096797764904902242[7] = 0;
   out_1096797764904902242[8] = 0;
}
void h_28(double *state, double *unused, double *out_2260981559525132730) {
   out_2260981559525132730[0] = state[0];
}
void H_28(double *state, double *unused, double *out_866832506660424009) {
   out_866832506660424009[0] = 1;
   out_866832506660424009[1] = 0;
   out_866832506660424009[2] = 0;
   out_866832506660424009[3] = 0;
   out_866832506660424009[4] = 0;
   out_866832506660424009[5] = 0;
   out_866832506660424009[6] = 0;
   out_866832506660424009[7] = 0;
   out_866832506660424009[8] = 0;
}
void h_31(double *state, double *unused, double *out_5966083401586621961) {
   out_5966083401586621961[0] = state[8];
}
void H_31(double *state, double *unused, double *out_2951313182785274200) {
   out_2951313182785274200[0] = 0;
   out_2951313182785274200[1] = 0;
   out_2951313182785274200[2] = 0;
   out_2951313182785274200[3] = 0;
   out_2951313182785274200[4] = 0;
   out_2951313182785274200[5] = 0;
   out_2951313182785274200[6] = 0;
   out_2951313182785274200[7] = 0;
   out_2951313182785274200[8] = 1;
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
void car_err_fun(double *nom_x, double *delta_x, double *out_1040027927212675814) {
  err_fun(nom_x, delta_x, out_1040027927212675814);
}
void car_inv_err_fun(double *nom_x, double *true_x, double *out_9107044817363040035) {
  inv_err_fun(nom_x, true_x, out_9107044817363040035);
}
void car_H_mod_fun(double *state, double *out_4006186746843356751) {
  H_mod_fun(state, out_4006186746843356751);
}
void car_f_fun(double *state, double dt, double *out_5755230077963766157) {
  f_fun(state,  dt, out_5755230077963766157);
}
void car_F_fun(double *state, double dt, double *out_5176520417360409202) {
  F_fun(state,  dt, out_5176520417360409202);
}
void car_h_25(double *state, double *unused, double *out_6241277463871127850) {
  h_25(state, unused, out_6241277463871127850);
}
void car_H_25(double *state, double *unused, double *out_2920667220908313772) {
  H_25(state, unused, out_2920667220908313772);
}
void car_h_24(double *state, double *unused, double *out_6408601504971015290) {
  h_24(state, unused, out_6408601504971015290);
}
void car_H_24(double *state, double *unused, double *out_8871871394693052087) {
  H_24(state, unused, out_8871871394693052087);
}
void car_h_30(double *state, double *unused, double *out_8568017081584401416) {
  h_30(state, unused, out_8568017081584401416);
}
void car_H_30(double *state, double *unused, double *out_1607029109219294426) {
  H_30(state, unused, out_1607029109219294426);
}
void car_h_26(double *state, double *unused, double *out_6877569246848720456) {
  h_26(state, unused, out_6877569246848720456);
}
void car_H_26(double *state, double *unused, double *out_820836097965742452) {
  H_26(state, unused, out_820836097965742452);
}
void car_h_27(double *state, double *unused, double *out_3204491412426795165) {
  h_27(state, unused, out_3204491412426795165);
}
void car_H_27(double *state, double *unused, double *out_616564961964648791) {
  H_27(state, unused, out_616564961964648791);
}
void car_h_29(double *state, double *unused, double *out_3566343813923555771) {
  h_29(state, unused, out_3566343813923555771);
}
void car_H_29(double *state, double *unused, double *out_1096797764904902242) {
  H_29(state, unused, out_1096797764904902242);
}
void car_h_28(double *state, double *unused, double *out_2260981559525132730) {
  h_28(state, unused, out_2260981559525132730);
}
void car_H_28(double *state, double *unused, double *out_866832506660424009) {
  H_28(state, unused, out_866832506660424009);
}
void car_h_31(double *state, double *unused, double *out_5966083401586621961) {
  h_31(state, unused, out_5966083401586621961);
}
void car_H_31(double *state, double *unused, double *out_2951313182785274200) {
  H_31(state, unused, out_2951313182785274200);
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
