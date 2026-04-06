/**
  ******************************************************************************
  * @file    quantized_a025_pt_36porciento_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-04-02T14:16:31-0300
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef QUANTIZED_A025_PT_36PORCIENTO_DATA_PARAMS_H
#define QUANTIZED_A025_PT_36PORCIENTO_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_quantized_a025_pt_36porciento_data_weights_params[1]))
*/

#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_CONFIG               (NULL)


#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATIONS_SIZES \
  { 301060, }
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATIONS_SIZE     (301060)
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATIONS_COUNT    (1)
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATION_1_SIZE    (301060)



#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_SIZES \
  { 244544, }
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_SIZE         (244544)
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_COUNT        (1)
#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHT_1_SIZE        (244544)



#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_quantized_a025_pt_36porciento_activations_table[1])

extern ai_handle g_quantized_a025_pt_36porciento_activations_table[1 + 2];



#define AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_TABLE_GET() \
  (&g_quantized_a025_pt_36porciento_weights_table[1])

extern ai_handle g_quantized_a025_pt_36porciento_weights_table[1 + 2];


#endif    /* QUANTIZED_A025_PT_36PORCIENTO_DATA_PARAMS_H */
