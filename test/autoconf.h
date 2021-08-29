/*
 * Copyright (c) The Libre Solar Project Contributors
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// PWM charge controller
#define CONFIG_PWM_TERMINAL_SOLAR 1

// MPPT buck/boost or nanogrid mode
#define CONFIG_HV_TERMINAL_SOLAR 1
#define CONFIG_HV_TERMINAL_NANOGRID 0

// battery always assumed to be at low-voltage terminal (might need to be changed for boost mode)
#define CONFIG_LV_TERMINAL_BATTERY 1

#define CONFIG_THINGSET_EXPERT_PASSWORD "expert123"
#define CONFIG_THINGSET_MAKER_PASSWORD "maker456"

// Values that are otherwise defined by Kconfig
#define CONFIG_CONTROL_FREQUENCY   10   // Hz

#define CONFIG_BAT_TYPE_GEL 1
#define CONFIG_BAT_TYPE 2
#define CONFIG_BAT_CAPACITY_AH 50
#define CONFIG_BAT_NUM_CELLS 6
#define CONFIG_CELL_ABS_MAX_VOLTAGE_MV 2450
#define CONFIG_CELL_TOPPING_VOLTAGE_MV 2400
#define CONFIG_CELL_RECHARGE_VOLTAGE_MV 2300
#define CONFIG_CELL_RECONNECT_VOLTAGE_MV 2100
#define CONFIG_CELL_DISCONNECT_VOLTAGE_MV 1950
#define CONFIG_CELL_ABS_MIN_VOLTAGE_MV 1600
#define CONFIG_CELL_OCV_FULL_MV 2150
#define CONFIG_CELL_OCV_EMPTY_MV 1900
#define CONFIG_CELL_FLOAT 1
#define CONFIG_CELL_FLOAT_VOLTAGE_MV 2300
#define CONFIG_CELL_FLOAT_RECHARGE_TIME 1800
#define CONFIG_CELL_EQUALIZATION_VOLTAGE_MV 2450
#define CONFIG_CELL_EQUALIZATION_DURATION 3600
#define CONFIG_CELL_EQUALIZATION_TRIGGER_DAYS 60
#define CONFIG_CELL_EQUALIZATION_TRIGGER_DEEP_CYCLES 10
#define CONFIG_CELL_TEMP_COMPENSATION_MV_K -3
#define CONFIG_CELL_INTERNAL_RESISTANCE_MOHM 5
#define CONFIG_BAT_CHARGE_TEMP_MAX 50
#define CONFIG_BAT_CHARGE_TEMP_MIN 0
#define CONFIG_BAT_DISCHARGE_TEMP_MAX 50
#define CONFIG_BAT_DISCHARGE_TEMP_MIN -10
#define CONFIG_LOAD_OC_RECOVERY_DELAY 300
#define CONFIG_LOAD_LVD_RECOVERY_DELAY 300
