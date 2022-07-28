#include "common_dbc.h"

namespace {

const Signal sigs_468[] = {
    {
      .name = "APM_Status",
      .start_bit = 0,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Voltage_Requested",
      .start_bit = 8,
      .msb  = 15,
      .lsb = 8,
      .size = 8,
      .is_signed = false,
      .factor = 0.0787402,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_470[] = {
    {
      .name = "APM_Status",
      .start_bit = 7,
      .msb  = 7,
      .lsb = 0,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_High_Voltage_Input_Current",
      .start_bit = 8,
      .msb  = 15,
      .lsb = 8,
      .size = 8,
      .is_signed = true,
      .factor = 0.15,
      .offset = -7.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Low_Voltage_Sensed",
      .start_bit = 16,
      .msb  = 23,
      .lsb = 16,
      .size = 8,
      .is_signed = false,
      .factor = 0.0787402,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Temperature_1",
      .start_bit = 24,
      .msb  = 31,
      .lsb = 24,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Temperature_2",
      .start_bit = 32,
      .msb  = 39,
      .lsb = 32,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = -40.0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Low_Voltage_Current_Output",
      .start_bit = 40,
      .msb  = 47,
      .lsb = 40,
      .size = 8,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "APM_Counter",
      .start_bit = 48,
      .msb  = 55,
      .lsb = 48,
      .size = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "APM_Command",
    .address = 0x1D4,
    .size = 2,
    .num_sigs = ARRAYSIZE(sigs_468),
    .sigs = sigs_468,
  },
  {
    .name = "APM_Stats",
    .address = 0x1D6,
    .size = 7,
    .num_sigs = ARRAYSIZE(sigs_470),
    .sigs = sigs_470,
  },
};

const Val vals[] = {
    {
      .name = "APM_Status",
      .address = 0x1D4,
      .def_val = "0 OFF 160 ON",
      .sigs = sigs_468,
    },
};

}

const DBC gm_global_a_powertrain_expansion = {
  .name = "gm_global_a_powertrain_expansion",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(gm_global_a_powertrain_expansion)