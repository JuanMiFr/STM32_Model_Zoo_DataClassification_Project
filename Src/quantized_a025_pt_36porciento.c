/**
  ******************************************************************************
  * @file    quantized_a025_pt_36porciento.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-04-02T14:16:31-0300
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "quantized_a025_pt_36porciento.h"
#include "quantized_a025_pt_36porciento_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_quantized_a025_pt_36porciento
 
#undef AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_SIGNATURE
#define AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_SIGNATURE     "0x28e055c59e899589aad6f059421b16a8"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "2026-04-02T14:16:31-0300"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_QUANTIZED_A025_PT_36PORCIENTO_N_BATCHES
#define AI_QUANTIZED_A025_PT_36PORCIENTO_N_BATCHES         (1)

static ai_ptr g_quantized_a025_pt_36porciento_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_quantized_a025_pt_36porciento_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  input_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 150528, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  input_Transpose_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 150529, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 200704, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 100352, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 50176, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25088, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6272, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 12544, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  _features_final_pool_AveragePool_output_0_output_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  output_QuantizeLinear_Input_output_array, AI_ARRAY_FORMAT_S8|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 100, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 216, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 72, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 8, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 144, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 16, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 288, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 32, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2048, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 4096, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 576, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 64, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 8192, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 16384, AI_STATIC)

/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1152, AI_STATIC)

/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 128, AI_STATIC)

/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 32768, AI_STATIC)

/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 2304, AI_STATIC)

/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 65536, AI_STATIC)

/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 256, AI_STATIC)

/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  output_QuantizeLinear_Input_weights_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 25600, AI_STATIC)

/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  output_QuantizeLinear_Input_bias_array, AI_ARRAY_FORMAT_S32,
  NULL, NULL, 100, AI_STATIC)

/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 572, AI_STATIC)

/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 217, AI_STATIC)

/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 32, AI_STATIC)

/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 433, AI_STATIC)

/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 64, AI_STATIC)

/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 865, AI_STATIC)

/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)

/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 865, AI_STATIC)

/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 128, AI_STATIC)

/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1729, AI_STATIC)

/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)

/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1729, AI_STATIC)

/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 256, AI_STATIC)

/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 3457, AI_STATIC)

/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 512, AI_STATIC)

/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 6913, AI_STATIC)

/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0_array, AI_ARRAY_FORMAT_S8,
  NULL, NULL, 1024, AI_STATIC)

/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  output_QuantizeLinear_Input_scratch0_array, AI_ARRAY_FORMAT_S16,
  NULL, NULL, 256, AI_STATIC)

/**  Array metadata declarations section  *************************************/
/* Int quant #0 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_final_pool_AveragePool_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11999829858541489f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #1 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_init_block_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011341935023665428f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #2 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_init_block_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00117335410322994f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #3 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.027703572064638138f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #4 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0246431902050972f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #5 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.044875577092170715f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #6 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.027074046432971954f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #7 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.023399820551276207f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #8 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03469252958893776f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #9 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03710104152560234f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #10 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.060991209000349045f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #11 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.04500189796090126f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #12 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.10838203132152557f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #13 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03996358811855316f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #14 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.017364341765642166f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #15 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.02300337143242359f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #16 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.09364262968301773f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #17 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.023051440715789795f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #18 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007229247596114874f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #19 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.025572003796696663f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #20 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.04378950595855713f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #21 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016168268397450447f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #22 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008295878767967224f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #23 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.025375133380293846f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #24 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.1631869524717331f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #25 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010272551327943802f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #26 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00457329535856843f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #27 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.016554391011595726f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #28 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.052762433886528015f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #29 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01257031224668026f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #30 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00814078189432621f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #31 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01958126202225685f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #32 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.049752846360206604f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #33 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.011440088041126728f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #34 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.007213121745735407f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #35 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.020098024979233742f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #36 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03702527657151222f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #37 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.012402554042637348f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #38 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.0058007026091217995f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #39 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.022730108350515366f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #40 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.08337661623954773f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #41 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01676240749657154f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #42 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.00840022973716259f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #43 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.03125467151403427f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #44 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.038031790405511856f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #45 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.010865237563848495f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #46 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.003923854790627956f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #47 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.033243853598833084f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #48 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.019785143435001373f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #49 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01743208058178425f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #50 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.008980415761470795f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #51 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.027471942827105522f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #52 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.01727927476167679f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #53 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.11999829858541489f),
    AI_PACK_INTQ_ZP(-128)))

/* Int quant #54 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(_features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.05578644573688507f),
    AI_PACK_INTQ_ZP(0)))

/* Int quant #55 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(input_Transpose_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015383603051304817f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #56 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(input_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.015383603051304817f),
    AI_PACK_INTQ_ZP(-5)))

/* Int quant #57 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(output_QuantizeLinear_Input_output_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.3655957281589508f),
    AI_PACK_INTQ_ZP(95)))

/* Int quant #58 */
AI_INTQ_INFO_LIST_OBJ_DECLARE(output_QuantizeLinear_Input_weights_array_intq, AI_STATIC_CONST,
  AI_BUFFER_META_FLAG_SCALE_FLOAT|AI_BUFFER_META_FLAG_ZEROPOINT_S8, 1,
  AI_PACK_INTQ_INFO(
    AI_PACK_INTQ_SCALE(0.004964102990925312f),
    AI_PACK_INTQ_ZP(0)))

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  _features_final_pool_AveragePool_output_0_output, AI_STATIC,
  0, 0x1,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 1, 1, 256, 256),
  1, &_features_final_pool_AveragePool_output_0_output_array, &_features_final_pool_AveragePool_output_0_output_array_intq)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_bias, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &_features_init_block_activ_Relu_output_0_bias_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_output, AI_STATIC,
  2, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &_features_init_block_activ_Relu_output_0_output_array, &_features_init_block_activ_Relu_output_0_output_array_intq)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_scratch0, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 572, 1, 1), AI_STRIDE_INIT(4, 1, 1, 572, 572),
  1, &_features_init_block_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_weights, AI_STATIC,
  4, 0x1,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 1, 3, 24, 72),
  1, &_features_init_block_activ_Relu_output_0_weights_array, &_features_init_block_activ_Relu_output_0_weights_array_intq)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  6, 0x1,
  AI_SHAPE_INIT(4, 1, 8, 112, 112), AI_STRIDE_INIT(4, 1, 1, 8, 896),
  1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 217, 1, 1), AI_STRIDE_INIT(4, 1, 1, 217, 217),
  1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  8, 0x1,
  AI_SHAPE_INIT(4, 8, 3, 3, 1), AI_STRIDE_INIT(4, 1, 8, 8, 24),
  1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  10, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 112, 112), AI_STRIDE_INIT(4, 1, 1, 16, 1792),
  1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 1, 1, 32, 32),
  1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  12, 0x1,
  AI_SHAPE_INIT(4, 8, 1, 1, 16), AI_STRIDE_INIT(4, 1, 8, 128, 128),
  1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  14, 0x1,
  AI_SHAPE_INIT(4, 1, 16, 56, 56), AI_STRIDE_INIT(4, 1, 1, 16, 896),
  1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 433, 1, 1), AI_STRIDE_INIT(4, 1, 1, 433, 433),
  1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  16, 0x1,
  AI_SHAPE_INIT(4, 16, 3, 3, 1), AI_STRIDE_INIT(4, 1, 16, 16, 48),
  1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  18, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 56, 56), AI_STRIDE_INIT(4, 1, 1, 32, 1792),
  1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 1, 1, 64, 64),
  1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  20, 0x1,
  AI_SHAPE_INIT(4, 16, 1, 1, 32), AI_STRIDE_INIT(4, 1, 16, 512, 512),
  1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  22, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 56, 56), AI_STRIDE_INIT(4, 1, 1, 32, 1792),
  1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 865, 1, 1), AI_STRIDE_INIT(4, 1, 1, 865, 865),
  1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  24, 0x1,
  AI_SHAPE_INIT(4, 32, 3, 3, 1), AI_STRIDE_INIT(4, 1, 32, 32, 96),
  1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  26, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 56, 56), AI_STRIDE_INIT(4, 1, 1, 32, 1792),
  1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 1, 1, 128, 128),
  1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  28, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 32), AI_STRIDE_INIT(4, 1, 32, 1024, 1024),
  1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  30, 0x1,
  AI_SHAPE_INIT(4, 1, 32, 28, 28), AI_STRIDE_INIT(4, 1, 1, 32, 896),
  1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 865, 1, 1), AI_STRIDE_INIT(4, 1, 1, 865, 865),
  1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  32, 0x1,
  AI_SHAPE_INIT(4, 32, 3, 3, 1), AI_STRIDE_INIT(4, 1, 32, 32, 96),
  1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  34, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 28, 28), AI_STRIDE_INIT(4, 1, 1, 64, 1792),
  1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 1, 1, 128, 128),
  1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  36, 0x1,
  AI_SHAPE_INIT(4, 32, 1, 1, 64), AI_STRIDE_INIT(4, 1, 32, 2048, 2048),
  1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  38, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 28, 28), AI_STRIDE_INIT(4, 1, 1, 64, 1792),
  1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 1729, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1729, 1729),
  1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  40, 0x1,
  AI_SHAPE_INIT(4, 64, 3, 3, 1), AI_STRIDE_INIT(4, 1, 64, 64, 192),
  1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  41, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  42, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 28, 28), AI_STRIDE_INIT(4, 1, 1, 64, 1792),
  1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  43, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 1, 1, 256, 256),
  1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  44, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 64), AI_STRIDE_INIT(4, 1, 64, 4096, 4096),
  1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  45, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  46, 0x1,
  AI_SHAPE_INIT(4, 1, 64, 14, 14), AI_STRIDE_INIT(4, 1, 1, 64, 896),
  1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  47, 0x0,
  AI_SHAPE_INIT(4, 1, 1729, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1729, 1729),
  1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  48, 0x1,
  AI_SHAPE_INIT(4, 64, 3, 3, 1), AI_STRIDE_INIT(4, 1, 64, 64, 192),
  1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  49, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  50, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  51, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 1, 1, 256, 256),
  1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  52, 0x1,
  AI_SHAPE_INIT(4, 64, 1, 1, 128), AI_STRIDE_INIT(4, 1, 64, 8192, 8192),
  1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  53, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  54, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  55, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  56, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  57, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  58, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  59, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  60, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 16384, 16384),
  1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  61, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  62, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  63, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  64, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  66, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  67, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  68, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 16384, 16384),
  1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  69, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  70, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  71, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  72, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  73, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  74, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  75, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  76, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 16384, 16384),
  1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  78, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  79, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  80, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  82, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  84, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 16384, 16384),
  1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  85, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  86, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  88, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  89, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  90, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 14, 14), AI_STRIDE_INIT(4, 1, 1, 128, 1792),
  1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  91, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  92, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 1, 128, 16384, 16384),
  1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  94, 0x1,
  AI_SHAPE_INIT(4, 1, 128, 7, 7), AI_STRIDE_INIT(4, 1, 1, 128, 896),
  1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  95, 0x0,
  AI_SHAPE_INIT(4, 1, 3457, 1, 1), AI_STRIDE_INIT(4, 1, 1, 3457, 3457),
  1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  96, 0x1,
  AI_SHAPE_INIT(4, 128, 3, 3, 1), AI_STRIDE_INIT(4, 1, 128, 128, 384),
  1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  97, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  98, 0x1,
  AI_SHAPE_INIT(4, 1, 256, 7, 7), AI_STRIDE_INIT(4, 1, 1, 256, 1792),
  1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  99, 0x0,
  AI_SHAPE_INIT(4, 1, 512, 1, 1), AI_STRIDE_INIT(4, 1, 1, 512, 512),
  1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  100, 0x1,
  AI_SHAPE_INIT(4, 128, 1, 1, 256), AI_STRIDE_INIT(4, 1, 128, 32768, 32768),
  1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_bias, AI_STATIC,
  101, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_output, AI_STATIC,
  102, 0x1,
  AI_SHAPE_INIT(4, 1, 256, 7, 7), AI_STRIDE_INIT(4, 1, 1, 256, 1792),
  1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  103, 0x0,
  AI_SHAPE_INIT(4, 1, 6913, 1, 1), AI_STRIDE_INIT(4, 1, 1, 6913, 6913),
  1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_weights, AI_STATIC,
  104, 0x1,
  AI_SHAPE_INIT(4, 256, 3, 3, 1), AI_STRIDE_INIT(4, 1, 256, 256, 768),
  1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_bias, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_bias_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_output, AI_STATIC,
  106, 0x1,
  AI_SHAPE_INIT(4, 1, 256, 7, 7), AI_STRIDE_INIT(4, 1, 1, 256, 1792),
  1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array_intq)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0, AI_STATIC,
  107, 0x0,
  AI_SHAPE_INIT(4, 1, 1024, 1, 1), AI_STRIDE_INIT(4, 1, 1, 1024, 1024),
  1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0_array, NULL)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_weights, AI_STATIC,
  108, 0x1,
  AI_SHAPE_INIT(4, 256, 1, 1, 256), AI_STRIDE_INIT(4, 1, 256, 65536, 65536),
  1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array_intq)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  input_Transpose_output, AI_STATIC,
  109, 0x1,
  AI_SHAPE_INIT(4, 1, 3, 224, 224), AI_STRIDE_INIT(4, 1, 1, 3, 672),
  1, &input_Transpose_output_array, &input_Transpose_output_array_intq)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  input_output, AI_STATIC,
  110, 0x1,
  AI_SHAPE_INIT(4, 1, 224, 224, 3), AI_STRIDE_INIT(4, 1, 1, 224, 50176),
  1, &input_output_array, &input_output_array_intq)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  output_QuantizeLinear_Input_bias, AI_STATIC,
  111, 0x0,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 4, 4, 400, 400),
  1, &output_QuantizeLinear_Input_bias_array, NULL)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  output_QuantizeLinear_Input_output, AI_STATIC,
  112, 0x1,
  AI_SHAPE_INIT(4, 1, 100, 1, 1), AI_STRIDE_INIT(4, 1, 1, 100, 100),
  1, &output_QuantizeLinear_Input_output_array, &output_QuantizeLinear_Input_output_array_intq)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  output_QuantizeLinear_Input_scratch0, AI_STATIC,
  113, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 2, 2, 512, 512),
  1, &output_QuantizeLinear_Input_scratch0_array, NULL)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  output_QuantizeLinear_Input_weights, AI_STATIC,
  114, 0x1,
  AI_SHAPE_INIT(4, 256, 100, 1, 1), AI_STRIDE_INIT(4, 1, 256, 25600, 25600),
  1, &output_QuantizeLinear_Input_weights_array, &output_QuantizeLinear_Input_weights_array_intq)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  output_QuantizeLinear_Input_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_final_pool_AveragePool_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &output_QuantizeLinear_Input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &output_QuantizeLinear_Input_weights, &output_QuantizeLinear_Input_bias),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &output_QuantizeLinear_Input_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  output_QuantizeLinear_Input_layer, 153,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense_integer_SSSA,
  &output_QuantizeLinear_Input_chain,
  NULL, &output_QuantizeLinear_Input_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_final_pool_AveragePool_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_final_pool_AveragePool_output_0_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  _features_final_pool_AveragePool_output_0_layer, 143,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap_integer_INT8,
  &_features_final_pool_AveragePool_output_0_chain,
  NULL, &output_QuantizeLinear_Input_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(7, 7), 
  .pool_stride = AI_SHAPE_2D_INIT(1, 1), 
  .count_include_pad = 1, 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_weights, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage5_unit2_pw_conv_activ_Relu_output_0_layer, 140,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage5_unit2_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_final_pool_AveragePool_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_weights, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage5_unit2_dw_conv_activ_Relu_output_0_layer, 137,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage5_unit2_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage5_unit2_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 256, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_weights, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage5_unit1_pw_conv_activ_Relu_output_0_layer, 134,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage5_unit1_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage5_unit2_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_weights, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage5_unit1_dw_conv_activ_Relu_output_0_layer, 131,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage5_unit1_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage5_unit1_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit6_pw_conv_activ_Relu_output_0_layer, 128,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit6_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage5_unit1_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit6_dw_conv_activ_Relu_output_0_layer, 125,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit6_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit6_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit5_pw_conv_activ_Relu_output_0_layer, 122,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit5_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit6_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit5_dw_conv_activ_Relu_output_0_layer, 119,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit5_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit5_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit4_pw_conv_activ_Relu_output_0_layer, 116,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit4_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit5_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit4_dw_conv_activ_Relu_output_0_layer, 113,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit4_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit4_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit3_pw_conv_activ_Relu_output_0_layer, 110,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit3_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit4_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit3_dw_conv_activ_Relu_output_0_layer, 107,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit3_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit3_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit2_pw_conv_activ_Relu_output_0_layer, 104,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit2_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit3_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit2_dw_conv_activ_Relu_output_0_layer, 101,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit2_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit2_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_weights, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit1_pw_conv_activ_Relu_output_0_layer, 98,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit1_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit2_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_weights, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage4_unit1_dw_conv_activ_Relu_output_0_layer, 95,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage4_unit1_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit1_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 64, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_weights, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage3_unit2_pw_conv_activ_Relu_output_0_layer, 92,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage3_unit2_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage4_unit1_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_weights, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage3_unit2_dw_conv_activ_Relu_output_0_layer, 89,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage3_unit2_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage3_unit2_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 64, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_weights, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage3_unit1_pw_conv_activ_Relu_output_0_layer, 86,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage3_unit1_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage3_unit2_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_weights, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage3_unit1_dw_conv_activ_Relu_output_0_layer, 83,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage3_unit1_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage3_unit1_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_weights, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage2_unit2_pw_conv_activ_Relu_output_0_layer, 80,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage2_unit2_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage3_unit1_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_weights, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage2_unit2_dw_conv_activ_Relu_output_0_layer, 77,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage2_unit2_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage2_unit2_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_weights, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage2_unit1_pw_conv_activ_Relu_output_0_layer, 74,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage2_unit1_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage2_unit2_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_weights, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage2_unit1_dw_conv_activ_Relu_output_0_layer, 71,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage2_unit1_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage2_unit1_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 16, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_weights, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage1_unit1_pw_conv_activ_Relu_output_0_layer, 68,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage1_unit1_pw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage2_unit1_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_init_block_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_weights, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_stage1_unit1_dw_conv_activ_Relu_output_0_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_stage1_unit1_dw_conv_activ_Relu_output_0_chain,
  NULL, &_features_stage1_unit1_pw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 8, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_Transpose_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_init_block_activ_Relu_output_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &_features_init_block_activ_Relu_output_0_weights, &_features_init_block_activ_Relu_output_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &_features_init_block_activ_Relu_output_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  _features_init_block_activ_Relu_output_0_layer, 62,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_integer_SSSA,
  &_features_init_block_activ_Relu_output_0_chain,
  NULL, &_features_stage1_unit1_dw_conv_activ_Relu_output_0_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  input_Transpose_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_Transpose_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  input_Transpose_layer, 2,
  TRANSPOSE_TYPE, 0x0, NULL,
  transpose, forward_transpose,
  &input_Transpose_chain,
  NULL, &_features_init_block_activ_Relu_output_0_layer, AI_STATIC, 
  .out_mapping = AI_SHAPE_INIT(6, AI_SHAPE_IN_CHANNEL, AI_SHAPE_HEIGHT, AI_SHAPE_CHANNEL, AI_SHAPE_WIDTH, AI_SHAPE_DEPTH, AI_SHAPE_EXTENSION), 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 244544, 1, 1),
    244544, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 301060, 1, 1),
    301060, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_QUANTIZED_A025_PT_36PORCIENTO_IN_NUM, &input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_QUANTIZED_A025_PT_36PORCIENTO_OUT_NUM, &output_QuantizeLinear_Input_output),
  &input_Transpose_layer, 0x0c8acd4e, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 244544, 1, 1),
      244544, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 301060, 1, 1),
      301060, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_QUANTIZED_A025_PT_36PORCIENTO_IN_NUM, &input_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_QUANTIZED_A025_PT_36PORCIENTO_OUT_NUM, &output_QuantizeLinear_Input_output),
  &input_Transpose_layer, 0x0c8acd4e, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool quantized_a025_pt_36porciento_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_quantized_a025_pt_36porciento_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    input_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    input_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    input_Transpose_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 150528);
    input_Transpose_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 150528);
    _features_init_block_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_init_block_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_init_block_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 572);
    _features_init_block_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 572);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 200704);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 200704);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 98560);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 98560);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 436);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 436);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50612);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50612);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 150964);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 150964);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 128);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 128);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 100480);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 100480);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 101348);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 101348);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 128);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 128);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50304);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50304);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 52036);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 52036);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50432);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 50432);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 52164);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 52164);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25344);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25344);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 28804);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 28804);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 25600);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 29060);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 512);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 13056);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 13056);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 19972);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 19972);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 1024);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 1024);
    _features_final_pool_AveragePool_output_0_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    _features_final_pool_AveragePool_output_0_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 0);
    output_QuantizeLinear_Input_scratch0_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    output_QuantizeLinear_Input_scratch0_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 256);
    output_QuantizeLinear_Input_output_array.data = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 768);
    output_QuantizeLinear_Input_output_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_activations_map[0] + 768);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}




/******************************************************************************/
AI_DECLARE_STATIC
ai_bool quantized_a025_pt_36porciento_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_quantized_a025_pt_36porciento_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    _features_init_block_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_init_block_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 0);
    _features_init_block_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 0);
    _features_init_block_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_init_block_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 216);
    _features_init_block_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 216);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 248);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 248);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 320);
    _features_stage1_unit1_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 320);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 352);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 352);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 480);
    _features_stage1_unit1_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 480);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 544);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 544);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 688);
    _features_stage2_unit1_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 688);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 752);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 752);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1264);
    _features_stage2_unit1_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1264);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1392);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1392);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1680);
    _features_stage2_unit2_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1680);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1808);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 1808);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 2832);
    _features_stage2_unit2_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 2832);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 2960);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 2960);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 3248);
    _features_stage3_unit1_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 3248);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 3376);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 3376);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 5424);
    _features_stage3_unit1_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 5424);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 5680);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 5680);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 6256);
    _features_stage3_unit2_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 6256);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 6512);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 6512);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 10608);
    _features_stage3_unit2_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 10608);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 10864);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 10864);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 11440);
    _features_stage4_unit1_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 11440);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 11696);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 11696);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 19888);
    _features_stage4_unit1_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 19888);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 20400);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 20400);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 21552);
    _features_stage4_unit2_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 21552);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 22064);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 22064);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 38448);
    _features_stage4_unit2_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 38448);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 38960);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 38960);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 40112);
    _features_stage4_unit3_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 40112);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 40624);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 40624);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 57008);
    _features_stage4_unit3_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 57008);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 57520);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 57520);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 58672);
    _features_stage4_unit4_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 58672);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 59184);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 59184);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 75568);
    _features_stage4_unit4_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 75568);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 76080);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 76080);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 77232);
    _features_stage4_unit5_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 77232);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 77744);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 77744);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 94128);
    _features_stage4_unit5_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 94128);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 94640);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 94640);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 95792);
    _features_stage4_unit6_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 95792);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 96304);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 96304);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 112688);
    _features_stage4_unit6_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 112688);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 113200);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 113200);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 114352);
    _features_stage5_unit1_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 114352);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 114864);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 114864);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 147632);
    _features_stage5_unit1_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 147632);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 148656);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 148656);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 150960);
    _features_stage5_unit2_dw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 150960);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 151984);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 151984);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_bias_array.format |= AI_FMT_FLAG_CONST;
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 217520);
    _features_stage5_unit2_pw_conv_activ_Relu_output_0_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 217520);
    output_QuantizeLinear_Input_weights_array.format |= AI_FMT_FLAG_CONST;
    output_QuantizeLinear_Input_weights_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 218544);
    output_QuantizeLinear_Input_weights_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 218544);
    output_QuantizeLinear_Input_bias_array.format |= AI_FMT_FLAG_CONST;
    output_QuantizeLinear_Input_bias_array.data = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 244144);
    output_QuantizeLinear_Input_bias_array.data_start = AI_PTR(g_quantized_a025_pt_36porciento_weights_map[0] + 244144);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/



AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_quantized_a025_pt_36porciento_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_NAME,
      .model_signature   = AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 40890516,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0c8acd4e,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}



AI_API_ENTRY
ai_bool ai_quantized_a025_pt_36porciento_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_NAME,
      .model_signature   = AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 40890516,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0c8acd4e,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_error ai_quantized_a025_pt_36porciento_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}


AI_API_ENTRY
ai_error ai_quantized_a025_pt_36porciento_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    AI_CONTEXT_OBJ(&AI_NET_OBJ_INSTANCE),
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}


AI_API_ENTRY
ai_error ai_quantized_a025_pt_36porciento_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
  ai_error err;
  ai_network_params params;

  err = ai_quantized_a025_pt_36porciento_create(network, AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_CONFIG);
  if (err.type != AI_ERROR_NONE) {
    return err;
  }
  
  if (ai_quantized_a025_pt_36porciento_data_params_get(&params) != true) {
    err = ai_quantized_a025_pt_36porciento_get_error(*network);
    return err;
  }
#if defined(AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; activations && idx<params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
  }
#endif
#if defined(AI_QUANTIZED_A025_PT_36PORCIENTO_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; weights && idx<params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
  }
#endif
  if (ai_quantized_a025_pt_36porciento_init(*network, &params) != true) {
    err = ai_quantized_a025_pt_36porciento_get_error(*network);
  }
  return err;
}


AI_API_ENTRY
ai_buffer* ai_quantized_a025_pt_36porciento_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_buffer* ai_quantized_a025_pt_36porciento_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_handle ai_quantized_a025_pt_36porciento_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}


AI_API_ENTRY
ai_bool ai_quantized_a025_pt_36porciento_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = AI_NETWORK_OBJ(ai_platform_network_init(network, params));
  ai_bool ok = true;

  if (!net_ctx) return false;
  ok &= quantized_a025_pt_36porciento_configure_weights(net_ctx, params);
  ok &= quantized_a025_pt_36porciento_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_quantized_a025_pt_36porciento_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}


AI_API_ENTRY
ai_i32 ai_quantized_a025_pt_36porciento_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_QUANTIZED_A025_PT_36PORCIENTO_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

