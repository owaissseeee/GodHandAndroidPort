#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0030FE68
// Address: 0x30fe68 - 0x312708
void func_0030FE68_0x30fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030FE68_0x30fe68");
#endif

    switch (ctx->pc) {
        case 0x311a70u: goto label_311a70;
        case 0x311a80u: goto label_311a80;
        case 0x311a90u: goto label_311a90;
        case 0x311aa0u: goto label_311aa0;
        case 0x311ab0u: goto label_311ab0;
        case 0x311ac0u: goto label_311ac0;
        case 0x311ad0u: goto label_311ad0;
        case 0x311ae0u: goto label_311ae0;
        case 0x311af0u: goto label_311af0;
        case 0x311b00u: goto label_311b00;
        case 0x311b10u: goto label_311b10;
        case 0x311b20u: goto label_311b20;
        case 0x311b30u: goto label_311b30;
        case 0x311b40u: goto label_311b40;
        case 0x311b50u: goto label_311b50;
        case 0x311b60u: goto label_311b60;
        case 0x311b70u: goto label_311b70;
        case 0x311b80u: goto label_311b80;
        case 0x311b90u: goto label_311b90;
        case 0x311ba0u: goto label_311ba0;
        case 0x311bb0u: goto label_311bb0;
        case 0x311bc0u: goto label_311bc0;
        case 0x311bd0u: goto label_311bd0;
        case 0x311be0u: goto label_311be0;
        case 0x311bf0u: goto label_311bf0;
        case 0x311c00u: goto label_311c00;
        case 0x311c10u: goto label_311c10;
        case 0x311c20u: goto label_311c20;
        case 0x311c30u: goto label_311c30;
        case 0x311c40u: goto label_311c40;
        case 0x311c50u: goto label_311c50;
        case 0x311c60u: goto label_311c60;
        case 0x311c70u: goto label_311c70;
        case 0x311c80u: goto label_311c80;
        case 0x311c90u: goto label_311c90;
        case 0x311ca0u: goto label_311ca0;
        case 0x311cb0u: goto label_311cb0;
        case 0x311cc0u: goto label_311cc0;
        case 0x311cd0u: goto label_311cd0;
        case 0x311ce0u: goto label_311ce0;
        case 0x311cf0u: goto label_311cf0;
        case 0x311d00u: goto label_311d00;
        case 0x311d10u: goto label_311d10;
        case 0x311d20u: goto label_311d20;
        case 0x311d30u: goto label_311d30;
        case 0x311d40u: goto label_311d40;
        case 0x311d50u: goto label_311d50;
        case 0x311d60u: goto label_311d60;
        case 0x311d70u: goto label_311d70;
        case 0x311d80u: goto label_311d80;
        case 0x311d90u: goto label_311d90;
        case 0x311da0u: goto label_311da0;
        case 0x311db0u: goto label_311db0;
        case 0x311dc0u: goto label_311dc0;
        case 0x311dd0u: goto label_311dd0;
        case 0x311de0u: goto label_311de0;
        case 0x311df0u: goto label_311df0;
        case 0x311e00u: goto label_311e00;
        case 0x311e10u: goto label_311e10;
        case 0x311e20u: goto label_311e20;
        case 0x311e30u: goto label_311e30;
        case 0x311e40u: goto label_311e40;
        case 0x311e50u: goto label_311e50;
        case 0x311e60u: goto label_311e60;
        case 0x311e70u: goto label_311e70;
        case 0x311e80u: goto label_311e80;
        case 0x311e90u: goto label_311e90;
        case 0x311ea0u: goto label_311ea0;
        case 0x311eb0u: goto label_311eb0;
        case 0x311ec0u: goto label_311ec0;
        case 0x311ed0u: goto label_311ed0;
        case 0x311ee0u: goto label_311ee0;
        case 0x311ef0u: goto label_311ef0;
        case 0x311f00u: goto label_311f00;
        case 0x311f10u: goto label_311f10;
        case 0x311f20u: goto label_311f20;
        case 0x311f30u: goto label_311f30;
        case 0x311f40u: goto label_311f40;
        case 0x311f50u: goto label_311f50;
        case 0x311f60u: goto label_311f60;
        case 0x311f70u: goto label_311f70;
        case 0x311f80u: goto label_311f80;
        case 0x311f90u: goto label_311f90;
        case 0x311fa0u: goto label_311fa0;
        case 0x311fb0u: goto label_311fb0;
        case 0x311fc0u: goto label_311fc0;
        case 0x311fd0u: goto label_311fd0;
        case 0x311fe0u: goto label_311fe0;
        case 0x311ff0u: goto label_311ff0;
        case 0x312000u: goto label_312000;
        case 0x312010u: goto label_312010;
        case 0x312020u: goto label_312020;
        case 0x312030u: goto label_312030;
        case 0x312040u: goto label_312040;
        case 0x312050u: goto label_312050;
        case 0x312060u: goto label_312060;
        case 0x312070u: goto label_312070;
        case 0x312080u: goto label_312080;
        case 0x312090u: goto label_312090;
        case 0x3120a0u: goto label_3120a0;
        case 0x3120b0u: goto label_3120b0;
        case 0x3120c0u: goto label_3120c0;
        case 0x3120d0u: goto label_3120d0;
        case 0x3120e0u: goto label_3120e0;
        case 0x3120f0u: goto label_3120f0;
        case 0x312100u: goto label_312100;
        case 0x312110u: goto label_312110;
        case 0x312120u: goto label_312120;
        case 0x312130u: goto label_312130;
        case 0x312140u: goto label_312140;
        case 0x312150u: goto label_312150;
        case 0x312160u: goto label_312160;
        case 0x312170u: goto label_312170;
        case 0x312180u: goto label_312180;
        case 0x312190u: goto label_312190;
        case 0x3121a0u: goto label_3121a0;
        case 0x3121b0u: goto label_3121b0;
        case 0x3121c0u: goto label_3121c0;
        case 0x3121d0u: goto label_3121d0;
        case 0x3121e0u: goto label_3121e0;
        case 0x3121f0u: goto label_3121f0;
        case 0x312200u: goto label_312200;
        case 0x312210u: goto label_312210;
        case 0x312220u: goto label_312220;
        case 0x312230u: goto label_312230;
        case 0x312240u: goto label_312240;
        case 0x312250u: goto label_312250;
        case 0x312260u: goto label_312260;
        case 0x312270u: goto label_312270;
        case 0x312280u: goto label_312280;
        case 0x312290u: goto label_312290;
        case 0x3122a0u: goto label_3122a0;
        case 0x3122b0u: goto label_3122b0;
        case 0x3122c0u: goto label_3122c0;
        case 0x3122d0u: goto label_3122d0;
        case 0x3122e0u: goto label_3122e0;
        case 0x3122f0u: goto label_3122f0;
        case 0x312300u: goto label_312300;
        case 0x312310u: goto label_312310;
        case 0x312320u: goto label_312320;
        case 0x312330u: goto label_312330;
        case 0x312340u: goto label_312340;
        case 0x312350u: goto label_312350;
        case 0x312360u: goto label_312360;
        case 0x312370u: goto label_312370;
        case 0x312380u: goto label_312380;
        case 0x312390u: goto label_312390;
        case 0x3123a0u: goto label_3123a0;
        case 0x3123b0u: goto label_3123b0;
        case 0x3123c0u: goto label_3123c0;
        case 0x3123d0u: goto label_3123d0;
        case 0x3123e0u: goto label_3123e0;
        case 0x3123f0u: goto label_3123f0;
        case 0x312400u: goto label_312400;
        case 0x312410u: goto label_312410;
        case 0x312420u: goto label_312420;
        case 0x312430u: goto label_312430;
        case 0x312440u: goto label_312440;
        case 0x312450u: goto label_312450;
        case 0x312460u: goto label_312460;
        case 0x312470u: goto label_312470;
        case 0x312480u: goto label_312480;
        case 0x312490u: goto label_312490;
        case 0x3124a0u: goto label_3124a0;
        case 0x3124b0u: goto label_3124b0;
        case 0x3124c0u: goto label_3124c0;
        case 0x3124d0u: goto label_3124d0;
        case 0x3124e0u: goto label_3124e0;
        case 0x3124f0u: goto label_3124f0;
        case 0x312500u: goto label_312500;
        case 0x312510u: goto label_312510;
        case 0x312520u: goto label_312520;
        case 0x312530u: goto label_312530;
        case 0x312540u: goto label_312540;
        case 0x312550u: goto label_312550;
        case 0x312560u: goto label_312560;
        case 0x312570u: goto label_312570;
        case 0x312580u: goto label_312580;
        case 0x312590u: goto label_312590;
        case 0x3125a0u: goto label_3125a0;
        case 0x3125d4u: goto label_3125d4;
        case 0x3125e0u: goto label_3125e0;
        case 0x3125f8u: goto label_3125f8;
        case 0x312634u: goto label_312634;
        case 0x312688u: goto label_312688;
        case 0x3126c0u: goto label_3126c0;
        case 0x3126e4u: goto label_3126e4;
        default: break;
    }

    ctx->pc = 0x30fe68u;

    // 0x30fe68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30fe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30fe6c: 0x240203d8  addiu       $v0, $zero, 0x3D8
    ctx->pc = 0x30fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
    // 0x30fe70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30fe74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30fe78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30fe80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30fe80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30fe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30fe88: 0x120208eb  beq         $s0, $v0, . + 4 + (0x8EB << 2)
    ctx->pc = 0x30FE88u;
    {
        const bool branch_taken_0x30fe88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE88u;
        // 0x30fe8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe88) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x30FE90u;
    // 0x30fe90: 0x2a0203d9  slti        $v0, $s0, 0x3D9
    ctx->pc = 0x30fe90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)985) ? 1 : 0);
    // 0x30fe94: 0x10400391  beqz        $v0, . + 4 + (0x391 << 2)
    ctx->pc = 0x30FE94u;
    {
        const bool branch_taken_0x30fe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE94u;
        // 0x30fe98: 0x24020341  addiu       $v0, $zero, 0x341 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 833));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe94) {
            ctx->pc = 0x310CDCu;
            goto label_310cdc;
        }
    }
    ctx->pc = 0x30FE9Cu;
    // 0x30fe9c: 0x1202083e  beq         $s0, $v0, . + 4 + (0x83E << 2)
    ctx->pc = 0x30FE9Cu;
    {
        const bool branch_taken_0x30fe9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE9Cu;
        // 0x30fea0: 0x2a020342  slti        $v0, $s0, 0x342 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)834) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe9c) {
            ctx->pc = 0x311F98u;
            goto label_311f98;
        }
    }
    ctx->pc = 0x30FEA4u;
    // 0x30fea4: 0x104001df  beqz        $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x30FEA4u;
    {
        const bool branch_taken_0x30fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEA4u;
        // 0x30fea8: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fea4) {
            ctx->pc = 0x310624u;
            goto label_310624;
        }
    }
    ctx->pc = 0x30FEACu;
    // 0x30feac: 0x1202070e  beq         $s0, $v0, . + 4 + (0x70E << 2)
    ctx->pc = 0x30FEACu;
    {
        const bool branch_taken_0x30feac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEACu;
        // 0x30feb0: 0x2a02027f  slti        $v0, $s0, 0x27F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)639) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feac) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FEB4u;
    // 0x30feb4: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x30FEB4u;
    {
        const bool branch_taken_0x30feb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEB4u;
        // 0x30feb8: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feb4) {
            ctx->pc = 0x310298u;
            goto label_310298;
        }
    }
    ctx->pc = 0x30FEBCu;
    // 0x30febc: 0x1202070a  beq         $s0, $v0, . + 4 + (0x70A << 2)
    ctx->pc = 0x30FEBCu;
    {
        const bool branch_taken_0x30febc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEBCu;
        // 0x30fec0: 0x2a020224  slti        $v0, $s0, 0x224 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)548) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30febc) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FEC4u;
    // 0x30fec4: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x30FEC4u;
    {
        const bool branch_taken_0x30fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEC4u;
        // 0x30fec8: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fec4) {
            ctx->pc = 0x310084u;
            goto label_310084;
        }
    }
    ctx->pc = 0x30FECCu;
    // 0x30fecc: 0x12020706  beq         $s0, $v0, . + 4 + (0x706 << 2)
    ctx->pc = 0x30FECCu;
    {
        const bool branch_taken_0x30fecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FECCu;
        // 0x30fed0: 0x2a02020e  slti        $v0, $s0, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)526) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fecc) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FED4u;
    // 0x30fed4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x30FED4u;
    {
        const bool branch_taken_0x30fed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FED4u;
        // 0x30fed8: 0x24020204  addiu       $v0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fed4) {
            ctx->pc = 0x30FFBCu;
            goto label_30ffbc;
        }
    }
    ctx->pc = 0x30FEDCu;
    // 0x30fedc: 0x12020702  beq         $s0, $v0, . + 4 + (0x702 << 2)
    ctx->pc = 0x30FEDCu;
    {
        const bool branch_taken_0x30fedc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEDCu;
        // 0x30fee0: 0x2a020205  slti        $v0, $s0, 0x205 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)517) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fedc) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FEE4u;
    // 0x30fee4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30FEE4u;
    {
        const bool branch_taken_0x30fee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEE4u;
        // 0x30fee8: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fee4) {
            ctx->pc = 0x30FF6Cu;
            goto label_30ff6c;
        }
    }
    ctx->pc = 0x30FEECu;
    // 0x30feec: 0x120206ea  beq         $s0, $v0, . + 4 + (0x6EA << 2)
    ctx->pc = 0x30FEECu;
    {
        const bool branch_taken_0x30feec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEECu;
        // 0x30fef0: 0x2a020104  slti        $v0, $s0, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)260) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feec) {
            ctx->pc = 0x311A98u;
            goto label_311a98;
        }
    }
    ctx->pc = 0x30FEF4u;
    // 0x30fef4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30FEF4u;
    {
        const bool branch_taken_0x30fef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEF4u;
        // 0x30fef8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fef4) {
            ctx->pc = 0x30FF2Cu;
            goto label_30ff2c;
        }
    }
    ctx->pc = 0x30FEFCu;
    // 0x30fefc: 0x120206de  beq         $s0, $v0, . + 4 + (0x6DE << 2)
    ctx->pc = 0x30FEFCu;
    {
        const bool branch_taken_0x30fefc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEFCu;
        // 0x30ff00: 0x2a020101  slti        $v0, $s0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fefc) {
            ctx->pc = 0x311A78u;
            goto label_311a78;
        }
    }
    ctx->pc = 0x30FF04u;
    // 0x30ff04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FF04u;
    {
        const bool branch_taken_0x30ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff04) {
            ctx->pc = 0x30FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF04u;
            // 0x30ff08: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FF1Cu;
            goto label_30ff1c;
        }
    }
    ctx->pc = 0x30FF0Cu;
    // 0x30ff0c: 0x120006d6  beqz        $s0, . + 4 + (0x6D6 << 2)
    ctx->pc = 0x30FF0Cu;
    {
        const bool branch_taken_0x30ff0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF0Cu;
        // 0x30ff10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff0c) {
            ctx->pc = 0x311A68u;
            goto label_311a68;
        }
    }
    ctx->pc = 0x30FF14u;
    // 0x30ff14: 0x100009a3  b           . + 4 + (0x9A3 << 2)
    ctx->pc = 0x30FF14u;
    {
        const bool branch_taken_0x30ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff14) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x30FF1Cu;
label_30ff1c:
    // 0x30ff1c: 0x120206da  beq         $s0, $v0, . + 4 + (0x6DA << 2)
    ctx->pc = 0x30FF1Cu;
    {
        const bool branch_taken_0x30ff1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF1Cu;
        // 0x30ff20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff1c) {
            ctx->pc = 0x311A88u;
            goto label_311a88;
        }
    }
    ctx->pc = 0x30FF24u;
    // 0x30ff24: 0x1000099f  b           . + 4 + (0x99F << 2)
    ctx->pc = 0x30FF24u;
    {
        const bool branch_taken_0x30ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff24) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x30FF2Cu;
label_30ff2c:
    // 0x30ff2c: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x30ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x30ff30: 0x120206ed  beq         $s0, $v0, . + 4 + (0x6ED << 2)
    ctx->pc = 0x30FF30u;
    {
        const bool branch_taken_0x30ff30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF30u;
        // 0x30ff34: 0x2a020202  slti        $v0, $s0, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)514) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff30) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF38u;
    // 0x30ff38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FF38u;
    {
        const bool branch_taken_0x30ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF38u;
        // 0x30ff3c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff38) {
            ctx->pc = 0x30FF50u;
            goto label_30ff50;
        }
    }
    ctx->pc = 0x30FF40u;
    // 0x30ff40: 0x120206e9  beq         $s0, $v0, . + 4 + (0x6E9 << 2)
    ctx->pc = 0x30FF40u;
    {
        const bool branch_taken_0x30ff40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF40u;
        // 0x30ff44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff40) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF48u;
    // 0x30ff48: 0x10000996  b           . + 4 + (0x996 << 2)
    ctx->pc = 0x30FF48u;
    {
        const bool branch_taken_0x30ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff48) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x30FF50u;
label_30ff50:
    // 0x30ff50: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x30ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x30ff54: 0x120206e4  beq         $s0, $v0, . + 4 + (0x6E4 << 2)
    ctx->pc = 0x30FF54u;
    {
        const bool branch_taken_0x30ff54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF54u;
        // 0x30ff58: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff54) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF5Cu;
    // 0x30ff5c: 0x120206e2  beq         $s0, $v0, . + 4 + (0x6E2 << 2)
    ctx->pc = 0x30FF5Cu;
    {
        const bool branch_taken_0x30ff5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF5Cu;
        // 0x30ff60: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff5c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF64u;
    // 0x30ff64: 0x1000098f  b           . + 4 + (0x98F << 2)
    ctx->pc = 0x30FF64u;
    {
        const bool branch_taken_0x30ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff64) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x30FF6Cu;
label_30ff6c:
    // 0x30ff6c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x30ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x30ff70: 0x120206dd  beq         $s0, $v0, . + 4 + (0x6DD << 2)
    ctx->pc = 0x30FF70u;
    {
        const bool branch_taken_0x30ff70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF70u;
        // 0x30ff74: 0x2a020209  slti        $v0, $s0, 0x209 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)521) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff70) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF78u;
    // 0x30ff78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FF78u;
    {
        const bool branch_taken_0x30ff78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF78u;
        // 0x30ff7c: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff78) {
            ctx->pc = 0x30FF90u;
            goto label_30ff90;
        }
    }
    ctx->pc = 0x30FF80u;
    // 0x30ff80: 0x560206d9  bnel        $s0, $v0, . + 4 + (0x6D9 << 2)
    ctx->pc = 0x30FF80u;
    {
        const bool branch_taken_0x30ff80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ff80) {
            ctx->pc = 0x30FF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF80u;
            // 0x30ff84: 0x2a020207  slti        $v0, $s0, 0x207 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)519) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF88u;
    // 0x30ff88: 0x100006d7  b           . + 4 + (0x6D7 << 2)
    ctx->pc = 0x30FF88u;
    {
        const bool branch_taken_0x30ff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ff88) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF90u;
label_30ff90:
    // 0x30ff90: 0x2402020a  addiu       $v0, $zero, 0x20A
    ctx->pc = 0x30ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x30ff94: 0x120206d4  beq         $s0, $v0, . + 4 + (0x6D4 << 2)
    ctx->pc = 0x30FF94u;
    {
        const bool branch_taken_0x30ff94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF94u;
        // 0x30ff98: 0x2a02020a  slti        $v0, $s0, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff94) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FF9Cu;
    // 0x30ff9c: 0x144006d2  bnez        $v0, . + 4 + (0x6D2 << 2)
    ctx->pc = 0x30FF9Cu;
    {
        const bool branch_taken_0x30ff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF9Cu;
        // 0x30ffa0: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff9c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFA4u;
    // 0x30ffa4: 0x120206d0  beq         $s0, $v0, . + 4 + (0x6D0 << 2)
    ctx->pc = 0x30FFA4u;
    {
        const bool branch_taken_0x30ffa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFA4u;
        // 0x30ffa8: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffa4) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFACu;
    // 0x30ffac: 0x120206ce  beq         $s0, $v0, . + 4 + (0x6CE << 2)
    ctx->pc = 0x30FFACu;
    {
        const bool branch_taken_0x30ffac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFACu;
        // 0x30ffb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffac) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFB4u;
    // 0x30ffb4: 0x1000097b  b           . + 4 + (0x97B << 2)
    ctx->pc = 0x30FFB4u;
    {
        const bool branch_taken_0x30ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffb4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x30FFBCu;
label_30ffbc:
    // 0x30ffbc: 0x24020216  addiu       $v0, $zero, 0x216
    ctx->pc = 0x30ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
    // 0x30ffc0: 0x120206c9  beq         $s0, $v0, . + 4 + (0x6C9 << 2)
    ctx->pc = 0x30FFC0u;
    {
        const bool branch_taken_0x30ffc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFC0u;
        // 0x30ffc4: 0x2a020217  slti        $v0, $s0, 0x217 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)535) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffc0) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFC8u;
    // 0x30ffc8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30FFC8u;
    {
        const bool branch_taken_0x30ffc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFC8u;
        // 0x30ffcc: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffc8) {
            ctx->pc = 0x31001Cu;
            goto label_31001c;
        }
    }
    ctx->pc = 0x30FFD0u;
    // 0x30ffd0: 0x120206c5  beq         $s0, $v0, . + 4 + (0x6C5 << 2)
    ctx->pc = 0x30FFD0u;
    {
        const bool branch_taken_0x30ffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFD0u;
        // 0x30ffd4: 0x2a020212  slti        $v0, $s0, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffd0) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFD8u;
    // 0x30ffd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FFD8u;
    {
        const bool branch_taken_0x30ffd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFD8u;
        // 0x30ffdc: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffd8) {
            ctx->pc = 0x30FFF0u;
            goto label_30fff0;
        }
    }
    ctx->pc = 0x30FFE0u;
    // 0x30ffe0: 0x560206c1  bnel        $s0, $v0, . + 4 + (0x6C1 << 2)
    ctx->pc = 0x30FFE0u;
    {
        const bool branch_taken_0x30ffe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ffe0) {
            ctx->pc = 0x30FFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FFE0u;
            // 0x30ffe4: 0x2a020210  slti        $v0, $s0, 0x210 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)528) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFE8u;
    // 0x30ffe8: 0x100006bf  b           . + 4 + (0x6BF << 2)
    ctx->pc = 0x30FFE8u;
    {
        const bool branch_taken_0x30ffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffe8) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFF0u;
label_30fff0:
    // 0x30fff0: 0x24020213  addiu       $v0, $zero, 0x213
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
    // 0x30fff4: 0x120206bc  beq         $s0, $v0, . + 4 + (0x6BC << 2)
    ctx->pc = 0x30FFF4u;
    {
        const bool branch_taken_0x30fff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFF4u;
        // 0x30fff8: 0x2a020213  slti        $v0, $s0, 0x213 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)531) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fff4) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x30FFFCu;
    // 0x30fffc: 0x144006ae  bnez        $v0, . + 4 + (0x6AE << 2)
    ctx->pc = 0x30FFFCu;
    {
        const bool branch_taken_0x30fffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFFCu;
        // 0x310000: 0x24020214  addiu       $v0, $zero, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fffc) {
            ctx->pc = 0x311AB8u;
            goto label_311ab8;
        }
    }
    ctx->pc = 0x310004u;
    // 0x310004: 0x120206b8  beq         $s0, $v0, . + 4 + (0x6B8 << 2)
    ctx->pc = 0x310004u;
    {
        const bool branch_taken_0x310004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310004u;
        // 0x310008: 0x24020215  addiu       $v0, $zero, 0x215 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310004) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x31000Cu;
    // 0x31000c: 0x120206b6  beq         $s0, $v0, . + 4 + (0x6B6 << 2)
    ctx->pc = 0x31000Cu;
    {
        const bool branch_taken_0x31000c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31000Cu;
        // 0x310010: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31000c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310014u;
    // 0x310014: 0x10000963  b           . + 4 + (0x963 << 2)
    ctx->pc = 0x310014u;
    {
        const bool branch_taken_0x310014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310014) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31001Cu;
label_31001c:
    // 0x31001c: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x31001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x310020: 0x120206b1  beq         $s0, $v0, . + 4 + (0x6B1 << 2)
    ctx->pc = 0x310020u;
    {
        const bool branch_taken_0x310020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310020u;
        // 0x310024: 0x2a02021d  slti        $v0, $s0, 0x21D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)541) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310020) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310028u;
    // 0x310028: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310028u;
    {
        const bool branch_taken_0x310028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310028u;
        // 0x31002c: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310028) {
            ctx->pc = 0x310058u;
            goto label_310058;
        }
    }
    ctx->pc = 0x310030u;
    // 0x310030: 0x120206ad  beq         $s0, $v0, . + 4 + (0x6AD << 2)
    ctx->pc = 0x310030u;
    {
        const bool branch_taken_0x310030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310030u;
        // 0x310034: 0x2a020218  slti        $v0, $s0, 0x218 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)536) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310030) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310038u;
    // 0x310038: 0x144006ab  bnez        $v0, . + 4 + (0x6AB << 2)
    ctx->pc = 0x310038u;
    {
        const bool branch_taken_0x310038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310038u;
        // 0x31003c: 0x2402021a  addiu       $v0, $zero, 0x21A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310038) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310040u;
    // 0x310040: 0x120206a9  beq         $s0, $v0, . + 4 + (0x6A9 << 2)
    ctx->pc = 0x310040u;
    {
        const bool branch_taken_0x310040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310040u;
        // 0x310044: 0x2402021b  addiu       $v0, $zero, 0x21B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310040) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310048u;
    // 0x310048: 0x120206a7  beq         $s0, $v0, . + 4 + (0x6A7 << 2)
    ctx->pc = 0x310048u;
    {
        const bool branch_taken_0x310048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310048u;
        // 0x31004c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310048) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310050u;
    // 0x310050: 0x10000954  b           . + 4 + (0x954 << 2)
    ctx->pc = 0x310050u;
    {
        const bool branch_taken_0x310050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310050) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310058u;
label_310058:
    // 0x310058: 0x2402021e  addiu       $v0, $zero, 0x21E
    ctx->pc = 0x310058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 542));
    // 0x31005c: 0x120206a2  beq         $s0, $v0, . + 4 + (0x6A2 << 2)
    ctx->pc = 0x31005Cu;
    {
        const bool branch_taken_0x31005c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31005Cu;
        // 0x310060: 0x2a02021e  slti        $v0, $s0, 0x21E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)542) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31005c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310064u;
    // 0x310064: 0x144006a0  bnez        $v0, . + 4 + (0x6A0 << 2)
    ctx->pc = 0x310064u;
    {
        const bool branch_taken_0x310064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310064u;
        // 0x310068: 0x2402021f  addiu       $v0, $zero, 0x21F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310064) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x31006Cu;
    // 0x31006c: 0x1202069e  beq         $s0, $v0, . + 4 + (0x69E << 2)
    ctx->pc = 0x31006Cu;
    {
        const bool branch_taken_0x31006c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31006Cu;
        // 0x310070: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31006c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310074u;
    // 0x310074: 0x1202069c  beq         $s0, $v0, . + 4 + (0x69C << 2)
    ctx->pc = 0x310074u;
    {
        const bool branch_taken_0x310074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310074u;
        // 0x310078: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310074) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x31007Cu;
    // 0x31007c: 0x10000949  b           . + 4 + (0x949 << 2)
    ctx->pc = 0x31007Cu;
    {
        const bool branch_taken_0x31007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31007c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310084u;
label_310084:
    // 0x310084: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x310084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x310088: 0x12020697  beq         $s0, $v0, . + 4 + (0x697 << 2)
    ctx->pc = 0x310088u;
    {
        const bool branch_taken_0x310088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310088u;
        // 0x31008c: 0x2a020257  slti        $v0, $s0, 0x257 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)599) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310088) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310090u;
    // 0x310090: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x310090u;
    {
        const bool branch_taken_0x310090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310090u;
        // 0x310094: 0x24020240  addiu       $v0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310090) {
            ctx->pc = 0x310194u;
            goto label_310194;
        }
    }
    ctx->pc = 0x310098u;
    // 0x310098: 0x12020693  beq         $s0, $v0, . + 4 + (0x693 << 2)
    ctx->pc = 0x310098u;
    {
        const bool branch_taken_0x310098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310098u;
        // 0x31009c: 0x2a020241  slti        $v0, $s0, 0x241 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)577) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310098) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3100A0u;
    // 0x3100a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3100A0u;
    {
        const bool branch_taken_0x3100a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100A0u;
        // 0x3100a4: 0x24020231  addiu       $v0, $zero, 0x231 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a0) {
            ctx->pc = 0x310118u;
            goto label_310118;
        }
    }
    ctx->pc = 0x3100A8u;
    // 0x3100a8: 0x1202069b  beq         $s0, $v0, . + 4 + (0x69B << 2)
    ctx->pc = 0x3100A8u;
    {
        const bool branch_taken_0x3100a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3100ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100A8u;
        // 0x3100ac: 0x2a020232  slti        $v0, $s0, 0x232 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)562) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a8) {
            ctx->pc = 0x311B18u;
            goto label_311b18;
        }
    }
    ctx->pc = 0x3100B0u;
    // 0x3100b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3100B0u;
    {
        const bool branch_taken_0x3100b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100B0u;
        // 0x3100b4: 0x24020225  addiu       $v0, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100b0) {
            ctx->pc = 0x3100D8u;
            goto label_3100d8;
        }
    }
    ctx->pc = 0x3100B8u;
    // 0x3100b8: 0x1202068b  beq         $s0, $v0, . + 4 + (0x68B << 2)
    ctx->pc = 0x3100B8u;
    {
        const bool branch_taken_0x3100b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100B8u;
        // 0x3100bc: 0x2a020225  slti        $v0, $s0, 0x225 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)549) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100b8) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3100C0u;
    // 0x3100c0: 0x14400689  bnez        $v0, . + 4 + (0x689 << 2)
    ctx->pc = 0x3100C0u;
    {
        const bool branch_taken_0x3100c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100C0u;
        // 0x3100c4: 0x24020230  addiu       $v0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100c0) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3100C8u;
    // 0x3100c8: 0x1202068f  beq         $s0, $v0, . + 4 + (0x68F << 2)
    ctx->pc = 0x3100C8u;
    {
        const bool branch_taken_0x3100c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100C8u;
        // 0x3100cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100c8) {
            ctx->pc = 0x311B08u;
            goto label_311b08;
        }
    }
    ctx->pc = 0x3100D0u;
    // 0x3100d0: 0x10000934  b           . + 4 + (0x934 << 2)
    ctx->pc = 0x3100D0u;
    {
        const bool branch_taken_0x3100d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3100d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3100D8u;
label_3100d8:
    // 0x3100d8: 0x2402023a  addiu       $v0, $zero, 0x23A
    ctx->pc = 0x3100d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 570));
    // 0x3100dc: 0x12020682  beq         $s0, $v0, . + 4 + (0x682 << 2)
    ctx->pc = 0x3100DCu;
    {
        const bool branch_taken_0x3100dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3100E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100DCu;
        // 0x3100e0: 0x2a02023b  slti        $v0, $s0, 0x23B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)571) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100dc) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3100E4u;
    // 0x3100e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3100E4u;
    {
        const bool branch_taken_0x3100e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100E4u;
        // 0x3100e8: 0x24020232  addiu       $v0, $zero, 0x232 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 562));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100e4) {
            ctx->pc = 0x3100FCu;
            goto label_3100fc;
        }
    }
    ctx->pc = 0x3100ECu;
    // 0x3100ec: 0x1202068a  beq         $s0, $v0, . + 4 + (0x68A << 2)
    ctx->pc = 0x3100ECu;
    {
        const bool branch_taken_0x3100ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100ECu;
        // 0x3100f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100ec) {
            ctx->pc = 0x311B18u;
            goto label_311b18;
        }
    }
    ctx->pc = 0x3100F4u;
    // 0x3100f4: 0x1000092b  b           . + 4 + (0x92B << 2)
    ctx->pc = 0x3100F4u;
    {
        const bool branch_taken_0x3100f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3100f4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3100FCu;
label_3100fc:
    // 0x3100fc: 0x2402023b  addiu       $v0, $zero, 0x23B
    ctx->pc = 0x3100fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
    // 0x310100: 0x12020679  beq         $s0, $v0, . + 4 + (0x679 << 2)
    ctx->pc = 0x310100u;
    {
        const bool branch_taken_0x310100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310100u;
        // 0x310104: 0x2402023f  addiu       $v0, $zero, 0x23F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310100) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310108u;
    // 0x310108: 0x12020697  beq         $s0, $v0, . + 4 + (0x697 << 2)
    ctx->pc = 0x310108u;
    {
        const bool branch_taken_0x310108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310108u;
        // 0x31010c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310108) {
            ctx->pc = 0x311B68u;
            goto label_311b68;
        }
    }
    ctx->pc = 0x310110u;
    // 0x310110: 0x10000924  b           . + 4 + (0x924 << 2)
    ctx->pc = 0x310110u;
    {
        const bool branch_taken_0x310110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310110) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310118u;
label_310118:
    // 0x310118: 0x24020246  addiu       $v0, $zero, 0x246
    ctx->pc = 0x310118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x31011c: 0x12020672  beq         $s0, $v0, . + 4 + (0x672 << 2)
    ctx->pc = 0x31011Cu;
    {
        const bool branch_taken_0x31011c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31011Cu;
        // 0x310120: 0x2a020247  slti        $v0, $s0, 0x247 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)583) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31011c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310124u;
    // 0x310124: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310124u;
    {
        const bool branch_taken_0x310124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310124u;
        // 0x310128: 0x24020242  addiu       $v0, $zero, 0x242 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310124) {
            ctx->pc = 0x310154u;
            goto label_310154;
        }
    }
    ctx->pc = 0x31012Cu;
    // 0x31012c: 0x1202066e  beq         $s0, $v0, . + 4 + (0x66E << 2)
    ctx->pc = 0x31012Cu;
    {
        const bool branch_taken_0x31012c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31012Cu;
        // 0x310130: 0x2a020242  slti        $v0, $s0, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31012c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310134u;
    // 0x310134: 0x1440066c  bnez        $v0, . + 4 + (0x66C << 2)
    ctx->pc = 0x310134u;
    {
        const bool branch_taken_0x310134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310134u;
        // 0x310138: 0x24020243  addiu       $v0, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310134) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x31013Cu;
    // 0x31013c: 0x1202066a  beq         $s0, $v0, . + 4 + (0x66A << 2)
    ctx->pc = 0x31013Cu;
    {
        const bool branch_taken_0x31013c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31013Cu;
        // 0x310140: 0x24020244  addiu       $v0, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31013c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310144u;
    // 0x310144: 0x12020668  beq         $s0, $v0, . + 4 + (0x668 << 2)
    ctx->pc = 0x310144u;
    {
        const bool branch_taken_0x310144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310144u;
        // 0x310148: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310144) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x31014Cu;
    // 0x31014c: 0x10000915  b           . + 4 + (0x915 << 2)
    ctx->pc = 0x31014Cu;
    {
        const bool branch_taken_0x31014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31014c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310154u;
label_310154:
    // 0x310154: 0x2402024f  addiu       $v0, $zero, 0x24F
    ctx->pc = 0x310154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
    // 0x310158: 0x12020663  beq         $s0, $v0, . + 4 + (0x663 << 2)
    ctx->pc = 0x310158u;
    {
        const bool branch_taken_0x310158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310158u;
        // 0x31015c: 0x2a020250  slti        $v0, $s0, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310158) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310160u;
    // 0x310160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310160u;
    {
        const bool branch_taken_0x310160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310160u;
        // 0x310164: 0x24020247  addiu       $v0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310160) {
            ctx->pc = 0x310178u;
            goto label_310178;
        }
    }
    ctx->pc = 0x310168u;
    // 0x310168: 0x1202065f  beq         $s0, $v0, . + 4 + (0x65F << 2)
    ctx->pc = 0x310168u;
    {
        const bool branch_taken_0x310168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310168u;
        // 0x31016c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310168) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310170u;
    // 0x310170: 0x1000090c  b           . + 4 + (0x90C << 2)
    ctx->pc = 0x310170u;
    {
        const bool branch_taken_0x310170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310170) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310178u;
label_310178:
    // 0x310178: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x310178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x31017c: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x31017Cu;
    {
        const bool branch_taken_0x31017c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31017Cu;
        // 0x310180: 0x24020253  addiu       $v0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31017c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310184u;
    // 0x310184: 0x12020650  beq         $s0, $v0, . + 4 + (0x650 << 2)
    ctx->pc = 0x310184u;
    {
        const bool branch_taken_0x310184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310184u;
        // 0x310188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310184) {
            ctx->pc = 0x311AC8u;
            goto label_311ac8;
        }
    }
    ctx->pc = 0x31018Cu;
    // 0x31018c: 0x10000905  b           . + 4 + (0x905 << 2)
    ctx->pc = 0x31018Cu;
    {
        const bool branch_taken_0x31018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31018c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310194u;
label_310194:
    // 0x310194: 0x24020266  addiu       $v0, $zero, 0x266
    ctx->pc = 0x310194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
    // 0x310198: 0x12020667  beq         $s0, $v0, . + 4 + (0x667 << 2)
    ctx->pc = 0x310198u;
    {
        const bool branch_taken_0x310198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310198u;
        // 0x31019c: 0x2a020267  slti        $v0, $s0, 0x267 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)615) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310198) {
            ctx->pc = 0x311B38u;
            goto label_311b38;
        }
    }
    ctx->pc = 0x3101A0u;
    // 0x3101a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3101A0u;
    {
        const bool branch_taken_0x3101a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101A0u;
        // 0x3101a4: 0x2402025a  addiu       $v0, $zero, 0x25A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101a0) {
            ctx->pc = 0x310208u;
            goto label_310208;
        }
    }
    ctx->pc = 0x3101A8u;
    // 0x3101a8: 0x1202064f  beq         $s0, $v0, . + 4 + (0x64F << 2)
    ctx->pc = 0x3101A8u;
    {
        const bool branch_taken_0x3101a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101A8u;
        // 0x3101ac: 0x2a02025b  slti        $v0, $s0, 0x25B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)603) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101a8) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3101B0u;
    // 0x3101b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3101B0u;
    {
        const bool branch_taken_0x3101b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101B0u;
        // 0x3101b4: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101b0) {
            ctx->pc = 0x3101C8u;
            goto label_3101c8;
        }
    }
    ctx->pc = 0x3101B8u;
    // 0x3101b8: 0x1202064b  beq         $s0, $v0, . + 4 + (0x64B << 2)
    ctx->pc = 0x3101B8u;
    {
        const bool branch_taken_0x3101b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101B8u;
        // 0x3101bc: 0x2a020259  slti        $v0, $s0, 0x259 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)601) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101b8) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3101C0u;
    // 0x3101c0: 0x10000645  b           . + 4 + (0x645 << 2)
    ctx->pc = 0x3101C0u;
    {
        const bool branch_taken_0x3101c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3101c0) {
            ctx->pc = 0x311AD8u;
            goto label_311ad8;
        }
    }
    ctx->pc = 0x3101C8u;
label_3101c8:
    // 0x3101c8: 0x24020263  addiu       $v0, $zero, 0x263
    ctx->pc = 0x3101c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
    // 0x3101cc: 0x12020656  beq         $s0, $v0, . + 4 + (0x656 << 2)
    ctx->pc = 0x3101CCu;
    {
        const bool branch_taken_0x3101cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101CCu;
        // 0x3101d0: 0x2a020264  slti        $v0, $s0, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101cc) {
            ctx->pc = 0x311B28u;
            goto label_311b28;
        }
    }
    ctx->pc = 0x3101D4u;
    // 0x3101d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3101D4u;
    {
        const bool branch_taken_0x3101d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101D4u;
        // 0x3101d8: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101d4) {
            ctx->pc = 0x3101ECu;
            goto label_3101ec;
        }
    }
    ctx->pc = 0x3101DCu;
    // 0x3101dc: 0x12020642  beq         $s0, $v0, . + 4 + (0x642 << 2)
    ctx->pc = 0x3101DCu;
    {
        const bool branch_taken_0x3101dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101DCu;
        // 0x3101e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101dc) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3101E4u;
    // 0x3101e4: 0x100008ef  b           . + 4 + (0x8EF << 2)
    ctx->pc = 0x3101E4u;
    {
        const bool branch_taken_0x3101e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3101e4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3101ECu;
label_3101ec:
    // 0x3101ec: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x3101f0: 0x1202063d  beq         $s0, $v0, . + 4 + (0x63D << 2)
    ctx->pc = 0x3101F0u;
    {
        const bool branch_taken_0x3101f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101F0u;
        // 0x3101f4: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f0) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x3101F8u;
    // 0x3101f8: 0x1202063b  beq         $s0, $v0, . + 4 + (0x63B << 2)
    ctx->pc = 0x3101F8u;
    {
        const bool branch_taken_0x3101f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101F8u;
        // 0x3101fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f8) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310200u;
    // 0x310200: 0x100008e8  b           . + 4 + (0x8E8 << 2)
    ctx->pc = 0x310200u;
    {
        const bool branch_taken_0x310200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310200) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310208u;
label_310208:
    // 0x310208: 0x24020275  addiu       $v0, $zero, 0x275
    ctx->pc = 0x310208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x31020c: 0x12020636  beq         $s0, $v0, . + 4 + (0x636 << 2)
    ctx->pc = 0x31020Cu;
    {
        const bool branch_taken_0x31020c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31020Cu;
        // 0x310210: 0x2a020276  slti        $v0, $s0, 0x276 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)630) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31020c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310214u;
    // 0x310214: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x310214u;
    {
        const bool branch_taken_0x310214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310214u;
        // 0x310218: 0x2402026b  addiu       $v0, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310214) {
            ctx->pc = 0x310258u;
            goto label_310258;
        }
    }
    ctx->pc = 0x31021Cu;
    // 0x31021c: 0x1202064a  beq         $s0, $v0, . + 4 + (0x64A << 2)
    ctx->pc = 0x31021Cu;
    {
        const bool branch_taken_0x31021c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31021Cu;
        // 0x310220: 0x2a02026c  slti        $v0, $s0, 0x26C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)620) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31021c) {
            ctx->pc = 0x311B48u;
            goto label_311b48;
        }
    }
    ctx->pc = 0x310224u;
    // 0x310224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310224u;
    {
        const bool branch_taken_0x310224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310224u;
        // 0x310228: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310224) {
            ctx->pc = 0x31023Cu;
            goto label_31023c;
        }
    }
    ctx->pc = 0x31022Cu;
    // 0x31022c: 0x1202062e  beq         $s0, $v0, . + 4 + (0x62E << 2)
    ctx->pc = 0x31022Cu;
    {
        const bool branch_taken_0x31022c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31022Cu;
        // 0x310230: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31022c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310234u;
    // 0x310234: 0x100008db  b           . + 4 + (0x8DB << 2)
    ctx->pc = 0x310234u;
    {
        const bool branch_taken_0x310234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310234) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31023Cu;
label_31023c:
    // 0x31023c: 0x2402026c  addiu       $v0, $zero, 0x26C
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x310240: 0x12020645  beq         $s0, $v0, . + 4 + (0x645 << 2)
    ctx->pc = 0x310240u;
    {
        const bool branch_taken_0x310240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310240u;
        // 0x310244: 0x24020270  addiu       $v0, $zero, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310240) {
            ctx->pc = 0x311B58u;
            goto label_311b58;
        }
    }
    ctx->pc = 0x310248u;
    // 0x310248: 0x12020627  beq         $s0, $v0, . + 4 + (0x627 << 2)
    ctx->pc = 0x310248u;
    {
        const bool branch_taken_0x310248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310248u;
        // 0x31024c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310248) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310250u;
    // 0x310250: 0x100008d4  b           . + 4 + (0x8D4 << 2)
    ctx->pc = 0x310250u;
    {
        const bool branch_taken_0x310250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310250) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310258u;
label_310258:
    // 0x310258: 0x24020278  addiu       $v0, $zero, 0x278
    ctx->pc = 0x310258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x31025c: 0x12020622  beq         $s0, $v0, . + 4 + (0x622 << 2)
    ctx->pc = 0x31025Cu;
    {
        const bool branch_taken_0x31025c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31025Cu;
        // 0x310260: 0x2a020279  slti        $v0, $s0, 0x279 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)633) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31025c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310264u;
    // 0x310264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310264u;
    {
        const bool branch_taken_0x310264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310264u;
        // 0x310268: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310264) {
            ctx->pc = 0x31027Cu;
            goto label_31027c;
        }
    }
    ctx->pc = 0x31026Cu;
    // 0x31026c: 0x1202061e  beq         $s0, $v0, . + 4 + (0x61E << 2)
    ctx->pc = 0x31026Cu;
    {
        const bool branch_taken_0x31026c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31026Cu;
        // 0x310270: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31026c) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310274u;
    // 0x310274: 0x100008cb  b           . + 4 + (0x8CB << 2)
    ctx->pc = 0x310274u;
    {
        const bool branch_taken_0x310274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310274) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31027Cu;
label_31027c:
    // 0x31027c: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x31027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x310280: 0x12020619  beq         $s0, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x310280u;
    {
        const bool branch_taken_0x310280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310280u;
        // 0x310284: 0x2402027a  addiu       $v0, $zero, 0x27A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310280) {
            ctx->pc = 0x311AE8u;
            goto label_311ae8;
        }
    }
    ctx->pc = 0x310288u;
    // 0x310288: 0x12020607  beq         $s0, $v0, . + 4 + (0x607 << 2)
    ctx->pc = 0x310288u;
    {
        const bool branch_taken_0x310288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310288u;
        // 0x31028c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310288) {
            ctx->pc = 0x311AA8u;
            goto label_311aa8;
        }
    }
    ctx->pc = 0x310290u;
    // 0x310290: 0x100008c4  b           . + 4 + (0x8C4 << 2)
    ctx->pc = 0x310290u;
    {
        const bool branch_taken_0x310290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310290) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310298u;
label_310298:
    // 0x310298: 0x2402031b  addiu       $v0, $zero, 0x31B
    ctx->pc = 0x310298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 795));
    // 0x31029c: 0x120206aa  beq         $s0, $v0, . + 4 + (0x6AA << 2)
    ctx->pc = 0x31029Cu;
    {
        const bool branch_taken_0x31029c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31029Cu;
        // 0x3102a0: 0x2a02031c  slti        $v0, $s0, 0x31C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)796) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31029c) {
            ctx->pc = 0x311D48u;
            goto label_311d48;
        }
    }
    ctx->pc = 0x3102A4u;
    // 0x3102a4: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x3102A4u;
    {
        const bool branch_taken_0x3102a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102A4u;
        // 0x3102a8: 0x24020308  addiu       $v0, $zero, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102a4) {
            ctx->pc = 0x310474u;
            goto label_310474;
        }
    }
    ctx->pc = 0x3102ACu;
    // 0x3102ac: 0x12020662  beq         $s0, $v0, . + 4 + (0x662 << 2)
    ctx->pc = 0x3102ACu;
    {
        const bool branch_taken_0x3102ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102ACu;
        // 0x3102b0: 0x2a020309  slti        $v0, $s0, 0x309 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)777) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102ac) {
            ctx->pc = 0x311C38u;
            goto label_311c38;
        }
    }
    ctx->pc = 0x3102B4u;
    // 0x3102b4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3102B4u;
    {
        const bool branch_taken_0x3102b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102B4u;
        // 0x3102b8: 0x240202a9  addiu       $v0, $zero, 0x2A9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102b4) {
            ctx->pc = 0x3103A4u;
            goto label_3103a4;
        }
    }
    ctx->pc = 0x3102BCu;
    // 0x3102bc: 0x12020636  beq         $s0, $v0, . + 4 + (0x636 << 2)
    ctx->pc = 0x3102BCu;
    {
        const bool branch_taken_0x3102bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102BCu;
        // 0x3102c0: 0x2a0202aa  slti        $v0, $s0, 0x2AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)682) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102bc) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x3102C4u;
    // 0x3102c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3102C4u;
    {
        const bool branch_taken_0x3102c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102C4u;
        // 0x3102c8: 0x240202a4  addiu       $v0, $zero, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102c4) {
            ctx->pc = 0x310328u;
            goto label_310328;
        }
    }
    ctx->pc = 0x3102CCu;
    // 0x3102cc: 0x12020632  beq         $s0, $v0, . + 4 + (0x632 << 2)
    ctx->pc = 0x3102CCu;
    {
        const bool branch_taken_0x3102cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102CCu;
        // 0x3102d0: 0x2a0202a5  slti        $v0, $s0, 0x2A5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)677) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102cc) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x3102D4u;
    // 0x3102d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3102D4u;
    {
        const bool branch_taken_0x3102d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102D4u;
        // 0x3102d8: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102d4) {
            ctx->pc = 0x3102FCu;
            goto label_3102fc;
        }
    }
    ctx->pc = 0x3102DCu;
    // 0x3102dc: 0x1202062e  beq         $s0, $v0, . + 4 + (0x62E << 2)
    ctx->pc = 0x3102DCu;
    {
        const bool branch_taken_0x3102dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102DCu;
        // 0x3102e0: 0x2a0202a3  slti        $v0, $s0, 0x2A3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)675) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102dc) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x3102E4u;
    // 0x3102e4: 0x1040062c  beqz        $v0, . + 4 + (0x62C << 2)
    ctx->pc = 0x3102E4u;
    {
        const bool branch_taken_0x3102e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102E4u;
        // 0x3102e8: 0x2402027f  addiu       $v0, $zero, 0x27F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102e4) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x3102ECu;
    // 0x3102ec: 0x12020602  beq         $s0, $v0, . + 4 + (0x602 << 2)
    ctx->pc = 0x3102ECu;
    {
        const bool branch_taken_0x3102ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3102F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102ECu;
        // 0x3102f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102ec) {
            ctx->pc = 0x311AF8u;
            goto label_311af8;
        }
    }
    ctx->pc = 0x3102F4u;
    // 0x3102f4: 0x100008ab  b           . + 4 + (0x8AB << 2)
    ctx->pc = 0x3102F4u;
    {
        const bool branch_taken_0x3102f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3102f4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3102FCu;
label_3102fc:
    // 0x3102fc: 0x240202a6  addiu       $v0, $zero, 0x2A6
    ctx->pc = 0x3102fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x310300: 0x12020621  beq         $s0, $v0, . + 4 + (0x621 << 2)
    ctx->pc = 0x310300u;
    {
        const bool branch_taken_0x310300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310300u;
        // 0x310304: 0x2a0202a6  slti        $v0, $s0, 0x2A6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)678) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310300) {
            ctx->pc = 0x311B88u;
            goto label_311b88;
        }
    }
    ctx->pc = 0x310308u;
    // 0x310308: 0x1440061b  bnez        $v0, . + 4 + (0x61B << 2)
    ctx->pc = 0x310308u;
    {
        const bool branch_taken_0x310308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310308u;
        // 0x31030c: 0x240202a7  addiu       $v0, $zero, 0x2A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310308) {
            ctx->pc = 0x311B78u;
            goto label_311b78;
        }
    }
    ctx->pc = 0x310310u;
    // 0x310310: 0x12020621  beq         $s0, $v0, . + 4 + (0x621 << 2)
    ctx->pc = 0x310310u;
    {
        const bool branch_taken_0x310310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310310u;
        // 0x310314: 0x240202a8  addiu       $v0, $zero, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310310) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x310318u;
    // 0x310318: 0x1202061f  beq         $s0, $v0, . + 4 + (0x61F << 2)
    ctx->pc = 0x310318u;
    {
        const bool branch_taken_0x310318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310318u;
        // 0x31031c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310318) {
            ctx->pc = 0x311B98u;
            goto label_311b98;
        }
    }
    ctx->pc = 0x310320u;
    // 0x310320: 0x100008a0  b           . + 4 + (0x8A0 << 2)
    ctx->pc = 0x310320u;
    {
        const bool branch_taken_0x310320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310320) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310328u;
label_310328:
    // 0x310328: 0x24020303  addiu       $v0, $zero, 0x303
    ctx->pc = 0x310328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x31032c: 0x1202062e  beq         $s0, $v0, . + 4 + (0x62E << 2)
    ctx->pc = 0x31032Cu;
    {
        const bool branch_taken_0x31032c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31032Cu;
        // 0x310330: 0x2a020304  slti        $v0, $s0, 0x304 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)772) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31032c) {
            ctx->pc = 0x311BE8u;
            goto label_311be8;
        }
    }
    ctx->pc = 0x310334u;
    // 0x310334: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x310334u;
    {
        const bool branch_taken_0x310334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310334u;
        // 0x310338: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310334) {
            ctx->pc = 0x310378u;
            goto label_310378;
        }
    }
    ctx->pc = 0x31033Cu;
    // 0x31033c: 0x1202061e  beq         $s0, $v0, . + 4 + (0x61E << 2)
    ctx->pc = 0x31033Cu;
    {
        const bool branch_taken_0x31033c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31033Cu;
        // 0x310340: 0x2a020301  slti        $v0, $s0, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)769) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31033c) {
            ctx->pc = 0x311BB8u;
            goto label_311bb8;
        }
    }
    ctx->pc = 0x310344u;
    // 0x310344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310344u;
    {
        const bool branch_taken_0x310344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310344u;
        // 0x310348: 0x240202ad  addiu       $v0, $zero, 0x2AD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 685));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310344) {
            ctx->pc = 0x31035Cu;
            goto label_31035c;
        }
    }
    ctx->pc = 0x31034Cu;
    // 0x31034c: 0x12020616  beq         $s0, $v0, . + 4 + (0x616 << 2)
    ctx->pc = 0x31034Cu;
    {
        const bool branch_taken_0x31034c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31034Cu;
        // 0x310350: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31034c) {
            ctx->pc = 0x311BA8u;
            goto label_311ba8;
        }
    }
    ctx->pc = 0x310354u;
    // 0x310354: 0x10000893  b           . + 4 + (0x893 << 2)
    ctx->pc = 0x310354u;
    {
        const bool branch_taken_0x310354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310354) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31035Cu;
label_31035c:
    // 0x31035c: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x31035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x310360: 0x12020619  beq         $s0, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x310360u;
    {
        const bool branch_taken_0x310360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310360u;
        // 0x310364: 0x24020302  addiu       $v0, $zero, 0x302 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310360) {
            ctx->pc = 0x311BC8u;
            goto label_311bc8;
        }
    }
    ctx->pc = 0x310368u;
    // 0x310368: 0x1202061b  beq         $s0, $v0, . + 4 + (0x61B << 2)
    ctx->pc = 0x310368u;
    {
        const bool branch_taken_0x310368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310368u;
        // 0x31036c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310368) {
            ctx->pc = 0x311BD8u;
            goto label_311bd8;
        }
    }
    ctx->pc = 0x310370u;
    // 0x310370: 0x1000088c  b           . + 4 + (0x88C << 2)
    ctx->pc = 0x310370u;
    {
        const bool branch_taken_0x310370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310370) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310378u;
label_310378:
    // 0x310378: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x310378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x31037c: 0x12020622  beq         $s0, $v0, . + 4 + (0x622 << 2)
    ctx->pc = 0x31037Cu;
    {
        const bool branch_taken_0x31037c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31037Cu;
        // 0x310380: 0x2a020305  slti        $v0, $s0, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)773) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31037c) {
            ctx->pc = 0x311C08u;
            goto label_311c08;
        }
    }
    ctx->pc = 0x310384u;
    // 0x310384: 0x1440061c  bnez        $v0, . + 4 + (0x61C << 2)
    ctx->pc = 0x310384u;
    {
        const bool branch_taken_0x310384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310384u;
        // 0x310388: 0x24020306  addiu       $v0, $zero, 0x306 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310384) {
            ctx->pc = 0x311BF8u;
            goto label_311bf8;
        }
    }
    ctx->pc = 0x31038Cu;
    // 0x31038c: 0x12020622  beq         $s0, $v0, . + 4 + (0x622 << 2)
    ctx->pc = 0x31038Cu;
    {
        const bool branch_taken_0x31038c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31038Cu;
        // 0x310390: 0x24020307  addiu       $v0, $zero, 0x307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31038c) {
            ctx->pc = 0x311C18u;
            goto label_311c18;
        }
    }
    ctx->pc = 0x310394u;
    // 0x310394: 0x12020624  beq         $s0, $v0, . + 4 + (0x624 << 2)
    ctx->pc = 0x310394u;
    {
        const bool branch_taken_0x310394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310394u;
        // 0x310398: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310394) {
            ctx->pc = 0x311C28u;
            goto label_311c28;
        }
    }
    ctx->pc = 0x31039Cu;
    // 0x31039c: 0x10000881  b           . + 4 + (0x881 << 2)
    ctx->pc = 0x31039Cu;
    {
        const bool branch_taken_0x31039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31039c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3103A4u;
label_3103a4:
    // 0x3103a4: 0x24020311  addiu       $v0, $zero, 0x311
    ctx->pc = 0x3103a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 785));
    // 0x3103a8: 0x12020647  beq         $s0, $v0, . + 4 + (0x647 << 2)
    ctx->pc = 0x3103A8u;
    {
        const bool branch_taken_0x3103a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A8u;
        // 0x3103ac: 0x2a020312  slti        $v0, $s0, 0x312 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)786) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103a8) {
            ctx->pc = 0x311CC8u;
            goto label_311cc8;
        }
    }
    ctx->pc = 0x3103B0u;
    // 0x3103b0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3103B0u;
    {
        const bool branch_taken_0x3103b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103B0u;
        // 0x3103b4: 0x2402030c  addiu       $v0, $zero, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103b0) {
            ctx->pc = 0x31040Cu;
            goto label_31040c;
        }
    }
    ctx->pc = 0x3103B8u;
    // 0x3103b8: 0x1202062f  beq         $s0, $v0, . + 4 + (0x62F << 2)
    ctx->pc = 0x3103B8u;
    {
        const bool branch_taken_0x3103b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103B8u;
        // 0x3103bc: 0x2a02030d  slti        $v0, $s0, 0x30D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)781) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103b8) {
            ctx->pc = 0x311C78u;
            goto label_311c78;
        }
    }
    ctx->pc = 0x3103C0u;
    // 0x3103c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3103C0u;
    {
        const bool branch_taken_0x3103c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103C0u;
        // 0x3103c4: 0x2402030a  addiu       $v0, $zero, 0x30A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103c0) {
            ctx->pc = 0x3103E0u;
            goto label_3103e0;
        }
    }
    ctx->pc = 0x3103C8u;
    // 0x3103c8: 0x12020623  beq         $s0, $v0, . + 4 + (0x623 << 2)
    ctx->pc = 0x3103C8u;
    {
        const bool branch_taken_0x3103c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103C8u;
        // 0x3103cc: 0x2a02030b  slti        $v0, $s0, 0x30B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)779) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103c8) {
            ctx->pc = 0x311C58u;
            goto label_311c58;
        }
    }
    ctx->pc = 0x3103D0u;
    // 0x3103d0: 0x10400625  beqz        $v0, . + 4 + (0x625 << 2)
    ctx->pc = 0x3103D0u;
    {
        const bool branch_taken_0x3103d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103d0) {
            ctx->pc = 0x311C68u;
            goto label_311c68;
        }
    }
    ctx->pc = 0x3103D8u;
    // 0x3103d8: 0x1000061b  b           . + 4 + (0x61B << 2)
    ctx->pc = 0x3103D8u;
    {
        const bool branch_taken_0x3103d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3103d8) {
            ctx->pc = 0x311C48u;
            goto label_311c48;
        }
    }
    ctx->pc = 0x3103E0u;
label_3103e0:
    // 0x3103e0: 0x2402030e  addiu       $v0, $zero, 0x30E
    ctx->pc = 0x3103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 782));
    // 0x3103e4: 0x1202062c  beq         $s0, $v0, . + 4 + (0x62C << 2)
    ctx->pc = 0x3103E4u;
    {
        const bool branch_taken_0x3103e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103E4u;
        // 0x3103e8: 0x2a02030e  slti        $v0, $s0, 0x30E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)782) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103e4) {
            ctx->pc = 0x311C98u;
            goto label_311c98;
        }
    }
    ctx->pc = 0x3103ECu;
    // 0x3103ec: 0x14400626  bnez        $v0, . + 4 + (0x626 << 2)
    ctx->pc = 0x3103ECu;
    {
        const bool branch_taken_0x3103ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3103F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103ECu;
        // 0x3103f0: 0x2402030f  addiu       $v0, $zero, 0x30F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103ec) {
            ctx->pc = 0x311C88u;
            goto label_311c88;
        }
    }
    ctx->pc = 0x3103F4u;
    // 0x3103f4: 0x1202062c  beq         $s0, $v0, . + 4 + (0x62C << 2)
    ctx->pc = 0x3103F4u;
    {
        const bool branch_taken_0x3103f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103F4u;
        // 0x3103f8: 0x24020310  addiu       $v0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103f4) {
            ctx->pc = 0x311CA8u;
            goto label_311ca8;
        }
    }
    ctx->pc = 0x3103FCu;
    // 0x3103fc: 0x1202062e  beq         $s0, $v0, . + 4 + (0x62E << 2)
    ctx->pc = 0x3103FCu;
    {
        const bool branch_taken_0x3103fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103FCu;
        // 0x310400: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103fc) {
            ctx->pc = 0x311CB8u;
            goto label_311cb8;
        }
    }
    ctx->pc = 0x310404u;
    // 0x310404: 0x10000867  b           . + 4 + (0x867 << 2)
    ctx->pc = 0x310404u;
    {
        const bool branch_taken_0x310404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310404) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31040Cu;
label_31040c:
    // 0x31040c: 0x24020316  addiu       $v0, $zero, 0x316
    ctx->pc = 0x31040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x310410: 0x1202084d  beq         $s0, $v0, . + 4 + (0x84D << 2)
    ctx->pc = 0x310410u;
    {
        const bool branch_taken_0x310410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310410u;
        // 0x310414: 0x2a020317  slti        $v0, $s0, 0x317 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)791) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310410) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310418u;
    // 0x310418: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310418u;
    {
        const bool branch_taken_0x310418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310418u;
        // 0x31041c: 0x24020313  addiu       $v0, $zero, 0x313 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 787));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310418) {
            ctx->pc = 0x310448u;
            goto label_310448;
        }
    }
    ctx->pc = 0x310420u;
    // 0x310420: 0x12020631  beq         $s0, $v0, . + 4 + (0x631 << 2)
    ctx->pc = 0x310420u;
    {
        const bool branch_taken_0x310420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310420u;
        // 0x310424: 0x2a020313  slti        $v0, $s0, 0x313 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)787) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310420) {
            ctx->pc = 0x311CE8u;
            goto label_311ce8;
        }
    }
    ctx->pc = 0x310428u;
    // 0x310428: 0x1440062b  bnez        $v0, . + 4 + (0x62B << 2)
    ctx->pc = 0x310428u;
    {
        const bool branch_taken_0x310428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310428u;
        // 0x31042c: 0x24020314  addiu       $v0, $zero, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310428) {
            ctx->pc = 0x311CD8u;
            goto label_311cd8;
        }
    }
    ctx->pc = 0x310430u;
    // 0x310430: 0x12020631  beq         $s0, $v0, . + 4 + (0x631 << 2)
    ctx->pc = 0x310430u;
    {
        const bool branch_taken_0x310430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310430u;
        // 0x310434: 0x24020315  addiu       $v0, $zero, 0x315 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 789));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310430) {
            ctx->pc = 0x311CF8u;
            goto label_311cf8;
        }
    }
    ctx->pc = 0x310438u;
    // 0x310438: 0x12020843  beq         $s0, $v0, . + 4 + (0x843 << 2)
    ctx->pc = 0x310438u;
    {
        const bool branch_taken_0x310438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310438u;
        // 0x31043c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310438) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310440u;
    // 0x310440: 0x10000858  b           . + 4 + (0x858 << 2)
    ctx->pc = 0x310440u;
    {
        const bool branch_taken_0x310440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310440) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310448u;
label_310448:
    // 0x310448: 0x24020318  addiu       $v0, $zero, 0x318
    ctx->pc = 0x310448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 792));
    // 0x31044c: 0x12020632  beq         $s0, $v0, . + 4 + (0x632 << 2)
    ctx->pc = 0x31044Cu;
    {
        const bool branch_taken_0x31044c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31044Cu;
        // 0x310450: 0x2a020318  slti        $v0, $s0, 0x318 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)792) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31044c) {
            ctx->pc = 0x311D18u;
            goto label_311d18;
        }
    }
    ctx->pc = 0x310454u;
    // 0x310454: 0x1440062c  bnez        $v0, . + 4 + (0x62C << 2)
    ctx->pc = 0x310454u;
    {
        const bool branch_taken_0x310454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310454u;
        // 0x310458: 0x24020319  addiu       $v0, $zero, 0x319 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 793));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310454) {
            ctx->pc = 0x311D08u;
            goto label_311d08;
        }
    }
    ctx->pc = 0x31045Cu;
    // 0x31045c: 0x12020632  beq         $s0, $v0, . + 4 + (0x632 << 2)
    ctx->pc = 0x31045Cu;
    {
        const bool branch_taken_0x31045c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31045Cu;
        // 0x310460: 0x2402031a  addiu       $v0, $zero, 0x31A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31045c) {
            ctx->pc = 0x311D28u;
            goto label_311d28;
        }
    }
    ctx->pc = 0x310464u;
    // 0x310464: 0x12020634  beq         $s0, $v0, . + 4 + (0x634 << 2)
    ctx->pc = 0x310464u;
    {
        const bool branch_taken_0x310464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310464u;
        // 0x310468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310464) {
            ctx->pc = 0x311D38u;
            goto label_311d38;
        }
    }
    ctx->pc = 0x31046Cu;
    // 0x31046c: 0x1000084d  b           . + 4 + (0x84D << 2)
    ctx->pc = 0x31046Cu;
    {
        const bool branch_taken_0x31046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31046c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310474u;
label_310474:
    // 0x310474: 0x2402032e  addiu       $v0, $zero, 0x32E
    ctx->pc = 0x310474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 814));
    // 0x310478: 0x1202067b  beq         $s0, $v0, . + 4 + (0x67B << 2)
    ctx->pc = 0x310478u;
    {
        const bool branch_taken_0x310478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310478u;
        // 0x31047c: 0x2a02032f  slti        $v0, $s0, 0x32F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)815) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310478) {
            ctx->pc = 0x311E68u;
            goto label_311e68;
        }
    }
    ctx->pc = 0x310480u;
    // 0x310480: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x310480u;
    {
        const bool branch_taken_0x310480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310480u;
        // 0x310484: 0x24020324  addiu       $v0, $zero, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 804));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310480) {
            ctx->pc = 0x310554u;
            goto label_310554;
        }
    }
    ctx->pc = 0x310488u;
    // 0x310488: 0x1202064f  beq         $s0, $v0, . + 4 + (0x64F << 2)
    ctx->pc = 0x310488u;
    {
        const bool branch_taken_0x310488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310488u;
        // 0x31048c: 0x2a020325  slti        $v0, $s0, 0x325 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)805) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310488) {
            ctx->pc = 0x311DC8u;
            goto label_311dc8;
        }
    }
    ctx->pc = 0x310490u;
    // 0x310490: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310490u;
    {
        const bool branch_taken_0x310490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310490u;
        // 0x310494: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310490) {
            ctx->pc = 0x3104ECu;
            goto label_3104ec;
        }
    }
    ctx->pc = 0x310498u;
    // 0x310498: 0x1202063b  beq         $s0, $v0, . + 4 + (0x63B << 2)
    ctx->pc = 0x310498u;
    {
        const bool branch_taken_0x310498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310498u;
        // 0x31049c: 0x2a020320  slti        $v0, $s0, 0x320 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310498) {
            ctx->pc = 0x311D88u;
            goto label_311d88;
        }
    }
    ctx->pc = 0x3104A0u;
    // 0x3104a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3104A0u;
    {
        const bool branch_taken_0x3104a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3104A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104A0u;
        // 0x3104a4: 0x2402031d  addiu       $v0, $zero, 0x31D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 797));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104a0) {
            ctx->pc = 0x3104C0u;
            goto label_3104c0;
        }
    }
    ctx->pc = 0x3104A8u;
    // 0x3104a8: 0x1202062f  beq         $s0, $v0, . + 4 + (0x62F << 2)
    ctx->pc = 0x3104A8u;
    {
        const bool branch_taken_0x3104a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3104ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104A8u;
        // 0x3104ac: 0x2a02031e  slti        $v0, $s0, 0x31E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)798) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104a8) {
            ctx->pc = 0x311D68u;
            goto label_311d68;
        }
    }
    ctx->pc = 0x3104B0u;
    // 0x3104b0: 0x10400631  beqz        $v0, . + 4 + (0x631 << 2)
    ctx->pc = 0x3104B0u;
    {
        const bool branch_taken_0x3104b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3104b0) {
            ctx->pc = 0x311D78u;
            goto label_311d78;
        }
    }
    ctx->pc = 0x3104B8u;
    // 0x3104b8: 0x10000627  b           . + 4 + (0x627 << 2)
    ctx->pc = 0x3104B8u;
    {
        const bool branch_taken_0x3104b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3104b8) {
            ctx->pc = 0x311D58u;
            goto label_311d58;
        }
    }
    ctx->pc = 0x3104C0u;
label_3104c0:
    // 0x3104c0: 0x24020321  addiu       $v0, $zero, 0x321
    ctx->pc = 0x3104c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 801));
    // 0x3104c4: 0x12020820  beq         $s0, $v0, . + 4 + (0x820 << 2)
    ctx->pc = 0x3104C4u;
    {
        const bool branch_taken_0x3104c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104C4u;
        // 0x3104c8: 0x2a020321  slti        $v0, $s0, 0x321 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)801) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104c4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3104CCu;
    // 0x3104cc: 0x14400632  bnez        $v0, . + 4 + (0x632 << 2)
    ctx->pc = 0x3104CCu;
    {
        const bool branch_taken_0x3104cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3104D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104CCu;
        // 0x3104d0: 0x24020322  addiu       $v0, $zero, 0x322 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 802));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104cc) {
            ctx->pc = 0x311D98u;
            goto label_311d98;
        }
    }
    ctx->pc = 0x3104D4u;
    // 0x3104d4: 0x12020634  beq         $s0, $v0, . + 4 + (0x634 << 2)
    ctx->pc = 0x3104D4u;
    {
        const bool branch_taken_0x3104d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3104D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104D4u;
        // 0x3104d8: 0x24020323  addiu       $v0, $zero, 0x323 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 803));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104d4) {
            ctx->pc = 0x311DA8u;
            goto label_311da8;
        }
    }
    ctx->pc = 0x3104DCu;
    // 0x3104dc: 0x12020636  beq         $s0, $v0, . + 4 + (0x636 << 2)
    ctx->pc = 0x3104DCu;
    {
        const bool branch_taken_0x3104dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3104E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104DCu;
        // 0x3104e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104dc) {
            ctx->pc = 0x311DB8u;
            goto label_311db8;
        }
    }
    ctx->pc = 0x3104E4u;
    // 0x3104e4: 0x1000082f  b           . + 4 + (0x82F << 2)
    ctx->pc = 0x3104E4u;
    {
        const bool branch_taken_0x3104e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3104e4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3104ECu;
label_3104ec:
    // 0x3104ec: 0x24020329  addiu       $v0, $zero, 0x329
    ctx->pc = 0x3104ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 809));
    // 0x3104f0: 0x12020649  beq         $s0, $v0, . + 4 + (0x649 << 2)
    ctx->pc = 0x3104F0u;
    {
        const bool branch_taken_0x3104f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3104F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104F0u;
        // 0x3104f4: 0x2a02032a  slti        $v0, $s0, 0x32A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)810) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104f0) {
            ctx->pc = 0x311E18u;
            goto label_311e18;
        }
    }
    ctx->pc = 0x3104F8u;
    // 0x3104f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3104F8u;
    {
        const bool branch_taken_0x3104f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3104FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104F8u;
        // 0x3104fc: 0x24020326  addiu       $v0, $zero, 0x326 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 806));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104f8) {
            ctx->pc = 0x310528u;
            goto label_310528;
        }
    }
    ctx->pc = 0x310500u;
    // 0x310500: 0x12020639  beq         $s0, $v0, . + 4 + (0x639 << 2)
    ctx->pc = 0x310500u;
    {
        const bool branch_taken_0x310500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310500u;
        // 0x310504: 0x2a020326  slti        $v0, $s0, 0x326 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)806) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310500) {
            ctx->pc = 0x311DE8u;
            goto label_311de8;
        }
    }
    ctx->pc = 0x310508u;
    // 0x310508: 0x14400633  bnez        $v0, . + 4 + (0x633 << 2)
    ctx->pc = 0x310508u;
    {
        const bool branch_taken_0x310508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310508u;
        // 0x31050c: 0x24020327  addiu       $v0, $zero, 0x327 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 807));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310508) {
            ctx->pc = 0x311DD8u;
            goto label_311dd8;
        }
    }
    ctx->pc = 0x310510u;
    // 0x310510: 0x12020639  beq         $s0, $v0, . + 4 + (0x639 << 2)
    ctx->pc = 0x310510u;
    {
        const bool branch_taken_0x310510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310510u;
        // 0x310514: 0x24020328  addiu       $v0, $zero, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310510) {
            ctx->pc = 0x311DF8u;
            goto label_311df8;
        }
    }
    ctx->pc = 0x310518u;
    // 0x310518: 0x1202063b  beq         $s0, $v0, . + 4 + (0x63B << 2)
    ctx->pc = 0x310518u;
    {
        const bool branch_taken_0x310518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310518u;
        // 0x31051c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310518) {
            ctx->pc = 0x311E08u;
            goto label_311e08;
        }
    }
    ctx->pc = 0x310520u;
    // 0x310520: 0x10000820  b           . + 4 + (0x820 << 2)
    ctx->pc = 0x310520u;
    {
        const bool branch_taken_0x310520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310520) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310528u;
label_310528:
    // 0x310528: 0x2402032b  addiu       $v0, $zero, 0x32B
    ctx->pc = 0x310528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 811));
    // 0x31052c: 0x12020642  beq         $s0, $v0, . + 4 + (0x642 << 2)
    ctx->pc = 0x31052Cu;
    {
        const bool branch_taken_0x31052c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31052Cu;
        // 0x310530: 0x2a02032b  slti        $v0, $s0, 0x32B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)811) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31052c) {
            ctx->pc = 0x311E38u;
            goto label_311e38;
        }
    }
    ctx->pc = 0x310534u;
    // 0x310534: 0x1440063c  bnez        $v0, . + 4 + (0x63C << 2)
    ctx->pc = 0x310534u;
    {
        const bool branch_taken_0x310534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310534u;
        // 0x310538: 0x2402032c  addiu       $v0, $zero, 0x32C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 812));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310534) {
            ctx->pc = 0x311E28u;
            goto label_311e28;
        }
    }
    ctx->pc = 0x31053Cu;
    // 0x31053c: 0x12020642  beq         $s0, $v0, . + 4 + (0x642 << 2)
    ctx->pc = 0x31053Cu;
    {
        const bool branch_taken_0x31053c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31053Cu;
        // 0x310540: 0x2402032d  addiu       $v0, $zero, 0x32D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 813));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31053c) {
            ctx->pc = 0x311E48u;
            goto label_311e48;
        }
    }
    ctx->pc = 0x310544u;
    // 0x310544: 0x12020644  beq         $s0, $v0, . + 4 + (0x644 << 2)
    ctx->pc = 0x310544u;
    {
        const bool branch_taken_0x310544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310544u;
        // 0x310548: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310544) {
            ctx->pc = 0x311E58u;
            goto label_311e58;
        }
    }
    ctx->pc = 0x31054Cu;
    // 0x31054c: 0x10000815  b           . + 4 + (0x815 << 2)
    ctx->pc = 0x31054Cu;
    {
        const bool branch_taken_0x31054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31054c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310554u;
label_310554:
    // 0x310554: 0x24020337  addiu       $v0, $zero, 0x337
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 823));
    // 0x310558: 0x12020667  beq         $s0, $v0, . + 4 + (0x667 << 2)
    ctx->pc = 0x310558u;
    {
        const bool branch_taken_0x310558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310558u;
        // 0x31055c: 0x2a020338  slti        $v0, $s0, 0x338 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)824) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310558) {
            ctx->pc = 0x311EF8u;
            goto label_311ef8;
        }
    }
    ctx->pc = 0x310560u;
    // 0x310560: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310560u;
    {
        const bool branch_taken_0x310560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310560u;
        // 0x310564: 0x24020332  addiu       $v0, $zero, 0x332 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 818));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310560) {
            ctx->pc = 0x3105BCu;
            goto label_3105bc;
        }
    }
    ctx->pc = 0x310568u;
    // 0x310568: 0x1202064f  beq         $s0, $v0, . + 4 + (0x64F << 2)
    ctx->pc = 0x310568u;
    {
        const bool branch_taken_0x310568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310568u;
        // 0x31056c: 0x2a020333  slti        $v0, $s0, 0x333 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)819) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310568) {
            ctx->pc = 0x311EA8u;
            goto label_311ea8;
        }
    }
    ctx->pc = 0x310570u;
    // 0x310570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310570u;
    {
        const bool branch_taken_0x310570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310570u;
        // 0x310574: 0x24020330  addiu       $v0, $zero, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310570) {
            ctx->pc = 0x310590u;
            goto label_310590;
        }
    }
    ctx->pc = 0x310578u;
    // 0x310578: 0x12020643  beq         $s0, $v0, . + 4 + (0x643 << 2)
    ctx->pc = 0x310578u;
    {
        const bool branch_taken_0x310578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310578u;
        // 0x31057c: 0x2a020331  slti        $v0, $s0, 0x331 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)817) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310578) {
            ctx->pc = 0x311E88u;
            goto label_311e88;
        }
    }
    ctx->pc = 0x310580u;
    // 0x310580: 0x10400645  beqz        $v0, . + 4 + (0x645 << 2)
    ctx->pc = 0x310580u;
    {
        const bool branch_taken_0x310580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310580) {
            ctx->pc = 0x311E98u;
            goto label_311e98;
        }
    }
    ctx->pc = 0x310588u;
    // 0x310588: 0x1000063b  b           . + 4 + (0x63B << 2)
    ctx->pc = 0x310588u;
    {
        const bool branch_taken_0x310588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310588) {
            ctx->pc = 0x311E78u;
            goto label_311e78;
        }
    }
    ctx->pc = 0x310590u;
label_310590:
    // 0x310590: 0x24020334  addiu       $v0, $zero, 0x334
    ctx->pc = 0x310590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x310594: 0x1202064c  beq         $s0, $v0, . + 4 + (0x64C << 2)
    ctx->pc = 0x310594u;
    {
        const bool branch_taken_0x310594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310594u;
        // 0x310598: 0x2a020334  slti        $v0, $s0, 0x334 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)820) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310594) {
            ctx->pc = 0x311EC8u;
            goto label_311ec8;
        }
    }
    ctx->pc = 0x31059Cu;
    // 0x31059c: 0x14400646  bnez        $v0, . + 4 + (0x646 << 2)
    ctx->pc = 0x31059Cu;
    {
        const bool branch_taken_0x31059c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31059Cu;
        // 0x3105a0: 0x24020335  addiu       $v0, $zero, 0x335 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 821));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31059c) {
            ctx->pc = 0x311EB8u;
            goto label_311eb8;
        }
    }
    ctx->pc = 0x3105A4u;
    // 0x3105a4: 0x1202064c  beq         $s0, $v0, . + 4 + (0x64C << 2)
    ctx->pc = 0x3105A4u;
    {
        const bool branch_taken_0x3105a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105A4u;
        // 0x3105a8: 0x24020336  addiu       $v0, $zero, 0x336 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 822));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105a4) {
            ctx->pc = 0x311ED8u;
            goto label_311ed8;
        }
    }
    ctx->pc = 0x3105ACu;
    // 0x3105ac: 0x1202064e  beq         $s0, $v0, . + 4 + (0x64E << 2)
    ctx->pc = 0x3105ACu;
    {
        const bool branch_taken_0x3105ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105ACu;
        // 0x3105b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105ac) {
            ctx->pc = 0x311EE8u;
            goto label_311ee8;
        }
    }
    ctx->pc = 0x3105B4u;
    // 0x3105b4: 0x100007fb  b           . + 4 + (0x7FB << 2)
    ctx->pc = 0x3105B4u;
    {
        const bool branch_taken_0x3105b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3105b4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3105BCu;
label_3105bc:
    // 0x3105bc: 0x2402033c  addiu       $v0, $zero, 0x33C
    ctx->pc = 0x3105bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
    // 0x3105c0: 0x12020661  beq         $s0, $v0, . + 4 + (0x661 << 2)
    ctx->pc = 0x3105C0u;
    {
        const bool branch_taken_0x3105c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105C0u;
        // 0x3105c4: 0x2a02033d  slti        $v0, $s0, 0x33D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)829) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105c0) {
            ctx->pc = 0x311F48u;
            goto label_311f48;
        }
    }
    ctx->pc = 0x3105C8u;
    // 0x3105c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3105C8u;
    {
        const bool branch_taken_0x3105c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105C8u;
        // 0x3105cc: 0x24020339  addiu       $v0, $zero, 0x339 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 825));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105c8) {
            ctx->pc = 0x3105F8u;
            goto label_3105f8;
        }
    }
    ctx->pc = 0x3105D0u;
    // 0x3105d0: 0x12020651  beq         $s0, $v0, . + 4 + (0x651 << 2)
    ctx->pc = 0x3105D0u;
    {
        const bool branch_taken_0x3105d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105D0u;
        // 0x3105d4: 0x2a020339  slti        $v0, $s0, 0x339 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)825) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105d0) {
            ctx->pc = 0x311F18u;
            goto label_311f18;
        }
    }
    ctx->pc = 0x3105D8u;
    // 0x3105d8: 0x1440064b  bnez        $v0, . + 4 + (0x64B << 2)
    ctx->pc = 0x3105D8u;
    {
        const bool branch_taken_0x3105d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3105DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105D8u;
        // 0x3105dc: 0x2402033a  addiu       $v0, $zero, 0x33A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 826));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105d8) {
            ctx->pc = 0x311F08u;
            goto label_311f08;
        }
    }
    ctx->pc = 0x3105E0u;
    // 0x3105e0: 0x12020651  beq         $s0, $v0, . + 4 + (0x651 << 2)
    ctx->pc = 0x3105E0u;
    {
        const bool branch_taken_0x3105e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105E0u;
        // 0x3105e4: 0x2402033b  addiu       $v0, $zero, 0x33B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 827));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105e0) {
            ctx->pc = 0x311F28u;
            goto label_311f28;
        }
    }
    ctx->pc = 0x3105E8u;
    // 0x3105e8: 0x12020653  beq         $s0, $v0, . + 4 + (0x653 << 2)
    ctx->pc = 0x3105E8u;
    {
        const bool branch_taken_0x3105e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3105ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105E8u;
        // 0x3105ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105e8) {
            ctx->pc = 0x311F38u;
            goto label_311f38;
        }
    }
    ctx->pc = 0x3105F0u;
    // 0x3105f0: 0x100007ec  b           . + 4 + (0x7EC << 2)
    ctx->pc = 0x3105F0u;
    {
        const bool branch_taken_0x3105f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3105f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3105F8u;
label_3105f8:
    // 0x3105f8: 0x2402033e  addiu       $v0, $zero, 0x33E
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 830));
    // 0x3105fc: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x3105FCu;
    {
        const bool branch_taken_0x3105fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105FCu;
        // 0x310600: 0x2a02033e  slti        $v0, $s0, 0x33E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)830) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105fc) {
            ctx->pc = 0x311F68u;
            goto label_311f68;
        }
    }
    ctx->pc = 0x310604u;
    // 0x310604: 0x14400654  bnez        $v0, . + 4 + (0x654 << 2)
    ctx->pc = 0x310604u;
    {
        const bool branch_taken_0x310604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310604u;
        // 0x310608: 0x2402033f  addiu       $v0, $zero, 0x33F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 831));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310604) {
            ctx->pc = 0x311F58u;
            goto label_311f58;
        }
    }
    ctx->pc = 0x31060Cu;
    // 0x31060c: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x31060Cu;
    {
        const bool branch_taken_0x31060c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31060Cu;
        // 0x310610: 0x24020340  addiu       $v0, $zero, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31060c) {
            ctx->pc = 0x311F78u;
            goto label_311f78;
        }
    }
    ctx->pc = 0x310614u;
    // 0x310614: 0x1202065c  beq         $s0, $v0, . + 4 + (0x65C << 2)
    ctx->pc = 0x310614u;
    {
        const bool branch_taken_0x310614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310614u;
        // 0x310618: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310614) {
            ctx->pc = 0x311F88u;
            goto label_311f88;
        }
    }
    ctx->pc = 0x31061Cu;
    // 0x31061c: 0x100007e1  b           . + 4 + (0x7E1 << 2)
    ctx->pc = 0x31061Cu;
    {
        const bool branch_taken_0x31061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31061c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310624u;
label_310624:
    // 0x310624: 0x2402038c  addiu       $v0, $zero, 0x38C
    ctx->pc = 0x310624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
    // 0x310628: 0x120207c7  beq         $s0, $v0, . + 4 + (0x7C7 << 2)
    ctx->pc = 0x310628u;
    {
        const bool branch_taken_0x310628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310628u;
        // 0x31062c: 0x2a02038d  slti        $v0, $s0, 0x38D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)909) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310628) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310630u;
    // 0x310630: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x310630u;
    {
        const bool branch_taken_0x310630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310630u;
        // 0x310634: 0x24020366  addiu       $v0, $zero, 0x366 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 870));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310630) {
            ctx->pc = 0x31097Cu;
            goto label_31097c;
        }
    }
    ctx->pc = 0x310638u;
    // 0x310638: 0x1202079b  beq         $s0, $v0, . + 4 + (0x79B << 2)
    ctx->pc = 0x310638u;
    {
        const bool branch_taken_0x310638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310638u;
        // 0x31063c: 0x2a020367  slti        $v0, $s0, 0x367 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)871) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310638) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310640u;
    // 0x310640: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x310640u;
    {
        const bool branch_taken_0x310640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310640u;
        // 0x310644: 0x24020353  addiu       $v0, $zero, 0x353 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310640) {
            ctx->pc = 0x3107DCu;
            goto label_3107dc;
        }
    }
    ctx->pc = 0x310648u;
    // 0x310648: 0x12020683  beq         $s0, $v0, . + 4 + (0x683 << 2)
    ctx->pc = 0x310648u;
    {
        const bool branch_taken_0x310648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310648u;
        // 0x31064c: 0x2a020354  slti        $v0, $s0, 0x354 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)852) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310648) {
            ctx->pc = 0x312058u;
            goto label_312058;
        }
    }
    ctx->pc = 0x310650u;
    // 0x310650: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x310650u;
    {
        const bool branch_taken_0x310650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310650u;
        // 0x310654: 0x2402034a  addiu       $v0, $zero, 0x34A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310650) {
            ctx->pc = 0x31070Cu;
            goto label_31070c;
        }
    }
    ctx->pc = 0x310658u;
    // 0x310658: 0x120207bb  beq         $s0, $v0, . + 4 + (0x7BB << 2)
    ctx->pc = 0x310658u;
    {
        const bool branch_taken_0x310658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310658u;
        // 0x31065c: 0x2a02034b  slti        $v0, $s0, 0x34B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)843) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310658) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310660u;
    // 0x310660: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310660u;
    {
        const bool branch_taken_0x310660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310660u;
        // 0x310664: 0x24020345  addiu       $v0, $zero, 0x345 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 837));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310660) {
            ctx->pc = 0x3106BCu;
            goto label_3106bc;
        }
    }
    ctx->pc = 0x310668u;
    // 0x310668: 0x1202065b  beq         $s0, $v0, . + 4 + (0x65B << 2)
    ctx->pc = 0x310668u;
    {
        const bool branch_taken_0x310668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310668u;
        // 0x31066c: 0x2a020346  slti        $v0, $s0, 0x346 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)838) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310668) {
            ctx->pc = 0x311FD8u;
            goto label_311fd8;
        }
    }
    ctx->pc = 0x310670u;
    // 0x310670: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310670u;
    {
        const bool branch_taken_0x310670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310670u;
        // 0x310674: 0x24020343  addiu       $v0, $zero, 0x343 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 835));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310670) {
            ctx->pc = 0x310690u;
            goto label_310690;
        }
    }
    ctx->pc = 0x310678u;
    // 0x310678: 0x1202064f  beq         $s0, $v0, . + 4 + (0x64F << 2)
    ctx->pc = 0x310678u;
    {
        const bool branch_taken_0x310678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310678u;
        // 0x31067c: 0x2a020344  slti        $v0, $s0, 0x344 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)836) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310678) {
            ctx->pc = 0x311FB8u;
            goto label_311fb8;
        }
    }
    ctx->pc = 0x310680u;
    // 0x310680: 0x10400651  beqz        $v0, . + 4 + (0x651 << 2)
    ctx->pc = 0x310680u;
    {
        const bool branch_taken_0x310680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310680) {
            ctx->pc = 0x311FC8u;
            goto label_311fc8;
        }
    }
    ctx->pc = 0x310688u;
    // 0x310688: 0x10000647  b           . + 4 + (0x647 << 2)
    ctx->pc = 0x310688u;
    {
        const bool branch_taken_0x310688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310688) {
            ctx->pc = 0x311FA8u;
            goto label_311fa8;
        }
    }
    ctx->pc = 0x310690u;
label_310690:
    // 0x310690: 0x24020347  addiu       $v0, $zero, 0x347
    ctx->pc = 0x310690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 839));
    // 0x310694: 0x12020658  beq         $s0, $v0, . + 4 + (0x658 << 2)
    ctx->pc = 0x310694u;
    {
        const bool branch_taken_0x310694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310694u;
        // 0x310698: 0x2a020347  slti        $v0, $s0, 0x347 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)839) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310694) {
            ctx->pc = 0x311FF8u;
            goto label_311ff8;
        }
    }
    ctx->pc = 0x31069Cu;
    // 0x31069c: 0x14400652  bnez        $v0, . + 4 + (0x652 << 2)
    ctx->pc = 0x31069Cu;
    {
        const bool branch_taken_0x31069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3106A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31069Cu;
        // 0x3106a0: 0x24020348  addiu       $v0, $zero, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31069c) {
            ctx->pc = 0x311FE8u;
            goto label_311fe8;
        }
    }
    ctx->pc = 0x3106A4u;
    // 0x3106a4: 0x12020658  beq         $s0, $v0, . + 4 + (0x658 << 2)
    ctx->pc = 0x3106A4u;
    {
        const bool branch_taken_0x3106a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3106A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106A4u;
        // 0x3106a8: 0x24020349  addiu       $v0, $zero, 0x349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 841));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106a4) {
            ctx->pc = 0x312008u;
            goto label_312008;
        }
    }
    ctx->pc = 0x3106ACu;
    // 0x3106ac: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x3106ACu;
    {
        const bool branch_taken_0x3106ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106ACu;
        // 0x3106b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106ac) {
            ctx->pc = 0x312018u;
            goto label_312018;
        }
    }
    ctx->pc = 0x3106B4u;
    // 0x3106b4: 0x100007bb  b           . + 4 + (0x7BB << 2)
    ctx->pc = 0x3106B4u;
    {
        const bool branch_taken_0x3106b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106b4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3106BCu;
label_3106bc:
    // 0x3106bc: 0x2402034e  addiu       $v0, $zero, 0x34E
    ctx->pc = 0x3106bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 846));
    // 0x3106c0: 0x120207a1  beq         $s0, $v0, . + 4 + (0x7A1 << 2)
    ctx->pc = 0x3106C0u;
    {
        const bool branch_taken_0x3106c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3106C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106C0u;
        // 0x3106c4: 0x2a02034f  slti        $v0, $s0, 0x34F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)847) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106c0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3106C8u;
    // 0x3106c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3106C8u;
    {
        const bool branch_taken_0x3106c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106C8u;
        // 0x3106cc: 0x2402034c  addiu       $v0, $zero, 0x34C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106c8) {
            ctx->pc = 0x3106E0u;
            goto label_3106e0;
        }
    }
    ctx->pc = 0x3106D0u;
    // 0x3106d0: 0x5602079d  bnel        $s0, $v0, . + 4 + (0x79D << 2)
    ctx->pc = 0x3106D0u;
    {
        const bool branch_taken_0x3106d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3106d0) {
            ctx->pc = 0x3106D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3106D0u;
            // 0x3106d4: 0x2a02034d  slti        $v0, $s0, 0x34D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)845) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3106D8u;
    // 0x3106d8: 0x1000079b  b           . + 4 + (0x79B << 2)
    ctx->pc = 0x3106D8u;
    {
        const bool branch_taken_0x3106d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106d8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3106E0u;
label_3106e0:
    // 0x3106e0: 0x24020350  addiu       $v0, $zero, 0x350
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    // 0x3106e4: 0x12020654  beq         $s0, $v0, . + 4 + (0x654 << 2)
    ctx->pc = 0x3106E4u;
    {
        const bool branch_taken_0x3106e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3106E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106E4u;
        // 0x3106e8: 0x2a020350  slti        $v0, $s0, 0x350 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)848) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106e4) {
            ctx->pc = 0x312038u;
            goto label_312038;
        }
    }
    ctx->pc = 0x3106ECu;
    // 0x3106ec: 0x1440064e  bnez        $v0, . + 4 + (0x64E << 2)
    ctx->pc = 0x3106ECu;
    {
        const bool branch_taken_0x3106ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106ECu;
        // 0x3106f0: 0x24020351  addiu       $v0, $zero, 0x351 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 849));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106ec) {
            ctx->pc = 0x312028u;
            goto label_312028;
        }
    }
    ctx->pc = 0x3106F4u;
    // 0x3106f4: 0x12020654  beq         $s0, $v0, . + 4 + (0x654 << 2)
    ctx->pc = 0x3106F4u;
    {
        const bool branch_taken_0x3106f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106F4u;
        // 0x3106f8: 0x24020352  addiu       $v0, $zero, 0x352 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106f4) {
            ctx->pc = 0x312048u;
            goto label_312048;
        }
    }
    ctx->pc = 0x3106FCu;
    // 0x3106fc: 0x12020696  beq         $s0, $v0, . + 4 + (0x696 << 2)
    ctx->pc = 0x3106FCu;
    {
        const bool branch_taken_0x3106fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106FCu;
        // 0x310700: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106fc) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x310704u;
    // 0x310704: 0x100007a7  b           . + 4 + (0x7A7 << 2)
    ctx->pc = 0x310704u;
    {
        const bool branch_taken_0x310704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310704) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31070Cu;
label_31070c:
    // 0x31070c: 0x2402035c  addiu       $v0, $zero, 0x35C
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x310710: 0x12020671  beq         $s0, $v0, . + 4 + (0x671 << 2)
    ctx->pc = 0x310710u;
    {
        const bool branch_taken_0x310710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310710u;
        // 0x310714: 0x2a02035d  slti        $v0, $s0, 0x35D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)861) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310710) {
            ctx->pc = 0x3120D8u;
            goto label_3120d8;
        }
    }
    ctx->pc = 0x310718u;
    // 0x310718: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310718u;
    {
        const bool branch_taken_0x310718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310718u;
        // 0x31071c: 0x24020357  addiu       $v0, $zero, 0x357 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 855));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310718) {
            ctx->pc = 0x310774u;
            goto label_310774;
        }
    }
    ctx->pc = 0x310720u;
    // 0x310720: 0x1202065d  beq         $s0, $v0, . + 4 + (0x65D << 2)
    ctx->pc = 0x310720u;
    {
        const bool branch_taken_0x310720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310720u;
        // 0x310724: 0x2a020358  slti        $v0, $s0, 0x358 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)856) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310720) {
            ctx->pc = 0x312098u;
            goto label_312098;
        }
    }
    ctx->pc = 0x310728u;
    // 0x310728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310728u;
    {
        const bool branch_taken_0x310728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310728u;
        // 0x31072c: 0x24020355  addiu       $v0, $zero, 0x355 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 853));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310728) {
            ctx->pc = 0x310748u;
            goto label_310748;
        }
    }
    ctx->pc = 0x310730u;
    // 0x310730: 0x12020651  beq         $s0, $v0, . + 4 + (0x651 << 2)
    ctx->pc = 0x310730u;
    {
        const bool branch_taken_0x310730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310730u;
        // 0x310734: 0x2a020356  slti        $v0, $s0, 0x356 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)854) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310730) {
            ctx->pc = 0x312078u;
            goto label_312078;
        }
    }
    ctx->pc = 0x310738u;
    // 0x310738: 0x10400653  beqz        $v0, . + 4 + (0x653 << 2)
    ctx->pc = 0x310738u;
    {
        const bool branch_taken_0x310738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310738) {
            ctx->pc = 0x312088u;
            goto label_312088;
        }
    }
    ctx->pc = 0x310740u;
    // 0x310740: 0x10000649  b           . + 4 + (0x649 << 2)
    ctx->pc = 0x310740u;
    {
        const bool branch_taken_0x310740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310740) {
            ctx->pc = 0x312068u;
            goto label_312068;
        }
    }
    ctx->pc = 0x310748u;
label_310748:
    // 0x310748: 0x24020359  addiu       $v0, $zero, 0x359
    ctx->pc = 0x310748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 857));
    // 0x31074c: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x31074Cu;
    {
        const bool branch_taken_0x31074c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31074Cu;
        // 0x310750: 0x2a020359  slti        $v0, $s0, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31074c) {
            ctx->pc = 0x3120B8u;
            goto label_3120b8;
        }
    }
    ctx->pc = 0x310754u;
    // 0x310754: 0x14400654  bnez        $v0, . + 4 + (0x654 << 2)
    ctx->pc = 0x310754u;
    {
        const bool branch_taken_0x310754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310754u;
        // 0x310758: 0x2402035a  addiu       $v0, $zero, 0x35A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 858));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310754) {
            ctx->pc = 0x3120A8u;
            goto label_3120a8;
        }
    }
    ctx->pc = 0x31075Cu;
    // 0x31075c: 0x1202065a  beq         $s0, $v0, . + 4 + (0x65A << 2)
    ctx->pc = 0x31075Cu;
    {
        const bool branch_taken_0x31075c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31075Cu;
        // 0x310760: 0x2402035b  addiu       $v0, $zero, 0x35B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 859));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31075c) {
            ctx->pc = 0x3120C8u;
            goto label_3120c8;
        }
    }
    ctx->pc = 0x310764u;
    // 0x310764: 0x12020778  beq         $s0, $v0, . + 4 + (0x778 << 2)
    ctx->pc = 0x310764u;
    {
        const bool branch_taken_0x310764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310764u;
        // 0x310768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310764) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31076Cu;
    // 0x31076c: 0x1000078d  b           . + 4 + (0x78D << 2)
    ctx->pc = 0x31076Cu;
    {
        const bool branch_taken_0x31076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31076c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310774u;
label_310774:
    // 0x310774: 0x24020361  addiu       $v0, $zero, 0x361
    ctx->pc = 0x310774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 865));
    // 0x310778: 0x1202074b  beq         $s0, $v0, . + 4 + (0x74B << 2)
    ctx->pc = 0x310778u;
    {
        const bool branch_taken_0x310778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310778u;
        // 0x31077c: 0x2a020362  slti        $v0, $s0, 0x362 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)866) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310778) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310780u;
    // 0x310780: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310780u;
    {
        const bool branch_taken_0x310780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310780u;
        // 0x310784: 0x2402035e  addiu       $v0, $zero, 0x35E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 862));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310780) {
            ctx->pc = 0x3107B0u;
            goto label_3107b0;
        }
    }
    ctx->pc = 0x310788u;
    // 0x310788: 0x1202065b  beq         $s0, $v0, . + 4 + (0x65B << 2)
    ctx->pc = 0x310788u;
    {
        const bool branch_taken_0x310788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310788u;
        // 0x31078c: 0x2a02035e  slti        $v0, $s0, 0x35E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)862) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310788) {
            ctx->pc = 0x3120F8u;
            goto label_3120f8;
        }
    }
    ctx->pc = 0x310790u;
    // 0x310790: 0x14400655  bnez        $v0, . + 4 + (0x655 << 2)
    ctx->pc = 0x310790u;
    {
        const bool branch_taken_0x310790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310790u;
        // 0x310794: 0x2402035f  addiu       $v0, $zero, 0x35F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 863));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310790) {
            ctx->pc = 0x3120E8u;
            goto label_3120e8;
        }
    }
    ctx->pc = 0x310798u;
    // 0x310798: 0x1202065b  beq         $s0, $v0, . + 4 + (0x65B << 2)
    ctx->pc = 0x310798u;
    {
        const bool branch_taken_0x310798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310798u;
        // 0x31079c: 0x24020360  addiu       $v0, $zero, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310798) {
            ctx->pc = 0x312108u;
            goto label_312108;
        }
    }
    ctx->pc = 0x3107A0u;
    // 0x3107a0: 0x1202065d  beq         $s0, $v0, . + 4 + (0x65D << 2)
    ctx->pc = 0x3107A0u;
    {
        const bool branch_taken_0x3107a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107A0u;
        // 0x3107a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107a0) {
            ctx->pc = 0x312118u;
            goto label_312118;
        }
    }
    ctx->pc = 0x3107A8u;
    // 0x3107a8: 0x1000077e  b           . + 4 + (0x77E << 2)
    ctx->pc = 0x3107A8u;
    {
        const bool branch_taken_0x3107a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3107a8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3107B0u;
label_3107b0:
    // 0x3107b0: 0x24020363  addiu       $v0, $zero, 0x363
    ctx->pc = 0x3107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
    // 0x3107b4: 0x1202073c  beq         $s0, $v0, . + 4 + (0x73C << 2)
    ctx->pc = 0x3107B4u;
    {
        const bool branch_taken_0x3107b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107B4u;
        // 0x3107b8: 0x2a020363  slti        $v0, $s0, 0x363 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)867) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107b4) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3107BCu;
    // 0x3107bc: 0x1440073a  bnez        $v0, . + 4 + (0x73A << 2)
    ctx->pc = 0x3107BCu;
    {
        const bool branch_taken_0x3107bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107BCu;
        // 0x3107c0: 0x24020364  addiu       $v0, $zero, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107bc) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3107C4u;
    // 0x3107c4: 0x12020654  beq         $s0, $v0, . + 4 + (0x654 << 2)
    ctx->pc = 0x3107C4u;
    {
        const bool branch_taken_0x3107c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107C4u;
        // 0x3107c8: 0x24020365  addiu       $v0, $zero, 0x365 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107c4) {
            ctx->pc = 0x312118u;
            goto label_312118;
        }
    }
    ctx->pc = 0x3107CCu;
    // 0x3107cc: 0x12020736  beq         $s0, $v0, . + 4 + (0x736 << 2)
    ctx->pc = 0x3107CCu;
    {
        const bool branch_taken_0x3107cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107CCu;
        // 0x3107d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107cc) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3107D4u;
    // 0x3107d4: 0x10000773  b           . + 4 + (0x773 << 2)
    ctx->pc = 0x3107D4u;
    {
        const bool branch_taken_0x3107d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3107d4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3107DCu;
label_3107dc:
    // 0x3107dc: 0x24020379  addiu       $v0, $zero, 0x379
    ctx->pc = 0x3107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
    // 0x3107e0: 0x12020731  beq         $s0, $v0, . + 4 + (0x731 << 2)
    ctx->pc = 0x3107E0u;
    {
        const bool branch_taken_0x3107e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107E0u;
        // 0x3107e4: 0x2a02037a  slti        $v0, $s0, 0x37A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)890) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107e0) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3107E8u;
    // 0x3107e8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3107E8u;
    {
        const bool branch_taken_0x3107e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107E8u;
        // 0x3107ec: 0x2402036f  addiu       $v0, $zero, 0x36F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107e8) {
            ctx->pc = 0x3108B4u;
            goto label_3108b4;
        }
    }
    ctx->pc = 0x3107F0u;
    // 0x3107f0: 0x1202072d  beq         $s0, $v0, . + 4 + (0x72D << 2)
    ctx->pc = 0x3107F0u;
    {
        const bool branch_taken_0x3107f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3107F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107F0u;
        // 0x3107f4: 0x2a020370  slti        $v0, $s0, 0x370 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)880) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107f0) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3107F8u;
    // 0x3107f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3107F8u;
    {
        const bool branch_taken_0x3107f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107F8u;
        // 0x3107fc: 0x2402036a  addiu       $v0, $zero, 0x36A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 874));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107f8) {
            ctx->pc = 0x31084Cu;
            goto label_31084c;
        }
    }
    ctx->pc = 0x310800u;
    // 0x310800: 0x12020729  beq         $s0, $v0, . + 4 + (0x729 << 2)
    ctx->pc = 0x310800u;
    {
        const bool branch_taken_0x310800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310800u;
        // 0x310804: 0x2a02036b  slti        $v0, $s0, 0x36B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)875) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310800) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310808u;
    // 0x310808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310808u;
    {
        const bool branch_taken_0x310808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310808u;
        // 0x31080c: 0x24020368  addiu       $v0, $zero, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310808) {
            ctx->pc = 0x310820u;
            goto label_310820;
        }
    }
    ctx->pc = 0x310810u;
    // 0x310810: 0x56020725  bnel        $s0, $v0, . + 4 + (0x725 << 2)
    ctx->pc = 0x310810u;
    {
        const bool branch_taken_0x310810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x310810) {
            ctx->pc = 0x310814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310810u;
            // 0x310814: 0x2a020369  slti        $v0, $s0, 0x369 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)873) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310818u;
    // 0x310818: 0x10000723  b           . + 4 + (0x723 << 2)
    ctx->pc = 0x310818u;
    {
        const bool branch_taken_0x310818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310818) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310820u;
label_310820:
    // 0x310820: 0x2402036c  addiu       $v0, $zero, 0x36C
    ctx->pc = 0x310820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x310824: 0x12020720  beq         $s0, $v0, . + 4 + (0x720 << 2)
    ctx->pc = 0x310824u;
    {
        const bool branch_taken_0x310824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310824u;
        // 0x310828: 0x2a02036c  slti        $v0, $s0, 0x36C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)876) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310824) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x31082Cu;
    // 0x31082c: 0x1440071e  bnez        $v0, . + 4 + (0x71E << 2)
    ctx->pc = 0x31082Cu;
    {
        const bool branch_taken_0x31082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31082Cu;
        // 0x310830: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31082c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310834u;
    // 0x310834: 0x1202071c  beq         $s0, $v0, . + 4 + (0x71C << 2)
    ctx->pc = 0x310834u;
    {
        const bool branch_taken_0x310834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310834u;
        // 0x310838: 0x2402036e  addiu       $v0, $zero, 0x36E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310834) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x31083Cu;
    // 0x31083c: 0x1202071a  beq         $s0, $v0, . + 4 + (0x71A << 2)
    ctx->pc = 0x31083Cu;
    {
        const bool branch_taken_0x31083c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31083Cu;
        // 0x310840: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31083c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310844u;
    // 0x310844: 0x10000757  b           . + 4 + (0x757 << 2)
    ctx->pc = 0x310844u;
    {
        const bool branch_taken_0x310844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310844) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31084Cu;
label_31084c:
    // 0x31084c: 0x24020374  addiu       $v0, $zero, 0x374
    ctx->pc = 0x31084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
    // 0x310850: 0x12020715  beq         $s0, $v0, . + 4 + (0x715 << 2)
    ctx->pc = 0x310850u;
    {
        const bool branch_taken_0x310850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310850u;
        // 0x310854: 0x2a020375  slti        $v0, $s0, 0x375 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)885) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310850) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310858u;
    // 0x310858: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310858u;
    {
        const bool branch_taken_0x310858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310858u;
        // 0x31085c: 0x24020371  addiu       $v0, $zero, 0x371 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310858) {
            ctx->pc = 0x310888u;
            goto label_310888;
        }
    }
    ctx->pc = 0x310860u;
    // 0x310860: 0x12020631  beq         $s0, $v0, . + 4 + (0x631 << 2)
    ctx->pc = 0x310860u;
    {
        const bool branch_taken_0x310860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310860u;
        // 0x310864: 0x2a020371  slti        $v0, $s0, 0x371 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)881) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310860) {
            ctx->pc = 0x312128u;
            goto label_312128;
        }
    }
    ctx->pc = 0x310868u;
    // 0x310868: 0x1440070f  bnez        $v0, . + 4 + (0x70F << 2)
    ctx->pc = 0x310868u;
    {
        const bool branch_taken_0x310868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310868u;
        // 0x31086c: 0x24020372  addiu       $v0, $zero, 0x372 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 882));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310868) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310870u;
    // 0x310870: 0x1202070d  beq         $s0, $v0, . + 4 + (0x70D << 2)
    ctx->pc = 0x310870u;
    {
        const bool branch_taken_0x310870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310870u;
        // 0x310874: 0x24020373  addiu       $v0, $zero, 0x373 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 883));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310870) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310878u;
    // 0x310878: 0x1202070b  beq         $s0, $v0, . + 4 + (0x70B << 2)
    ctx->pc = 0x310878u;
    {
        const bool branch_taken_0x310878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310878u;
        // 0x31087c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310878) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310880u;
    // 0x310880: 0x10000748  b           . + 4 + (0x748 << 2)
    ctx->pc = 0x310880u;
    {
        const bool branch_taken_0x310880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310880) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310888u;
label_310888:
    // 0x310888: 0x24020376  addiu       $v0, $zero, 0x376
    ctx->pc = 0x310888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
    // 0x31088c: 0x12020706  beq         $s0, $v0, . + 4 + (0x706 << 2)
    ctx->pc = 0x31088Cu;
    {
        const bool branch_taken_0x31088c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31088Cu;
        // 0x310890: 0x2a020376  slti        $v0, $s0, 0x376 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)886) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31088c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310894u;
    // 0x310894: 0x14400704  bnez        $v0, . + 4 + (0x704 << 2)
    ctx->pc = 0x310894u;
    {
        const bool branch_taken_0x310894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310894u;
        // 0x310898: 0x24020377  addiu       $v0, $zero, 0x377 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 887));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310894) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x31089Cu;
    // 0x31089c: 0x12020702  beq         $s0, $v0, . + 4 + (0x702 << 2)
    ctx->pc = 0x31089Cu;
    {
        const bool branch_taken_0x31089c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3108A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31089Cu;
        // 0x3108a0: 0x24020378  addiu       $v0, $zero, 0x378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31089c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108A4u;
    // 0x3108a4: 0x12020700  beq         $s0, $v0, . + 4 + (0x700 << 2)
    ctx->pc = 0x3108A4u;
    {
        const bool branch_taken_0x3108a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3108A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108A4u;
        // 0x3108a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108a4) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108ACu;
    // 0x3108ac: 0x1000073d  b           . + 4 + (0x73D << 2)
    ctx->pc = 0x3108ACu;
    {
        const bool branch_taken_0x3108ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3108ac) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3108B4u;
label_3108b4:
    // 0x3108b4: 0x24020382  addiu       $v0, $zero, 0x382
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
    // 0x3108b8: 0x120206fb  beq         $s0, $v0, . + 4 + (0x6FB << 2)
    ctx->pc = 0x3108B8u;
    {
        const bool branch_taken_0x3108b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108B8u;
        // 0x3108bc: 0x2a020383  slti        $v0, $s0, 0x383 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)899) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108b8) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108C0u;
    // 0x3108c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3108C0u;
    {
        const bool branch_taken_0x3108c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108C0u;
        // 0x3108c4: 0x2402037d  addiu       $v0, $zero, 0x37D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 893));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108c0) {
            ctx->pc = 0x310914u;
            goto label_310914;
        }
    }
    ctx->pc = 0x3108C8u;
    // 0x3108c8: 0x120206f7  beq         $s0, $v0, . + 4 + (0x6F7 << 2)
    ctx->pc = 0x3108C8u;
    {
        const bool branch_taken_0x3108c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3108CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108C8u;
        // 0x3108cc: 0x2a02037e  slti        $v0, $s0, 0x37E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)894) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108c8) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108D0u;
    // 0x3108d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3108D0u;
    {
        const bool branch_taken_0x3108d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108D0u;
        // 0x3108d4: 0x2402037b  addiu       $v0, $zero, 0x37B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108d0) {
            ctx->pc = 0x3108E8u;
            goto label_3108e8;
        }
    }
    ctx->pc = 0x3108D8u;
    // 0x3108d8: 0x560206f3  bnel        $s0, $v0, . + 4 + (0x6F3 << 2)
    ctx->pc = 0x3108D8u;
    {
        const bool branch_taken_0x3108d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3108d8) {
            ctx->pc = 0x3108DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3108D8u;
            // 0x3108dc: 0x2a02037c  slti        $v0, $s0, 0x37C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)892) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108E0u;
    // 0x3108e0: 0x100006f1  b           . + 4 + (0x6F1 << 2)
    ctx->pc = 0x3108E0u;
    {
        const bool branch_taken_0x3108e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3108e0) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108E8u;
label_3108e8:
    // 0x3108e8: 0x2402037f  addiu       $v0, $zero, 0x37F
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    // 0x3108ec: 0x120206ee  beq         $s0, $v0, . + 4 + (0x6EE << 2)
    ctx->pc = 0x3108ECu;
    {
        const bool branch_taken_0x3108ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3108F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108ECu;
        // 0x3108f0: 0x2a02037f  slti        $v0, $s0, 0x37F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)895) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108ec) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108F4u;
    // 0x3108f4: 0x144006ec  bnez        $v0, . + 4 + (0x6EC << 2)
    ctx->pc = 0x3108F4u;
    {
        const bool branch_taken_0x3108f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3108F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108F4u;
        // 0x3108f8: 0x24020380  addiu       $v0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108f4) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3108FCu;
    // 0x3108fc: 0x120206ea  beq         $s0, $v0, . + 4 + (0x6EA << 2)
    ctx->pc = 0x3108FCu;
    {
        const bool branch_taken_0x3108fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108FCu;
        // 0x310900: 0x24020381  addiu       $v0, $zero, 0x381 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 897));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108fc) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310904u;
    // 0x310904: 0x1202060c  beq         $s0, $v0, . + 4 + (0x60C << 2)
    ctx->pc = 0x310904u;
    {
        const bool branch_taken_0x310904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310904u;
        // 0x310908: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310904) {
            ctx->pc = 0x312138u;
            goto label_312138;
        }
    }
    ctx->pc = 0x31090Cu;
    // 0x31090c: 0x10000725  b           . + 4 + (0x725 << 2)
    ctx->pc = 0x31090Cu;
    {
        const bool branch_taken_0x31090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31090c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310914u;
label_310914:
    // 0x310914: 0x24020387  addiu       $v0, $zero, 0x387
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 903));
    // 0x310918: 0x1202070b  beq         $s0, $v0, . + 4 + (0x70B << 2)
    ctx->pc = 0x310918u;
    {
        const bool branch_taken_0x310918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310918u;
        // 0x31091c: 0x2a020388  slti        $v0, $s0, 0x388 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)904) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310918) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310920u;
    // 0x310920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310920u;
    {
        const bool branch_taken_0x310920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310920u;
        // 0x310924: 0x24020384  addiu       $v0, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310920) {
            ctx->pc = 0x310950u;
            goto label_310950;
        }
    }
    ctx->pc = 0x310928u;
    // 0x310928: 0x12020707  beq         $s0, $v0, . + 4 + (0x707 << 2)
    ctx->pc = 0x310928u;
    {
        const bool branch_taken_0x310928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310928u;
        // 0x31092c: 0x2a020384  slti        $v0, $s0, 0x384 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)900) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310928) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310930u;
    // 0x310930: 0x14400705  bnez        $v0, . + 4 + (0x705 << 2)
    ctx->pc = 0x310930u;
    {
        const bool branch_taken_0x310930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310930u;
        // 0x310934: 0x24020385  addiu       $v0, $zero, 0x385 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 901));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310930) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310938u;
    // 0x310938: 0x12020703  beq         $s0, $v0, . + 4 + (0x703 << 2)
    ctx->pc = 0x310938u;
    {
        const bool branch_taken_0x310938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310938u;
        // 0x31093c: 0x24020386  addiu       $v0, $zero, 0x386 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 902));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310938) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310940u;
    // 0x310940: 0x12020701  beq         $s0, $v0, . + 4 + (0x701 << 2)
    ctx->pc = 0x310940u;
    {
        const bool branch_taken_0x310940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310940u;
        // 0x310944: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310940) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310948u;
    // 0x310948: 0x10000716  b           . + 4 + (0x716 << 2)
    ctx->pc = 0x310948u;
    {
        const bool branch_taken_0x310948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310948) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310950u;
label_310950:
    // 0x310950: 0x24020389  addiu       $v0, $zero, 0x389
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 905));
    // 0x310954: 0x120206fc  beq         $s0, $v0, . + 4 + (0x6FC << 2)
    ctx->pc = 0x310954u;
    {
        const bool branch_taken_0x310954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310954u;
        // 0x310958: 0x2a020389  slti        $v0, $s0, 0x389 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)905) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310954) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31095Cu;
    // 0x31095c: 0x144006fa  bnez        $v0, . + 4 + (0x6FA << 2)
    ctx->pc = 0x31095Cu;
    {
        const bool branch_taken_0x31095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31095Cu;
        // 0x310960: 0x2402038a  addiu       $v0, $zero, 0x38A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 906));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31095c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310964u;
    // 0x310964: 0x120206f8  beq         $s0, $v0, . + 4 + (0x6F8 << 2)
    ctx->pc = 0x310964u;
    {
        const bool branch_taken_0x310964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310964u;
        // 0x310968: 0x2402038b  addiu       $v0, $zero, 0x38B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 907));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310964) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31096Cu;
    // 0x31096c: 0x120206f6  beq         $s0, $v0, . + 4 + (0x6F6 << 2)
    ctx->pc = 0x31096Cu;
    {
        const bool branch_taken_0x31096c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31096Cu;
        // 0x310970: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31096c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310974u;
    // 0x310974: 0x1000070b  b           . + 4 + (0x70B << 2)
    ctx->pc = 0x310974u;
    {
        const bool branch_taken_0x310974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310974) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31097Cu;
label_31097c:
    // 0x31097c: 0x240203b2  addiu       $v0, $zero, 0x3B2
    ctx->pc = 0x31097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
    // 0x310980: 0x120205fd  beq         $s0, $v0, . + 4 + (0x5FD << 2)
    ctx->pc = 0x310980u;
    {
        const bool branch_taken_0x310980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310980u;
        // 0x310984: 0x2a0203b3  slti        $v0, $s0, 0x3B3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)947) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310980) {
            ctx->pc = 0x312178u;
            goto label_312178;
        }
    }
    ctx->pc = 0x310988u;
    // 0x310988: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x310988u;
    {
        const bool branch_taken_0x310988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310988u;
        // 0x31098c: 0x2402039f  addiu       $v0, $zero, 0x39F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 927));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310988) {
            ctx->pc = 0x310B2Cu;
            goto label_310b2c;
        }
    }
    ctx->pc = 0x310990u;
    // 0x310990: 0x120206ed  beq         $s0, $v0, . + 4 + (0x6ED << 2)
    ctx->pc = 0x310990u;
    {
        const bool branch_taken_0x310990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310990u;
        // 0x310994: 0x2a0203a0  slti        $v0, $s0, 0x3A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)928) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310990) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310998u;
    // 0x310998: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x310998u;
    {
        const bool branch_taken_0x310998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310998u;
        // 0x31099c: 0x24020395  addiu       $v0, $zero, 0x395 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 917));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310998) {
            ctx->pc = 0x310A64u;
            goto label_310a64;
        }
    }
    ctx->pc = 0x3109A0u;
    // 0x3109a0: 0x120206e9  beq         $s0, $v0, . + 4 + (0x6E9 << 2)
    ctx->pc = 0x3109A0u;
    {
        const bool branch_taken_0x3109a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3109A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109A0u;
        // 0x3109a4: 0x2a020396  slti        $v0, $s0, 0x396 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)918) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109a0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109A8u;
    // 0x3109a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3109A8u;
    {
        const bool branch_taken_0x3109a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109A8u;
        // 0x3109ac: 0x24020390  addiu       $v0, $zero, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109a8) {
            ctx->pc = 0x3109FCu;
            goto label_3109fc;
        }
    }
    ctx->pc = 0x3109B0u;
    // 0x3109b0: 0x120205e5  beq         $s0, $v0, . + 4 + (0x5E5 << 2)
    ctx->pc = 0x3109B0u;
    {
        const bool branch_taken_0x3109b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3109B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B0u;
        // 0x3109b4: 0x2a020391  slti        $v0, $s0, 0x391 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)913) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109b0) {
            ctx->pc = 0x312148u;
            goto label_312148;
        }
    }
    ctx->pc = 0x3109B8u;
    // 0x3109b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3109B8u;
    {
        const bool branch_taken_0x3109b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B8u;
        // 0x3109bc: 0x2402038e  addiu       $v0, $zero, 0x38E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 910));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109b8) {
            ctx->pc = 0x3109D0u;
            goto label_3109d0;
        }
    }
    ctx->pc = 0x3109C0u;
    // 0x3109c0: 0x560206e1  bnel        $s0, $v0, . + 4 + (0x6E1 << 2)
    ctx->pc = 0x3109C0u;
    {
        const bool branch_taken_0x3109c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3109c0) {
            ctx->pc = 0x3109C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3109C0u;
            // 0x3109c4: 0x2a02038f  slti        $v0, $s0, 0x38F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)911) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109C8u;
    // 0x3109c8: 0x100006df  b           . + 4 + (0x6DF << 2)
    ctx->pc = 0x3109C8u;
    {
        const bool branch_taken_0x3109c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109c8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109D0u;
label_3109d0:
    // 0x3109d0: 0x24020392  addiu       $v0, $zero, 0x392
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
    // 0x3109d4: 0x120206dc  beq         $s0, $v0, . + 4 + (0x6DC << 2)
    ctx->pc = 0x3109D4u;
    {
        const bool branch_taken_0x3109d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3109D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109D4u;
        // 0x3109d8: 0x2a020392  slti        $v0, $s0, 0x392 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)914) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109d4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109DCu;
    // 0x3109dc: 0x144006da  bnez        $v0, . + 4 + (0x6DA << 2)
    ctx->pc = 0x3109DCu;
    {
        const bool branch_taken_0x3109dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3109E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109DCu;
        // 0x3109e0: 0x24020393  addiu       $v0, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109dc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109E4u;
    // 0x3109e4: 0x120206d8  beq         $s0, $v0, . + 4 + (0x6D8 << 2)
    ctx->pc = 0x3109E4u;
    {
        const bool branch_taken_0x3109e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3109E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109E4u;
        // 0x3109e8: 0x24020394  addiu       $v0, $zero, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109ECu;
    // 0x3109ec: 0x120206d6  beq         $s0, $v0, . + 4 + (0x6D6 << 2)
    ctx->pc = 0x3109ECu;
    {
        const bool branch_taken_0x3109ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3109F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109ECu;
        // 0x3109f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109ec) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3109F4u;
    // 0x3109f4: 0x100006eb  b           . + 4 + (0x6EB << 2)
    ctx->pc = 0x3109F4u;
    {
        const bool branch_taken_0x3109f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109f4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3109FCu;
label_3109fc:
    // 0x3109fc: 0x2402039a  addiu       $v0, $zero, 0x39A
    ctx->pc = 0x3109fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 922));
    // 0x310a00: 0x120206d1  beq         $s0, $v0, . + 4 + (0x6D1 << 2)
    ctx->pc = 0x310A00u;
    {
        const bool branch_taken_0x310a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A00u;
        // 0x310a04: 0x2a02039b  slti        $v0, $s0, 0x39B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)923) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a00) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A08u;
    // 0x310a08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310A08u;
    {
        const bool branch_taken_0x310a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A08u;
        // 0x310a0c: 0x24020397  addiu       $v0, $zero, 0x397 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 919));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a08) {
            ctx->pc = 0x310A38u;
            goto label_310a38;
        }
    }
    ctx->pc = 0x310A10u;
    // 0x310a10: 0x120206cd  beq         $s0, $v0, . + 4 + (0x6CD << 2)
    ctx->pc = 0x310A10u;
    {
        const bool branch_taken_0x310a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A10u;
        // 0x310a14: 0x2a020397  slti        $v0, $s0, 0x397 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)919) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a10) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A18u;
    // 0x310a18: 0x144006cb  bnez        $v0, . + 4 + (0x6CB << 2)
    ctx->pc = 0x310A18u;
    {
        const bool branch_taken_0x310a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A18u;
        // 0x310a1c: 0x24020398  addiu       $v0, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a18) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A20u;
    // 0x310a20: 0x120206c9  beq         $s0, $v0, . + 4 + (0x6C9 << 2)
    ctx->pc = 0x310A20u;
    {
        const bool branch_taken_0x310a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A20u;
        // 0x310a24: 0x24020399  addiu       $v0, $zero, 0x399 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a20) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A28u;
    // 0x310a28: 0x120206c7  beq         $s0, $v0, . + 4 + (0x6C7 << 2)
    ctx->pc = 0x310A28u;
    {
        const bool branch_taken_0x310a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A28u;
        // 0x310a2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a28) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A30u;
    // 0x310a30: 0x100006dc  b           . + 4 + (0x6DC << 2)
    ctx->pc = 0x310A30u;
    {
        const bool branch_taken_0x310a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310A38u;
label_310a38:
    // 0x310a38: 0x2402039c  addiu       $v0, $zero, 0x39C
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 924));
    // 0x310a3c: 0x120206c2  beq         $s0, $v0, . + 4 + (0x6C2 << 2)
    ctx->pc = 0x310A3Cu;
    {
        const bool branch_taken_0x310a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A3Cu;
        // 0x310a40: 0x2a02039c  slti        $v0, $s0, 0x39C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)924) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a3c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A44u;
    // 0x310a44: 0x144006c0  bnez        $v0, . + 4 + (0x6C0 << 2)
    ctx->pc = 0x310A44u;
    {
        const bool branch_taken_0x310a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A44u;
        // 0x310a48: 0x2402039d  addiu       $v0, $zero, 0x39D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 925));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a44) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A4Cu;
    // 0x310a4c: 0x120206be  beq         $s0, $v0, . + 4 + (0x6BE << 2)
    ctx->pc = 0x310A4Cu;
    {
        const bool branch_taken_0x310a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A4Cu;
        // 0x310a50: 0x2402039e  addiu       $v0, $zero, 0x39E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 926));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a4c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A54u;
    // 0x310a54: 0x120206bc  beq         $s0, $v0, . + 4 + (0x6BC << 2)
    ctx->pc = 0x310A54u;
    {
        const bool branch_taken_0x310a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A54u;
        // 0x310a58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a54) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A5Cu;
    // 0x310a5c: 0x100006d1  b           . + 4 + (0x6D1 << 2)
    ctx->pc = 0x310A5Cu;
    {
        const bool branch_taken_0x310a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a5c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310A64u;
label_310a64:
    // 0x310a64: 0x240203a8  addiu       $v0, $zero, 0x3A8
    ctx->pc = 0x310a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 936));
    // 0x310a68: 0x1202068f  beq         $s0, $v0, . + 4 + (0x68F << 2)
    ctx->pc = 0x310A68u;
    {
        const bool branch_taken_0x310a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A68u;
        // 0x310a6c: 0x2a0203a9  slti        $v0, $s0, 0x3A9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)937) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a68) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310A70u;
    // 0x310a70: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x310A70u;
    {
        const bool branch_taken_0x310a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A70u;
        // 0x310a74: 0x240203a3  addiu       $v0, $zero, 0x3A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 931));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a70) {
            ctx->pc = 0x310AC4u;
            goto label_310ac4;
        }
    }
    ctx->pc = 0x310A78u;
    // 0x310a78: 0x120206b3  beq         $s0, $v0, . + 4 + (0x6B3 << 2)
    ctx->pc = 0x310A78u;
    {
        const bool branch_taken_0x310a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A78u;
        // 0x310a7c: 0x2a0203a4  slti        $v0, $s0, 0x3A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)932) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a78) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A80u;
    // 0x310a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310A80u;
    {
        const bool branch_taken_0x310a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A80u;
        // 0x310a84: 0x240203a1  addiu       $v0, $zero, 0x3A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 929));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a80) {
            ctx->pc = 0x310A98u;
            goto label_310a98;
        }
    }
    ctx->pc = 0x310A88u;
    // 0x310a88: 0x560206af  bnel        $s0, $v0, . + 4 + (0x6AF << 2)
    ctx->pc = 0x310A88u;
    {
        const bool branch_taken_0x310a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x310a88) {
            ctx->pc = 0x310A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310A88u;
            // 0x310a8c: 0x2a0203a2  slti        $v0, $s0, 0x3A2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)930) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A90u;
    // 0x310a90: 0x100006ad  b           . + 4 + (0x6AD << 2)
    ctx->pc = 0x310A90u;
    {
        const bool branch_taken_0x310a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a90) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310A98u;
label_310a98:
    // 0x310a98: 0x240203a5  addiu       $v0, $zero, 0x3A5
    ctx->pc = 0x310a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 933));
    // 0x310a9c: 0x120206aa  beq         $s0, $v0, . + 4 + (0x6AA << 2)
    ctx->pc = 0x310A9Cu;
    {
        const bool branch_taken_0x310a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A9Cu;
        // 0x310aa0: 0x2a0203a5  slti        $v0, $s0, 0x3A5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)933) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a9c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310AA4u;
    // 0x310aa4: 0x144006a8  bnez        $v0, . + 4 + (0x6A8 << 2)
    ctx->pc = 0x310AA4u;
    {
        const bool branch_taken_0x310aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AA4u;
        // 0x310aa8: 0x240203a6  addiu       $v0, $zero, 0x3A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 934));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aa4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310AACu;
    // 0x310aac: 0x120205aa  beq         $s0, $v0, . + 4 + (0x5AA << 2)
    ctx->pc = 0x310AACu;
    {
        const bool branch_taken_0x310aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AACu;
        // 0x310ab0: 0x240203a7  addiu       $v0, $zero, 0x3A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 935));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aac) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x310AB4u;
    // 0x310ab4: 0x120205a8  beq         $s0, $v0, . + 4 + (0x5A8 << 2)
    ctx->pc = 0x310AB4u;
    {
        const bool branch_taken_0x310ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AB4u;
        // 0x310ab8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ab4) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x310ABCu;
    // 0x310abc: 0x100006b9  b           . + 4 + (0x6B9 << 2)
    ctx->pc = 0x310ABCu;
    {
        const bool branch_taken_0x310abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310abc) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310AC4u;
label_310ac4:
    // 0x310ac4: 0x240203ad  addiu       $v0, $zero, 0x3AD
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 941));
    // 0x310ac8: 0x12020677  beq         $s0, $v0, . + 4 + (0x677 << 2)
    ctx->pc = 0x310AC8u;
    {
        const bool branch_taken_0x310ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AC8u;
        // 0x310acc: 0x2a0203ae  slti        $v0, $s0, 0x3AE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)942) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ac8) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310AD0u;
    // 0x310ad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310AD0u;
    {
        const bool branch_taken_0x310ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AD0u;
        // 0x310ad4: 0x240203aa  addiu       $v0, $zero, 0x3AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 938));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ad0) {
            ctx->pc = 0x310B00u;
            goto label_310b00;
        }
    }
    ctx->pc = 0x310AD8u;
    // 0x310ad8: 0x12020673  beq         $s0, $v0, . + 4 + (0x673 << 2)
    ctx->pc = 0x310AD8u;
    {
        const bool branch_taken_0x310ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AD8u;
        // 0x310adc: 0x2a0203aa  slti        $v0, $s0, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ad8) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310AE0u;
    // 0x310ae0: 0x14400671  bnez        $v0, . + 4 + (0x671 << 2)
    ctx->pc = 0x310AE0u;
    {
        const bool branch_taken_0x310ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AE0u;
        // 0x310ae4: 0x240203ab  addiu       $v0, $zero, 0x3AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 939));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ae0) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310AE8u;
    // 0x310ae8: 0x1202066f  beq         $s0, $v0, . + 4 + (0x66F << 2)
    ctx->pc = 0x310AE8u;
    {
        const bool branch_taken_0x310ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AE8u;
        // 0x310aec: 0x240203ac  addiu       $v0, $zero, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ae8) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310AF0u;
    // 0x310af0: 0x12020695  beq         $s0, $v0, . + 4 + (0x695 << 2)
    ctx->pc = 0x310AF0u;
    {
        const bool branch_taken_0x310af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AF0u;
        // 0x310af4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310af0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310AF8u;
    // 0x310af8: 0x100006aa  b           . + 4 + (0x6AA << 2)
    ctx->pc = 0x310AF8u;
    {
        const bool branch_taken_0x310af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310af8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310B00u;
label_310b00:
    // 0x310b00: 0x240203af  addiu       $v0, $zero, 0x3AF
    ctx->pc = 0x310b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
    // 0x310b04: 0x12020668  beq         $s0, $v0, . + 4 + (0x668 << 2)
    ctx->pc = 0x310B04u;
    {
        const bool branch_taken_0x310b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B04u;
        // 0x310b08: 0x2a0203af  slti        $v0, $s0, 0x3AF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)943) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b04) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B0Cu;
    // 0x310b0c: 0x14400666  bnez        $v0, . + 4 + (0x666 << 2)
    ctx->pc = 0x310B0Cu;
    {
        const bool branch_taken_0x310b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B0Cu;
        // 0x310b10: 0x240203b0  addiu       $v0, $zero, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b0c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B14u;
    // 0x310b14: 0x12020594  beq         $s0, $v0, . + 4 + (0x594 << 2)
    ctx->pc = 0x310B14u;
    {
        const bool branch_taken_0x310b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B14u;
        // 0x310b18: 0x240203b1  addiu       $v0, $zero, 0x3B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b14) {
            ctx->pc = 0x312168u;
            goto label_312168;
        }
    }
    ctx->pc = 0x310B1Cu;
    // 0x310b1c: 0x12020662  beq         $s0, $v0, . + 4 + (0x662 << 2)
    ctx->pc = 0x310B1Cu;
    {
        const bool branch_taken_0x310b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B1Cu;
        // 0x310b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b1c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B24u;
    // 0x310b24: 0x1000069f  b           . + 4 + (0x69F << 2)
    ctx->pc = 0x310B24u;
    {
        const bool branch_taken_0x310b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b24) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310B2Cu;
label_310b2c:
    // 0x310b2c: 0x240203c5  addiu       $v0, $zero, 0x3C5
    ctx->pc = 0x310b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 965));
    // 0x310b30: 0x120205c1  beq         $s0, $v0, . + 4 + (0x5C1 << 2)
    ctx->pc = 0x310B30u;
    {
        const bool branch_taken_0x310b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B30u;
        // 0x310b34: 0x2a0203c6  slti        $v0, $s0, 0x3C6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)966) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b30) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310B38u;
    // 0x310b38: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x310B38u;
    {
        const bool branch_taken_0x310b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B38u;
        // 0x310b3c: 0x240203bb  addiu       $v0, $zero, 0x3BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b38) {
            ctx->pc = 0x310C0Cu;
            goto label_310c0c;
        }
    }
    ctx->pc = 0x310B40u;
    // 0x310b40: 0x1202059d  beq         $s0, $v0, . + 4 + (0x59D << 2)
    ctx->pc = 0x310B40u;
    {
        const bool branch_taken_0x310b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B40u;
        // 0x310b44: 0x2a0203bc  slti        $v0, $s0, 0x3BC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)956) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b40) {
            ctx->pc = 0x3121B8u;
            goto label_3121b8;
        }
    }
    ctx->pc = 0x310B48u;
    // 0x310b48: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310B48u;
    {
        const bool branch_taken_0x310b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B48u;
        // 0x310b4c: 0x240203b6  addiu       $v0, $zero, 0x3B6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b48) {
            ctx->pc = 0x310BA4u;
            goto label_310ba4;
        }
    }
    ctx->pc = 0x310B50u;
    // 0x310b50: 0x12020595  beq         $s0, $v0, . + 4 + (0x595 << 2)
    ctx->pc = 0x310B50u;
    {
        const bool branch_taken_0x310b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B50u;
        // 0x310b54: 0x2a0203b7  slti        $v0, $s0, 0x3B7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)951) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b50) {
            ctx->pc = 0x3121A8u;
            goto label_3121a8;
        }
    }
    ctx->pc = 0x310B58u;
    // 0x310b58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310B58u;
    {
        const bool branch_taken_0x310b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B58u;
        // 0x310b5c: 0x240203b4  addiu       $v0, $zero, 0x3B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b58) {
            ctx->pc = 0x310B78u;
            goto label_310b78;
        }
    }
    ctx->pc = 0x310B60u;
    // 0x310b60: 0x12020651  beq         $s0, $v0, . + 4 + (0x651 << 2)
    ctx->pc = 0x310B60u;
    {
        const bool branch_taken_0x310b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B60u;
        // 0x310b64: 0x2a0203b5  slti        $v0, $s0, 0x3B5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)949) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b60) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B68u;
    // 0x310b68: 0x1040058b  beqz        $v0, . + 4 + (0x58B << 2)
    ctx->pc = 0x310B68u;
    {
        const bool branch_taken_0x310b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b68) {
            ctx->pc = 0x312198u;
            goto label_312198;
        }
    }
    ctx->pc = 0x310B70u;
    // 0x310b70: 0x10000585  b           . + 4 + (0x585 << 2)
    ctx->pc = 0x310B70u;
    {
        const bool branch_taken_0x310b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b70) {
            ctx->pc = 0x312188u;
            goto label_312188;
        }
    }
    ctx->pc = 0x310B78u;
label_310b78:
    // 0x310b78: 0x240203b8  addiu       $v0, $zero, 0x3B8
    ctx->pc = 0x310b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 952));
    // 0x310b7c: 0x1202064a  beq         $s0, $v0, . + 4 + (0x64A << 2)
    ctx->pc = 0x310B7Cu;
    {
        const bool branch_taken_0x310b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B7Cu;
        // 0x310b80: 0x2a0203b8  slti        $v0, $s0, 0x3B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)952) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b7c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B84u;
    // 0x310b84: 0x14400648  bnez        $v0, . + 4 + (0x648 << 2)
    ctx->pc = 0x310B84u;
    {
        const bool branch_taken_0x310b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B84u;
        // 0x310b88: 0x240203b9  addiu       $v0, $zero, 0x3B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 953));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b84) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B8Cu;
    // 0x310b8c: 0x12020646  beq         $s0, $v0, . + 4 + (0x646 << 2)
    ctx->pc = 0x310B8Cu;
    {
        const bool branch_taken_0x310b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B8Cu;
        // 0x310b90: 0x240203ba  addiu       $v0, $zero, 0x3BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b8c) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B94u;
    // 0x310b94: 0x12020644  beq         $s0, $v0, . + 4 + (0x644 << 2)
    ctx->pc = 0x310B94u;
    {
        const bool branch_taken_0x310b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B94u;
        // 0x310b98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b94) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x310B9Cu;
    // 0x310b9c: 0x10000681  b           . + 4 + (0x681 << 2)
    ctx->pc = 0x310B9Cu;
    {
        const bool branch_taken_0x310b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b9c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310BA4u;
label_310ba4:
    // 0x310ba4: 0x240203c0  addiu       $v0, $zero, 0x3C0
    ctx->pc = 0x310ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x310ba8: 0x120205a3  beq         $s0, $v0, . + 4 + (0x5A3 << 2)
    ctx->pc = 0x310BA8u;
    {
        const bool branch_taken_0x310ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BA8u;
        // 0x310bac: 0x2a0203c1  slti        $v0, $s0, 0x3C1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)961) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ba8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310BB0u;
    // 0x310bb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310BB0u;
    {
        const bool branch_taken_0x310bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BB0u;
        // 0x310bb4: 0x240203bd  addiu       $v0, $zero, 0x3BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 957));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bb0) {
            ctx->pc = 0x310BE0u;
            goto label_310be0;
        }
    }
    ctx->pc = 0x310BB8u;
    // 0x310bb8: 0x12020583  beq         $s0, $v0, . + 4 + (0x583 << 2)
    ctx->pc = 0x310BB8u;
    {
        const bool branch_taken_0x310bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BB8u;
        // 0x310bbc: 0x2a0203bd  slti        $v0, $s0, 0x3BD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)957) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bb8) {
            ctx->pc = 0x3121C8u;
            goto label_3121c8;
        }
    }
    ctx->pc = 0x310BC0u;
    // 0x310bc0: 0x1440059d  bnez        $v0, . + 4 + (0x59D << 2)
    ctx->pc = 0x310BC0u;
    {
        const bool branch_taken_0x310bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC0u;
        // 0x310bc4: 0x240203be  addiu       $v0, $zero, 0x3BE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc0) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310BC8u;
    // 0x310bc8: 0x12020583  beq         $s0, $v0, . + 4 + (0x583 << 2)
    ctx->pc = 0x310BC8u;
    {
        const bool branch_taken_0x310bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC8u;
        // 0x310bcc: 0x240203bf  addiu       $v0, $zero, 0x3BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc8) {
            ctx->pc = 0x3121D8u;
            goto label_3121d8;
        }
    }
    ctx->pc = 0x310BD0u;
    // 0x310bd0: 0x12020585  beq         $s0, $v0, . + 4 + (0x585 << 2)
    ctx->pc = 0x310BD0u;
    {
        const bool branch_taken_0x310bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BD0u;
        // 0x310bd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bd0) {
            ctx->pc = 0x3121E8u;
            goto label_3121e8;
        }
    }
    ctx->pc = 0x310BD8u;
    // 0x310bd8: 0x10000672  b           . + 4 + (0x672 << 2)
    ctx->pc = 0x310BD8u;
    {
        const bool branch_taken_0x310bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310bd8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310BE0u;
label_310be0:
    // 0x310be0: 0x240203c2  addiu       $v0, $zero, 0x3C2
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 962));
    // 0x310be4: 0x12020594  beq         $s0, $v0, . + 4 + (0x594 << 2)
    ctx->pc = 0x310BE4u;
    {
        const bool branch_taken_0x310be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BE4u;
        // 0x310be8: 0x2a0203c2  slti        $v0, $s0, 0x3C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)962) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310be4) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310BECu;
    // 0x310bec: 0x14400592  bnez        $v0, . + 4 + (0x592 << 2)
    ctx->pc = 0x310BECu;
    {
        const bool branch_taken_0x310bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BECu;
        // 0x310bf0: 0x240203c3  addiu       $v0, $zero, 0x3C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bec) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310BF4u;
    // 0x310bf4: 0x12020590  beq         $s0, $v0, . + 4 + (0x590 << 2)
    ctx->pc = 0x310BF4u;
    {
        const bool branch_taken_0x310bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BF4u;
        // 0x310bf8: 0x240203c4  addiu       $v0, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bf4) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310BFCu;
    // 0x310bfc: 0x1202058e  beq         $s0, $v0, . + 4 + (0x58E << 2)
    ctx->pc = 0x310BFCu;
    {
        const bool branch_taken_0x310bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BFCu;
        // 0x310c00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bfc) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C04u;
    // 0x310c04: 0x10000667  b           . + 4 + (0x667 << 2)
    ctx->pc = 0x310C04u;
    {
        const bool branch_taken_0x310c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c04) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310C0Cu;
label_310c0c:
    // 0x310c0c: 0x240203ce  addiu       $v0, $zero, 0x3CE
    ctx->pc = 0x310c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 974));
    // 0x310c10: 0x12020589  beq         $s0, $v0, . + 4 + (0x589 << 2)
    ctx->pc = 0x310C10u;
    {
        const bool branch_taken_0x310c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C10u;
        // 0x310c14: 0x2a0203cf  slti        $v0, $s0, 0x3CF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)975) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c10) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C18u;
    // 0x310c18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310C18u;
    {
        const bool branch_taken_0x310c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C18u;
        // 0x310c1c: 0x240203c9  addiu       $v0, $zero, 0x3C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 969));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c18) {
            ctx->pc = 0x310C74u;
            goto label_310c74;
        }
    }
    ctx->pc = 0x310C20u;
    // 0x310c20: 0x12020585  beq         $s0, $v0, . + 4 + (0x585 << 2)
    ctx->pc = 0x310C20u;
    {
        const bool branch_taken_0x310c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C20u;
        // 0x310c24: 0x2a0203ca  slti        $v0, $s0, 0x3CA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)970) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c20) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C28u;
    // 0x310c28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310C28u;
    {
        const bool branch_taken_0x310c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C28u;
        // 0x310c2c: 0x240203c7  addiu       $v0, $zero, 0x3C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 967));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c28) {
            ctx->pc = 0x310C48u;
            goto label_310c48;
        }
    }
    ctx->pc = 0x310C30u;
    // 0x310c30: 0x12020645  beq         $s0, $v0, . + 4 + (0x645 << 2)
    ctx->pc = 0x310C30u;
    {
        const bool branch_taken_0x310c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C30u;
        // 0x310c34: 0x2a0203c8  slti        $v0, $s0, 0x3C8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)968) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c30) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310C38u;
    // 0x310c38: 0x1040057f  beqz        $v0, . + 4 + (0x57F << 2)
    ctx->pc = 0x310C38u;
    {
        const bool branch_taken_0x310c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c38) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C40u;
    // 0x310c40: 0x10000641  b           . + 4 + (0x641 << 2)
    ctx->pc = 0x310C40u;
    {
        const bool branch_taken_0x310c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c40) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310C48u;
label_310c48:
    // 0x310c48: 0x240203cb  addiu       $v0, $zero, 0x3CB
    ctx->pc = 0x310c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 971));
    // 0x310c4c: 0x1202057a  beq         $s0, $v0, . + 4 + (0x57A << 2)
    ctx->pc = 0x310C4Cu;
    {
        const bool branch_taken_0x310c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C4Cu;
        // 0x310c50: 0x2a0203cb  slti        $v0, $s0, 0x3CB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)971) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c4c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C54u;
    // 0x310c54: 0x14400578  bnez        $v0, . + 4 + (0x578 << 2)
    ctx->pc = 0x310C54u;
    {
        const bool branch_taken_0x310c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C54u;
        // 0x310c58: 0x240203cc  addiu       $v0, $zero, 0x3CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c54) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C5Cu;
    // 0x310c5c: 0x12020576  beq         $s0, $v0, . + 4 + (0x576 << 2)
    ctx->pc = 0x310C5Cu;
    {
        const bool branch_taken_0x310c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C5Cu;
        // 0x310c60: 0x240203cd  addiu       $v0, $zero, 0x3CD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 973));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c5c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C64u;
    // 0x310c64: 0x12020574  beq         $s0, $v0, . + 4 + (0x574 << 2)
    ctx->pc = 0x310C64u;
    {
        const bool branch_taken_0x310c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C64u;
        // 0x310c68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c64) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C6Cu;
    // 0x310c6c: 0x1000064d  b           . + 4 + (0x64D << 2)
    ctx->pc = 0x310C6Cu;
    {
        const bool branch_taken_0x310c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310c6c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310C74u;
label_310c74:
    // 0x310c74: 0x240203d3  addiu       $v0, $zero, 0x3D3
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 979));
    // 0x310c78: 0x1202056f  beq         $s0, $v0, . + 4 + (0x56F << 2)
    ctx->pc = 0x310C78u;
    {
        const bool branch_taken_0x310c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C78u;
        // 0x310c7c: 0x2a0203d4  slti        $v0, $s0, 0x3D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)980) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c78) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C80u;
    // 0x310c80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310C80u;
    {
        const bool branch_taken_0x310c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C80u;
        // 0x310c84: 0x240203d0  addiu       $v0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c80) {
            ctx->pc = 0x310CB0u;
            goto label_310cb0;
        }
    }
    ctx->pc = 0x310C88u;
    // 0x310c88: 0x1202056b  beq         $s0, $v0, . + 4 + (0x56B << 2)
    ctx->pc = 0x310C88u;
    {
        const bool branch_taken_0x310c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C88u;
        // 0x310c8c: 0x2a0203d0  slti        $v0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)976) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c88) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C90u;
    // 0x310c90: 0x14400569  bnez        $v0, . + 4 + (0x569 << 2)
    ctx->pc = 0x310C90u;
    {
        const bool branch_taken_0x310c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C90u;
        // 0x310c94: 0x240203d1  addiu       $v0, $zero, 0x3D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c90) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310C98u;
    // 0x310c98: 0x12020567  beq         $s0, $v0, . + 4 + (0x567 << 2)
    ctx->pc = 0x310C98u;
    {
        const bool branch_taken_0x310c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C98u;
        // 0x310c9c: 0x240203d2  addiu       $v0, $zero, 0x3D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 978));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c98) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CA0u;
    // 0x310ca0: 0x12020565  beq         $s0, $v0, . + 4 + (0x565 << 2)
    ctx->pc = 0x310CA0u;
    {
        const bool branch_taken_0x310ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CA0u;
        // 0x310ca4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ca0) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CA8u;
    // 0x310ca8: 0x1000063e  b           . + 4 + (0x63E << 2)
    ctx->pc = 0x310CA8u;
    {
        const bool branch_taken_0x310ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310ca8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310CB0u;
label_310cb0:
    // 0x310cb0: 0x240203d5  addiu       $v0, $zero, 0x3D5
    ctx->pc = 0x310cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 981));
    // 0x310cb4: 0x12020560  beq         $s0, $v0, . + 4 + (0x560 << 2)
    ctx->pc = 0x310CB4u;
    {
        const bool branch_taken_0x310cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CB4u;
        // 0x310cb8: 0x2a0203d5  slti        $v0, $s0, 0x3D5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)981) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cb4) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CBCu;
    // 0x310cbc: 0x1440055e  bnez        $v0, . + 4 + (0x55E << 2)
    ctx->pc = 0x310CBCu;
    {
        const bool branch_taken_0x310cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CBCu;
        // 0x310cc0: 0x240203d6  addiu       $v0, $zero, 0x3D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 982));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cbc) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CC4u;
    // 0x310cc4: 0x1202055c  beq         $s0, $v0, . + 4 + (0x55C << 2)
    ctx->pc = 0x310CC4u;
    {
        const bool branch_taken_0x310cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CC4u;
        // 0x310cc8: 0x240203d7  addiu       $v0, $zero, 0x3D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cc4) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CCCu;
    // 0x310ccc: 0x1202055a  beq         $s0, $v0, . + 4 + (0x55A << 2)
    ctx->pc = 0x310CCCu;
    {
        const bool branch_taken_0x310ccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CCCu;
        // 0x310cd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ccc) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310CD4u;
    // 0x310cd4: 0x10000633  b           . + 4 + (0x633 << 2)
    ctx->pc = 0x310CD4u;
    {
        const bool branch_taken_0x310cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310cd4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310CDCu;
label_310cdc:
    // 0x310cdc: 0x2402046f  addiu       $v0, $zero, 0x46F
    ctx->pc = 0x310cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1135));
    // 0x310ce0: 0x12020619  beq         $s0, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x310CE0u;
    {
        const bool branch_taken_0x310ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CE0u;
        // 0x310ce4: 0x2a020470  slti        $v0, $s0, 0x470 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ce0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310CE8u;
    // 0x310ce8: 0x104001b0  beqz        $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x310CE8u;
    {
        const bool branch_taken_0x310ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CE8u;
        // 0x310cec: 0x24020423  addiu       $v0, $zero, 0x423 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ce8) {
            ctx->pc = 0x3113ACu;
            goto label_3113ac;
        }
    }
    ctx->pc = 0x310CF0u;
    // 0x310cf0: 0x120205d5  beq         $s0, $v0, . + 4 + (0x5D5 << 2)
    ctx->pc = 0x310CF0u;
    {
        const bool branch_taken_0x310cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CF0u;
        // 0x310cf4: 0x2a020424  slti        $v0, $s0, 0x424 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1060) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cf0) {
            ctx->pc = 0x312448u;
            goto label_312448;
        }
    }
    ctx->pc = 0x310CF8u;
    // 0x310cf8: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x310CF8u;
    {
        const bool branch_taken_0x310cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CF8u;
        // 0x310cfc: 0x240203fd  addiu       $v0, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cf8) {
            ctx->pc = 0x311054u;
            goto label_311054;
        }
    }
    ctx->pc = 0x310D00u;
    // 0x310d00: 0x1202054d  beq         $s0, $v0, . + 4 + (0x54D << 2)
    ctx->pc = 0x310D00u;
    {
        const bool branch_taken_0x310d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D00u;
        // 0x310d04: 0x2a0203fe  slti        $v0, $s0, 0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1022) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d00) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D08u;
    // 0x310d08: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x310D08u;
    {
        const bool branch_taken_0x310d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D08u;
        // 0x310d0c: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d08) {
            ctx->pc = 0x310EA4u;
            goto label_310ea4;
        }
    }
    ctx->pc = 0x310D10u;
    // 0x310d10: 0x12020541  beq         $s0, $v0, . + 4 + (0x541 << 2)
    ctx->pc = 0x310D10u;
    {
        const bool branch_taken_0x310d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D10u;
        // 0x310d14: 0x2a0203eb  slti        $v0, $s0, 0x3EB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1003) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d10) {
            ctx->pc = 0x312218u;
            goto label_312218;
        }
    }
    ctx->pc = 0x310D18u;
    // 0x310d18: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x310D18u;
    {
        const bool branch_taken_0x310d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D18u;
        // 0x310d1c: 0x240203e1  addiu       $v0, $zero, 0x3E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d18) {
            ctx->pc = 0x310DD4u;
            goto label_310dd4;
        }
    }
    ctx->pc = 0x310D20u;
    // 0x310d20: 0x12020545  beq         $s0, $v0, . + 4 + (0x545 << 2)
    ctx->pc = 0x310D20u;
    {
        const bool branch_taken_0x310d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D20u;
        // 0x310d24: 0x2a0203e2  slti        $v0, $s0, 0x3E2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)994) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d20) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D28u;
    // 0x310d28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x310D28u;
    {
        const bool branch_taken_0x310d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D28u;
        // 0x310d2c: 0x240203dc  addiu       $v0, $zero, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d28) {
            ctx->pc = 0x310D7Cu;
            goto label_310d7c;
        }
    }
    ctx->pc = 0x310D30u;
    // 0x310d30: 0x12020541  beq         $s0, $v0, . + 4 + (0x541 << 2)
    ctx->pc = 0x310D30u;
    {
        const bool branch_taken_0x310d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D30u;
        // 0x310d34: 0x2a0203dd  slti        $v0, $s0, 0x3DD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)989) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d30) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D38u;
    // 0x310d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310D38u;
    {
        const bool branch_taken_0x310d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D38u;
        // 0x310d3c: 0x240203da  addiu       $v0, $zero, 0x3DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d38) {
            ctx->pc = 0x310D50u;
            goto label_310d50;
        }
    }
    ctx->pc = 0x310D40u;
    // 0x310d40: 0x5602053d  bnel        $s0, $v0, . + 4 + (0x53D << 2)
    ctx->pc = 0x310D40u;
    {
        const bool branch_taken_0x310d40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x310d40) {
            ctx->pc = 0x310D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310D40u;
            // 0x310d44: 0x2a0203db  slti        $v0, $s0, 0x3DB (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)987) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D48u;
    // 0x310d48: 0x1000053b  b           . + 4 + (0x53B << 2)
    ctx->pc = 0x310D48u;
    {
        const bool branch_taken_0x310d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d48) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D50u;
label_310d50:
    // 0x310d50: 0x240203de  addiu       $v0, $zero, 0x3DE
    ctx->pc = 0x310d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 990));
    // 0x310d54: 0x12020538  beq         $s0, $v0, . + 4 + (0x538 << 2)
    ctx->pc = 0x310D54u;
    {
        const bool branch_taken_0x310d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D54u;
        // 0x310d58: 0x2a0203de  slti        $v0, $s0, 0x3DE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)990) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d54) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D5Cu;
    // 0x310d5c: 0x14400536  bnez        $v0, . + 4 + (0x536 << 2)
    ctx->pc = 0x310D5Cu;
    {
        const bool branch_taken_0x310d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D5Cu;
        // 0x310d60: 0x240203df  addiu       $v0, $zero, 0x3DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d5c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D64u;
    // 0x310d64: 0x12020534  beq         $s0, $v0, . + 4 + (0x534 << 2)
    ctx->pc = 0x310D64u;
    {
        const bool branch_taken_0x310d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D64u;
        // 0x310d68: 0x240203e0  addiu       $v0, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d64) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D6Cu;
    // 0x310d6c: 0x12020532  beq         $s0, $v0, . + 4 + (0x532 << 2)
    ctx->pc = 0x310D6Cu;
    {
        const bool branch_taken_0x310d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D6Cu;
        // 0x310d70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d6c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D74u;
    // 0x310d74: 0x1000060b  b           . + 4 + (0x60B << 2)
    ctx->pc = 0x310D74u;
    {
        const bool branch_taken_0x310d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d74) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310D7Cu;
label_310d7c:
    // 0x310d7c: 0x240203e5  addiu       $v0, $zero, 0x3E5
    ctx->pc = 0x310d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 997));
    // 0x310d80: 0x1202051d  beq         $s0, $v0, . + 4 + (0x51D << 2)
    ctx->pc = 0x310D80u;
    {
        const bool branch_taken_0x310d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D80u;
        // 0x310d84: 0x2a0203e6  slti        $v0, $s0, 0x3E6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)998) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d80) {
            ctx->pc = 0x3121F8u;
            goto label_3121f8;
        }
    }
    ctx->pc = 0x310D88u;
    // 0x310d88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310D88u;
    {
        const bool branch_taken_0x310d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D88u;
        // 0x310d8c: 0x240203e3  addiu       $v0, $zero, 0x3E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d88) {
            ctx->pc = 0x310DA8u;
            goto label_310da8;
        }
    }
    ctx->pc = 0x310D90u;
    // 0x310d90: 0x12020529  beq         $s0, $v0, . + 4 + (0x529 << 2)
    ctx->pc = 0x310D90u;
    {
        const bool branch_taken_0x310d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D90u;
        // 0x310d94: 0x2a0203e4  slti        $v0, $s0, 0x3E4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)996) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d90) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310D98u;
    // 0x310d98: 0x10400517  beqz        $v0, . + 4 + (0x517 << 2)
    ctx->pc = 0x310D98u;
    {
        const bool branch_taken_0x310d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310d98) {
            ctx->pc = 0x3121F8u;
            goto label_3121f8;
        }
    }
    ctx->pc = 0x310DA0u;
    // 0x310da0: 0x10000525  b           . + 4 + (0x525 << 2)
    ctx->pc = 0x310DA0u;
    {
        const bool branch_taken_0x310da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310da0) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310DA8u;
label_310da8:
    // 0x310da8: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x310da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x310dac: 0x12020512  beq         $s0, $v0, . + 4 + (0x512 << 2)
    ctx->pc = 0x310DACu;
    {
        const bool branch_taken_0x310dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DACu;
        // 0x310db0: 0x2a0203e7  slti        $v0, $s0, 0x3E7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)999) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dac) {
            ctx->pc = 0x3121F8u;
            goto label_3121f8;
        }
    }
    ctx->pc = 0x310DB4u;
    // 0x310db4: 0x14400510  bnez        $v0, . + 4 + (0x510 << 2)
    ctx->pc = 0x310DB4u;
    {
        const bool branch_taken_0x310db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DB4u;
        // 0x310db8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310db4) {
            ctx->pc = 0x3121F8u;
            goto label_3121f8;
        }
    }
    ctx->pc = 0x310DBCu;
    // 0x310dbc: 0x1202050e  beq         $s0, $v0, . + 4 + (0x50E << 2)
    ctx->pc = 0x310DBCu;
    {
        const bool branch_taken_0x310dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DBCu;
        // 0x310dc0: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dbc) {
            ctx->pc = 0x3121F8u;
            goto label_3121f8;
        }
    }
    ctx->pc = 0x310DC4u;
    // 0x310dc4: 0x12020510  beq         $s0, $v0, . + 4 + (0x510 << 2)
    ctx->pc = 0x310DC4u;
    {
        const bool branch_taken_0x310dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DC4u;
        // 0x310dc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dc4) {
            ctx->pc = 0x312208u;
            goto label_312208;
        }
    }
    ctx->pc = 0x310DCCu;
    // 0x310dcc: 0x100005f5  b           . + 4 + (0x5F5 << 2)
    ctx->pc = 0x310DCCu;
    {
        const bool branch_taken_0x310dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310dcc) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310DD4u;
label_310dd4:
    // 0x310dd4: 0x240203f3  addiu       $v0, $zero, 0x3F3
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
    // 0x310dd8: 0x12020517  beq         $s0, $v0, . + 4 + (0x517 << 2)
    ctx->pc = 0x310DD8u;
    {
        const bool branch_taken_0x310dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DD8u;
        // 0x310ddc: 0x2a0203f4  slti        $v0, $s0, 0x3F4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1012) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dd8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310DE0u;
    // 0x310de0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310DE0u;
    {
        const bool branch_taken_0x310de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DE0u;
        // 0x310de4: 0x240203ee  addiu       $v0, $zero, 0x3EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1006));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310de0) {
            ctx->pc = 0x310E3Cu;
            goto label_310e3c;
        }
    }
    ctx->pc = 0x310DE8u;
    // 0x310de8: 0x12020513  beq         $s0, $v0, . + 4 + (0x513 << 2)
    ctx->pc = 0x310DE8u;
    {
        const bool branch_taken_0x310de8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DE8u;
        // 0x310dec: 0x2a0203ef  slti        $v0, $s0, 0x3EF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1007) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310de8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310DF0u;
    // 0x310df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310DF0u;
    {
        const bool branch_taken_0x310df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DF0u;
        // 0x310df4: 0x240203ec  addiu       $v0, $zero, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310df0) {
            ctx->pc = 0x310E10u;
            goto label_310e10;
        }
    }
    ctx->pc = 0x310DF8u;
    // 0x310df8: 0x1202050f  beq         $s0, $v0, . + 4 + (0x50F << 2)
    ctx->pc = 0x310DF8u;
    {
        const bool branch_taken_0x310df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DF8u;
        // 0x310dfc: 0x2a0203ed  slti        $v0, $s0, 0x3ED (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1005) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310df8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E00u;
    // 0x310e00: 0x1040050d  beqz        $v0, . + 4 + (0x50D << 2)
    ctx->pc = 0x310E00u;
    {
        const bool branch_taken_0x310e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e00) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E08u;
    // 0x310e08: 0x10000507  b           . + 4 + (0x507 << 2)
    ctx->pc = 0x310E08u;
    {
        const bool branch_taken_0x310e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e08) {
            ctx->pc = 0x312228u;
            goto label_312228;
        }
    }
    ctx->pc = 0x310E10u;
label_310e10:
    // 0x310e10: 0x240203f0  addiu       $v0, $zero, 0x3F0
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x310e14: 0x12020508  beq         $s0, $v0, . + 4 + (0x508 << 2)
    ctx->pc = 0x310E14u;
    {
        const bool branch_taken_0x310e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E14u;
        // 0x310e18: 0x2a0203f0  slti        $v0, $s0, 0x3F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1008) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e14) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E1Cu;
    // 0x310e1c: 0x14400506  bnez        $v0, . + 4 + (0x506 << 2)
    ctx->pc = 0x310E1Cu;
    {
        const bool branch_taken_0x310e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E1Cu;
        // 0x310e20: 0x240203f1  addiu       $v0, $zero, 0x3F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e1c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E24u;
    // 0x310e24: 0x12020504  beq         $s0, $v0, . + 4 + (0x504 << 2)
    ctx->pc = 0x310E24u;
    {
        const bool branch_taken_0x310e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E24u;
        // 0x310e28: 0x240203f2  addiu       $v0, $zero, 0x3F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e24) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E2Cu;
    // 0x310e2c: 0x12020502  beq         $s0, $v0, . + 4 + (0x502 << 2)
    ctx->pc = 0x310E2Cu;
    {
        const bool branch_taken_0x310e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E2Cu;
        // 0x310e30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e2c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E34u;
    // 0x310e34: 0x100005db  b           . + 4 + (0x5DB << 2)
    ctx->pc = 0x310E34u;
    {
        const bool branch_taken_0x310e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e34) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310E3Cu;
label_310e3c:
    // 0x310e3c: 0x240203f8  addiu       $v0, $zero, 0x3F8
    ctx->pc = 0x310e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x310e40: 0x120204fd  beq         $s0, $v0, . + 4 + (0x4FD << 2)
    ctx->pc = 0x310E40u;
    {
        const bool branch_taken_0x310e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E40u;
        // 0x310e44: 0x2a0203f9  slti        $v0, $s0, 0x3F9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1017) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e40) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E48u;
    // 0x310e48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310E48u;
    {
        const bool branch_taken_0x310e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E48u;
        // 0x310e4c: 0x240203f5  addiu       $v0, $zero, 0x3F5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e48) {
            ctx->pc = 0x310E78u;
            goto label_310e78;
        }
    }
    ctx->pc = 0x310E50u;
    // 0x310e50: 0x120204f9  beq         $s0, $v0, . + 4 + (0x4F9 << 2)
    ctx->pc = 0x310E50u;
    {
        const bool branch_taken_0x310e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E50u;
        // 0x310e54: 0x2a0203f5  slti        $v0, $s0, 0x3F5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1013) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e50) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E58u;
    // 0x310e58: 0x144004f7  bnez        $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x310E58u;
    {
        const bool branch_taken_0x310e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E58u;
        // 0x310e5c: 0x240203f6  addiu       $v0, $zero, 0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e58) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E60u;
    // 0x310e60: 0x120204f5  beq         $s0, $v0, . + 4 + (0x4F5 << 2)
    ctx->pc = 0x310E60u;
    {
        const bool branch_taken_0x310e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E60u;
        // 0x310e64: 0x240203f7  addiu       $v0, $zero, 0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e60) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E68u;
    // 0x310e68: 0x120204f3  beq         $s0, $v0, . + 4 + (0x4F3 << 2)
    ctx->pc = 0x310E68u;
    {
        const bool branch_taken_0x310e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E68u;
        // 0x310e6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e68) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E70u;
    // 0x310e70: 0x100005cc  b           . + 4 + (0x5CC << 2)
    ctx->pc = 0x310E70u;
    {
        const bool branch_taken_0x310e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310E78u;
label_310e78:
    // 0x310e78: 0x240203fa  addiu       $v0, $zero, 0x3FA
    ctx->pc = 0x310e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
    // 0x310e7c: 0x120204ee  beq         $s0, $v0, . + 4 + (0x4EE << 2)
    ctx->pc = 0x310E7Cu;
    {
        const bool branch_taken_0x310e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E7Cu;
        // 0x310e80: 0x2a0203fa  slti        $v0, $s0, 0x3FA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1018) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e7c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E84u;
    // 0x310e84: 0x144004ec  bnez        $v0, . + 4 + (0x4EC << 2)
    ctx->pc = 0x310E84u;
    {
        const bool branch_taken_0x310e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E84u;
        // 0x310e88: 0x240203fb  addiu       $v0, $zero, 0x3FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e84) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E8Cu;
    // 0x310e8c: 0x120204ea  beq         $s0, $v0, . + 4 + (0x4EA << 2)
    ctx->pc = 0x310E8Cu;
    {
        const bool branch_taken_0x310e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E8Cu;
        // 0x310e90: 0x240203fc  addiu       $v0, $zero, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e8c) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E94u;
    // 0x310e94: 0x120204e8  beq         $s0, $v0, . + 4 + (0x4E8 << 2)
    ctx->pc = 0x310E94u;
    {
        const bool branch_taken_0x310e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E94u;
        // 0x310e98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e94) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310E9Cu;
    // 0x310e9c: 0x100005c1  b           . + 4 + (0x5C1 << 2)
    ctx->pc = 0x310E9Cu;
    {
        const bool branch_taken_0x310e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e9c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310EA4u;
label_310ea4:
    // 0x310ea4: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x310ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x310ea8: 0x1202051f  beq         $s0, $v0, . + 4 + (0x51F << 2)
    ctx->pc = 0x310EA8u;
    {
        const bool branch_taken_0x310ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EA8u;
        // 0x310eac: 0x2a020411  slti        $v0, $s0, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1041) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ea8) {
            ctx->pc = 0x312328u;
            goto label_312328;
        }
    }
    ctx->pc = 0x310EB0u;
    // 0x310eb0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x310EB0u;
    {
        const bool branch_taken_0x310eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EB0u;
        // 0x310eb4: 0x24020406  addiu       $v0, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310eb0) {
            ctx->pc = 0x310F84u;
            goto label_310f84;
        }
    }
    ctx->pc = 0x310EB8u;
    // 0x310eb8: 0x120204fb  beq         $s0, $v0, . + 4 + (0x4FB << 2)
    ctx->pc = 0x310EB8u;
    {
        const bool branch_taken_0x310eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EB8u;
        // 0x310ebc: 0x2a020407  slti        $v0, $s0, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1031) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310eb8) {
            ctx->pc = 0x3122A8u;
            goto label_3122a8;
        }
    }
    ctx->pc = 0x310EC0u;
    // 0x310ec0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310EC0u;
    {
        const bool branch_taken_0x310ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EC0u;
        // 0x310ec4: 0x24020401  addiu       $v0, $zero, 0x401 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ec0) {
            ctx->pc = 0x310F1Cu;
            goto label_310f1c;
        }
    }
    ctx->pc = 0x310EC8u;
    // 0x310ec8: 0x120204e3  beq         $s0, $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x310EC8u;
    {
        const bool branch_taken_0x310ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EC8u;
        // 0x310ecc: 0x2a020402  slti        $v0, $s0, 0x402 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1026) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ec8) {
            ctx->pc = 0x312258u;
            goto label_312258;
        }
    }
    ctx->pc = 0x310ED0u;
    // 0x310ed0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310ED0u;
    {
        const bool branch_taken_0x310ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ED0u;
        // 0x310ed4: 0x240203ff  addiu       $v0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ed0) {
            ctx->pc = 0x310EF0u;
            goto label_310ef0;
        }
    }
    ctx->pc = 0x310ED8u;
    // 0x310ed8: 0x120204d7  beq         $s0, $v0, . + 4 + (0x4D7 << 2)
    ctx->pc = 0x310ED8u;
    {
        const bool branch_taken_0x310ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310ED8u;
        // 0x310edc: 0x2a020400  slti        $v0, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ed8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310EE0u;
    // 0x310ee0: 0x104004d9  beqz        $v0, . + 4 + (0x4D9 << 2)
    ctx->pc = 0x310EE0u;
    {
        const bool branch_taken_0x310ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310ee0) {
            ctx->pc = 0x312248u;
            goto label_312248;
        }
    }
    ctx->pc = 0x310EE8u;
    // 0x310ee8: 0x100004d3  b           . + 4 + (0x4D3 << 2)
    ctx->pc = 0x310EE8u;
    {
        const bool branch_taken_0x310ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310ee8) {
            ctx->pc = 0x312238u;
            goto label_312238;
        }
    }
    ctx->pc = 0x310EF0u;
label_310ef0:
    // 0x310ef0: 0x24020403  addiu       $v0, $zero, 0x403
    ctx->pc = 0x310ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x310ef4: 0x120204e0  beq         $s0, $v0, . + 4 + (0x4E0 << 2)
    ctx->pc = 0x310EF4u;
    {
        const bool branch_taken_0x310ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EF4u;
        // 0x310ef8: 0x2a020403  slti        $v0, $s0, 0x403 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1027) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ef4) {
            ctx->pc = 0x312278u;
            goto label_312278;
        }
    }
    ctx->pc = 0x310EFCu;
    // 0x310efc: 0x144004da  bnez        $v0, . + 4 + (0x4DA << 2)
    ctx->pc = 0x310EFCu;
    {
        const bool branch_taken_0x310efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EFCu;
        // 0x310f00: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310efc) {
            ctx->pc = 0x312268u;
            goto label_312268;
        }
    }
    ctx->pc = 0x310F04u;
    // 0x310f04: 0x120204e0  beq         $s0, $v0, . + 4 + (0x4E0 << 2)
    ctx->pc = 0x310F04u;
    {
        const bool branch_taken_0x310f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F04u;
        // 0x310f08: 0x24020405  addiu       $v0, $zero, 0x405 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f04) {
            ctx->pc = 0x312288u;
            goto label_312288;
        }
    }
    ctx->pc = 0x310F0Cu;
    // 0x310f0c: 0x120204e2  beq         $s0, $v0, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x310F0Cu;
    {
        const bool branch_taken_0x310f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F0Cu;
        // 0x310f10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f0c) {
            ctx->pc = 0x312298u;
            goto label_312298;
        }
    }
    ctx->pc = 0x310F14u;
    // 0x310f14: 0x100005a3  b           . + 4 + (0x5A3 << 2)
    ctx->pc = 0x310F14u;
    {
        const bool branch_taken_0x310f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f14) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310F1Cu;
label_310f1c:
    // 0x310f1c: 0x2402040b  addiu       $v0, $zero, 0x40B
    ctx->pc = 0x310f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x310f20: 0x12020589  beq         $s0, $v0, . + 4 + (0x589 << 2)
    ctx->pc = 0x310F20u;
    {
        const bool branch_taken_0x310f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F20u;
        // 0x310f24: 0x2a02040c  slti        $v0, $s0, 0x40C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1036) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f20) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310F28u;
    // 0x310f28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310F28u;
    {
        const bool branch_taken_0x310f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F28u;
        // 0x310f2c: 0x24020408  addiu       $v0, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f28) {
            ctx->pc = 0x310F58u;
            goto label_310f58;
        }
    }
    ctx->pc = 0x310F30u;
    // 0x310f30: 0x120204e5  beq         $s0, $v0, . + 4 + (0x4E5 << 2)
    ctx->pc = 0x310F30u;
    {
        const bool branch_taken_0x310f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F30u;
        // 0x310f34: 0x2a020408  slti        $v0, $s0, 0x408 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1032) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f30) {
            ctx->pc = 0x3122C8u;
            goto label_3122c8;
        }
    }
    ctx->pc = 0x310F38u;
    // 0x310f38: 0x144004df  bnez        $v0, . + 4 + (0x4DF << 2)
    ctx->pc = 0x310F38u;
    {
        const bool branch_taken_0x310f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F38u;
        // 0x310f3c: 0x24020409  addiu       $v0, $zero, 0x409 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f38) {
            ctx->pc = 0x3122B8u;
            goto label_3122b8;
        }
    }
    ctx->pc = 0x310F40u;
    // 0x310f40: 0x120204e5  beq         $s0, $v0, . + 4 + (0x4E5 << 2)
    ctx->pc = 0x310F40u;
    {
        const bool branch_taken_0x310f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F40u;
        // 0x310f44: 0x2402040a  addiu       $v0, $zero, 0x40A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f40) {
            ctx->pc = 0x3122D8u;
            goto label_3122d8;
        }
    }
    ctx->pc = 0x310F48u;
    // 0x310f48: 0x120204e7  beq         $s0, $v0, . + 4 + (0x4E7 << 2)
    ctx->pc = 0x310F48u;
    {
        const bool branch_taken_0x310f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F48u;
        // 0x310f4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f48) {
            ctx->pc = 0x3122E8u;
            goto label_3122e8;
        }
    }
    ctx->pc = 0x310F50u;
    // 0x310f50: 0x10000594  b           . + 4 + (0x594 << 2)
    ctx->pc = 0x310F50u;
    {
        const bool branch_taken_0x310f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310F58u;
label_310f58:
    // 0x310f58: 0x2402040d  addiu       $v0, $zero, 0x40D
    ctx->pc = 0x310f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x310f5c: 0x120204ea  beq         $s0, $v0, . + 4 + (0x4EA << 2)
    ctx->pc = 0x310F5Cu;
    {
        const bool branch_taken_0x310f5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F5Cu;
        // 0x310f60: 0x2a02040d  slti        $v0, $s0, 0x40D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1037) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f5c) {
            ctx->pc = 0x312308u;
            goto label_312308;
        }
    }
    ctx->pc = 0x310F64u;
    // 0x310f64: 0x144004e4  bnez        $v0, . + 4 + (0x4E4 << 2)
    ctx->pc = 0x310F64u;
    {
        const bool branch_taken_0x310f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F64u;
        // 0x310f68: 0x2402040e  addiu       $v0, $zero, 0x40E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f64) {
            ctx->pc = 0x3122F8u;
            goto label_3122f8;
        }
    }
    ctx->pc = 0x310F6Cu;
    // 0x310f6c: 0x120204ea  beq         $s0, $v0, . + 4 + (0x4EA << 2)
    ctx->pc = 0x310F6Cu;
    {
        const bool branch_taken_0x310f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F6Cu;
        // 0x310f70: 0x2402040f  addiu       $v0, $zero, 0x40F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f6c) {
            ctx->pc = 0x312318u;
            goto label_312318;
        }
    }
    ctx->pc = 0x310F74u;
    // 0x310f74: 0x12020574  beq         $s0, $v0, . + 4 + (0x574 << 2)
    ctx->pc = 0x310F74u;
    {
        const bool branch_taken_0x310f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F74u;
        // 0x310f78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f74) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310F7Cu;
    // 0x310f7c: 0x10000589  b           . + 4 + (0x589 << 2)
    ctx->pc = 0x310F7Cu;
    {
        const bool branch_taken_0x310f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310f7c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310F84u;
label_310f84:
    // 0x310f84: 0x24020419  addiu       $v0, $zero, 0x419
    ctx->pc = 0x310f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x310f88: 0x1202050b  beq         $s0, $v0, . + 4 + (0x50B << 2)
    ctx->pc = 0x310F88u;
    {
        const bool branch_taken_0x310f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F88u;
        // 0x310f8c: 0x2a02041a  slti        $v0, $s0, 0x41A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1050) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f88) {
            ctx->pc = 0x3123B8u;
            goto label_3123b8;
        }
    }
    ctx->pc = 0x310F90u;
    // 0x310f90: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x310F90u;
    {
        const bool branch_taken_0x310f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F90u;
        // 0x310f94: 0x24020414  addiu       $v0, $zero, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f90) {
            ctx->pc = 0x310FECu;
            goto label_310fec;
        }
    }
    ctx->pc = 0x310F98u;
    // 0x310f98: 0x120204f3  beq         $s0, $v0, . + 4 + (0x4F3 << 2)
    ctx->pc = 0x310F98u;
    {
        const bool branch_taken_0x310f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F98u;
        // 0x310f9c: 0x2a020415  slti        $v0, $s0, 0x415 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1045) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f98) {
            ctx->pc = 0x312368u;
            goto label_312368;
        }
    }
    ctx->pc = 0x310FA0u;
    // 0x310fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310FA0u;
    {
        const bool branch_taken_0x310fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FA0u;
        // 0x310fa4: 0x24020412  addiu       $v0, $zero, 0x412 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fa0) {
            ctx->pc = 0x310FC0u;
            goto label_310fc0;
        }
    }
    ctx->pc = 0x310FA8u;
    // 0x310fa8: 0x120204e7  beq         $s0, $v0, . + 4 + (0x4E7 << 2)
    ctx->pc = 0x310FA8u;
    {
        const bool branch_taken_0x310fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FA8u;
        // 0x310fac: 0x2a020413  slti        $v0, $s0, 0x413 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1043) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fa8) {
            ctx->pc = 0x312348u;
            goto label_312348;
        }
    }
    ctx->pc = 0x310FB0u;
    // 0x310fb0: 0x104004e9  beqz        $v0, . + 4 + (0x4E9 << 2)
    ctx->pc = 0x310FB0u;
    {
        const bool branch_taken_0x310fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fb0) {
            ctx->pc = 0x312358u;
            goto label_312358;
        }
    }
    ctx->pc = 0x310FB8u;
    // 0x310fb8: 0x100004df  b           . + 4 + (0x4DF << 2)
    ctx->pc = 0x310FB8u;
    {
        const bool branch_taken_0x310fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fb8) {
            ctx->pc = 0x312338u;
            goto label_312338;
        }
    }
    ctx->pc = 0x310FC0u;
label_310fc0:
    // 0x310fc0: 0x24020416  addiu       $v0, $zero, 0x416
    ctx->pc = 0x310fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x310fc4: 0x120204f0  beq         $s0, $v0, . + 4 + (0x4F0 << 2)
    ctx->pc = 0x310FC4u;
    {
        const bool branch_taken_0x310fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FC4u;
        // 0x310fc8: 0x2a020416  slti        $v0, $s0, 0x416 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1046) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fc4) {
            ctx->pc = 0x312388u;
            goto label_312388;
        }
    }
    ctx->pc = 0x310FCCu;
    // 0x310fcc: 0x144004ea  bnez        $v0, . + 4 + (0x4EA << 2)
    ctx->pc = 0x310FCCu;
    {
        const bool branch_taken_0x310fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FCCu;
        // 0x310fd0: 0x24020417  addiu       $v0, $zero, 0x417 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fcc) {
            ctx->pc = 0x312378u;
            goto label_312378;
        }
    }
    ctx->pc = 0x310FD4u;
    // 0x310fd4: 0x120204f0  beq         $s0, $v0, . + 4 + (0x4F0 << 2)
    ctx->pc = 0x310FD4u;
    {
        const bool branch_taken_0x310fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FD4u;
        // 0x310fd8: 0x24020418  addiu       $v0, $zero, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fd4) {
            ctx->pc = 0x312398u;
            goto label_312398;
        }
    }
    ctx->pc = 0x310FDCu;
    // 0x310fdc: 0x120204f2  beq         $s0, $v0, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x310FDCu;
    {
        const bool branch_taken_0x310fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FDCu;
        // 0x310fe0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fdc) {
            ctx->pc = 0x3123A8u;
            goto label_3123a8;
        }
    }
    ctx->pc = 0x310FE4u;
    // 0x310fe4: 0x1000056f  b           . + 4 + (0x56F << 2)
    ctx->pc = 0x310FE4u;
    {
        const bool branch_taken_0x310fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fe4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x310FECu;
label_310fec:
    // 0x310fec: 0x2402041e  addiu       $v0, $zero, 0x41E
    ctx->pc = 0x310fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1054));
    // 0x310ff0: 0x12020555  beq         $s0, $v0, . + 4 + (0x555 << 2)
    ctx->pc = 0x310FF0u;
    {
        const bool branch_taken_0x310ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x310FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FF0u;
        // 0x310ff4: 0x2a02041f  slti        $v0, $s0, 0x41F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1055) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ff0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x310FF8u;
    // 0x310ff8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310FF8u;
    {
        const bool branch_taken_0x310ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FF8u;
        // 0x310ffc: 0x2402041b  addiu       $v0, $zero, 0x41B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ff8) {
            ctx->pc = 0x311028u;
            goto label_311028;
        }
    }
    ctx->pc = 0x311000u;
    // 0x311000: 0x120204f5  beq         $s0, $v0, . + 4 + (0x4F5 << 2)
    ctx->pc = 0x311000u;
    {
        const bool branch_taken_0x311000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311000u;
        // 0x311004: 0x2a02041b  slti        $v0, $s0, 0x41B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1051) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311000) {
            ctx->pc = 0x3123D8u;
            goto label_3123d8;
        }
    }
    ctx->pc = 0x311008u;
    // 0x311008: 0x144004ef  bnez        $v0, . + 4 + (0x4EF << 2)
    ctx->pc = 0x311008u;
    {
        const bool branch_taken_0x311008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311008u;
        // 0x31100c: 0x2402041c  addiu       $v0, $zero, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311008) {
            ctx->pc = 0x3123C8u;
            goto label_3123c8;
        }
    }
    ctx->pc = 0x311010u;
    // 0x311010: 0x120204f5  beq         $s0, $v0, . + 4 + (0x4F5 << 2)
    ctx->pc = 0x311010u;
    {
        const bool branch_taken_0x311010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311010u;
        // 0x311014: 0x2402041d  addiu       $v0, $zero, 0x41D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311010) {
            ctx->pc = 0x3123E8u;
            goto label_3123e8;
        }
    }
    ctx->pc = 0x311018u;
    // 0x311018: 0x120204f7  beq         $s0, $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x311018u;
    {
        const bool branch_taken_0x311018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311018u;
        // 0x31101c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311018) {
            ctx->pc = 0x3123F8u;
            goto label_3123f8;
        }
    }
    ctx->pc = 0x311020u;
    // 0x311020: 0x10000560  b           . + 4 + (0x560 << 2)
    ctx->pc = 0x311020u;
    {
        const bool branch_taken_0x311020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311020) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311028u;
label_311028:
    // 0x311028: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x311028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x31102c: 0x120204fa  beq         $s0, $v0, . + 4 + (0x4FA << 2)
    ctx->pc = 0x31102Cu;
    {
        const bool branch_taken_0x31102c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31102Cu;
        // 0x311030: 0x2a020420  slti        $v0, $s0, 0x420 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1056) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31102c) {
            ctx->pc = 0x312418u;
            goto label_312418;
        }
    }
    ctx->pc = 0x311034u;
    // 0x311034: 0x144004f4  bnez        $v0, . + 4 + (0x4F4 << 2)
    ctx->pc = 0x311034u;
    {
        const bool branch_taken_0x311034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311034u;
        // 0x311038: 0x24020421  addiu       $v0, $zero, 0x421 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311034) {
            ctx->pc = 0x312408u;
            goto label_312408;
        }
    }
    ctx->pc = 0x31103Cu;
    // 0x31103c: 0x120204fa  beq         $s0, $v0, . + 4 + (0x4FA << 2)
    ctx->pc = 0x31103Cu;
    {
        const bool branch_taken_0x31103c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31103Cu;
        // 0x311040: 0x24020422  addiu       $v0, $zero, 0x422 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1058));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31103c) {
            ctx->pc = 0x312428u;
            goto label_312428;
        }
    }
    ctx->pc = 0x311044u;
    // 0x311044: 0x120204fc  beq         $s0, $v0, . + 4 + (0x4FC << 2)
    ctx->pc = 0x311044u;
    {
        const bool branch_taken_0x311044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311044u;
        // 0x311048: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311044) {
            ctx->pc = 0x312438u;
            goto label_312438;
        }
    }
    ctx->pc = 0x31104Cu;
    // 0x31104c: 0x10000555  b           . + 4 + (0x555 << 2)
    ctx->pc = 0x31104Cu;
    {
        const bool branch_taken_0x31104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31104c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311054u;
label_311054:
    // 0x311054: 0x24020449  addiu       $v0, $zero, 0x449
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1097));
    // 0x311058: 0x1202053b  beq         $s0, $v0, . + 4 + (0x53B << 2)
    ctx->pc = 0x311058u;
    {
        const bool branch_taken_0x311058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311058u;
        // 0x31105c: 0x2a02044a  slti        $v0, $s0, 0x44A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1098) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311058) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311060u;
    // 0x311060: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x311060u;
    {
        const bool branch_taken_0x311060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311060u;
        // 0x311064: 0x24020436  addiu       $v0, $zero, 0x436 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311060) {
            ctx->pc = 0x31120Cu;
            goto label_31120c;
        }
    }
    ctx->pc = 0x311068u;
    // 0x311068: 0x12020537  beq         $s0, $v0, . + 4 + (0x537 << 2)
    ctx->pc = 0x311068u;
    {
        const bool branch_taken_0x311068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311068u;
        // 0x31106c: 0x2a020437  slti        $v0, $s0, 0x437 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1079) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311068) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311070u;
    // 0x311070: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x311070u;
    {
        const bool branch_taken_0x311070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311070u;
        // 0x311074: 0x2402042c  addiu       $v0, $zero, 0x42C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311070) {
            ctx->pc = 0x311144u;
            goto label_311144;
        }
    }
    ctx->pc = 0x311078u;
    // 0x311078: 0x12020513  beq         $s0, $v0, . + 4 + (0x513 << 2)
    ctx->pc = 0x311078u;
    {
        const bool branch_taken_0x311078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311078u;
        // 0x31107c: 0x2a02042d  slti        $v0, $s0, 0x42D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1069) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311078) {
            ctx->pc = 0x3124C8u;
            goto label_3124c8;
        }
    }
    ctx->pc = 0x311080u;
    // 0x311080: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x311080u;
    {
        const bool branch_taken_0x311080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311080u;
        // 0x311084: 0x24020427  addiu       $v0, $zero, 0x427 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311080) {
            ctx->pc = 0x3110DCu;
            goto label_3110dc;
        }
    }
    ctx->pc = 0x311088u;
    // 0x311088: 0x1202052f  beq         $s0, $v0, . + 4 + (0x52F << 2)
    ctx->pc = 0x311088u;
    {
        const bool branch_taken_0x311088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311088u;
        // 0x31108c: 0x2a020428  slti        $v0, $s0, 0x428 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1064) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311088) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311090u;
    // 0x311090: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311090u;
    {
        const bool branch_taken_0x311090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311090u;
        // 0x311094: 0x24020425  addiu       $v0, $zero, 0x425 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311090) {
            ctx->pc = 0x3110B0u;
            goto label_3110b0;
        }
    }
    ctx->pc = 0x311098u;
    // 0x311098: 0x120204f3  beq         $s0, $v0, . + 4 + (0x4F3 << 2)
    ctx->pc = 0x311098u;
    {
        const bool branch_taken_0x311098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311098u;
        // 0x31109c: 0x2a020426  slti        $v0, $s0, 0x426 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1062) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311098) {
            ctx->pc = 0x312468u;
            goto label_312468;
        }
    }
    ctx->pc = 0x3110A0u;
    // 0x3110a0: 0x104004f5  beqz        $v0, . + 4 + (0x4F5 << 2)
    ctx->pc = 0x3110A0u;
    {
        const bool branch_taken_0x3110a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3110a0) {
            ctx->pc = 0x312478u;
            goto label_312478;
        }
    }
    ctx->pc = 0x3110A8u;
    // 0x3110a8: 0x100004eb  b           . + 4 + (0x4EB << 2)
    ctx->pc = 0x3110A8u;
    {
        const bool branch_taken_0x3110a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3110a8) {
            ctx->pc = 0x312458u;
            goto label_312458;
        }
    }
    ctx->pc = 0x3110B0u;
label_3110b0:
    // 0x3110b0: 0x24020429  addiu       $v0, $zero, 0x429
    ctx->pc = 0x3110b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x3110b4: 0x120204f8  beq         $s0, $v0, . + 4 + (0x4F8 << 2)
    ctx->pc = 0x3110B4u;
    {
        const bool branch_taken_0x3110b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3110B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110B4u;
        // 0x3110b8: 0x2a020429  slti        $v0, $s0, 0x429 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1065) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110b4) {
            ctx->pc = 0x312498u;
            goto label_312498;
        }
    }
    ctx->pc = 0x3110BCu;
    // 0x3110bc: 0x144004f2  bnez        $v0, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x3110BCu;
    {
        const bool branch_taken_0x3110bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3110C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110BCu;
        // 0x3110c0: 0x2402042a  addiu       $v0, $zero, 0x42A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110bc) {
            ctx->pc = 0x312488u;
            goto label_312488;
        }
    }
    ctx->pc = 0x3110C4u;
    // 0x3110c4: 0x120204f8  beq         $s0, $v0, . + 4 + (0x4F8 << 2)
    ctx->pc = 0x3110C4u;
    {
        const bool branch_taken_0x3110c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3110C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110C4u;
        // 0x3110c8: 0x2402042b  addiu       $v0, $zero, 0x42B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110c4) {
            ctx->pc = 0x3124A8u;
            goto label_3124a8;
        }
    }
    ctx->pc = 0x3110CCu;
    // 0x3110cc: 0x120204fa  beq         $s0, $v0, . + 4 + (0x4FA << 2)
    ctx->pc = 0x3110CCu;
    {
        const bool branch_taken_0x3110cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3110D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110CCu;
        // 0x3110d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110cc) {
            ctx->pc = 0x3124B8u;
            goto label_3124b8;
        }
    }
    ctx->pc = 0x3110D4u;
    // 0x3110d4: 0x10000533  b           . + 4 + (0x533 << 2)
    ctx->pc = 0x3110D4u;
    {
        const bool branch_taken_0x3110d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3110d4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3110DCu;
label_3110dc:
    // 0x3110dc: 0x24020431  addiu       $v0, $zero, 0x431
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
    // 0x3110e0: 0x1202050d  beq         $s0, $v0, . + 4 + (0x50D << 2)
    ctx->pc = 0x3110E0u;
    {
        const bool branch_taken_0x3110e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110E0u;
        // 0x3110e4: 0x2a020432  slti        $v0, $s0, 0x432 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1074) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110e0) {
            ctx->pc = 0x312518u;
            goto label_312518;
        }
    }
    ctx->pc = 0x3110E8u;
    // 0x3110e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3110E8u;
    {
        const bool branch_taken_0x3110e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3110ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110E8u;
        // 0x3110ec: 0x2402042e  addiu       $v0, $zero, 0x42E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110e8) {
            ctx->pc = 0x311118u;
            goto label_311118;
        }
    }
    ctx->pc = 0x3110F0u;
    // 0x3110f0: 0x120204fd  beq         $s0, $v0, . + 4 + (0x4FD << 2)
    ctx->pc = 0x3110F0u;
    {
        const bool branch_taken_0x3110f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110F0u;
        // 0x3110f4: 0x2a02042e  slti        $v0, $s0, 0x42E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1070) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110f0) {
            ctx->pc = 0x3124E8u;
            goto label_3124e8;
        }
    }
    ctx->pc = 0x3110F8u;
    // 0x3110f8: 0x144004f7  bnez        $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x3110F8u;
    {
        const bool branch_taken_0x3110f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3110FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110F8u;
        // 0x3110fc: 0x2402042f  addiu       $v0, $zero, 0x42F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1071));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3110f8) {
            ctx->pc = 0x3124D8u;
            goto label_3124d8;
        }
    }
    ctx->pc = 0x311100u;
    // 0x311100: 0x120204fd  beq         $s0, $v0, . + 4 + (0x4FD << 2)
    ctx->pc = 0x311100u;
    {
        const bool branch_taken_0x311100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311100u;
        // 0x311104: 0x24020430  addiu       $v0, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311100) {
            ctx->pc = 0x3124F8u;
            goto label_3124f8;
        }
    }
    ctx->pc = 0x311108u;
    // 0x311108: 0x120204ff  beq         $s0, $v0, . + 4 + (0x4FF << 2)
    ctx->pc = 0x311108u;
    {
        const bool branch_taken_0x311108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311108u;
        // 0x31110c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311108) {
            ctx->pc = 0x312508u;
            goto label_312508;
        }
    }
    ctx->pc = 0x311110u;
    // 0x311110: 0x10000524  b           . + 4 + (0x524 << 2)
    ctx->pc = 0x311110u;
    {
        const bool branch_taken_0x311110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311110) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311118u;
label_311118:
    // 0x311118: 0x24020433  addiu       $v0, $zero, 0x433
    ctx->pc = 0x311118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
    // 0x31111c: 0x1202050a  beq         $s0, $v0, . + 4 + (0x50A << 2)
    ctx->pc = 0x31111Cu;
    {
        const bool branch_taken_0x31111c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31111Cu;
        // 0x311120: 0x2a020433  slti        $v0, $s0, 0x433 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1075) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31111c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311124u;
    // 0x311124: 0x14400500  bnez        $v0, . + 4 + (0x500 << 2)
    ctx->pc = 0x311124u;
    {
        const bool branch_taken_0x311124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311124u;
        // 0x311128: 0x24020434  addiu       $v0, $zero, 0x434 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1076));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311124) {
            ctx->pc = 0x312528u;
            goto label_312528;
        }
    }
    ctx->pc = 0x31112Cu;
    // 0x31112c: 0x12020506  beq         $s0, $v0, . + 4 + (0x506 << 2)
    ctx->pc = 0x31112Cu;
    {
        const bool branch_taken_0x31112c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31112Cu;
        // 0x311130: 0x24020435  addiu       $v0, $zero, 0x435 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31112c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311134u;
    // 0x311134: 0x12020504  beq         $s0, $v0, . + 4 + (0x504 << 2)
    ctx->pc = 0x311134u;
    {
        const bool branch_taken_0x311134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311134u;
        // 0x311138: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311134) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31113Cu;
    // 0x31113c: 0x10000519  b           . + 4 + (0x519 << 2)
    ctx->pc = 0x31113Cu;
    {
        const bool branch_taken_0x31113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31113c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311144u;
label_311144:
    // 0x311144: 0x2402043f  addiu       $v0, $zero, 0x43F
    ctx->pc = 0x311144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1087));
    // 0x311148: 0x120204ff  beq         $s0, $v0, . + 4 + (0x4FF << 2)
    ctx->pc = 0x311148u;
    {
        const bool branch_taken_0x311148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311148u;
        // 0x31114c: 0x2a020440  slti        $v0, $s0, 0x440 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1088) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311148) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311150u;
    // 0x311150: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311150u;
    {
        const bool branch_taken_0x311150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311150u;
        // 0x311154: 0x2402043a  addiu       $v0, $zero, 0x43A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1082));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311150) {
            ctx->pc = 0x3111A4u;
            goto label_3111a4;
        }
    }
    ctx->pc = 0x311158u;
    // 0x311158: 0x120204fb  beq         $s0, $v0, . + 4 + (0x4FB << 2)
    ctx->pc = 0x311158u;
    {
        const bool branch_taken_0x311158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311158u;
        // 0x31115c: 0x2a02043b  slti        $v0, $s0, 0x43B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1083) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311158) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311160u;
    // 0x311160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311160u;
    {
        const bool branch_taken_0x311160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311160u;
        // 0x311164: 0x24020438  addiu       $v0, $zero, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311160) {
            ctx->pc = 0x311178u;
            goto label_311178;
        }
    }
    ctx->pc = 0x311168u;
    // 0x311168: 0x560204f7  bnel        $s0, $v0, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x311168u;
    {
        const bool branch_taken_0x311168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311168) {
            ctx->pc = 0x31116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311168u;
            // 0x31116c: 0x2a020439  slti        $v0, $s0, 0x439 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1081) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311170u;
    // 0x311170: 0x100004f5  b           . + 4 + (0x4F5 << 2)
    ctx->pc = 0x311170u;
    {
        const bool branch_taken_0x311170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311170) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311178u;
label_311178:
    // 0x311178: 0x2402043c  addiu       $v0, $zero, 0x43C
    ctx->pc = 0x311178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1084));
    // 0x31117c: 0x120204f2  beq         $s0, $v0, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x31117Cu;
    {
        const bool branch_taken_0x31117c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31117Cu;
        // 0x311180: 0x2a02043c  slti        $v0, $s0, 0x43C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1084) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31117c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311184u;
    // 0x311184: 0x144004f0  bnez        $v0, . + 4 + (0x4F0 << 2)
    ctx->pc = 0x311184u;
    {
        const bool branch_taken_0x311184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311184u;
        // 0x311188: 0x2402043d  addiu       $v0, $zero, 0x43D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1085));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311184) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31118Cu;
    // 0x31118c: 0x120204ee  beq         $s0, $v0, . + 4 + (0x4EE << 2)
    ctx->pc = 0x31118Cu;
    {
        const bool branch_taken_0x31118c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31118Cu;
        // 0x311190: 0x2402043e  addiu       $v0, $zero, 0x43E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31118c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311194u;
    // 0x311194: 0x120204ec  beq         $s0, $v0, . + 4 + (0x4EC << 2)
    ctx->pc = 0x311194u;
    {
        const bool branch_taken_0x311194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311194u;
        // 0x311198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311194) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31119Cu;
    // 0x31119c: 0x10000501  b           . + 4 + (0x501 << 2)
    ctx->pc = 0x31119Cu;
    {
        const bool branch_taken_0x31119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31119c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3111A4u;
label_3111a4:
    // 0x3111a4: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x3111a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
    // 0x3111a8: 0x120204e7  beq         $s0, $v0, . + 4 + (0x4E7 << 2)
    ctx->pc = 0x3111A8u;
    {
        const bool branch_taken_0x3111a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111A8u;
        // 0x3111ac: 0x2a020445  slti        $v0, $s0, 0x445 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1093) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111B0u;
    // 0x3111b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3111B0u;
    {
        const bool branch_taken_0x3111b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111B0u;
        // 0x3111b4: 0x24020441  addiu       $v0, $zero, 0x441 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111b0) {
            ctx->pc = 0x3111E0u;
            goto label_3111e0;
        }
    }
    ctx->pc = 0x3111B8u;
    // 0x3111b8: 0x120204e3  beq         $s0, $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x3111B8u;
    {
        const bool branch_taken_0x3111b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111B8u;
        // 0x3111bc: 0x2a020441  slti        $v0, $s0, 0x441 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1089) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111b8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111C0u;
    // 0x3111c0: 0x144004dd  bnez        $v0, . + 4 + (0x4DD << 2)
    ctx->pc = 0x3111C0u;
    {
        const bool branch_taken_0x3111c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111C0u;
        // 0x3111c4: 0x24020442  addiu       $v0, $zero, 0x442 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1090));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111c0) {
            ctx->pc = 0x312538u;
            goto label_312538;
        }
    }
    ctx->pc = 0x3111C8u;
    // 0x3111c8: 0x120204df  beq         $s0, $v0, . + 4 + (0x4DF << 2)
    ctx->pc = 0x3111C8u;
    {
        const bool branch_taken_0x3111c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111C8u;
        // 0x3111cc: 0x24020443  addiu       $v0, $zero, 0x443 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1091));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111c8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111D0u;
    // 0x3111d0: 0x120204dd  beq         $s0, $v0, . + 4 + (0x4DD << 2)
    ctx->pc = 0x3111D0u;
    {
        const bool branch_taken_0x3111d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111D0u;
        // 0x3111d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111d0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111D8u;
    // 0x3111d8: 0x100004f2  b           . + 4 + (0x4F2 << 2)
    ctx->pc = 0x3111D8u;
    {
        const bool branch_taken_0x3111d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111d8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3111E0u;
label_3111e0:
    // 0x3111e0: 0x24020446  addiu       $v0, $zero, 0x446
    ctx->pc = 0x3111e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
    // 0x3111e4: 0x120204d8  beq         $s0, $v0, . + 4 + (0x4D8 << 2)
    ctx->pc = 0x3111E4u;
    {
        const bool branch_taken_0x3111e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111E4u;
        // 0x3111e8: 0x2a020446  slti        $v0, $s0, 0x446 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1094) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111ECu;
    // 0x3111ec: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x3111ECu;
    {
        const bool branch_taken_0x3111ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3111F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111ECu;
        // 0x3111f0: 0x24020447  addiu       $v0, $zero, 0x447 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111ec) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111F4u;
    // 0x3111f4: 0x120204d4  beq         $s0, $v0, . + 4 + (0x4D4 << 2)
    ctx->pc = 0x3111F4u;
    {
        const bool branch_taken_0x3111f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3111F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111F4u;
        // 0x3111f8: 0x24020448  addiu       $v0, $zero, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111f4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3111FCu;
    // 0x3111fc: 0x120204d2  beq         $s0, $v0, . + 4 + (0x4D2 << 2)
    ctx->pc = 0x3111FCu;
    {
        const bool branch_taken_0x3111fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111FCu;
        // 0x311200: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111fc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311204u;
    // 0x311204: 0x100004e7  b           . + 4 + (0x4E7 << 2)
    ctx->pc = 0x311204u;
    {
        const bool branch_taken_0x311204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311204) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31120Cu;
label_31120c:
    // 0x31120c: 0x2402045c  addiu       $v0, $zero, 0x45C
    ctx->pc = 0x31120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
    // 0x311210: 0x120204cd  beq         $s0, $v0, . + 4 + (0x4CD << 2)
    ctx->pc = 0x311210u;
    {
        const bool branch_taken_0x311210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311210u;
        // 0x311214: 0x2a02045d  slti        $v0, $s0, 0x45D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1117) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311210) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311218u;
    // 0x311218: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x311218u;
    {
        const bool branch_taken_0x311218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311218u;
        // 0x31121c: 0x24020452  addiu       $v0, $zero, 0x452 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311218) {
            ctx->pc = 0x3112E4u;
            goto label_3112e4;
        }
    }
    ctx->pc = 0x311220u;
    // 0x311220: 0x120204c9  beq         $s0, $v0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x311220u;
    {
        const bool branch_taken_0x311220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311220u;
        // 0x311224: 0x2a020453  slti        $v0, $s0, 0x453 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1107) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311220) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311228u;
    // 0x311228: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311228u;
    {
        const bool branch_taken_0x311228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311228u;
        // 0x31122c: 0x2402044d  addiu       $v0, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311228) {
            ctx->pc = 0x31127Cu;
            goto label_31127c;
        }
    }
    ctx->pc = 0x311230u;
    // 0x311230: 0x120204c5  beq         $s0, $v0, . + 4 + (0x4C5 << 2)
    ctx->pc = 0x311230u;
    {
        const bool branch_taken_0x311230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311230u;
        // 0x311234: 0x2a02044e  slti        $v0, $s0, 0x44E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1102) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311230) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311238u;
    // 0x311238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311238u;
    {
        const bool branch_taken_0x311238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311238u;
        // 0x31123c: 0x2402044b  addiu       $v0, $zero, 0x44B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1099));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311238) {
            ctx->pc = 0x311250u;
            goto label_311250;
        }
    }
    ctx->pc = 0x311240u;
    // 0x311240: 0x560204c1  bnel        $s0, $v0, . + 4 + (0x4C1 << 2)
    ctx->pc = 0x311240u;
    {
        const bool branch_taken_0x311240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311240) {
            ctx->pc = 0x311244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311240u;
            // 0x311244: 0x2a02044c  slti        $v0, $s0, 0x44C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1100) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311248u;
    // 0x311248: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x311248u;
    {
        const bool branch_taken_0x311248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311248) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311250u;
label_311250:
    // 0x311250: 0x2402044f  addiu       $v0, $zero, 0x44F
    ctx->pc = 0x311250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1103));
    // 0x311254: 0x120204bc  beq         $s0, $v0, . + 4 + (0x4BC << 2)
    ctx->pc = 0x311254u;
    {
        const bool branch_taken_0x311254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311254u;
        // 0x311258: 0x2a02044f  slti        $v0, $s0, 0x44F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1103) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311254) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31125Cu;
    // 0x31125c: 0x144004ba  bnez        $v0, . + 4 + (0x4BA << 2)
    ctx->pc = 0x31125Cu;
    {
        const bool branch_taken_0x31125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31125Cu;
        // 0x311260: 0x24020450  addiu       $v0, $zero, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31125c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311264u;
    // 0x311264: 0x120204b8  beq         $s0, $v0, . + 4 + (0x4B8 << 2)
    ctx->pc = 0x311264u;
    {
        const bool branch_taken_0x311264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311264u;
        // 0x311268: 0x24020451  addiu       $v0, $zero, 0x451 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311264) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31126Cu;
    // 0x31126c: 0x120204b6  beq         $s0, $v0, . + 4 + (0x4B6 << 2)
    ctx->pc = 0x31126Cu;
    {
        const bool branch_taken_0x31126c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31126Cu;
        // 0x311270: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31126c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311274u;
    // 0x311274: 0x100004cb  b           . + 4 + (0x4CB << 2)
    ctx->pc = 0x311274u;
    {
        const bool branch_taken_0x311274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311274) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31127Cu;
label_31127c:
    // 0x31127c: 0x24020457  addiu       $v0, $zero, 0x457
    ctx->pc = 0x31127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1111));
    // 0x311280: 0x120204b1  beq         $s0, $v0, . + 4 + (0x4B1 << 2)
    ctx->pc = 0x311280u;
    {
        const bool branch_taken_0x311280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311280u;
        // 0x311284: 0x2a020458  slti        $v0, $s0, 0x458 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311280) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311288u;
    // 0x311288: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311288u;
    {
        const bool branch_taken_0x311288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311288u;
        // 0x31128c: 0x24020454  addiu       $v0, $zero, 0x454 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311288) {
            ctx->pc = 0x3112B8u;
            goto label_3112b8;
        }
    }
    ctx->pc = 0x311290u;
    // 0x311290: 0x120204ad  beq         $s0, $v0, . + 4 + (0x4AD << 2)
    ctx->pc = 0x311290u;
    {
        const bool branch_taken_0x311290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311290u;
        // 0x311294: 0x2a020454  slti        $v0, $s0, 0x454 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311290) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311298u;
    // 0x311298: 0x144004ab  bnez        $v0, . + 4 + (0x4AB << 2)
    ctx->pc = 0x311298u;
    {
        const bool branch_taken_0x311298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311298u;
        // 0x31129c: 0x24020455  addiu       $v0, $zero, 0x455 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311298) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112A0u;
    // 0x3112a0: 0x120204a9  beq         $s0, $v0, . + 4 + (0x4A9 << 2)
    ctx->pc = 0x3112A0u;
    {
        const bool branch_taken_0x3112a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112A0u;
        // 0x3112a4: 0x24020456  addiu       $v0, $zero, 0x456 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112a0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112A8u;
    // 0x3112a8: 0x120204a7  beq         $s0, $v0, . + 4 + (0x4A7 << 2)
    ctx->pc = 0x3112A8u;
    {
        const bool branch_taken_0x3112a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112A8u;
        // 0x3112ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112B0u;
    // 0x3112b0: 0x100004bc  b           . + 4 + (0x4BC << 2)
    ctx->pc = 0x3112B0u;
    {
        const bool branch_taken_0x3112b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3112b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3112B8u;
label_3112b8:
    // 0x3112b8: 0x24020459  addiu       $v0, $zero, 0x459
    ctx->pc = 0x3112b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1113));
    // 0x3112bc: 0x120204a2  beq         $s0, $v0, . + 4 + (0x4A2 << 2)
    ctx->pc = 0x3112BCu;
    {
        const bool branch_taken_0x3112bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112BCu;
        // 0x3112c0: 0x2a020459  slti        $v0, $s0, 0x459 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1113) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112bc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112C4u;
    // 0x3112c4: 0x144004a0  bnez        $v0, . + 4 + (0x4A0 << 2)
    ctx->pc = 0x3112C4u;
    {
        const bool branch_taken_0x3112c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3112C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112C4u;
        // 0x3112c8: 0x2402045a  addiu       $v0, $zero, 0x45A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112c4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112CCu;
    // 0x3112cc: 0x1202049e  beq         $s0, $v0, . + 4 + (0x49E << 2)
    ctx->pc = 0x3112CCu;
    {
        const bool branch_taken_0x3112cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112CCu;
        // 0x3112d0: 0x2402045b  addiu       $v0, $zero, 0x45B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112cc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112D4u;
    // 0x3112d4: 0x1202049c  beq         $s0, $v0, . + 4 + (0x49C << 2)
    ctx->pc = 0x3112D4u;
    {
        const bool branch_taken_0x3112d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112D4u;
        // 0x3112d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112d4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112DCu;
    // 0x3112dc: 0x100004b1  b           . + 4 + (0x4B1 << 2)
    ctx->pc = 0x3112DCu;
    {
        const bool branch_taken_0x3112dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3112dc) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3112E4u;
label_3112e4:
    // 0x3112e4: 0x24020465  addiu       $v0, $zero, 0x465
    ctx->pc = 0x3112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
    // 0x3112e8: 0x12020497  beq         $s0, $v0, . + 4 + (0x497 << 2)
    ctx->pc = 0x3112E8u;
    {
        const bool branch_taken_0x3112e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112E8u;
        // 0x3112ec: 0x2a020466  slti        $v0, $s0, 0x466 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1126) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112e8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3112F0u;
    // 0x3112f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3112F0u;
    {
        const bool branch_taken_0x3112f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112F0u;
        // 0x3112f4: 0x24020460  addiu       $v0, $zero, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112f0) {
            ctx->pc = 0x311344u;
            goto label_311344;
        }
    }
    ctx->pc = 0x3112F8u;
    // 0x3112f8: 0x12020493  beq         $s0, $v0, . + 4 + (0x493 << 2)
    ctx->pc = 0x3112F8u;
    {
        const bool branch_taken_0x3112f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3112FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112F8u;
        // 0x3112fc: 0x2a020461  slti        $v0, $s0, 0x461 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112f8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311300u;
    // 0x311300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311300u;
    {
        const bool branch_taken_0x311300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311300u;
        // 0x311304: 0x2402045e  addiu       $v0, $zero, 0x45E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311300) {
            ctx->pc = 0x311318u;
            goto label_311318;
        }
    }
    ctx->pc = 0x311308u;
    // 0x311308: 0x5602048f  bnel        $s0, $v0, . + 4 + (0x48F << 2)
    ctx->pc = 0x311308u;
    {
        const bool branch_taken_0x311308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311308) {
            ctx->pc = 0x31130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311308u;
            // 0x31130c: 0x2a02045f  slti        $v0, $s0, 0x45F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1119) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311310u;
    // 0x311310: 0x1000048d  b           . + 4 + (0x48D << 2)
    ctx->pc = 0x311310u;
    {
        const bool branch_taken_0x311310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311310) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311318u;
label_311318:
    // 0x311318: 0x24020462  addiu       $v0, $zero, 0x462
    ctx->pc = 0x311318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1122));
    // 0x31131c: 0x1202048a  beq         $s0, $v0, . + 4 + (0x48A << 2)
    ctx->pc = 0x31131Cu;
    {
        const bool branch_taken_0x31131c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31131Cu;
        // 0x311320: 0x2a020462  slti        $v0, $s0, 0x462 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1122) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31131c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311324u;
    // 0x311324: 0x14400488  bnez        $v0, . + 4 + (0x488 << 2)
    ctx->pc = 0x311324u;
    {
        const bool branch_taken_0x311324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311324u;
        // 0x311328: 0x24020463  addiu       $v0, $zero, 0x463 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311324) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31132Cu;
    // 0x31132c: 0x12020486  beq         $s0, $v0, . + 4 + (0x486 << 2)
    ctx->pc = 0x31132Cu;
    {
        const bool branch_taken_0x31132c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31132Cu;
        // 0x311330: 0x24020464  addiu       $v0, $zero, 0x464 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31132c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311334u;
    // 0x311334: 0x12020484  beq         $s0, $v0, . + 4 + (0x484 << 2)
    ctx->pc = 0x311334u;
    {
        const bool branch_taken_0x311334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311334u;
        // 0x311338: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311334) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31133Cu;
    // 0x31133c: 0x10000499  b           . + 4 + (0x499 << 2)
    ctx->pc = 0x31133Cu;
    {
        const bool branch_taken_0x31133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31133c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311344u;
label_311344:
    // 0x311344: 0x2402046a  addiu       $v0, $zero, 0x46A
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1130));
    // 0x311348: 0x1202047f  beq         $s0, $v0, . + 4 + (0x47F << 2)
    ctx->pc = 0x311348u;
    {
        const bool branch_taken_0x311348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311348u;
        // 0x31134c: 0x2a02046b  slti        $v0, $s0, 0x46B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1131) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311348) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311350u;
    // 0x311350: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311350u;
    {
        const bool branch_taken_0x311350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311350u;
        // 0x311354: 0x24020467  addiu       $v0, $zero, 0x467 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311350) {
            ctx->pc = 0x311380u;
            goto label_311380;
        }
    }
    ctx->pc = 0x311358u;
    // 0x311358: 0x1202047b  beq         $s0, $v0, . + 4 + (0x47B << 2)
    ctx->pc = 0x311358u;
    {
        const bool branch_taken_0x311358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311358u;
        // 0x31135c: 0x2a020467  slti        $v0, $s0, 0x467 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311358) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311360u;
    // 0x311360: 0x14400479  bnez        $v0, . + 4 + (0x479 << 2)
    ctx->pc = 0x311360u;
    {
        const bool branch_taken_0x311360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311360u;
        // 0x311364: 0x24020468  addiu       $v0, $zero, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311360) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311368u;
    // 0x311368: 0x12020477  beq         $s0, $v0, . + 4 + (0x477 << 2)
    ctx->pc = 0x311368u;
    {
        const bool branch_taken_0x311368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311368u;
        // 0x31136c: 0x24020469  addiu       $v0, $zero, 0x469 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311368) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311370u;
    // 0x311370: 0x12020475  beq         $s0, $v0, . + 4 + (0x475 << 2)
    ctx->pc = 0x311370u;
    {
        const bool branch_taken_0x311370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311370u;
        // 0x311374: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311370) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311378u;
    // 0x311378: 0x1000048a  b           . + 4 + (0x48A << 2)
    ctx->pc = 0x311378u;
    {
        const bool branch_taken_0x311378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311378) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311380u;
label_311380:
    // 0x311380: 0x2402046c  addiu       $v0, $zero, 0x46C
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1132));
    // 0x311384: 0x12020470  beq         $s0, $v0, . + 4 + (0x470 << 2)
    ctx->pc = 0x311384u;
    {
        const bool branch_taken_0x311384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311384u;
        // 0x311388: 0x2a02046c  slti        $v0, $s0, 0x46C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311384) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31138Cu;
    // 0x31138c: 0x1440046e  bnez        $v0, . + 4 + (0x46E << 2)
    ctx->pc = 0x31138Cu;
    {
        const bool branch_taken_0x31138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31138Cu;
        // 0x311390: 0x2402046d  addiu       $v0, $zero, 0x46D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31138c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311394u;
    // 0x311394: 0x1202046c  beq         $s0, $v0, . + 4 + (0x46C << 2)
    ctx->pc = 0x311394u;
    {
        const bool branch_taken_0x311394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311394u;
        // 0x311398: 0x2402046e  addiu       $v0, $zero, 0x46E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311394) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31139Cu;
    // 0x31139c: 0x1202046a  beq         $s0, $v0, . + 4 + (0x46A << 2)
    ctx->pc = 0x31139Cu;
    {
        const bool branch_taken_0x31139c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31139Cu;
        // 0x3113a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31139c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113A4u;
    // 0x3113a4: 0x1000047f  b           . + 4 + (0x47F << 2)
    ctx->pc = 0x3113A4u;
    {
        const bool branch_taken_0x3113a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3113a4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3113ACu;
label_3113ac:
    // 0x3113ac: 0x240204bb  addiu       $v0, $zero, 0x4BB
    ctx->pc = 0x3113acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1211));
    // 0x3113b0: 0x12020465  beq         $s0, $v0, . + 4 + (0x465 << 2)
    ctx->pc = 0x3113B0u;
    {
        const bool branch_taken_0x3113b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113B0u;
        // 0x3113b4: 0x2a0204bc  slti        $v0, $s0, 0x4BC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1212) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113b0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113B8u;
    // 0x3113b8: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3113B8u;
    {
        const bool branch_taken_0x3113b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113B8u;
        // 0x3113bc: 0x24020495  addiu       $v0, $zero, 0x495 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113b8) {
            ctx->pc = 0x31170Cu;
            goto label_31170c;
        }
    }
    ctx->pc = 0x3113C0u;
    // 0x3113c0: 0x12020461  beq         $s0, $v0, . + 4 + (0x461 << 2)
    ctx->pc = 0x3113C0u;
    {
        const bool branch_taken_0x3113c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113C0u;
        // 0x3113c4: 0x2a020496  slti        $v0, $s0, 0x496 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1174) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113c0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113C8u;
    // 0x3113c8: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3113C8u;
    {
        const bool branch_taken_0x3113c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113C8u;
        // 0x3113cc: 0x24020482  addiu       $v0, $zero, 0x482 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113c8) {
            ctx->pc = 0x31156Cu;
            goto label_31156c;
        }
    }
    ctx->pc = 0x3113D0u;
    // 0x3113d0: 0x1202045d  beq         $s0, $v0, . + 4 + (0x45D << 2)
    ctx->pc = 0x3113D0u;
    {
        const bool branch_taken_0x3113d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D0u;
        // 0x3113d4: 0x2a020483  slti        $v0, $s0, 0x483 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1155) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113d0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113D8u;
    // 0x3113d8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3113D8u;
    {
        const bool branch_taken_0x3113d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113D8u;
        // 0x3113dc: 0x24020478  addiu       $v0, $zero, 0x478 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113d8) {
            ctx->pc = 0x3114A4u;
            goto label_3114a4;
        }
    }
    ctx->pc = 0x3113E0u;
    // 0x3113e0: 0x12020459  beq         $s0, $v0, . + 4 + (0x459 << 2)
    ctx->pc = 0x3113E0u;
    {
        const bool branch_taken_0x3113e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E0u;
        // 0x3113e4: 0x2a020479  slti        $v0, $s0, 0x479 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1145) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113e0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113E8u;
    // 0x3113e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3113E8u;
    {
        const bool branch_taken_0x3113e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113E8u;
        // 0x3113ec: 0x24020473  addiu       $v0, $zero, 0x473 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113e8) {
            ctx->pc = 0x31143Cu;
            goto label_31143c;
        }
    }
    ctx->pc = 0x3113F0u;
    // 0x3113f0: 0x12020455  beq         $s0, $v0, . + 4 + (0x455 << 2)
    ctx->pc = 0x3113F0u;
    {
        const bool branch_taken_0x3113f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3113F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113F0u;
        // 0x3113f4: 0x2a020474  slti        $v0, $s0, 0x474 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1140) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113f0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3113F8u;
    // 0x3113f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3113F8u;
    {
        const bool branch_taken_0x3113f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3113F8u;
        // 0x3113fc: 0x24020471  addiu       $v0, $zero, 0x471 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113f8) {
            ctx->pc = 0x311410u;
            goto label_311410;
        }
    }
    ctx->pc = 0x311400u;
    // 0x311400: 0x56020451  bnel        $s0, $v0, . + 4 + (0x451 << 2)
    ctx->pc = 0x311400u;
    {
        const bool branch_taken_0x311400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311400) {
            ctx->pc = 0x311404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311400u;
            // 0x311404: 0x2a020472  slti        $v0, $s0, 0x472 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1138) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311408u;
    // 0x311408: 0x1000044f  b           . + 4 + (0x44F << 2)
    ctx->pc = 0x311408u;
    {
        const bool branch_taken_0x311408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311408) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311410u;
label_311410:
    // 0x311410: 0x24020475  addiu       $v0, $zero, 0x475
    ctx->pc = 0x311410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x311414: 0x1202044c  beq         $s0, $v0, . + 4 + (0x44C << 2)
    ctx->pc = 0x311414u;
    {
        const bool branch_taken_0x311414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311414u;
        // 0x311418: 0x2a020475  slti        $v0, $s0, 0x475 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1141) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311414) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31141Cu;
    // 0x31141c: 0x1440044a  bnez        $v0, . + 4 + (0x44A << 2)
    ctx->pc = 0x31141Cu;
    {
        const bool branch_taken_0x31141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31141Cu;
        // 0x311420: 0x24020476  addiu       $v0, $zero, 0x476 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31141c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311424u;
    // 0x311424: 0x12020448  beq         $s0, $v0, . + 4 + (0x448 << 2)
    ctx->pc = 0x311424u;
    {
        const bool branch_taken_0x311424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311424u;
        // 0x311428: 0x24020477  addiu       $v0, $zero, 0x477 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311424) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31142Cu;
    // 0x31142c: 0x12020446  beq         $s0, $v0, . + 4 + (0x446 << 2)
    ctx->pc = 0x31142Cu;
    {
        const bool branch_taken_0x31142c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31142Cu;
        // 0x311430: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31142c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311434u;
    // 0x311434: 0x1000045b  b           . + 4 + (0x45B << 2)
    ctx->pc = 0x311434u;
    {
        const bool branch_taken_0x311434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311434) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31143Cu;
label_31143c:
    // 0x31143c: 0x2402047d  addiu       $v0, $zero, 0x47D
    ctx->pc = 0x31143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1149));
    // 0x311440: 0x12020441  beq         $s0, $v0, . + 4 + (0x441 << 2)
    ctx->pc = 0x311440u;
    {
        const bool branch_taken_0x311440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311440u;
        // 0x311444: 0x2a02047e  slti        $v0, $s0, 0x47E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1150) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311440) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311448u;
    // 0x311448: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311448u;
    {
        const bool branch_taken_0x311448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311448u;
        // 0x31144c: 0x2402047a  addiu       $v0, $zero, 0x47A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1146));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311448) {
            ctx->pc = 0x311478u;
            goto label_311478;
        }
    }
    ctx->pc = 0x311450u;
    // 0x311450: 0x1202043d  beq         $s0, $v0, . + 4 + (0x43D << 2)
    ctx->pc = 0x311450u;
    {
        const bool branch_taken_0x311450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311450u;
        // 0x311454: 0x2a02047a  slti        $v0, $s0, 0x47A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1146) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311450) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311458u;
    // 0x311458: 0x1440043b  bnez        $v0, . + 4 + (0x43B << 2)
    ctx->pc = 0x311458u;
    {
        const bool branch_taken_0x311458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311458u;
        // 0x31145c: 0x2402047b  addiu       $v0, $zero, 0x47B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311458) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311460u;
    // 0x311460: 0x12020439  beq         $s0, $v0, . + 4 + (0x439 << 2)
    ctx->pc = 0x311460u;
    {
        const bool branch_taken_0x311460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311460u;
        // 0x311464: 0x2402047c  addiu       $v0, $zero, 0x47C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311460) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311468u;
    // 0x311468: 0x12020437  beq         $s0, $v0, . + 4 + (0x437 << 2)
    ctx->pc = 0x311468u;
    {
        const bool branch_taken_0x311468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311468u;
        // 0x31146c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311468) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311470u;
    // 0x311470: 0x1000044c  b           . + 4 + (0x44C << 2)
    ctx->pc = 0x311470u;
    {
        const bool branch_taken_0x311470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311470) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311478u;
label_311478:
    // 0x311478: 0x2402047f  addiu       $v0, $zero, 0x47F
    ctx->pc = 0x311478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1151));
    // 0x31147c: 0x12020432  beq         $s0, $v0, . + 4 + (0x432 << 2)
    ctx->pc = 0x31147Cu;
    {
        const bool branch_taken_0x31147c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31147Cu;
        // 0x311480: 0x2a02047f  slti        $v0, $s0, 0x47F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31147c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311484u;
    // 0x311484: 0x14400430  bnez        $v0, . + 4 + (0x430 << 2)
    ctx->pc = 0x311484u;
    {
        const bool branch_taken_0x311484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311484u;
        // 0x311488: 0x24020480  addiu       $v0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311484) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31148Cu;
    // 0x31148c: 0x1202042e  beq         $s0, $v0, . + 4 + (0x42E << 2)
    ctx->pc = 0x31148Cu;
    {
        const bool branch_taken_0x31148c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31148Cu;
        // 0x311490: 0x24020481  addiu       $v0, $zero, 0x481 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31148c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311494u;
    // 0x311494: 0x1202042c  beq         $s0, $v0, . + 4 + (0x42C << 2)
    ctx->pc = 0x311494u;
    {
        const bool branch_taken_0x311494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311494u;
        // 0x311498: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311494) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31149Cu;
    // 0x31149c: 0x10000441  b           . + 4 + (0x441 << 2)
    ctx->pc = 0x31149Cu;
    {
        const bool branch_taken_0x31149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31149c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3114A4u;
label_3114a4:
    // 0x3114a4: 0x2402048b  addiu       $v0, $zero, 0x48B
    ctx->pc = 0x3114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1163));
    // 0x3114a8: 0x12020427  beq         $s0, $v0, . + 4 + (0x427 << 2)
    ctx->pc = 0x3114A8u;
    {
        const bool branch_taken_0x3114a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114A8u;
        // 0x3114ac: 0x2a02048c  slti        $v0, $s0, 0x48C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1164) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114B0u;
    // 0x3114b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3114B0u;
    {
        const bool branch_taken_0x3114b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3114B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114B0u;
        // 0x3114b4: 0x24020486  addiu       $v0, $zero, 0x486 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114b0) {
            ctx->pc = 0x311504u;
            goto label_311504;
        }
    }
    ctx->pc = 0x3114B8u;
    // 0x3114b8: 0x12020423  beq         $s0, $v0, . + 4 + (0x423 << 2)
    ctx->pc = 0x3114B8u;
    {
        const bool branch_taken_0x3114b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114B8u;
        // 0x3114bc: 0x2a020487  slti        $v0, $s0, 0x487 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1159) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114b8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114C0u;
    // 0x3114c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3114C0u;
    {
        const bool branch_taken_0x3114c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3114C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114C0u;
        // 0x3114c4: 0x24020484  addiu       $v0, $zero, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114c0) {
            ctx->pc = 0x3114D8u;
            goto label_3114d8;
        }
    }
    ctx->pc = 0x3114C8u;
    // 0x3114c8: 0x5602041f  bnel        $s0, $v0, . + 4 + (0x41F << 2)
    ctx->pc = 0x3114C8u;
    {
        const bool branch_taken_0x3114c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3114c8) {
            ctx->pc = 0x3114CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3114C8u;
            // 0x3114cc: 0x2a020485  slti        $v0, $s0, 0x485 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1157) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114D0u;
    // 0x3114d0: 0x1000041d  b           . + 4 + (0x41D << 2)
    ctx->pc = 0x3114D0u;
    {
        const bool branch_taken_0x3114d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3114d0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114D8u;
label_3114d8:
    // 0x3114d8: 0x24020488  addiu       $v0, $zero, 0x488
    ctx->pc = 0x3114d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
    // 0x3114dc: 0x1202041a  beq         $s0, $v0, . + 4 + (0x41A << 2)
    ctx->pc = 0x3114DCu;
    {
        const bool branch_taken_0x3114dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3114E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114DCu;
        // 0x3114e0: 0x2a020488  slti        $v0, $s0, 0x488 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1160) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114dc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114E4u;
    // 0x3114e4: 0x14400418  bnez        $v0, . + 4 + (0x418 << 2)
    ctx->pc = 0x3114E4u;
    {
        const bool branch_taken_0x3114e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3114E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114E4u;
        // 0x3114e8: 0x24020489  addiu       $v0, $zero, 0x489 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114ECu;
    // 0x3114ec: 0x12020416  beq         $s0, $v0, . + 4 + (0x416 << 2)
    ctx->pc = 0x3114ECu;
    {
        const bool branch_taken_0x3114ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114ECu;
        // 0x3114f0: 0x2402048a  addiu       $v0, $zero, 0x48A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114ec) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114F4u;
    // 0x3114f4: 0x12020414  beq         $s0, $v0, . + 4 + (0x414 << 2)
    ctx->pc = 0x3114F4u;
    {
        const bool branch_taken_0x3114f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3114F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3114F4u;
        // 0x3114f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114f4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3114FCu;
    // 0x3114fc: 0x10000429  b           . + 4 + (0x429 << 2)
    ctx->pc = 0x3114FCu;
    {
        const bool branch_taken_0x3114fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3114fc) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311504u;
label_311504:
    // 0x311504: 0x24020490  addiu       $v0, $zero, 0x490
    ctx->pc = 0x311504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1168));
    // 0x311508: 0x1202040f  beq         $s0, $v0, . + 4 + (0x40F << 2)
    ctx->pc = 0x311508u;
    {
        const bool branch_taken_0x311508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311508u;
        // 0x31150c: 0x2a020491  slti        $v0, $s0, 0x491 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1169) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311508) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311510u;
    // 0x311510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311510u;
    {
        const bool branch_taken_0x311510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311510u;
        // 0x311514: 0x2402048d  addiu       $v0, $zero, 0x48D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311510) {
            ctx->pc = 0x311540u;
            goto label_311540;
        }
    }
    ctx->pc = 0x311518u;
    // 0x311518: 0x1202040b  beq         $s0, $v0, . + 4 + (0x40B << 2)
    ctx->pc = 0x311518u;
    {
        const bool branch_taken_0x311518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311518u;
        // 0x31151c: 0x2a02048d  slti        $v0, $s0, 0x48D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1165) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311518) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311520u;
    // 0x311520: 0x14400409  bnez        $v0, . + 4 + (0x409 << 2)
    ctx->pc = 0x311520u;
    {
        const bool branch_taken_0x311520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311520u;
        // 0x311524: 0x2402048e  addiu       $v0, $zero, 0x48E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311520) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311528u;
    // 0x311528: 0x12020407  beq         $s0, $v0, . + 4 + (0x407 << 2)
    ctx->pc = 0x311528u;
    {
        const bool branch_taken_0x311528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311528u;
        // 0x31152c: 0x2402048f  addiu       $v0, $zero, 0x48F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311528) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311530u;
    // 0x311530: 0x12020405  beq         $s0, $v0, . + 4 + (0x405 << 2)
    ctx->pc = 0x311530u;
    {
        const bool branch_taken_0x311530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311530u;
        // 0x311534: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311530) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311538u;
    // 0x311538: 0x1000041a  b           . + 4 + (0x41A << 2)
    ctx->pc = 0x311538u;
    {
        const bool branch_taken_0x311538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311538) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311540u;
label_311540:
    // 0x311540: 0x24020492  addiu       $v0, $zero, 0x492
    ctx->pc = 0x311540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1170));
    // 0x311544: 0x12020400  beq         $s0, $v0, . + 4 + (0x400 << 2)
    ctx->pc = 0x311544u;
    {
        const bool branch_taken_0x311544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311544u;
        // 0x311548: 0x2a020492  slti        $v0, $s0, 0x492 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1170) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311544) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31154Cu;
    // 0x31154c: 0x144003fe  bnez        $v0, . + 4 + (0x3FE << 2)
    ctx->pc = 0x31154Cu;
    {
        const bool branch_taken_0x31154c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31154Cu;
        // 0x311550: 0x24020493  addiu       $v0, $zero, 0x493 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31154c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311554u;
    // 0x311554: 0x120203fc  beq         $s0, $v0, . + 4 + (0x3FC << 2)
    ctx->pc = 0x311554u;
    {
        const bool branch_taken_0x311554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311554u;
        // 0x311558: 0x24020494  addiu       $v0, $zero, 0x494 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311554) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31155Cu;
    // 0x31155c: 0x120203fa  beq         $s0, $v0, . + 4 + (0x3FA << 2)
    ctx->pc = 0x31155Cu;
    {
        const bool branch_taken_0x31155c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31155Cu;
        // 0x311560: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31155c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311564u;
    // 0x311564: 0x1000040f  b           . + 4 + (0x40F << 2)
    ctx->pc = 0x311564u;
    {
        const bool branch_taken_0x311564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311564) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31156Cu;
label_31156c:
    // 0x31156c: 0x240204a8  addiu       $v0, $zero, 0x4A8
    ctx->pc = 0x31156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1192));
    // 0x311570: 0x120203f5  beq         $s0, $v0, . + 4 + (0x3F5 << 2)
    ctx->pc = 0x311570u;
    {
        const bool branch_taken_0x311570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311570u;
        // 0x311574: 0x2a0204a9  slti        $v0, $s0, 0x4A9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311570) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311578u;
    // 0x311578: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x311578u;
    {
        const bool branch_taken_0x311578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311578u;
        // 0x31157c: 0x2402049e  addiu       $v0, $zero, 0x49E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311578) {
            ctx->pc = 0x311644u;
            goto label_311644;
        }
    }
    ctx->pc = 0x311580u;
    // 0x311580: 0x120203f1  beq         $s0, $v0, . + 4 + (0x3F1 << 2)
    ctx->pc = 0x311580u;
    {
        const bool branch_taken_0x311580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311580u;
        // 0x311584: 0x2a02049f  slti        $v0, $s0, 0x49F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1183) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311580) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311588u;
    // 0x311588: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311588u;
    {
        const bool branch_taken_0x311588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311588u;
        // 0x31158c: 0x24020499  addiu       $v0, $zero, 0x499 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311588) {
            ctx->pc = 0x3115DCu;
            goto label_3115dc;
        }
    }
    ctx->pc = 0x311590u;
    // 0x311590: 0x120203ed  beq         $s0, $v0, . + 4 + (0x3ED << 2)
    ctx->pc = 0x311590u;
    {
        const bool branch_taken_0x311590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311590u;
        // 0x311594: 0x2a02049a  slti        $v0, $s0, 0x49A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1178) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311590) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311598u;
    // 0x311598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311598u;
    {
        const bool branch_taken_0x311598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311598u;
        // 0x31159c: 0x24020497  addiu       $v0, $zero, 0x497 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311598) {
            ctx->pc = 0x3115B0u;
            goto label_3115b0;
        }
    }
    ctx->pc = 0x3115A0u;
    // 0x3115a0: 0x560203e9  bnel        $s0, $v0, . + 4 + (0x3E9 << 2)
    ctx->pc = 0x3115A0u;
    {
        const bool branch_taken_0x3115a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3115a0) {
            ctx->pc = 0x3115A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3115A0u;
            // 0x3115a4: 0x2a020498  slti        $v0, $s0, 0x498 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1176) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115A8u;
    // 0x3115a8: 0x100003e7  b           . + 4 + (0x3E7 << 2)
    ctx->pc = 0x3115A8u;
    {
        const bool branch_taken_0x3115a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115B0u;
label_3115b0:
    // 0x3115b0: 0x2402049b  addiu       $v0, $zero, 0x49B
    ctx->pc = 0x3115b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1179));
    // 0x3115b4: 0x120203e4  beq         $s0, $v0, . + 4 + (0x3E4 << 2)
    ctx->pc = 0x3115B4u;
    {
        const bool branch_taken_0x3115b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115B4u;
        // 0x3115b8: 0x2a02049b  slti        $v0, $s0, 0x49B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1179) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115b4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115BCu;
    // 0x3115bc: 0x144003e2  bnez        $v0, . + 4 + (0x3E2 << 2)
    ctx->pc = 0x3115BCu;
    {
        const bool branch_taken_0x3115bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3115C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115BCu;
        // 0x3115c0: 0x2402049c  addiu       $v0, $zero, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115bc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115C4u;
    // 0x3115c4: 0x120203e0  beq         $s0, $v0, . + 4 + (0x3E0 << 2)
    ctx->pc = 0x3115C4u;
    {
        const bool branch_taken_0x3115c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115C4u;
        // 0x3115c8: 0x2402049d  addiu       $v0, $zero, 0x49D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115c4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115CCu;
    // 0x3115cc: 0x120203de  beq         $s0, $v0, . + 4 + (0x3DE << 2)
    ctx->pc = 0x3115CCu;
    {
        const bool branch_taken_0x3115cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115CCu;
        // 0x3115d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115cc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115D4u;
    // 0x3115d4: 0x100003f3  b           . + 4 + (0x3F3 << 2)
    ctx->pc = 0x3115D4u;
    {
        const bool branch_taken_0x3115d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3115d4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3115DCu;
label_3115dc:
    // 0x3115dc: 0x240204a3  addiu       $v0, $zero, 0x4A3
    ctx->pc = 0x3115dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1187));
    // 0x3115e0: 0x120203d9  beq         $s0, $v0, . + 4 + (0x3D9 << 2)
    ctx->pc = 0x3115E0u;
    {
        const bool branch_taken_0x3115e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115E0u;
        // 0x3115e4: 0x2a0204a4  slti        $v0, $s0, 0x4A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1188) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115E8u;
    // 0x3115e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3115E8u;
    {
        const bool branch_taken_0x3115e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115E8u;
        // 0x3115ec: 0x240204a0  addiu       $v0, $zero, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e8) {
            ctx->pc = 0x311618u;
            goto label_311618;
        }
    }
    ctx->pc = 0x3115F0u;
    // 0x3115f0: 0x120203d5  beq         $s0, $v0, . + 4 + (0x3D5 << 2)
    ctx->pc = 0x3115F0u;
    {
        const bool branch_taken_0x3115f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3115F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F0u;
        // 0x3115f4: 0x2a0204a0  slti        $v0, $s0, 0x4A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115f0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3115F8u;
    // 0x3115f8: 0x144003d3  bnez        $v0, . + 4 + (0x3D3 << 2)
    ctx->pc = 0x3115F8u;
    {
        const bool branch_taken_0x3115f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3115FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115F8u;
        // 0x3115fc: 0x240204a1  addiu       $v0, $zero, 0x4A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115f8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311600u;
    // 0x311600: 0x120203d1  beq         $s0, $v0, . + 4 + (0x3D1 << 2)
    ctx->pc = 0x311600u;
    {
        const bool branch_taken_0x311600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311600u;
        // 0x311604: 0x240204a2  addiu       $v0, $zero, 0x4A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311600) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311608u;
    // 0x311608: 0x120203cf  beq         $s0, $v0, . + 4 + (0x3CF << 2)
    ctx->pc = 0x311608u;
    {
        const bool branch_taken_0x311608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311608u;
        // 0x31160c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311608) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311610u;
    // 0x311610: 0x100003e4  b           . + 4 + (0x3E4 << 2)
    ctx->pc = 0x311610u;
    {
        const bool branch_taken_0x311610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311610) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311618u;
label_311618:
    // 0x311618: 0x240204a5  addiu       $v0, $zero, 0x4A5
    ctx->pc = 0x311618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1189));
    // 0x31161c: 0x120203ca  beq         $s0, $v0, . + 4 + (0x3CA << 2)
    ctx->pc = 0x31161Cu;
    {
        const bool branch_taken_0x31161c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31161Cu;
        // 0x311620: 0x2a0204a5  slti        $v0, $s0, 0x4A5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1189) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31161c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311624u;
    // 0x311624: 0x144003c8  bnez        $v0, . + 4 + (0x3C8 << 2)
    ctx->pc = 0x311624u;
    {
        const bool branch_taken_0x311624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311624u;
        // 0x311628: 0x240204a6  addiu       $v0, $zero, 0x4A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311624) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31162Cu;
    // 0x31162c: 0x120203c6  beq         $s0, $v0, . + 4 + (0x3C6 << 2)
    ctx->pc = 0x31162Cu;
    {
        const bool branch_taken_0x31162c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31162Cu;
        // 0x311630: 0x240204a7  addiu       $v0, $zero, 0x4A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31162c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311634u;
    // 0x311634: 0x120203c4  beq         $s0, $v0, . + 4 + (0x3C4 << 2)
    ctx->pc = 0x311634u;
    {
        const bool branch_taken_0x311634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311634u;
        // 0x311638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311634) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31163Cu;
    // 0x31163c: 0x100003d9  b           . + 4 + (0x3D9 << 2)
    ctx->pc = 0x31163Cu;
    {
        const bool branch_taken_0x31163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31163c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311644u;
label_311644:
    // 0x311644: 0x240204b1  addiu       $v0, $zero, 0x4B1
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    // 0x311648: 0x120203bf  beq         $s0, $v0, . + 4 + (0x3BF << 2)
    ctx->pc = 0x311648u;
    {
        const bool branch_taken_0x311648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311648u;
        // 0x31164c: 0x2a0204b2  slti        $v0, $s0, 0x4B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311648) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311650u;
    // 0x311650: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311650u;
    {
        const bool branch_taken_0x311650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311650u;
        // 0x311654: 0x240204ac  addiu       $v0, $zero, 0x4AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311650) {
            ctx->pc = 0x3116A4u;
            goto label_3116a4;
        }
    }
    ctx->pc = 0x311658u;
    // 0x311658: 0x120203bb  beq         $s0, $v0, . + 4 + (0x3BB << 2)
    ctx->pc = 0x311658u;
    {
        const bool branch_taken_0x311658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311658u;
        // 0x31165c: 0x2a0204ad  slti        $v0, $s0, 0x4AD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1197) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311658) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311660u;
    // 0x311660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311660u;
    {
        const bool branch_taken_0x311660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311660u;
        // 0x311664: 0x240204aa  addiu       $v0, $zero, 0x4AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311660) {
            ctx->pc = 0x311678u;
            goto label_311678;
        }
    }
    ctx->pc = 0x311668u;
    // 0x311668: 0x560203b7  bnel        $s0, $v0, . + 4 + (0x3B7 << 2)
    ctx->pc = 0x311668u;
    {
        const bool branch_taken_0x311668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311668) {
            ctx->pc = 0x31166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311668u;
            // 0x31166c: 0x2a0204ab  slti        $v0, $s0, 0x4AB (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1195) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311670u;
    // 0x311670: 0x100003b5  b           . + 4 + (0x3B5 << 2)
    ctx->pc = 0x311670u;
    {
        const bool branch_taken_0x311670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311670) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311678u;
label_311678:
    // 0x311678: 0x240204ae  addiu       $v0, $zero, 0x4AE
    ctx->pc = 0x311678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
    // 0x31167c: 0x120203b2  beq         $s0, $v0, . + 4 + (0x3B2 << 2)
    ctx->pc = 0x31167Cu;
    {
        const bool branch_taken_0x31167c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31167Cu;
        // 0x311680: 0x2a0204ae  slti        $v0, $s0, 0x4AE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1198) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31167c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311684u;
    // 0x311684: 0x144003b0  bnez        $v0, . + 4 + (0x3B0 << 2)
    ctx->pc = 0x311684u;
    {
        const bool branch_taken_0x311684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311684u;
        // 0x311688: 0x240204af  addiu       $v0, $zero, 0x4AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311684) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31168Cu;
    // 0x31168c: 0x120203ae  beq         $s0, $v0, . + 4 + (0x3AE << 2)
    ctx->pc = 0x31168Cu;
    {
        const bool branch_taken_0x31168c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31168Cu;
        // 0x311690: 0x240204b0  addiu       $v0, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31168c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311694u;
    // 0x311694: 0x120203ac  beq         $s0, $v0, . + 4 + (0x3AC << 2)
    ctx->pc = 0x311694u;
    {
        const bool branch_taken_0x311694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311694u;
        // 0x311698: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311694) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31169Cu;
    // 0x31169c: 0x100003c1  b           . + 4 + (0x3C1 << 2)
    ctx->pc = 0x31169Cu;
    {
        const bool branch_taken_0x31169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31169c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3116A4u;
label_3116a4:
    // 0x3116a4: 0x240204b6  addiu       $v0, $zero, 0x4B6
    ctx->pc = 0x3116a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
    // 0x3116a8: 0x120203a7  beq         $s0, $v0, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x3116A8u;
    {
        const bool branch_taken_0x3116a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116A8u;
        // 0x3116ac: 0x2a0204b7  slti        $v0, $s0, 0x4B7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1207) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116B0u;
    // 0x3116b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3116B0u;
    {
        const bool branch_taken_0x3116b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B0u;
        // 0x3116b4: 0x240204b3  addiu       $v0, $zero, 0x4B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116b0) {
            ctx->pc = 0x3116E0u;
            goto label_3116e0;
        }
    }
    ctx->pc = 0x3116B8u;
    // 0x3116b8: 0x120203a3  beq         $s0, $v0, . + 4 + (0x3A3 << 2)
    ctx->pc = 0x3116B8u;
    {
        const bool branch_taken_0x3116b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B8u;
        // 0x3116bc: 0x2a0204b3  slti        $v0, $s0, 0x4B3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1203) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116b8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116C0u;
    // 0x3116c0: 0x144003a1  bnez        $v0, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x3116C0u;
    {
        const bool branch_taken_0x3116c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3116C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116C0u;
        // 0x3116c4: 0x240204b4  addiu       $v0, $zero, 0x4B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116c0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116C8u;
    // 0x3116c8: 0x1202039f  beq         $s0, $v0, . + 4 + (0x39F << 2)
    ctx->pc = 0x3116C8u;
    {
        const bool branch_taken_0x3116c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116C8u;
        // 0x3116cc: 0x240204b5  addiu       $v0, $zero, 0x4B5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116c8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116D0u;
    // 0x3116d0: 0x1202039d  beq         $s0, $v0, . + 4 + (0x39D << 2)
    ctx->pc = 0x3116D0u;
    {
        const bool branch_taken_0x3116d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D0u;
        // 0x3116d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116d0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116D8u;
    // 0x3116d8: 0x100003b2  b           . + 4 + (0x3B2 << 2)
    ctx->pc = 0x3116D8u;
    {
        const bool branch_taken_0x3116d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116d8) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3116E0u;
label_3116e0:
    // 0x3116e0: 0x240204b8  addiu       $v0, $zero, 0x4B8
    ctx->pc = 0x3116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1208));
    // 0x3116e4: 0x12020398  beq         $s0, $v0, . + 4 + (0x398 << 2)
    ctx->pc = 0x3116E4u;
    {
        const bool branch_taken_0x3116e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116E4u;
        // 0x3116e8: 0x2a0204b8  slti        $v0, $s0, 0x4B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1208) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116ECu;
    // 0x3116ec: 0x14400396  bnez        $v0, . + 4 + (0x396 << 2)
    ctx->pc = 0x3116ECu;
    {
        const bool branch_taken_0x3116ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3116F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116ECu;
        // 0x3116f0: 0x240204b9  addiu       $v0, $zero, 0x4B9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116ec) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116F4u;
    // 0x3116f4: 0x12020394  beq         $s0, $v0, . + 4 + (0x394 << 2)
    ctx->pc = 0x3116F4u;
    {
        const bool branch_taken_0x3116f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3116F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116F4u;
        // 0x3116f8: 0x240204ba  addiu       $v0, $zero, 0x4BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116f4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3116FCu;
    // 0x3116fc: 0x12020392  beq         $s0, $v0, . + 4 + (0x392 << 2)
    ctx->pc = 0x3116FCu;
    {
        const bool branch_taken_0x3116fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116FCu;
        // 0x311700: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116fc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311704u;
    // 0x311704: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x311704u;
    {
        const bool branch_taken_0x311704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311704) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31170Cu;
label_31170c:
    // 0x31170c: 0x240204e1  addiu       $v0, $zero, 0x4E1
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1249));
    // 0x311710: 0x1202038d  beq         $s0, $v0, . + 4 + (0x38D << 2)
    ctx->pc = 0x311710u;
    {
        const bool branch_taken_0x311710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311710u;
        // 0x311714: 0x2a0204e2  slti        $v0, $s0, 0x4E2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311710) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311718u;
    // 0x311718: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x311718u;
    {
        const bool branch_taken_0x311718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311718u;
        // 0x31171c: 0x240204ce  addiu       $v0, $zero, 0x4CE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311718) {
            ctx->pc = 0x3118BCu;
            goto label_3118bc;
        }
    }
    ctx->pc = 0x311720u;
    // 0x311720: 0x12020389  beq         $s0, $v0, . + 4 + (0x389 << 2)
    ctx->pc = 0x311720u;
    {
        const bool branch_taken_0x311720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311720u;
        // 0x311724: 0x2a0204cf  slti        $v0, $s0, 0x4CF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1231) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311720) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311728u;
    // 0x311728: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x311728u;
    {
        const bool branch_taken_0x311728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311728u;
        // 0x31172c: 0x240204c4  addiu       $v0, $zero, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311728) {
            ctx->pc = 0x3117F4u;
            goto label_3117f4;
        }
    }
    ctx->pc = 0x311730u;
    // 0x311730: 0x12020385  beq         $s0, $v0, . + 4 + (0x385 << 2)
    ctx->pc = 0x311730u;
    {
        const bool branch_taken_0x311730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311730u;
        // 0x311734: 0x2a0204c5  slti        $v0, $s0, 0x4C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1221) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311730) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311738u;
    // 0x311738: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311738u;
    {
        const bool branch_taken_0x311738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311738u;
        // 0x31173c: 0x240204bf  addiu       $v0, $zero, 0x4BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311738) {
            ctx->pc = 0x31178Cu;
            goto label_31178c;
        }
    }
    ctx->pc = 0x311740u;
    // 0x311740: 0x12020381  beq         $s0, $v0, . + 4 + (0x381 << 2)
    ctx->pc = 0x311740u;
    {
        const bool branch_taken_0x311740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311740u;
        // 0x311744: 0x2a0204c0  slti        $v0, $s0, 0x4C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1216) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311740) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311748u;
    // 0x311748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311748u;
    {
        const bool branch_taken_0x311748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311748u;
        // 0x31174c: 0x240204bd  addiu       $v0, $zero, 0x4BD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311748) {
            ctx->pc = 0x311760u;
            goto label_311760;
        }
    }
    ctx->pc = 0x311750u;
    // 0x311750: 0x5602037d  bnel        $s0, $v0, . + 4 + (0x37D << 2)
    ctx->pc = 0x311750u;
    {
        const bool branch_taken_0x311750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311750) {
            ctx->pc = 0x311754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311750u;
            // 0x311754: 0x2a0204be  slti        $v0, $s0, 0x4BE (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1214) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311758u;
    // 0x311758: 0x1000037b  b           . + 4 + (0x37B << 2)
    ctx->pc = 0x311758u;
    {
        const bool branch_taken_0x311758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311758) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311760u;
label_311760:
    // 0x311760: 0x240204c1  addiu       $v0, $zero, 0x4C1
    ctx->pc = 0x311760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1217));
    // 0x311764: 0x12020378  beq         $s0, $v0, . + 4 + (0x378 << 2)
    ctx->pc = 0x311764u;
    {
        const bool branch_taken_0x311764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311764u;
        // 0x311768: 0x2a0204c1  slti        $v0, $s0, 0x4C1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1217) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311764) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31176Cu;
    // 0x31176c: 0x14400376  bnez        $v0, . + 4 + (0x376 << 2)
    ctx->pc = 0x31176Cu;
    {
        const bool branch_taken_0x31176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31176Cu;
        // 0x311770: 0x240204c2  addiu       $v0, $zero, 0x4C2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31176c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311774u;
    // 0x311774: 0x12020374  beq         $s0, $v0, . + 4 + (0x374 << 2)
    ctx->pc = 0x311774u;
    {
        const bool branch_taken_0x311774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311774u;
        // 0x311778: 0x240204c3  addiu       $v0, $zero, 0x4C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1219));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311774) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31177Cu;
    // 0x31177c: 0x12020372  beq         $s0, $v0, . + 4 + (0x372 << 2)
    ctx->pc = 0x31177Cu;
    {
        const bool branch_taken_0x31177c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31177Cu;
        // 0x311780: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31177c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311784u;
    // 0x311784: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x311784u;
    {
        const bool branch_taken_0x311784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311784) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31178Cu;
label_31178c:
    // 0x31178c: 0x240204c9  addiu       $v0, $zero, 0x4C9
    ctx->pc = 0x31178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1225));
    // 0x311790: 0x1202036d  beq         $s0, $v0, . + 4 + (0x36D << 2)
    ctx->pc = 0x311790u;
    {
        const bool branch_taken_0x311790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311790u;
        // 0x311794: 0x2a0204ca  slti        $v0, $s0, 0x4CA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1226) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311790) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311798u;
    // 0x311798: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311798u;
    {
        const bool branch_taken_0x311798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311798u;
        // 0x31179c: 0x240204c6  addiu       $v0, $zero, 0x4C6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311798) {
            ctx->pc = 0x3117C8u;
            goto label_3117c8;
        }
    }
    ctx->pc = 0x3117A0u;
    // 0x3117a0: 0x12020369  beq         $s0, $v0, . + 4 + (0x369 << 2)
    ctx->pc = 0x3117A0u;
    {
        const bool branch_taken_0x3117a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117A0u;
        // 0x3117a4: 0x2a0204c6  slti        $v0, $s0, 0x4C6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1222) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117a0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117A8u;
    // 0x3117a8: 0x14400367  bnez        $v0, . + 4 + (0x367 << 2)
    ctx->pc = 0x3117A8u;
    {
        const bool branch_taken_0x3117a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117A8u;
        // 0x3117ac: 0x240204c7  addiu       $v0, $zero, 0x4C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117B0u;
    // 0x3117b0: 0x12020365  beq         $s0, $v0, . + 4 + (0x365 << 2)
    ctx->pc = 0x3117B0u;
    {
        const bool branch_taken_0x3117b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117B0u;
        // 0x3117b4: 0x240204c8  addiu       $v0, $zero, 0x4C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117b0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117B8u;
    // 0x3117b8: 0x12020363  beq         $s0, $v0, . + 4 + (0x363 << 2)
    ctx->pc = 0x3117B8u;
    {
        const bool branch_taken_0x3117b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117B8u;
        // 0x3117bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117b8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117C0u;
    // 0x3117c0: 0x10000378  b           . + 4 + (0x378 << 2)
    ctx->pc = 0x3117C0u;
    {
        const bool branch_taken_0x3117c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3117c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3117C8u;
label_3117c8:
    // 0x3117c8: 0x240204cb  addiu       $v0, $zero, 0x4CB
    ctx->pc = 0x3117c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1227));
    // 0x3117cc: 0x1202035e  beq         $s0, $v0, . + 4 + (0x35E << 2)
    ctx->pc = 0x3117CCu;
    {
        const bool branch_taken_0x3117cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117CCu;
        // 0x3117d0: 0x2a0204cb  slti        $v0, $s0, 0x4CB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1227) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117cc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117D4u;
    // 0x3117d4: 0x1440035c  bnez        $v0, . + 4 + (0x35C << 2)
    ctx->pc = 0x3117D4u;
    {
        const bool branch_taken_0x3117d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3117D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117D4u;
        // 0x3117d8: 0x240204cc  addiu       $v0, $zero, 0x4CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117d4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117DCu;
    // 0x3117dc: 0x1202035a  beq         $s0, $v0, . + 4 + (0x35A << 2)
    ctx->pc = 0x3117DCu;
    {
        const bool branch_taken_0x3117dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117DCu;
        // 0x3117e0: 0x240204cd  addiu       $v0, $zero, 0x4CD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117dc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117E4u;
    // 0x3117e4: 0x12020358  beq         $s0, $v0, . + 4 + (0x358 << 2)
    ctx->pc = 0x3117E4u;
    {
        const bool branch_taken_0x3117e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117E4u;
        // 0x3117e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3117ECu;
    // 0x3117ec: 0x1000036d  b           . + 4 + (0x36D << 2)
    ctx->pc = 0x3117ECu;
    {
        const bool branch_taken_0x3117ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3117ec) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3117F4u;
label_3117f4:
    // 0x3117f4: 0x240204d7  addiu       $v0, $zero, 0x4D7
    ctx->pc = 0x3117f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1239));
    // 0x3117f8: 0x12020353  beq         $s0, $v0, . + 4 + (0x353 << 2)
    ctx->pc = 0x3117F8u;
    {
        const bool branch_taken_0x3117f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3117FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117F8u;
        // 0x3117fc: 0x2a0204d8  slti        $v0, $s0, 0x4D8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117f8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311800u;
    // 0x311800: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x311800u;
    {
        const bool branch_taken_0x311800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311800u;
        // 0x311804: 0x240204d2  addiu       $v0, $zero, 0x4D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311800) {
            ctx->pc = 0x311854u;
            goto label_311854;
        }
    }
    ctx->pc = 0x311808u;
    // 0x311808: 0x1202034f  beq         $s0, $v0, . + 4 + (0x34F << 2)
    ctx->pc = 0x311808u;
    {
        const bool branch_taken_0x311808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311808u;
        // 0x31180c: 0x2a0204d3  slti        $v0, $s0, 0x4D3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1235) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311808) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311810u;
    // 0x311810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311810u;
    {
        const bool branch_taken_0x311810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311810u;
        // 0x311814: 0x240204d0  addiu       $v0, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311810) {
            ctx->pc = 0x311828u;
            goto label_311828;
        }
    }
    ctx->pc = 0x311818u;
    // 0x311818: 0x5602034b  bnel        $s0, $v0, . + 4 + (0x34B << 2)
    ctx->pc = 0x311818u;
    {
        const bool branch_taken_0x311818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x311818) {
            ctx->pc = 0x31181Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311818u;
            // 0x31181c: 0x2a0204d1  slti        $v0, $s0, 0x4D1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1233) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311820u;
    // 0x311820: 0x10000349  b           . + 4 + (0x349 << 2)
    ctx->pc = 0x311820u;
    {
        const bool branch_taken_0x311820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311820) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311828u;
label_311828:
    // 0x311828: 0x240204d4  addiu       $v0, $zero, 0x4D4
    ctx->pc = 0x311828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1236));
    // 0x31182c: 0x12020346  beq         $s0, $v0, . + 4 + (0x346 << 2)
    ctx->pc = 0x31182Cu;
    {
        const bool branch_taken_0x31182c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31182Cu;
        // 0x311830: 0x2a0204d4  slti        $v0, $s0, 0x4D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31182c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311834u;
    // 0x311834: 0x14400344  bnez        $v0, . + 4 + (0x344 << 2)
    ctx->pc = 0x311834u;
    {
        const bool branch_taken_0x311834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311834u;
        // 0x311838: 0x240204d5  addiu       $v0, $zero, 0x4D5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311834) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31183Cu;
    // 0x31183c: 0x12020342  beq         $s0, $v0, . + 4 + (0x342 << 2)
    ctx->pc = 0x31183Cu;
    {
        const bool branch_taken_0x31183c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31183Cu;
        // 0x311840: 0x240204d6  addiu       $v0, $zero, 0x4D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31183c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311844u;
    // 0x311844: 0x12020340  beq         $s0, $v0, . + 4 + (0x340 << 2)
    ctx->pc = 0x311844u;
    {
        const bool branch_taken_0x311844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311844u;
        // 0x311848: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311844) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31184Cu;
    // 0x31184c: 0x10000355  b           . + 4 + (0x355 << 2)
    ctx->pc = 0x31184Cu;
    {
        const bool branch_taken_0x31184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31184c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311854u;
label_311854:
    // 0x311854: 0x240204dc  addiu       $v0, $zero, 0x4DC
    ctx->pc = 0x311854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1244));
    // 0x311858: 0x1202033b  beq         $s0, $v0, . + 4 + (0x33B << 2)
    ctx->pc = 0x311858u;
    {
        const bool branch_taken_0x311858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311858u;
        // 0x31185c: 0x2a0204dd  slti        $v0, $s0, 0x4DD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1245) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311858) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311860u;
    // 0x311860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311860u;
    {
        const bool branch_taken_0x311860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311860u;
        // 0x311864: 0x240204d9  addiu       $v0, $zero, 0x4D9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311860) {
            ctx->pc = 0x311890u;
            goto label_311890;
        }
    }
    ctx->pc = 0x311868u;
    // 0x311868: 0x12020337  beq         $s0, $v0, . + 4 + (0x337 << 2)
    ctx->pc = 0x311868u;
    {
        const bool branch_taken_0x311868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311868u;
        // 0x31186c: 0x2a0204d9  slti        $v0, $s0, 0x4D9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1241) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311868) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311870u;
    // 0x311870: 0x14400335  bnez        $v0, . + 4 + (0x335 << 2)
    ctx->pc = 0x311870u;
    {
        const bool branch_taken_0x311870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311870u;
        // 0x311874: 0x240204da  addiu       $v0, $zero, 0x4DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311870) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311878u;
    // 0x311878: 0x12020333  beq         $s0, $v0, . + 4 + (0x333 << 2)
    ctx->pc = 0x311878u;
    {
        const bool branch_taken_0x311878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311878u;
        // 0x31187c: 0x240204db  addiu       $v0, $zero, 0x4DB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311878) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311880u;
    // 0x311880: 0x12020331  beq         $s0, $v0, . + 4 + (0x331 << 2)
    ctx->pc = 0x311880u;
    {
        const bool branch_taken_0x311880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311880u;
        // 0x311884: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311880) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311888u;
    // 0x311888: 0x10000346  b           . + 4 + (0x346 << 2)
    ctx->pc = 0x311888u;
    {
        const bool branch_taken_0x311888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311888) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311890u;
label_311890:
    // 0x311890: 0x240204de  addiu       $v0, $zero, 0x4DE
    ctx->pc = 0x311890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1246));
    // 0x311894: 0x1202032c  beq         $s0, $v0, . + 4 + (0x32C << 2)
    ctx->pc = 0x311894u;
    {
        const bool branch_taken_0x311894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311894u;
        // 0x311898: 0x2a0204de  slti        $v0, $s0, 0x4DE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1246) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311894) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31189Cu;
    // 0x31189c: 0x1440032a  bnez        $v0, . + 4 + (0x32A << 2)
    ctx->pc = 0x31189Cu;
    {
        const bool branch_taken_0x31189c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3118A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31189Cu;
        // 0x3118a0: 0x240204df  addiu       $v0, $zero, 0x4DF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31189c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118A4u;
    // 0x3118a4: 0x12020328  beq         $s0, $v0, . + 4 + (0x328 << 2)
    ctx->pc = 0x3118A4u;
    {
        const bool branch_taken_0x3118a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3118A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118A4u;
        // 0x3118a8: 0x240204e0  addiu       $v0, $zero, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118a4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118ACu;
    // 0x3118ac: 0x12020326  beq         $s0, $v0, . + 4 + (0x326 << 2)
    ctx->pc = 0x3118ACu;
    {
        const bool branch_taken_0x3118ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118ACu;
        // 0x3118b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118ac) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118B4u;
    // 0x3118b4: 0x1000033b  b           . + 4 + (0x33B << 2)
    ctx->pc = 0x3118B4u;
    {
        const bool branch_taken_0x3118b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3118b4) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3118BCu;
label_3118bc:
    // 0x3118bc: 0x240204f4  addiu       $v0, $zero, 0x4F4
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1268));
    // 0x3118c0: 0x12020321  beq         $s0, $v0, . + 4 + (0x321 << 2)
    ctx->pc = 0x3118C0u;
    {
        const bool branch_taken_0x3118c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118C0u;
        // 0x3118c4: 0x2a0204f5  slti        $v0, $s0, 0x4F5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1269) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118c0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118C8u;
    // 0x3118c8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3118C8u;
    {
        const bool branch_taken_0x3118c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118C8u;
        // 0x3118cc: 0x240204ea  addiu       $v0, $zero, 0x4EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118c8) {
            ctx->pc = 0x311994u;
            goto label_311994;
        }
    }
    ctx->pc = 0x3118D0u;
    // 0x3118d0: 0x1202031d  beq         $s0, $v0, . + 4 + (0x31D << 2)
    ctx->pc = 0x3118D0u;
    {
        const bool branch_taken_0x3118d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3118D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118D0u;
        // 0x3118d4: 0x2a0204eb  slti        $v0, $s0, 0x4EB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1259) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118d0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118D8u;
    // 0x3118d8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3118D8u;
    {
        const bool branch_taken_0x3118d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118D8u;
        // 0x3118dc: 0x240204e5  addiu       $v0, $zero, 0x4E5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118d8) {
            ctx->pc = 0x31192Cu;
            goto label_31192c;
        }
    }
    ctx->pc = 0x3118E0u;
    // 0x3118e0: 0x12020319  beq         $s0, $v0, . + 4 + (0x319 << 2)
    ctx->pc = 0x3118E0u;
    {
        const bool branch_taken_0x3118e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118E0u;
        // 0x3118e4: 0x2a0204e6  slti        $v0, $s0, 0x4E6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1254) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118e0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118E8u;
    // 0x3118e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3118E8u;
    {
        const bool branch_taken_0x3118e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118E8u;
        // 0x3118ec: 0x240204e3  addiu       $v0, $zero, 0x4E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118e8) {
            ctx->pc = 0x311900u;
            goto label_311900;
        }
    }
    ctx->pc = 0x3118F0u;
    // 0x3118f0: 0x56020315  bnel        $s0, $v0, . + 4 + (0x315 << 2)
    ctx->pc = 0x3118F0u;
    {
        const bool branch_taken_0x3118f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3118f0) {
            ctx->pc = 0x3118F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3118F0u;
            // 0x3118f4: 0x2a0204e4  slti        $v0, $s0, 0x4E4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1252) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3118F8u;
    // 0x3118f8: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x3118F8u;
    {
        const bool branch_taken_0x3118f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3118f8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311900u;
label_311900:
    // 0x311900: 0x240204e7  addiu       $v0, $zero, 0x4E7
    ctx->pc = 0x311900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1255));
    // 0x311904: 0x12020310  beq         $s0, $v0, . + 4 + (0x310 << 2)
    ctx->pc = 0x311904u;
    {
        const bool branch_taken_0x311904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311904u;
        // 0x311908: 0x2a0204e7  slti        $v0, $s0, 0x4E7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311904) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31190Cu;
    // 0x31190c: 0x1440030e  bnez        $v0, . + 4 + (0x30E << 2)
    ctx->pc = 0x31190Cu;
    {
        const bool branch_taken_0x31190c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31190Cu;
        // 0x311910: 0x240204e8  addiu       $v0, $zero, 0x4E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31190c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311914u;
    // 0x311914: 0x1202030c  beq         $s0, $v0, . + 4 + (0x30C << 2)
    ctx->pc = 0x311914u;
    {
        const bool branch_taken_0x311914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311914u;
        // 0x311918: 0x240204e9  addiu       $v0, $zero, 0x4E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311914) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31191Cu;
    // 0x31191c: 0x1202030a  beq         $s0, $v0, . + 4 + (0x30A << 2)
    ctx->pc = 0x31191Cu;
    {
        const bool branch_taken_0x31191c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31191Cu;
        // 0x311920: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31191c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311924u;
    // 0x311924: 0x1000031f  b           . + 4 + (0x31F << 2)
    ctx->pc = 0x311924u;
    {
        const bool branch_taken_0x311924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311924) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x31192Cu;
label_31192c:
    // 0x31192c: 0x240204ef  addiu       $v0, $zero, 0x4EF
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1263));
    // 0x311930: 0x12020305  beq         $s0, $v0, . + 4 + (0x305 << 2)
    ctx->pc = 0x311930u;
    {
        const bool branch_taken_0x311930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311930u;
        // 0x311934: 0x2a0204f0  slti        $v0, $s0, 0x4F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1264) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311930) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311938u;
    // 0x311938: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311938u;
    {
        const bool branch_taken_0x311938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311938u;
        // 0x31193c: 0x240204ec  addiu       $v0, $zero, 0x4EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311938) {
            ctx->pc = 0x311968u;
            goto label_311968;
        }
    }
    ctx->pc = 0x311940u;
    // 0x311940: 0x12020301  beq         $s0, $v0, . + 4 + (0x301 << 2)
    ctx->pc = 0x311940u;
    {
        const bool branch_taken_0x311940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311940u;
        // 0x311944: 0x2a0204ec  slti        $v0, $s0, 0x4EC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1260) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311940) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311948u;
    // 0x311948: 0x144002ff  bnez        $v0, . + 4 + (0x2FF << 2)
    ctx->pc = 0x311948u;
    {
        const bool branch_taken_0x311948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311948u;
        // 0x31194c: 0x240204ed  addiu       $v0, $zero, 0x4ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311948) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311950u;
    // 0x311950: 0x120202fd  beq         $s0, $v0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x311950u;
    {
        const bool branch_taken_0x311950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311950u;
        // 0x311954: 0x240204ee  addiu       $v0, $zero, 0x4EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311950) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311958u;
    // 0x311958: 0x120202fb  beq         $s0, $v0, . + 4 + (0x2FB << 2)
    ctx->pc = 0x311958u;
    {
        const bool branch_taken_0x311958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311958u;
        // 0x31195c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311958) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311960u;
    // 0x311960: 0x10000310  b           . + 4 + (0x310 << 2)
    ctx->pc = 0x311960u;
    {
        const bool branch_taken_0x311960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311960) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311968u;
label_311968:
    // 0x311968: 0x240204f1  addiu       $v0, $zero, 0x4F1
    ctx->pc = 0x311968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1265));
    // 0x31196c: 0x120202f6  beq         $s0, $v0, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x31196Cu;
    {
        const bool branch_taken_0x31196c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31196Cu;
        // 0x311970: 0x2a0204f1  slti        $v0, $s0, 0x4F1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1265) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31196c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311974u;
    // 0x311974: 0x144002f4  bnez        $v0, . + 4 + (0x2F4 << 2)
    ctx->pc = 0x311974u;
    {
        const bool branch_taken_0x311974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311974u;
        // 0x311978: 0x240204f2  addiu       $v0, $zero, 0x4F2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311974) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31197Cu;
    // 0x31197c: 0x120202f2  beq         $s0, $v0, . + 4 + (0x2F2 << 2)
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31197Cu;
        // 0x311980: 0x240204f3  addiu       $v0, $zero, 0x4F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31197c) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311984u;
    // 0x311984: 0x120202f0  beq         $s0, $v0, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x311984u;
    {
        const bool branch_taken_0x311984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311984u;
        // 0x311988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311984) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x31198Cu;
    // 0x31198c: 0x10000305  b           . + 4 + (0x305 << 2)
    ctx->pc = 0x31198Cu;
    {
        const bool branch_taken_0x31198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31198c) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311994u;
label_311994:
    // 0x311994: 0x240204fd  addiu       $v0, $zero, 0x4FD
    ctx->pc = 0x311994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1277));
    // 0x311998: 0x120202eb  beq         $s0, $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x311998u;
    {
        const bool branch_taken_0x311998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311998u;
        // 0x31199c: 0x2a0204fe  slti        $v0, $s0, 0x4FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1278) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311998) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119A0u;
    // 0x3119a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3119A0u;
    {
        const bool branch_taken_0x3119a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119A0u;
        // 0x3119a4: 0x240204f8  addiu       $v0, $zero, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119a0) {
            ctx->pc = 0x3119F4u;
            goto label_3119f4;
        }
    }
    ctx->pc = 0x3119A8u;
    // 0x3119a8: 0x120202e7  beq         $s0, $v0, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x3119A8u;
    {
        const bool branch_taken_0x3119a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3119ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119A8u;
        // 0x3119ac: 0x2a0204f9  slti        $v0, $s0, 0x4F9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1273) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119a8) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119B0u;
    // 0x3119b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3119B0u;
    {
        const bool branch_taken_0x3119b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119B0u;
        // 0x3119b4: 0x240204f6  addiu       $v0, $zero, 0x4F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119b0) {
            ctx->pc = 0x3119C8u;
            goto label_3119c8;
        }
    }
    ctx->pc = 0x3119B8u;
    // 0x3119b8: 0x560202e3  bnel        $s0, $v0, . + 4 + (0x2E3 << 2)
    ctx->pc = 0x3119B8u;
    {
        const bool branch_taken_0x3119b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3119b8) {
            ctx->pc = 0x3119BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3119B8u;
            // 0x3119bc: 0x2a0204f7  slti        $v0, $s0, 0x4F7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1271) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119C0u;
    // 0x3119c0: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x3119C0u;
    {
        const bool branch_taken_0x3119c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3119c0) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119C8u;
label_3119c8:
    // 0x3119c8: 0x240204fa  addiu       $v0, $zero, 0x4FA
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1274));
    // 0x3119cc: 0x120202de  beq         $s0, $v0, . + 4 + (0x2DE << 2)
    ctx->pc = 0x3119CCu;
    {
        const bool branch_taken_0x3119cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119CCu;
        // 0x3119d0: 0x2a0204fa  slti        $v0, $s0, 0x4FA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119cc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119D4u;
    // 0x3119d4: 0x144002dc  bnez        $v0, . + 4 + (0x2DC << 2)
    ctx->pc = 0x3119D4u;
    {
        const bool branch_taken_0x3119d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119D4u;
        // 0x3119d8: 0x240204fb  addiu       $v0, $zero, 0x4FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119d4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119DCu;
    // 0x3119dc: 0x120202da  beq         $s0, $v0, . + 4 + (0x2DA << 2)
    ctx->pc = 0x3119DCu;
    {
        const bool branch_taken_0x3119dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3119E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119DCu;
        // 0x3119e0: 0x240204fc  addiu       $v0, $zero, 0x4FC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119dc) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119E4u;
    // 0x3119e4: 0x120202d8  beq         $s0, $v0, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x3119E4u;
    {
        const bool branch_taken_0x3119e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119E4u;
        // 0x3119e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119e4) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x3119ECu;
    // 0x3119ec: 0x100002ed  b           . + 4 + (0x2ED << 2)
    ctx->pc = 0x3119ECu;
    {
        const bool branch_taken_0x3119ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3119ec) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3119F4u;
label_3119f4:
    // 0x3119f4: 0x24021100  addiu       $v0, $zero, 0x1100
    ctx->pc = 0x3119f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    // 0x3119f8: 0x120202db  beq         $s0, $v0, . + 4 + (0x2DB << 2)
    ctx->pc = 0x3119F8u;
    {
        const bool branch_taken_0x3119f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3119FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F8u;
        // 0x3119fc: 0x2a021101  slti        $v0, $s0, 0x1101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4353) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119f8) {
            ctx->pc = 0x312568u;
            goto label_312568;
        }
    }
    ctx->pc = 0x311A00u;
    // 0x311a00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311A00u;
    {
        const bool branch_taken_0x311a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A00u;
        // 0x311a04: 0x240204ff  addiu       $v0, $zero, 0x4FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a00) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A08u;
    // 0x311a08: 0x120202cf  beq         $s0, $v0, . + 4 + (0x2CF << 2)
    ctx->pc = 0x311A08u;
    {
        const bool branch_taken_0x311a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A08u;
        // 0x311a0c: 0x2a0204ff  slti        $v0, $s0, 0x4FF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1279) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a08) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311A10u;
    // 0x311a10: 0x144002cd  bnez        $v0, . + 4 + (0x2CD << 2)
    ctx->pc = 0x311A10u;
    {
        const bool branch_taken_0x311a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A10u;
        // 0x311a14: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a10) {
            ctx->pc = 0x312548u;
            goto label_312548;
        }
    }
    ctx->pc = 0x311A18u;
    // 0x311a18: 0x120202df  beq         $s0, $v0, . + 4 + (0x2DF << 2)
    ctx->pc = 0x311A18u;
    {
        const bool branch_taken_0x311a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A18u;
        // 0x311a1c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a18) {
            ctx->pc = 0x312598u;
            goto label_312598;
        }
    }
    ctx->pc = 0x311A20u;
    // 0x311a20: 0x120202cd  beq         $s0, $v0, . + 4 + (0x2CD << 2)
    ctx->pc = 0x311A20u;
    {
        const bool branch_taken_0x311a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A20u;
        // 0x311a24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a20) {
            ctx->pc = 0x312558u;
            goto label_312558;
        }
    }
    ctx->pc = 0x311A28u;
    // 0x311a28: 0x100002de  b           . + 4 + (0x2DE << 2)
    ctx->pc = 0x311A28u;
    {
        const bool branch_taken_0x311a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311a28) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A30u;
label_311a30:
    // 0x311a30: 0x3402ff01  ori         $v0, $zero, 0xFF01
    ctx->pc = 0x311a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
    // 0x311a34: 0x120202d8  beq         $s0, $v0, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x311A34u;
    {
        const bool branch_taken_0x311a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A34u;
        // 0x311a38: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a34) {
            ctx->pc = 0x312598u;
            goto label_312598;
        }
    }
    ctx->pc = 0x311A3Cu;
    // 0x311a3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311A3Cu;
    {
        const bool branch_taken_0x311a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A3Cu;
        // 0x311a40: 0x3402ff02  ori         $v0, $zero, 0xFF02 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a3c) {
            ctx->pc = 0x311A58u;
            goto label_311a58;
        }
    }
    ctx->pc = 0x311A44u;
    // 0x311a44: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x311a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x311a48: 0x120202cb  beq         $s0, $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x311A48u;
    {
        const bool branch_taken_0x311a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A48u;
        // 0x311a4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a48) {
            ctx->pc = 0x312578u;
            goto label_312578;
        }
    }
    ctx->pc = 0x311A50u;
    // 0x311a50: 0x100002d4  b           . + 4 + (0x2D4 << 2)
    ctx->pc = 0x311A50u;
    {
        const bool branch_taken_0x311a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311a50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A58u;
label_311a58:
    // 0x311a58: 0x120202cb  beq         $s0, $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x311A58u;
    {
        const bool branch_taken_0x311a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A58u;
        // 0x311a5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a58) {
            ctx->pc = 0x312588u;
            goto label_312588;
        }
    }
    ctx->pc = 0x311A60u;
    // 0x311a60: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x311A60u;
    {
        const bool branch_taken_0x311a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A60u;
        // 0x311a64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A68u;
label_311a68:
    // 0x311a68: 0xc0c4ba2  jal         func_312E88
    ctx->pc = 0x311A68u;
    SET_GPR_U32(ctx, 31, 0x311A70u);
    ctx->pc = 0x312E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312E88u, 0x311A68u, 0x311A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A70u;
label_311a70:
    // 0x311a70: 0x100002cc  b           . + 4 + (0x2CC << 2)
    ctx->pc = 0x311A70u;
    {
        const bool branch_taken_0x311a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A70u;
        // 0x311a74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A78u;
label_311a78:
    // 0x311a78: 0xc0c4bc0  jal         func_312F00
    ctx->pc = 0x311A78u;
    SET_GPR_U32(ctx, 31, 0x311A80u);
    ctx->pc = 0x312F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F00u, 0x311A78u, 0x311A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A80u;
label_311a80:
    // 0x311a80: 0x100002c8  b           . + 4 + (0x2C8 << 2)
    ctx->pc = 0x311A80u;
    {
        const bool branch_taken_0x311a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A80u;
        // 0x311a84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A88u;
label_311a88:
    // 0x311a88: 0xc0c4bdc  jal         func_312F70
    ctx->pc = 0x311A88u;
    SET_GPR_U32(ctx, 31, 0x311A90u);
    ctx->pc = 0x312F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F70u, 0x311A88u, 0x311A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311A90u;
label_311a90:
    // 0x311a90: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x311A90u;
    {
        const bool branch_taken_0x311a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A90u;
        // 0x311a94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311A98u;
label_311a98:
    // 0x311a98: 0xc0c4c0c  jal         func_313030
    ctx->pc = 0x311A98u;
    SET_GPR_U32(ctx, 31, 0x311AA0u);
    ctx->pc = 0x313030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313030u, 0x311A98u, 0x311AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AA0u;
label_311aa0:
    // 0x311aa0: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x311AA0u;
    {
        const bool branch_taken_0x311aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AA0u;
        // 0x311aa4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311aa0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AA8u;
label_311aa8:
    // 0x311aa8: 0xc0c4c54  jal         func_313150
    ctx->pc = 0x311AA8u;
    SET_GPR_U32(ctx, 31, 0x311AB0u);
    ctx->pc = 0x313150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313150u, 0x311AA8u, 0x311AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AB0u;
label_311ab0:
    // 0x311ab0: 0x100002bc  b           . + 4 + (0x2BC << 2)
    ctx->pc = 0x311AB0u;
    {
        const bool branch_taken_0x311ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AB0u;
        // 0x311ab4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ab0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AB8u;
label_311ab8:
    // 0x311ab8: 0xc0c4c84  jal         func_313210
    ctx->pc = 0x311AB8u;
    SET_GPR_U32(ctx, 31, 0x311AC0u);
    ctx->pc = 0x313210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313210u, 0x311AB8u, 0x311AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AC0u;
label_311ac0:
    // 0x311ac0: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x311AC0u;
    {
        const bool branch_taken_0x311ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AC0u;
        // 0x311ac4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ac0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AC8u;
label_311ac8:
    // 0x311ac8: 0xc0c4cb4  jal         func_3132D0
    ctx->pc = 0x311AC8u;
    SET_GPR_U32(ctx, 31, 0x311AD0u);
    ctx->pc = 0x3132D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3132D0u, 0x311AC8u, 0x311AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AD0u;
label_311ad0:
    // 0x311ad0: 0x100002b4  b           . + 4 + (0x2B4 << 2)
    ctx->pc = 0x311AD0u;
    {
        const bool branch_taken_0x311ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AD0u;
        // 0x311ad4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ad0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AD8u;
label_311ad8:
    // 0x311ad8: 0xc0c4ce4  jal         func_313390
    ctx->pc = 0x311AD8u;
    SET_GPR_U32(ctx, 31, 0x311AE0u);
    ctx->pc = 0x313390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313390u, 0x311AD8u, 0x311AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AE0u;
label_311ae0:
    // 0x311ae0: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x311AE0u;
    {
        const bool branch_taken_0x311ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AE0u;
        // 0x311ae4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ae0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AE8u;
label_311ae8:
    // 0x311ae8: 0xc0c4c38  jal         func_3130E0
    ctx->pc = 0x311AE8u;
    SET_GPR_U32(ctx, 31, 0x311AF0u);
    ctx->pc = 0x3130E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3130E0u, 0x311AE8u, 0x311AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311AF0u;
label_311af0:
    // 0x311af0: 0x100002ac  b           . + 4 + (0x2AC << 2)
    ctx->pc = 0x311AF0u;
    {
        const bool branch_taken_0x311af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311AF0u;
        // 0x311af4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311af0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311AF8u;
label_311af8:
    // 0x311af8: 0xc0c4d14  jal         func_313450
    ctx->pc = 0x311AF8u;
    SET_GPR_U32(ctx, 31, 0x311B00u);
    ctx->pc = 0x313450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313450u, 0x311AF8u, 0x311B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B00u;
label_311b00:
    // 0x311b00: 0x100002a8  b           . + 4 + (0x2A8 << 2)
    ctx->pc = 0x311B00u;
    {
        const bool branch_taken_0x311b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B00u;
        // 0x311b04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b00) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B08u;
label_311b08:
    // 0x311b08: 0xc0c4d44  jal         func_313510
    ctx->pc = 0x311B08u;
    SET_GPR_U32(ctx, 31, 0x311B10u);
    ctx->pc = 0x313510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313510u, 0x311B08u, 0x311B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B10u;
label_311b10:
    // 0x311b10: 0x100002a4  b           . + 4 + (0x2A4 << 2)
    ctx->pc = 0x311B10u;
    {
        const bool branch_taken_0x311b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B10u;
        // 0x311b14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b10) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B18u;
label_311b18:
    // 0x311b18: 0xc0c4d60  jal         func_313580
    ctx->pc = 0x311B18u;
    SET_GPR_U32(ctx, 31, 0x311B20u);
    ctx->pc = 0x313580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313580u, 0x311B18u, 0x311B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B20u;
label_311b20:
    // 0x311b20: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x311B20u;
    {
        const bool branch_taken_0x311b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B20u;
        // 0x311b24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b20) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B28u;
label_311b28:
    // 0x311b28: 0xc0c4d7c  jal         func_3135F0
    ctx->pc = 0x311B28u;
    SET_GPR_U32(ctx, 31, 0x311B30u);
    ctx->pc = 0x3135F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3135F0u, 0x311B28u, 0x311B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B30u;
label_311b30:
    // 0x311b30: 0x1000029c  b           . + 4 + (0x29C << 2)
    ctx->pc = 0x311B30u;
    {
        const bool branch_taken_0x311b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B30u;
        // 0x311b34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B38u;
label_311b38:
    // 0x311b38: 0xc0c4d98  jal         func_313660
    ctx->pc = 0x311B38u;
    SET_GPR_U32(ctx, 31, 0x311B40u);
    ctx->pc = 0x313660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313660u, 0x311B38u, 0x311B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B40u;
label_311b40:
    // 0x311b40: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x311B40u;
    {
        const bool branch_taken_0x311b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B40u;
        // 0x311b44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b40) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B48u;
label_311b48:
    // 0x311b48: 0xc0c4db4  jal         func_3136D0
    ctx->pc = 0x311B48u;
    SET_GPR_U32(ctx, 31, 0x311B50u);
    ctx->pc = 0x3136D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3136D0u, 0x311B48u, 0x311B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B50u;
label_311b50:
    // 0x311b50: 0x10000294  b           . + 4 + (0x294 << 2)
    ctx->pc = 0x311B50u;
    {
        const bool branch_taken_0x311b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B50u;
        // 0x311b54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B58u;
label_311b58:
    // 0x311b58: 0xc0c4dd0  jal         func_313740
    ctx->pc = 0x311B58u;
    SET_GPR_U32(ctx, 31, 0x311B60u);
    ctx->pc = 0x313740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313740u, 0x311B58u, 0x311B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B60u;
label_311b60:
    // 0x311b60: 0x10000290  b           . + 4 + (0x290 << 2)
    ctx->pc = 0x311B60u;
    {
        const bool branch_taken_0x311b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B60u;
        // 0x311b64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B68u;
label_311b68:
    // 0x311b68: 0xc0c4dec  jal         func_3137B0
    ctx->pc = 0x311B68u;
    SET_GPR_U32(ctx, 31, 0x311B70u);
    ctx->pc = 0x3137B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137B0u, 0x311B68u, 0x311B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B70u;
label_311b70:
    // 0x311b70: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x311B70u;
    {
        const bool branch_taken_0x311b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B70u;
        // 0x311b74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B78u;
label_311b78:
    // 0x311b78: 0xc0c4e24  jal         func_313890
    ctx->pc = 0x311B78u;
    SET_GPR_U32(ctx, 31, 0x311B80u);
    ctx->pc = 0x313890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313890u, 0x311B78u, 0x311B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B80u;
label_311b80:
    // 0x311b80: 0x10000288  b           . + 4 + (0x288 << 2)
    ctx->pc = 0x311B80u;
    {
        const bool branch_taken_0x311b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B80u;
        // 0x311b84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B88u;
label_311b88:
    // 0x311b88: 0xc0c4e40  jal         func_313900
    ctx->pc = 0x311B88u;
    SET_GPR_U32(ctx, 31, 0x311B90u);
    ctx->pc = 0x313900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313900u, 0x311B88u, 0x311B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B90u;
label_311b90:
    // 0x311b90: 0x10000284  b           . + 4 + (0x284 << 2)
    ctx->pc = 0x311B90u;
    {
        const bool branch_taken_0x311b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B90u;
        // 0x311b94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311B98u;
label_311b98:
    // 0x311b98: 0xc0c4e08  jal         func_313820
    ctx->pc = 0x311B98u;
    SET_GPR_U32(ctx, 31, 0x311BA0u);
    ctx->pc = 0x313820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313820u, 0x311B98u, 0x311BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BA0u;
label_311ba0:
    // 0x311ba0: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x311BA0u;
    {
        const bool branch_taken_0x311ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BA0u;
        // 0x311ba4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ba0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BA8u;
label_311ba8:
    // 0x311ba8: 0xc0c4e5c  jal         func_313970
    ctx->pc = 0x311BA8u;
    SET_GPR_U32(ctx, 31, 0x311BB0u);
    ctx->pc = 0x313970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313970u, 0x311BA8u, 0x311BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BB0u;
label_311bb0:
    // 0x311bb0: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x311BB0u;
    {
        const bool branch_taken_0x311bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BB0u;
        // 0x311bb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bb0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BB8u;
label_311bb8:
    // 0x311bb8: 0xc0c4e98  jal         func_313A60
    ctx->pc = 0x311BB8u;
    SET_GPR_U32(ctx, 31, 0x311BC0u);
    ctx->pc = 0x313A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313A60u, 0x311BB8u, 0x311BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BC0u;
label_311bc0:
    // 0x311bc0: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x311BC0u;
    {
        const bool branch_taken_0x311bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BC0u;
        // 0x311bc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bc0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BC8u;
label_311bc8:
    // 0x311bc8: 0xc0c4eb4  jal         func_313AD0
    ctx->pc = 0x311BC8u;
    SET_GPR_U32(ctx, 31, 0x311BD0u);
    ctx->pc = 0x313AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313AD0u, 0x311BC8u, 0x311BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BD0u;
label_311bd0:
    // 0x311bd0: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x311BD0u;
    {
        const bool branch_taken_0x311bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BD0u;
        // 0x311bd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bd0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BD8u;
label_311bd8:
    // 0x311bd8: 0xc0c4ed0  jal         func_313B40
    ctx->pc = 0x311BD8u;
    SET_GPR_U32(ctx, 31, 0x311BE0u);
    ctx->pc = 0x313B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313B40u, 0x311BD8u, 0x311BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BE0u;
label_311be0:
    // 0x311be0: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x311BE0u;
    {
        const bool branch_taken_0x311be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BE0u;
        // 0x311be4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311be0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BE8u;
label_311be8:
    // 0x311be8: 0xc0c4eec  jal         func_313BB0
    ctx->pc = 0x311BE8u;
    SET_GPR_U32(ctx, 31, 0x311BF0u);
    ctx->pc = 0x313BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313BB0u, 0x311BE8u, 0x311BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BF0u;
label_311bf0:
    // 0x311bf0: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x311BF0u;
    {
        const bool branch_taken_0x311bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BF0u;
        // 0x311bf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bf0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311BF8u;
label_311bf8:
    // 0x311bf8: 0xc0c4f08  jal         func_313C20
    ctx->pc = 0x311BF8u;
    SET_GPR_U32(ctx, 31, 0x311C00u);
    ctx->pc = 0x313C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313C20u, 0x311BF8u, 0x311C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C00u;
label_311c00:
    // 0x311c00: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x311C00u;
    {
        const bool branch_taken_0x311c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C00u;
        // 0x311c04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c00) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C08u;
label_311c08:
    // 0x311c08: 0xc0c4f24  jal         func_313C90
    ctx->pc = 0x311C08u;
    SET_GPR_U32(ctx, 31, 0x311C10u);
    ctx->pc = 0x313C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313C90u, 0x311C08u, 0x311C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C10u;
label_311c10:
    // 0x311c10: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x311C10u;
    {
        const bool branch_taken_0x311c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C10u;
        // 0x311c14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c10) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C18u;
label_311c18:
    // 0x311c18: 0xc0c4f40  jal         func_313D00
    ctx->pc = 0x311C18u;
    SET_GPR_U32(ctx, 31, 0x311C20u);
    ctx->pc = 0x313D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313D00u, 0x311C18u, 0x311C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C20u;
label_311c20:
    // 0x311c20: 0x10000260  b           . + 4 + (0x260 << 2)
    ctx->pc = 0x311C20u;
    {
        const bool branch_taken_0x311c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C20u;
        // 0x311c24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c20) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C28u;
label_311c28:
    // 0x311c28: 0xc0c4f5c  jal         func_313D70
    ctx->pc = 0x311C28u;
    SET_GPR_U32(ctx, 31, 0x311C30u);
    ctx->pc = 0x313D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313D70u, 0x311C28u, 0x311C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C30u;
label_311c30:
    // 0x311c30: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x311C30u;
    {
        const bool branch_taken_0x311c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C30u;
        // 0x311c34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C38u;
label_311c38:
    // 0x311c38: 0xc0c4f78  jal         func_313DE0
    ctx->pc = 0x311C38u;
    SET_GPR_U32(ctx, 31, 0x311C40u);
    ctx->pc = 0x313DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DE0u, 0x311C38u, 0x311C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C40u;
label_311c40:
    // 0x311c40: 0x10000258  b           . + 4 + (0x258 << 2)
    ctx->pc = 0x311C40u;
    {
        const bool branch_taken_0x311c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C40u;
        // 0x311c44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c40) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C48u;
label_311c48:
    // 0x311c48: 0xc0c4f94  jal         func_313E50
    ctx->pc = 0x311C48u;
    SET_GPR_U32(ctx, 31, 0x311C50u);
    ctx->pc = 0x313E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313E50u, 0x311C48u, 0x311C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C50u;
label_311c50:
    // 0x311c50: 0x10000254  b           . + 4 + (0x254 << 2)
    ctx->pc = 0x311C50u;
    {
        const bool branch_taken_0x311c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C50u;
        // 0x311c54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C58u;
label_311c58:
    // 0x311c58: 0xc0c4fb0  jal         func_313EC0
    ctx->pc = 0x311C58u;
    SET_GPR_U32(ctx, 31, 0x311C60u);
    ctx->pc = 0x313EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313EC0u, 0x311C58u, 0x311C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C60u;
label_311c60:
    // 0x311c60: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x311C60u;
    {
        const bool branch_taken_0x311c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C60u;
        // 0x311c64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C68u;
label_311c68:
    // 0x311c68: 0xc0c4fcc  jal         func_313F30
    ctx->pc = 0x311C68u;
    SET_GPR_U32(ctx, 31, 0x311C70u);
    ctx->pc = 0x313F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313F30u, 0x311C68u, 0x311C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C70u;
label_311c70:
    // 0x311c70: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x311C70u;
    {
        const bool branch_taken_0x311c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C70u;
        // 0x311c74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C78u;
label_311c78:
    // 0x311c78: 0xc0c4fe8  jal         func_313FA0
    ctx->pc = 0x311C78u;
    SET_GPR_U32(ctx, 31, 0x311C80u);
    ctx->pc = 0x313FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313FA0u, 0x311C78u, 0x311C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C80u;
label_311c80:
    // 0x311c80: 0x10000248  b           . + 4 + (0x248 << 2)
    ctx->pc = 0x311C80u;
    {
        const bool branch_taken_0x311c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C80u;
        // 0x311c84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C88u;
label_311c88:
    // 0x311c88: 0xc0c5004  jal         func_314010
    ctx->pc = 0x311C88u;
    SET_GPR_U32(ctx, 31, 0x311C90u);
    ctx->pc = 0x314010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314010u, 0x311C88u, 0x311C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C90u;
label_311c90:
    // 0x311c90: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x311C90u;
    {
        const bool branch_taken_0x311c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C90u;
        // 0x311c94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311C98u;
label_311c98:
    // 0x311c98: 0xc0c5020  jal         func_314080
    ctx->pc = 0x311C98u;
    SET_GPR_U32(ctx, 31, 0x311CA0u);
    ctx->pc = 0x314080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314080u, 0x311C98u, 0x311CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CA0u;
label_311ca0:
    // 0x311ca0: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x311CA0u;
    {
        const bool branch_taken_0x311ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CA0u;
        // 0x311ca4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ca0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CA8u;
label_311ca8:
    // 0x311ca8: 0xc0c503c  jal         func_3140F0
    ctx->pc = 0x311CA8u;
    SET_GPR_U32(ctx, 31, 0x311CB0u);
    ctx->pc = 0x3140F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3140F0u, 0x311CA8u, 0x311CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CB0u;
label_311cb0:
    // 0x311cb0: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x311CB0u;
    {
        const bool branch_taken_0x311cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CB0u;
        // 0x311cb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cb0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CB8u;
label_311cb8:
    // 0x311cb8: 0xc0c5058  jal         func_314160
    ctx->pc = 0x311CB8u;
    SET_GPR_U32(ctx, 31, 0x311CC0u);
    ctx->pc = 0x314160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314160u, 0x311CB8u, 0x311CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CC0u;
label_311cc0:
    // 0x311cc0: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x311CC0u;
    {
        const bool branch_taken_0x311cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CC0u;
        // 0x311cc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cc0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CC8u;
label_311cc8:
    // 0x311cc8: 0xc0c5074  jal         func_3141D0
    ctx->pc = 0x311CC8u;
    SET_GPR_U32(ctx, 31, 0x311CD0u);
    ctx->pc = 0x3141D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3141D0u, 0x311CC8u, 0x311CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CD0u;
label_311cd0:
    // 0x311cd0: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x311CD0u;
    {
        const bool branch_taken_0x311cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CD0u;
        // 0x311cd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cd0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CD8u;
label_311cd8:
    // 0x311cd8: 0xc0c5090  jal         func_314240
    ctx->pc = 0x311CD8u;
    SET_GPR_U32(ctx, 31, 0x311CE0u);
    ctx->pc = 0x314240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314240u, 0x311CD8u, 0x311CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CE0u;
label_311ce0:
    // 0x311ce0: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x311CE0u;
    {
        const bool branch_taken_0x311ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CE0u;
        // 0x311ce4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ce0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CE8u;
label_311ce8:
    // 0x311ce8: 0xc0c50ac  jal         func_3142B0
    ctx->pc = 0x311CE8u;
    SET_GPR_U32(ctx, 31, 0x311CF0u);
    ctx->pc = 0x3142B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3142B0u, 0x311CE8u, 0x311CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CF0u;
label_311cf0:
    // 0x311cf0: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x311CF0u;
    {
        const bool branch_taken_0x311cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CF0u;
        // 0x311cf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cf0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311CF8u;
label_311cf8:
    // 0x311cf8: 0xc0c50c8  jal         func_314320
    ctx->pc = 0x311CF8u;
    SET_GPR_U32(ctx, 31, 0x311D00u);
    ctx->pc = 0x314320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314320u, 0x311CF8u, 0x311D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D00u;
label_311d00:
    // 0x311d00: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x311D00u;
    {
        const bool branch_taken_0x311d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D00u;
        // 0x311d04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d00) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D08u;
label_311d08:
    // 0x311d08: 0xc0c5100  jal         func_314400
    ctx->pc = 0x311D08u;
    SET_GPR_U32(ctx, 31, 0x311D10u);
    ctx->pc = 0x314400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314400u, 0x311D08u, 0x311D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D10u;
label_311d10:
    // 0x311d10: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x311D10u;
    {
        const bool branch_taken_0x311d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D10u;
        // 0x311d14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d10) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D18u;
label_311d18:
    // 0x311d18: 0xc0c511c  jal         func_314470
    ctx->pc = 0x311D18u;
    SET_GPR_U32(ctx, 31, 0x311D20u);
    ctx->pc = 0x314470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314470u, 0x311D18u, 0x311D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D20u;
label_311d20:
    // 0x311d20: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x311D20u;
    {
        const bool branch_taken_0x311d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D20u;
        // 0x311d24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d20) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D28u;
label_311d28:
    // 0x311d28: 0xc0c5138  jal         func_3144E0
    ctx->pc = 0x311D28u;
    SET_GPR_U32(ctx, 31, 0x311D30u);
    ctx->pc = 0x3144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3144E0u, 0x311D28u, 0x311D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D30u;
label_311d30:
    // 0x311d30: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x311D30u;
    {
        const bool branch_taken_0x311d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D30u;
        // 0x311d34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D38u;
label_311d38:
    // 0x311d38: 0xc0c5154  jal         func_314550
    ctx->pc = 0x311D38u;
    SET_GPR_U32(ctx, 31, 0x311D40u);
    ctx->pc = 0x314550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314550u, 0x311D38u, 0x311D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D40u;
label_311d40:
    // 0x311d40: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x311D40u;
    {
        const bool branch_taken_0x311d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D40u;
        // 0x311d44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d40) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D48u;
label_311d48:
    // 0x311d48: 0xc0c5170  jal         func_3145C0
    ctx->pc = 0x311D48u;
    SET_GPR_U32(ctx, 31, 0x311D50u);
    ctx->pc = 0x3145C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3145C0u, 0x311D48u, 0x311D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D50u;
label_311d50:
    // 0x311d50: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x311D50u;
    {
        const bool branch_taken_0x311d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D50u;
        // 0x311d54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D58u;
label_311d58:
    // 0x311d58: 0xc0c518c  jal         func_314630
    ctx->pc = 0x311D58u;
    SET_GPR_U32(ctx, 31, 0x311D60u);
    ctx->pc = 0x314630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314630u, 0x311D58u, 0x311D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D60u;
label_311d60:
    // 0x311d60: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x311D60u;
    {
        const bool branch_taken_0x311d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D60u;
        // 0x311d64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D68u;
label_311d68:
    // 0x311d68: 0xc0c51a8  jal         func_3146A0
    ctx->pc = 0x311D68u;
    SET_GPR_U32(ctx, 31, 0x311D70u);
    ctx->pc = 0x3146A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3146A0u, 0x311D68u, 0x311D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D70u;
label_311d70:
    // 0x311d70: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x311D70u;
    {
        const bool branch_taken_0x311d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D70u;
        // 0x311d74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D78u;
label_311d78:
    // 0x311d78: 0xc0c51c4  jal         func_314710
    ctx->pc = 0x311D78u;
    SET_GPR_U32(ctx, 31, 0x311D80u);
    ctx->pc = 0x314710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314710u, 0x311D78u, 0x311D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D80u;
label_311d80:
    // 0x311d80: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x311D80u;
    {
        const bool branch_taken_0x311d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D80u;
        // 0x311d84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D88u;
label_311d88:
    // 0x311d88: 0xc0c51e0  jal         func_314780
    ctx->pc = 0x311D88u;
    SET_GPR_U32(ctx, 31, 0x311D90u);
    ctx->pc = 0x314780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314780u, 0x311D88u, 0x311D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311D90u;
label_311d90:
    // 0x311d90: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x311D90u;
    {
        const bool branch_taken_0x311d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311D90u;
        // 0x311d94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311D98u;
label_311d98:
    // 0x311d98: 0xc0c51fc  jal         func_3147F0
    ctx->pc = 0x311D98u;
    SET_GPR_U32(ctx, 31, 0x311DA0u);
    ctx->pc = 0x3147F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147F0u, 0x311D98u, 0x311DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DA0u;
label_311da0:
    // 0x311da0: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x311DA0u;
    {
        const bool branch_taken_0x311da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DA0u;
        // 0x311da4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311da0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DA8u;
label_311da8:
    // 0x311da8: 0xc0c5218  jal         func_314860
    ctx->pc = 0x311DA8u;
    SET_GPR_U32(ctx, 31, 0x311DB0u);
    ctx->pc = 0x314860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314860u, 0x311DA8u, 0x311DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DB0u;
label_311db0:
    // 0x311db0: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x311DB0u;
    {
        const bool branch_taken_0x311db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DB0u;
        // 0x311db4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311db0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DB8u;
label_311db8:
    // 0x311db8: 0xc0c5234  jal         func_3148D0
    ctx->pc = 0x311DB8u;
    SET_GPR_U32(ctx, 31, 0x311DC0u);
    ctx->pc = 0x3148D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148D0u, 0x311DB8u, 0x311DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DC0u;
label_311dc0:
    // 0x311dc0: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x311DC0u;
    {
        const bool branch_taken_0x311dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DC0u;
        // 0x311dc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311dc0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DC8u;
label_311dc8:
    // 0x311dc8: 0xc0c5250  jal         func_314940
    ctx->pc = 0x311DC8u;
    SET_GPR_U32(ctx, 31, 0x311DD0u);
    ctx->pc = 0x314940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314940u, 0x311DC8u, 0x311DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DD0u;
label_311dd0:
    // 0x311dd0: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x311DD0u;
    {
        const bool branch_taken_0x311dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DD0u;
        // 0x311dd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311dd0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DD8u;
label_311dd8:
    // 0x311dd8: 0xc0c526c  jal         func_3149B0
    ctx->pc = 0x311DD8u;
    SET_GPR_U32(ctx, 31, 0x311DE0u);
    ctx->pc = 0x3149B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3149B0u, 0x311DD8u, 0x311DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DE0u;
label_311de0:
    // 0x311de0: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x311DE0u;
    {
        const bool branch_taken_0x311de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DE0u;
        // 0x311de4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311de0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DE8u;
label_311de8:
    // 0x311de8: 0xc0c5288  jal         func_314A20
    ctx->pc = 0x311DE8u;
    SET_GPR_U32(ctx, 31, 0x311DF0u);
    ctx->pc = 0x314A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A20u, 0x311DE8u, 0x311DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311DF0u;
label_311df0:
    // 0x311df0: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x311DF0u;
    {
        const bool branch_taken_0x311df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311DF0u;
        // 0x311df4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311df0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311DF8u;
label_311df8:
    // 0x311df8: 0xc0c52a4  jal         func_314A90
    ctx->pc = 0x311DF8u;
    SET_GPR_U32(ctx, 31, 0x311E00u);
    ctx->pc = 0x314A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A90u, 0x311DF8u, 0x311E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E00u;
label_311e00:
    // 0x311e00: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x311E00u;
    {
        const bool branch_taken_0x311e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E00u;
        // 0x311e04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e00) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E08u;
label_311e08:
    // 0x311e08: 0xc0c52c0  jal         func_314B00
    ctx->pc = 0x311E08u;
    SET_GPR_U32(ctx, 31, 0x311E10u);
    ctx->pc = 0x314B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314B00u, 0x311E08u, 0x311E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E10u;
label_311e10:
    // 0x311e10: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x311E10u;
    {
        const bool branch_taken_0x311e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E10u;
        // 0x311e14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e10) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E18u;
label_311e18:
    // 0x311e18: 0xc0c52dc  jal         func_314B70
    ctx->pc = 0x311E18u;
    SET_GPR_U32(ctx, 31, 0x311E20u);
    ctx->pc = 0x314B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314B70u, 0x311E18u, 0x311E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E20u;
label_311e20:
    // 0x311e20: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x311E20u;
    {
        const bool branch_taken_0x311e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E20u;
        // 0x311e24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e20) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E28u;
label_311e28:
    // 0x311e28: 0xc0c52f8  jal         func_314BE0
    ctx->pc = 0x311E28u;
    SET_GPR_U32(ctx, 31, 0x311E30u);
    ctx->pc = 0x314BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BE0u, 0x311E28u, 0x311E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E30u;
label_311e30:
    // 0x311e30: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x311E30u;
    {
        const bool branch_taken_0x311e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E30u;
        // 0x311e34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E38u;
label_311e38:
    // 0x311e38: 0xc0c5314  jal         func_314C50
    ctx->pc = 0x311E38u;
    SET_GPR_U32(ctx, 31, 0x311E40u);
    ctx->pc = 0x314C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314C50u, 0x311E38u, 0x311E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E40u;
label_311e40:
    // 0x311e40: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x311E40u;
    {
        const bool branch_taken_0x311e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E40u;
        // 0x311e44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e40) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E48u;
label_311e48:
    // 0x311e48: 0xc0c5330  jal         func_314CC0
    ctx->pc = 0x311E48u;
    SET_GPR_U32(ctx, 31, 0x311E50u);
    ctx->pc = 0x314CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314CC0u, 0x311E48u, 0x311E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E50u;
label_311e50:
    // 0x311e50: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x311E50u;
    {
        const bool branch_taken_0x311e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E50u;
        // 0x311e54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E58u;
label_311e58:
    // 0x311e58: 0xc0c534c  jal         func_314D30
    ctx->pc = 0x311E58u;
    SET_GPR_U32(ctx, 31, 0x311E60u);
    ctx->pc = 0x314D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D30u, 0x311E58u, 0x311E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E60u;
label_311e60:
    // 0x311e60: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x311E60u;
    {
        const bool branch_taken_0x311e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E60u;
        // 0x311e64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E68u;
label_311e68:
    // 0x311e68: 0xc0c5368  jal         func_314DA0
    ctx->pc = 0x311E68u;
    SET_GPR_U32(ctx, 31, 0x311E70u);
    ctx->pc = 0x314DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314DA0u, 0x311E68u, 0x311E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E70u;
label_311e70:
    // 0x311e70: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x311E70u;
    {
        const bool branch_taken_0x311e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E70u;
        // 0x311e74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E78u;
label_311e78:
    // 0x311e78: 0xc0c5384  jal         func_314E10
    ctx->pc = 0x311E78u;
    SET_GPR_U32(ctx, 31, 0x311E80u);
    ctx->pc = 0x314E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E10u, 0x311E78u, 0x311E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E80u;
label_311e80:
    // 0x311e80: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x311E80u;
    {
        const bool branch_taken_0x311e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E80u;
        // 0x311e84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E88u;
label_311e88:
    // 0x311e88: 0xc0c53a0  jal         func_314E80
    ctx->pc = 0x311E88u;
    SET_GPR_U32(ctx, 31, 0x311E90u);
    ctx->pc = 0x314E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E80u, 0x311E88u, 0x311E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E90u;
label_311e90:
    // 0x311e90: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x311E90u;
    {
        const bool branch_taken_0x311e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311E90u;
        // 0x311e94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311E98u;
label_311e98:
    // 0x311e98: 0xc0c53bc  jal         func_314EF0
    ctx->pc = 0x311E98u;
    SET_GPR_U32(ctx, 31, 0x311EA0u);
    ctx->pc = 0x314EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314EF0u, 0x311E98u, 0x311EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EA0u;
label_311ea0:
    // 0x311ea0: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x311EA0u;
    {
        const bool branch_taken_0x311ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EA0u;
        // 0x311ea4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ea0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311EA8u;
label_311ea8:
    // 0x311ea8: 0xc0c53d8  jal         func_314F60
    ctx->pc = 0x311EA8u;
    SET_GPR_U32(ctx, 31, 0x311EB0u);
    ctx->pc = 0x314F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314F60u, 0x311EA8u, 0x311EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EB0u;
label_311eb0:
    // 0x311eb0: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x311EB0u;
    {
        const bool branch_taken_0x311eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EB0u;
        // 0x311eb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311eb0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311EB8u;
label_311eb8:
    // 0x311eb8: 0xc0c53f4  jal         func_314FD0
    ctx->pc = 0x311EB8u;
    SET_GPR_U32(ctx, 31, 0x311EC0u);
    ctx->pc = 0x314FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314FD0u, 0x311EB8u, 0x311EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EC0u;
label_311ec0:
    // 0x311ec0: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x311EC0u;
    {
        const bool branch_taken_0x311ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EC0u;
        // 0x311ec4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ec0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311EC8u;
label_311ec8:
    // 0x311ec8: 0xc0c5410  jal         func_315040
    ctx->pc = 0x311EC8u;
    SET_GPR_U32(ctx, 31, 0x311ED0u);
    ctx->pc = 0x315040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315040u, 0x311EC8u, 0x311ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311ED0u;
label_311ed0:
    // 0x311ed0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x311ED0u;
    {
        const bool branch_taken_0x311ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311ED0u;
        // 0x311ed4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ed0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311ED8u;
label_311ed8:
    // 0x311ed8: 0xc0c542c  jal         func_3150B0
    ctx->pc = 0x311ED8u;
    SET_GPR_U32(ctx, 31, 0x311EE0u);
    ctx->pc = 0x3150B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3150B0u, 0x311ED8u, 0x311EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EE0u;
label_311ee0:
    // 0x311ee0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x311EE0u;
    {
        const bool branch_taken_0x311ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EE0u;
        // 0x311ee4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ee0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311EE8u;
label_311ee8:
    // 0x311ee8: 0xc0c5448  jal         func_315120
    ctx->pc = 0x311EE8u;
    SET_GPR_U32(ctx, 31, 0x311EF0u);
    ctx->pc = 0x315120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315120u, 0x311EE8u, 0x311EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EF0u;
label_311ef0:
    // 0x311ef0: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x311EF0u;
    {
        const bool branch_taken_0x311ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EF0u;
        // 0x311ef4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ef0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311EF8u;
label_311ef8:
    // 0x311ef8: 0xc0c5464  jal         func_315190
    ctx->pc = 0x311EF8u;
    SET_GPR_U32(ctx, 31, 0x311F00u);
    ctx->pc = 0x315190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315190u, 0x311EF8u, 0x311F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F00u;
label_311f00:
    // 0x311f00: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x311F00u;
    {
        const bool branch_taken_0x311f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F00u;
        // 0x311f04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f00) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F08u;
label_311f08:
    // 0x311f08: 0xc0c5480  jal         func_315200
    ctx->pc = 0x311F08u;
    SET_GPR_U32(ctx, 31, 0x311F10u);
    ctx->pc = 0x315200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315200u, 0x311F08u, 0x311F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F10u;
label_311f10:
    // 0x311f10: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x311F10u;
    {
        const bool branch_taken_0x311f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F10u;
        // 0x311f14: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f10) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F18u;
label_311f18:
    // 0x311f18: 0xc0c549c  jal         func_315270
    ctx->pc = 0x311F18u;
    SET_GPR_U32(ctx, 31, 0x311F20u);
    ctx->pc = 0x315270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315270u, 0x311F18u, 0x311F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F20u;
label_311f20:
    // 0x311f20: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x311F20u;
    {
        const bool branch_taken_0x311f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F20u;
        // 0x311f24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f20) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F28u;
label_311f28:
    // 0x311f28: 0xc0c54b8  jal         func_3152E0
    ctx->pc = 0x311F28u;
    SET_GPR_U32(ctx, 31, 0x311F30u);
    ctx->pc = 0x3152E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3152E0u, 0x311F28u, 0x311F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F30u;
label_311f30:
    // 0x311f30: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x311F30u;
    {
        const bool branch_taken_0x311f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F30u;
        // 0x311f34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f30) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F38u;
label_311f38:
    // 0x311f38: 0xc0c54d4  jal         func_315350
    ctx->pc = 0x311F38u;
    SET_GPR_U32(ctx, 31, 0x311F40u);
    ctx->pc = 0x315350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315350u, 0x311F38u, 0x311F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F40u;
label_311f40:
    // 0x311f40: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x311F40u;
    {
        const bool branch_taken_0x311f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F40u;
        // 0x311f44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f40) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F48u;
label_311f48:
    // 0x311f48: 0xc0c54f0  jal         func_3153C0
    ctx->pc = 0x311F48u;
    SET_GPR_U32(ctx, 31, 0x311F50u);
    ctx->pc = 0x3153C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3153C0u, 0x311F48u, 0x311F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F50u;
label_311f50:
    // 0x311f50: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x311F50u;
    {
        const bool branch_taken_0x311f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F50u;
        // 0x311f54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f50) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F58u;
label_311f58:
    // 0x311f58: 0xc0c550c  jal         func_315430
    ctx->pc = 0x311F58u;
    SET_GPR_U32(ctx, 31, 0x311F60u);
    ctx->pc = 0x315430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315430u, 0x311F58u, 0x311F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F60u;
label_311f60:
    // 0x311f60: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x311F60u;
    {
        const bool branch_taken_0x311f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F60u;
        // 0x311f64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f60) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F68u;
label_311f68:
    // 0x311f68: 0xc0c5528  jal         func_3154A0
    ctx->pc = 0x311F68u;
    SET_GPR_U32(ctx, 31, 0x311F70u);
    ctx->pc = 0x3154A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3154A0u, 0x311F68u, 0x311F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F70u;
label_311f70:
    // 0x311f70: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x311F70u;
    {
        const bool branch_taken_0x311f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F70u;
        // 0x311f74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f70) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F78u;
label_311f78:
    // 0x311f78: 0xc0c5544  jal         func_315510
    ctx->pc = 0x311F78u;
    SET_GPR_U32(ctx, 31, 0x311F80u);
    ctx->pc = 0x315510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315510u, 0x311F78u, 0x311F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F80u;
label_311f80:
    // 0x311f80: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x311F80u;
    {
        const bool branch_taken_0x311f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F80u;
        // 0x311f84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f80) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F88u;
label_311f88:
    // 0x311f88: 0xc0c5560  jal         func_315580
    ctx->pc = 0x311F88u;
    SET_GPR_U32(ctx, 31, 0x311F90u);
    ctx->pc = 0x315580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315580u, 0x311F88u, 0x311F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F90u;
label_311f90:
    // 0x311f90: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x311F90u;
    {
        const bool branch_taken_0x311f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F90u;
        // 0x311f94: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f90) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311F98u;
label_311f98:
    // 0x311f98: 0xc0c557c  jal         func_3155F0
    ctx->pc = 0x311F98u;
    SET_GPR_U32(ctx, 31, 0x311FA0u);
    ctx->pc = 0x3155F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3155F0u, 0x311F98u, 0x311FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FA0u;
label_311fa0:
    // 0x311fa0: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x311FA0u;
    {
        const bool branch_taken_0x311fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FA0u;
        // 0x311fa4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fa0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FA8u;
label_311fa8:
    // 0x311fa8: 0xc0c5598  jal         func_315660
    ctx->pc = 0x311FA8u;
    SET_GPR_U32(ctx, 31, 0x311FB0u);
    ctx->pc = 0x315660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315660u, 0x311FA8u, 0x311FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FB0u;
label_311fb0:
    // 0x311fb0: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x311FB0u;
    {
        const bool branch_taken_0x311fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FB0u;
        // 0x311fb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fb0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FB8u;
label_311fb8:
    // 0x311fb8: 0xc0c55b4  jal         func_3156D0
    ctx->pc = 0x311FB8u;
    SET_GPR_U32(ctx, 31, 0x311FC0u);
    ctx->pc = 0x3156D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3156D0u, 0x311FB8u, 0x311FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FC0u;
label_311fc0:
    // 0x311fc0: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x311FC0u;
    {
        const bool branch_taken_0x311fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FC0u;
        // 0x311fc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fc0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FC8u;
label_311fc8:
    // 0x311fc8: 0xc0c55d0  jal         func_315740
    ctx->pc = 0x311FC8u;
    SET_GPR_U32(ctx, 31, 0x311FD0u);
    ctx->pc = 0x315740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315740u, 0x311FC8u, 0x311FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FD0u;
label_311fd0:
    // 0x311fd0: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x311FD0u;
    {
        const bool branch_taken_0x311fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FD0u;
        // 0x311fd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fd0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FD8u;
label_311fd8:
    // 0x311fd8: 0xc0c55ec  jal         func_3157B0
    ctx->pc = 0x311FD8u;
    SET_GPR_U32(ctx, 31, 0x311FE0u);
    ctx->pc = 0x3157B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3157B0u, 0x311FD8u, 0x311FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FE0u;
label_311fe0:
    // 0x311fe0: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x311FE0u;
    {
        const bool branch_taken_0x311fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FE0u;
        // 0x311fe4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fe0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FE8u;
label_311fe8:
    // 0x311fe8: 0xc0c5608  jal         func_315820
    ctx->pc = 0x311FE8u;
    SET_GPR_U32(ctx, 31, 0x311FF0u);
    ctx->pc = 0x315820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315820u, 0x311FE8u, 0x311FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FF0u;
label_311ff0:
    // 0x311ff0: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x311FF0u;
    {
        const bool branch_taken_0x311ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FF0u;
        // 0x311ff4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ff0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x311FF8u;
label_311ff8:
    // 0x311ff8: 0xc0c5624  jal         func_315890
    ctx->pc = 0x311FF8u;
    SET_GPR_U32(ctx, 31, 0x312000u);
    ctx->pc = 0x315890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315890u, 0x311FF8u, 0x312000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312000u;
label_312000:
    // 0x312000: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x312000u;
    {
        const bool branch_taken_0x312000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312000u;
        // 0x312004: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312000) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312008u;
label_312008:
    // 0x312008: 0xc0c5640  jal         func_315900
    ctx->pc = 0x312008u;
    SET_GPR_U32(ctx, 31, 0x312010u);
    ctx->pc = 0x315900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315900u, 0x312008u, 0x312010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312010u;
label_312010:
    // 0x312010: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x312010u;
    {
        const bool branch_taken_0x312010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312010u;
        // 0x312014: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312010) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312018u;
label_312018:
    // 0x312018: 0xc0c565c  jal         func_315970
    ctx->pc = 0x312018u;
    SET_GPR_U32(ctx, 31, 0x312020u);
    ctx->pc = 0x315970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315970u, 0x312018u, 0x312020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312020u;
label_312020:
    // 0x312020: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x312020u;
    {
        const bool branch_taken_0x312020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312020u;
        // 0x312024: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312020) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312028u;
label_312028:
    // 0x312028: 0xc0c5678  jal         func_3159E0
    ctx->pc = 0x312028u;
    SET_GPR_U32(ctx, 31, 0x312030u);
    ctx->pc = 0x3159E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3159E0u, 0x312028u, 0x312030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312030u;
label_312030:
    // 0x312030: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x312030u;
    {
        const bool branch_taken_0x312030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312030u;
        // 0x312034: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312030) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312038u;
label_312038:
    // 0x312038: 0xc0c5694  jal         func_315A50
    ctx->pc = 0x312038u;
    SET_GPR_U32(ctx, 31, 0x312040u);
    ctx->pc = 0x315A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315A50u, 0x312038u, 0x312040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312040u;
label_312040:
    // 0x312040: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x312040u;
    {
        const bool branch_taken_0x312040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312040u;
        // 0x312044: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312040) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312048u;
label_312048:
    // 0x312048: 0xc0c56b0  jal         func_315AC0
    ctx->pc = 0x312048u;
    SET_GPR_U32(ctx, 31, 0x312050u);
    ctx->pc = 0x315AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315AC0u, 0x312048u, 0x312050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312050u;
label_312050:
    // 0x312050: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x312050u;
    {
        const bool branch_taken_0x312050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312050u;
        // 0x312054: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312050) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312058u;
label_312058:
    // 0x312058: 0xc0c56e8  jal         func_315BA0
    ctx->pc = 0x312058u;
    SET_GPR_U32(ctx, 31, 0x312060u);
    ctx->pc = 0x315BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BA0u, 0x312058u, 0x312060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312060u;
label_312060:
    // 0x312060: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x312060u;
    {
        const bool branch_taken_0x312060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312060u;
        // 0x312064: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312060) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312068u;
label_312068:
    // 0x312068: 0xc0c5704  jal         func_315C10
    ctx->pc = 0x312068u;
    SET_GPR_U32(ctx, 31, 0x312070u);
    ctx->pc = 0x315C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315C10u, 0x312068u, 0x312070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312070u;
label_312070:
    // 0x312070: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x312070u;
    {
        const bool branch_taken_0x312070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312070u;
        // 0x312074: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312070) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312078u;
label_312078:
    // 0x312078: 0xc0c5720  jal         func_315C80
    ctx->pc = 0x312078u;
    SET_GPR_U32(ctx, 31, 0x312080u);
    ctx->pc = 0x315C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315C80u, 0x312078u, 0x312080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312080u;
label_312080:
    // 0x312080: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x312080u;
    {
        const bool branch_taken_0x312080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312080u;
        // 0x312084: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312080) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312088u;
label_312088:
    // 0x312088: 0xc0c573c  jal         func_315CF0
    ctx->pc = 0x312088u;
    SET_GPR_U32(ctx, 31, 0x312090u);
    ctx->pc = 0x315CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315CF0u, 0x312088u, 0x312090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312090u;
label_312090:
    // 0x312090: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x312090u;
    {
        const bool branch_taken_0x312090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312090u;
        // 0x312094: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312090) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312098u;
label_312098:
    // 0x312098: 0xc0c5758  jal         func_315D60
    ctx->pc = 0x312098u;
    SET_GPR_U32(ctx, 31, 0x3120A0u);
    ctx->pc = 0x315D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D60u, 0x312098u, 0x3120A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120A0u;
label_3120a0:
    // 0x3120a0: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x3120A0u;
    {
        const bool branch_taken_0x3120a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120A0u;
        // 0x3120a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120a0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120A8u;
label_3120a8:
    // 0x3120a8: 0xc0c5774  jal         func_315DD0
    ctx->pc = 0x3120A8u;
    SET_GPR_U32(ctx, 31, 0x3120B0u);
    ctx->pc = 0x315DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315DD0u, 0x3120A8u, 0x3120B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120B0u;
label_3120b0:
    // 0x3120b0: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x3120B0u;
    {
        const bool branch_taken_0x3120b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120B0u;
        // 0x3120b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120B8u;
label_3120b8:
    // 0x3120b8: 0xc0c5790  jal         func_315E40
    ctx->pc = 0x3120B8u;
    SET_GPR_U32(ctx, 31, 0x3120C0u);
    ctx->pc = 0x315E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315E40u, 0x3120B8u, 0x3120C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120C0u;
label_3120c0:
    // 0x3120c0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x3120C0u;
    {
        const bool branch_taken_0x3120c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120C0u;
        // 0x3120c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120C8u;
label_3120c8:
    // 0x3120c8: 0xc0c57ac  jal         func_315EB0
    ctx->pc = 0x3120C8u;
    SET_GPR_U32(ctx, 31, 0x3120D0u);
    ctx->pc = 0x315EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315EB0u, 0x3120C8u, 0x3120D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120D0u;
label_3120d0:
    // 0x3120d0: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x3120D0u;
    {
        const bool branch_taken_0x3120d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120D0u;
        // 0x3120d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120D8u;
label_3120d8:
    // 0x3120d8: 0xc0c57c8  jal         func_315F20
    ctx->pc = 0x3120D8u;
    SET_GPR_U32(ctx, 31, 0x3120E0u);
    ctx->pc = 0x315F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315F20u, 0x3120D8u, 0x3120E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120E0u;
label_3120e0:
    // 0x3120e0: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x3120E0u;
    {
        const bool branch_taken_0x3120e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120E0u;
        // 0x3120e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120e0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120E8u;
label_3120e8:
    // 0x3120e8: 0xc0c57e4  jal         func_315F90
    ctx->pc = 0x3120E8u;
    SET_GPR_U32(ctx, 31, 0x3120F0u);
    ctx->pc = 0x315F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315F90u, 0x3120E8u, 0x3120F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120F0u;
label_3120f0:
    // 0x3120f0: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x3120F0u;
    {
        const bool branch_taken_0x3120f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120F0u;
        // 0x3120f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3120F8u;
label_3120f8:
    // 0x3120f8: 0xc0c5800  jal         func_316000
    ctx->pc = 0x3120F8u;
    SET_GPR_U32(ctx, 31, 0x312100u);
    ctx->pc = 0x316000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316000u, 0x3120F8u, 0x312100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312100u;
label_312100:
    // 0x312100: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x312100u;
    {
        const bool branch_taken_0x312100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312100u;
        // 0x312104: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312100) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312108u;
label_312108:
    // 0x312108: 0xc0c581c  jal         func_316070
    ctx->pc = 0x312108u;
    SET_GPR_U32(ctx, 31, 0x312110u);
    ctx->pc = 0x316070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316070u, 0x312108u, 0x312110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312110u;
label_312110:
    // 0x312110: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x312110u;
    {
        const bool branch_taken_0x312110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312110u;
        // 0x312114: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312110) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312118u;
label_312118:
    // 0x312118: 0xc0c5838  jal         func_3160E0
    ctx->pc = 0x312118u;
    SET_GPR_U32(ctx, 31, 0x312120u);
    ctx->pc = 0x3160E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3160E0u, 0x312118u, 0x312120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312120u;
label_312120:
    // 0x312120: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x312120u;
    {
        const bool branch_taken_0x312120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312120u;
        // 0x312124: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312120) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312128u;
label_312128:
    // 0x312128: 0xc0c5870  jal         func_3161C0
    ctx->pc = 0x312128u;
    SET_GPR_U32(ctx, 31, 0x312130u);
    ctx->pc = 0x3161C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3161C0u, 0x312128u, 0x312130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312130u;
label_312130:
    // 0x312130: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x312130u;
    {
        const bool branch_taken_0x312130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312130u;
        // 0x312134: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312130) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312138u;
label_312138:
    // 0x312138: 0xc0c588c  jal         func_316230
    ctx->pc = 0x312138u;
    SET_GPR_U32(ctx, 31, 0x312140u);
    ctx->pc = 0x316230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316230u, 0x312138u, 0x312140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312140u;
label_312140:
    // 0x312140: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x312140u;
    {
        const bool branch_taken_0x312140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312140u;
        // 0x312144: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312140) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312148u;
label_312148:
    // 0x312148: 0xc0c5854  jal         func_316150
    ctx->pc = 0x312148u;
    SET_GPR_U32(ctx, 31, 0x312150u);
    ctx->pc = 0x31214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312148u;
    // 0x31214c: 0x2413037b  addiu       $s3, $zero, 0x37B (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316150u, 0x312148u, 0x312150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312150u;
label_312150:
    // 0x312150: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x312150u;
    {
        const bool branch_taken_0x312150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312150u;
        // 0x312154: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312150) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312158u;
label_312158:
    // 0x312158: 0xc0c56cc  jal         func_315B30
    ctx->pc = 0x312158u;
    SET_GPR_U32(ctx, 31, 0x312160u);
    ctx->pc = 0x315B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315B30u, 0x312158u, 0x312160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312160u;
label_312160:
    // 0x312160: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x312160u;
    {
        const bool branch_taken_0x312160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312160u;
        // 0x312164: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312160) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312168u;
label_312168:
    // 0x312168: 0xc0c58a8  jal         func_3162A0
    ctx->pc = 0x312168u;
    SET_GPR_U32(ctx, 31, 0x312170u);
    ctx->pc = 0x3162A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3162A0u, 0x312168u, 0x312170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312170u;
label_312170:
    // 0x312170: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x312170u;
    {
        const bool branch_taken_0x312170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312170u;
        // 0x312174: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312170) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312178u;
label_312178:
    // 0x312178: 0xc0c58c4  jal         func_316310
    ctx->pc = 0x312178u;
    SET_GPR_U32(ctx, 31, 0x312180u);
    ctx->pc = 0x316310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316310u, 0x312178u, 0x312180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312180u;
label_312180:
    // 0x312180: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x312180u;
    {
        const bool branch_taken_0x312180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312180u;
        // 0x312184: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312180) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312188u;
label_312188:
    // 0x312188: 0xc0c58e0  jal         func_316380
    ctx->pc = 0x312188u;
    SET_GPR_U32(ctx, 31, 0x312190u);
    ctx->pc = 0x316380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316380u, 0x312188u, 0x312190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312190u;
label_312190:
    // 0x312190: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x312190u;
    {
        const bool branch_taken_0x312190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312190u;
        // 0x312194: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312190) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312198u;
label_312198:
    // 0x312198: 0xc0c58fc  jal         func_3163F0
    ctx->pc = 0x312198u;
    SET_GPR_U32(ctx, 31, 0x3121A0u);
    ctx->pc = 0x3163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3163F0u, 0x312198u, 0x3121A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121A0u;
label_3121a0:
    // 0x3121a0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x3121A0u;
    {
        const bool branch_taken_0x3121a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121A0u;
        // 0x3121a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121a0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121A8u;
label_3121a8:
    // 0x3121a8: 0xc0c5918  jal         func_316460
    ctx->pc = 0x3121A8u;
    SET_GPR_U32(ctx, 31, 0x3121B0u);
    ctx->pc = 0x316460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316460u, 0x3121A8u, 0x3121B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121B0u;
label_3121b0:
    // 0x3121b0: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x3121B0u;
    {
        const bool branch_taken_0x3121b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121B0u;
        // 0x3121b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121B8u;
label_3121b8:
    // 0x3121b8: 0xc0c5934  jal         func_3164D0
    ctx->pc = 0x3121B8u;
    SET_GPR_U32(ctx, 31, 0x3121C0u);
    ctx->pc = 0x3164D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3164D0u, 0x3121B8u, 0x3121C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121C0u;
label_3121c0:
    // 0x3121c0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3121C0u;
    {
        const bool branch_taken_0x3121c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121C0u;
        // 0x3121c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121C8u;
label_3121c8:
    // 0x3121c8: 0xc0c596c  jal         func_3165B0
    ctx->pc = 0x3121C8u;
    SET_GPR_U32(ctx, 31, 0x3121D0u);
    ctx->pc = 0x3165B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3165B0u, 0x3121C8u, 0x3121D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121D0u;
label_3121d0:
    // 0x3121d0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x3121D0u;
    {
        const bool branch_taken_0x3121d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121D0u;
        // 0x3121d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121D8u;
label_3121d8:
    // 0x3121d8: 0xc0c5988  jal         func_316620
    ctx->pc = 0x3121D8u;
    SET_GPR_U32(ctx, 31, 0x3121E0u);
    ctx->pc = 0x316620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316620u, 0x3121D8u, 0x3121E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121E0u;
label_3121e0:
    // 0x3121e0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x3121E0u;
    {
        const bool branch_taken_0x3121e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121E0u;
        // 0x3121e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121e0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121E8u;
label_3121e8:
    // 0x3121e8: 0xc0c59a4  jal         func_316690
    ctx->pc = 0x3121E8u;
    SET_GPR_U32(ctx, 31, 0x3121F0u);
    ctx->pc = 0x316690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316690u, 0x3121E8u, 0x3121F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121F0u;
label_3121f0:
    // 0x3121f0: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x3121F0u;
    {
        const bool branch_taken_0x3121f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121F0u;
        // 0x3121f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3121F8u;
label_3121f8:
    // 0x3121f8: 0xc0c59c0  jal         func_316700
    ctx->pc = 0x3121F8u;
    SET_GPR_U32(ctx, 31, 0x312200u);
    ctx->pc = 0x316700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316700u, 0x3121F8u, 0x312200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312200u;
label_312200:
    // 0x312200: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x312200u;
    {
        const bool branch_taken_0x312200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312200u;
        // 0x312204: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312200) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312208u;
label_312208:
    // 0x312208: 0xc0c59dc  jal         func_316770
    ctx->pc = 0x312208u;
    SET_GPR_U32(ctx, 31, 0x312210u);
    ctx->pc = 0x316770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316770u, 0x312208u, 0x312210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312210u;
label_312210:
    // 0x312210: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x312210u;
    {
        const bool branch_taken_0x312210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312210u;
        // 0x312214: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312210) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312218u;
label_312218:
    // 0x312218: 0xc0c59f8  jal         func_3167E0
    ctx->pc = 0x312218u;
    SET_GPR_U32(ctx, 31, 0x312220u);
    ctx->pc = 0x3167E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3167E0u, 0x312218u, 0x312220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312220u;
label_312220:
    // 0x312220: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x312220u;
    {
        const bool branch_taken_0x312220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312220u;
        // 0x312224: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312220) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312228u;
label_312228:
    // 0x312228: 0xc0c5a14  jal         func_316850
    ctx->pc = 0x312228u;
    SET_GPR_U32(ctx, 31, 0x312230u);
    ctx->pc = 0x316850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316850u, 0x312228u, 0x312230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312230u;
label_312230:
    // 0x312230: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x312230u;
    {
        const bool branch_taken_0x312230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312230u;
        // 0x312234: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312230) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312238u;
label_312238:
    // 0x312238: 0xc0c5950  jal         func_316540
    ctx->pc = 0x312238u;
    SET_GPR_U32(ctx, 31, 0x312240u);
    ctx->pc = 0x316540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316540u, 0x312238u, 0x312240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312240u;
label_312240:
    // 0x312240: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x312240u;
    {
        const bool branch_taken_0x312240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312240u;
        // 0x312244: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312240) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312248u;
label_312248:
    // 0x312248: 0xc0c5a30  jal         func_3168C0
    ctx->pc = 0x312248u;
    SET_GPR_U32(ctx, 31, 0x312250u);
    ctx->pc = 0x3168C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3168C0u, 0x312248u, 0x312250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312250u;
label_312250:
    // 0x312250: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x312250u;
    {
        const bool branch_taken_0x312250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312250u;
        // 0x312254: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312250) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312258u;
label_312258:
    // 0x312258: 0xc0c5a4c  jal         func_316930
    ctx->pc = 0x312258u;
    SET_GPR_U32(ctx, 31, 0x312260u);
    ctx->pc = 0x316930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316930u, 0x312258u, 0x312260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312260u;
label_312260:
    // 0x312260: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x312260u;
    {
        const bool branch_taken_0x312260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312260u;
        // 0x312264: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312260) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312268u;
label_312268:
    // 0x312268: 0xc0c5a68  jal         func_3169A0
    ctx->pc = 0x312268u;
    SET_GPR_U32(ctx, 31, 0x312270u);
    ctx->pc = 0x3169A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169A0u, 0x312268u, 0x312270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312270u;
label_312270:
    // 0x312270: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x312270u;
    {
        const bool branch_taken_0x312270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312270u;
        // 0x312274: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312270) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312278u;
label_312278:
    // 0x312278: 0xc0c5a84  jal         func_316A10
    ctx->pc = 0x312278u;
    SET_GPR_U32(ctx, 31, 0x312280u);
    ctx->pc = 0x316A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316A10u, 0x312278u, 0x312280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312280u;
label_312280:
    // 0x312280: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x312280u;
    {
        const bool branch_taken_0x312280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312280u;
        // 0x312284: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312280) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312288u;
label_312288:
    // 0x312288: 0xc0c5aa0  jal         func_316A80
    ctx->pc = 0x312288u;
    SET_GPR_U32(ctx, 31, 0x312290u);
    ctx->pc = 0x316A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316A80u, 0x312288u, 0x312290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312290u;
label_312290:
    // 0x312290: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x312290u;
    {
        const bool branch_taken_0x312290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312290u;
        // 0x312294: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312290) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312298u;
label_312298:
    // 0x312298: 0xc0c5abc  jal         func_316AF0
    ctx->pc = 0x312298u;
    SET_GPR_U32(ctx, 31, 0x3122A0u);
    ctx->pc = 0x316AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316AF0u, 0x312298u, 0x3122A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122A0u;
label_3122a0:
    // 0x3122a0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x3122A0u;
    {
        const bool branch_taken_0x3122a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122A0u;
        // 0x3122a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122a0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122A8u;
label_3122a8:
    // 0x3122a8: 0xc0c5ad8  jal         func_316B60
    ctx->pc = 0x3122A8u;
    SET_GPR_U32(ctx, 31, 0x3122B0u);
    ctx->pc = 0x316B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316B60u, 0x3122A8u, 0x3122B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122B0u;
label_3122b0:
    // 0x3122b0: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3122B0u;
    {
        const bool branch_taken_0x3122b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122B0u;
        // 0x3122b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122B8u;
label_3122b8:
    // 0x3122b8: 0xc0c5af4  jal         func_316BD0
    ctx->pc = 0x3122B8u;
    SET_GPR_U32(ctx, 31, 0x3122C0u);
    ctx->pc = 0x316BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316BD0u, 0x3122B8u, 0x3122C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122C0u;
label_3122c0:
    // 0x3122c0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x3122C0u;
    {
        const bool branch_taken_0x3122c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122C0u;
        // 0x3122c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122C8u;
label_3122c8:
    // 0x3122c8: 0xc0c5b10  jal         func_316C40
    ctx->pc = 0x3122C8u;
    SET_GPR_U32(ctx, 31, 0x3122D0u);
    ctx->pc = 0x316C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316C40u, 0x3122C8u, 0x3122D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122D0u;
label_3122d0:
    // 0x3122d0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3122D0u;
    {
        const bool branch_taken_0x3122d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122D0u;
        // 0x3122d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122D8u;
label_3122d8:
    // 0x3122d8: 0xc0c5b2c  jal         func_316CB0
    ctx->pc = 0x3122D8u;
    SET_GPR_U32(ctx, 31, 0x3122E0u);
    ctx->pc = 0x316CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316CB0u, 0x3122D8u, 0x3122E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122E0u;
label_3122e0:
    // 0x3122e0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x3122E0u;
    {
        const bool branch_taken_0x3122e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122E0u;
        // 0x3122e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122e0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122E8u;
label_3122e8:
    // 0x3122e8: 0xc0c5b48  jal         func_316D20
    ctx->pc = 0x3122E8u;
    SET_GPR_U32(ctx, 31, 0x3122F0u);
    ctx->pc = 0x316D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316D20u, 0x3122E8u, 0x3122F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122F0u;
label_3122f0:
    // 0x3122f0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x3122F0u;
    {
        const bool branch_taken_0x3122f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122F0u;
        // 0x3122f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3122F8u;
label_3122f8:
    // 0x3122f8: 0xc0c5b64  jal         func_316D90
    ctx->pc = 0x3122F8u;
    SET_GPR_U32(ctx, 31, 0x312300u);
    ctx->pc = 0x316D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316D90u, 0x3122F8u, 0x312300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312300u;
label_312300:
    // 0x312300: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x312300u;
    {
        const bool branch_taken_0x312300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312300u;
        // 0x312304: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312300) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312308u;
label_312308:
    // 0x312308: 0xc0c5b80  jal         func_316E00
    ctx->pc = 0x312308u;
    SET_GPR_U32(ctx, 31, 0x312310u);
    ctx->pc = 0x316E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316E00u, 0x312308u, 0x312310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312310u;
label_312310:
    // 0x312310: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x312310u;
    {
        const bool branch_taken_0x312310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312310u;
        // 0x312314: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312310) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312318u;
label_312318:
    // 0x312318: 0xc0c5b9c  jal         func_316E70
    ctx->pc = 0x312318u;
    SET_GPR_U32(ctx, 31, 0x312320u);
    ctx->pc = 0x316E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316E70u, 0x312318u, 0x312320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312320u;
label_312320:
    // 0x312320: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x312320u;
    {
        const bool branch_taken_0x312320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312320u;
        // 0x312324: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312320) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312328u;
label_312328:
    // 0x312328: 0xc0c5bb8  jal         func_316EE0
    ctx->pc = 0x312328u;
    SET_GPR_U32(ctx, 31, 0x312330u);
    ctx->pc = 0x316EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316EE0u, 0x312328u, 0x312330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312330u;
label_312330:
    // 0x312330: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x312330u;
    {
        const bool branch_taken_0x312330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312330u;
        // 0x312334: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312330) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312338u;
label_312338:
    // 0x312338: 0xc0c5bd4  jal         func_316F50
    ctx->pc = 0x312338u;
    SET_GPR_U32(ctx, 31, 0x312340u);
    ctx->pc = 0x316F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316F50u, 0x312338u, 0x312340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312340u;
label_312340:
    // 0x312340: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x312340u;
    {
        const bool branch_taken_0x312340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312340u;
        // 0x312344: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312340) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312348u;
label_312348:
    // 0x312348: 0xc0c5bf0  jal         func_316FC0
    ctx->pc = 0x312348u;
    SET_GPR_U32(ctx, 31, 0x312350u);
    ctx->pc = 0x316FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316FC0u, 0x312348u, 0x312350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312350u;
label_312350:
    // 0x312350: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x312350u;
    {
        const bool branch_taken_0x312350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312350u;
        // 0x312354: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312350) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312358u;
label_312358:
    // 0x312358: 0xc0c5c0c  jal         func_317030
    ctx->pc = 0x312358u;
    SET_GPR_U32(ctx, 31, 0x312360u);
    ctx->pc = 0x317030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317030u, 0x312358u, 0x312360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312360u;
label_312360:
    // 0x312360: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x312360u;
    {
        const bool branch_taken_0x312360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312360u;
        // 0x312364: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312360) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312368u;
label_312368:
    // 0x312368: 0xc0c5c28  jal         func_3170A0
    ctx->pc = 0x312368u;
    SET_GPR_U32(ctx, 31, 0x312370u);
    ctx->pc = 0x3170A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3170A0u, 0x312368u, 0x312370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312370u;
label_312370:
    // 0x312370: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x312370u;
    {
        const bool branch_taken_0x312370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312370u;
        // 0x312374: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312370) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312378u;
label_312378:
    // 0x312378: 0xc0c5c44  jal         func_317110
    ctx->pc = 0x312378u;
    SET_GPR_U32(ctx, 31, 0x312380u);
    ctx->pc = 0x317110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317110u, 0x312378u, 0x312380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312380u;
label_312380:
    // 0x312380: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x312380u;
    {
        const bool branch_taken_0x312380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312380u;
        // 0x312384: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312380) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312388u;
label_312388:
    // 0x312388: 0xc0c5c60  jal         func_317180
    ctx->pc = 0x312388u;
    SET_GPR_U32(ctx, 31, 0x312390u);
    ctx->pc = 0x317180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317180u, 0x312388u, 0x312390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312390u;
label_312390:
    // 0x312390: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x312390u;
    {
        const bool branch_taken_0x312390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312390u;
        // 0x312394: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312390) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312398u;
label_312398:
    // 0x312398: 0xc0c5c7c  jal         func_3171F0
    ctx->pc = 0x312398u;
    SET_GPR_U32(ctx, 31, 0x3123A0u);
    ctx->pc = 0x3171F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3171F0u, 0x312398u, 0x3123A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123A0u;
label_3123a0:
    // 0x3123a0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x3123A0u;
    {
        const bool branch_taken_0x3123a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123A0u;
        // 0x3123a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123a0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123A8u;
label_3123a8:
    // 0x3123a8: 0xc0c5c98  jal         func_317260
    ctx->pc = 0x3123A8u;
    SET_GPR_U32(ctx, 31, 0x3123B0u);
    ctx->pc = 0x317260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317260u, 0x3123A8u, 0x3123B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123B0u;
label_3123b0:
    // 0x3123b0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3123B0u;
    {
        const bool branch_taken_0x3123b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123B0u;
        // 0x3123b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123B8u;
label_3123b8:
    // 0x3123b8: 0xc0c5cb4  jal         func_3172D0
    ctx->pc = 0x3123B8u;
    SET_GPR_U32(ctx, 31, 0x3123C0u);
    ctx->pc = 0x3172D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3172D0u, 0x3123B8u, 0x3123C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123C0u;
label_3123c0:
    // 0x3123c0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3123C0u;
    {
        const bool branch_taken_0x3123c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123C0u;
        // 0x3123c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123C8u;
label_3123c8:
    // 0x3123c8: 0xc0c5cd0  jal         func_317340
    ctx->pc = 0x3123C8u;
    SET_GPR_U32(ctx, 31, 0x3123D0u);
    ctx->pc = 0x317340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317340u, 0x3123C8u, 0x3123D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123D0u;
label_3123d0:
    // 0x3123d0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3123D0u;
    {
        const bool branch_taken_0x3123d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123D0u;
        // 0x3123d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123D8u;
label_3123d8:
    // 0x3123d8: 0xc0c5cec  jal         func_3173B0
    ctx->pc = 0x3123D8u;
    SET_GPR_U32(ctx, 31, 0x3123E0u);
    ctx->pc = 0x3173B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3173B0u, 0x3123D8u, 0x3123E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123E0u;
label_3123e0:
    // 0x3123e0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3123E0u;
    {
        const bool branch_taken_0x3123e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123E0u;
        // 0x3123e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123e0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123E8u;
label_3123e8:
    // 0x3123e8: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x3123E8u;
    SET_GPR_U32(ctx, 31, 0x3123F0u);
    ctx->pc = 0x317420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317420u, 0x3123E8u, 0x3123F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123F0u;
label_3123f0:
    // 0x3123f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3123F0u;
    {
        const bool branch_taken_0x3123f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123F0u;
        // 0x3123f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3123F8u;
label_3123f8:
    // 0x3123f8: 0xc0c5d24  jal         func_317490
    ctx->pc = 0x3123F8u;
    SET_GPR_U32(ctx, 31, 0x312400u);
    ctx->pc = 0x317490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317490u, 0x3123F8u, 0x312400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312400u;
label_312400:
    // 0x312400: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x312400u;
    {
        const bool branch_taken_0x312400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312400u;
        // 0x312404: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312400) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312408u;
label_312408:
    // 0x312408: 0xc0c5d40  jal         func_317500
    ctx->pc = 0x312408u;
    SET_GPR_U32(ctx, 31, 0x312410u);
    ctx->pc = 0x317500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317500u, 0x312408u, 0x312410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312410u;
label_312410:
    // 0x312410: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x312410u;
    {
        const bool branch_taken_0x312410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312410u;
        // 0x312414: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312410) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312418u;
label_312418:
    // 0x312418: 0xc0c5d5c  jal         func_317570
    ctx->pc = 0x312418u;
    SET_GPR_U32(ctx, 31, 0x312420u);
    ctx->pc = 0x317570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317570u, 0x312418u, 0x312420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312420u;
label_312420:
    // 0x312420: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x312420u;
    {
        const bool branch_taken_0x312420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312420u;
        // 0x312424: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312420) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312428u;
label_312428:
    // 0x312428: 0xc0c5d78  jal         func_3175E0
    ctx->pc = 0x312428u;
    SET_GPR_U32(ctx, 31, 0x312430u);
    ctx->pc = 0x3175E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3175E0u, 0x312428u, 0x312430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312430u;
label_312430:
    // 0x312430: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x312430u;
    {
        const bool branch_taken_0x312430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312430u;
        // 0x312434: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312430) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312438u;
label_312438:
    // 0x312438: 0xc0c5d94  jal         func_317650
    ctx->pc = 0x312438u;
    SET_GPR_U32(ctx, 31, 0x312440u);
    ctx->pc = 0x317650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317650u, 0x312438u, 0x312440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312440u;
label_312440:
    // 0x312440: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x312440u;
    {
        const bool branch_taken_0x312440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312440u;
        // 0x312444: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312440) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312448u;
label_312448:
    // 0x312448: 0xc0c5db0  jal         func_3176C0
    ctx->pc = 0x312448u;
    SET_GPR_U32(ctx, 31, 0x312450u);
    ctx->pc = 0x3176C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3176C0u, 0x312448u, 0x312450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312450u;
label_312450:
    // 0x312450: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x312450u;
    {
        const bool branch_taken_0x312450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312450u;
        // 0x312454: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312450) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312458u;
label_312458:
    // 0x312458: 0xc0c5dcc  jal         func_317730
    ctx->pc = 0x312458u;
    SET_GPR_U32(ctx, 31, 0x312460u);
    ctx->pc = 0x317730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317730u, 0x312458u, 0x312460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312460u;
label_312460:
    // 0x312460: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x312460u;
    {
        const bool branch_taken_0x312460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312460u;
        // 0x312464: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312460) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312468u;
label_312468:
    // 0x312468: 0xc0c5de8  jal         func_3177A0
    ctx->pc = 0x312468u;
    SET_GPR_U32(ctx, 31, 0x312470u);
    ctx->pc = 0x3177A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3177A0u, 0x312468u, 0x312470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312470u;
label_312470:
    // 0x312470: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x312470u;
    {
        const bool branch_taken_0x312470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312470u;
        // 0x312474: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312470) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312478u;
label_312478:
    // 0x312478: 0xc0c5e04  jal         func_317810
    ctx->pc = 0x312478u;
    SET_GPR_U32(ctx, 31, 0x312480u);
    ctx->pc = 0x317810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317810u, 0x312478u, 0x312480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312480u;
label_312480:
    // 0x312480: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x312480u;
    {
        const bool branch_taken_0x312480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312480u;
        // 0x312484: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312480) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312488u;
label_312488:
    // 0x312488: 0xc0c5e20  jal         func_317880
    ctx->pc = 0x312488u;
    SET_GPR_U32(ctx, 31, 0x312490u);
    ctx->pc = 0x317880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317880u, 0x312488u, 0x312490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312490u;
label_312490:
    // 0x312490: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x312490u;
    {
        const bool branch_taken_0x312490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312490u;
        // 0x312494: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312490) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312498u;
label_312498:
    // 0x312498: 0xc0c5e3c  jal         func_3178F0
    ctx->pc = 0x312498u;
    SET_GPR_U32(ctx, 31, 0x3124A0u);
    ctx->pc = 0x3178F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3178F0u, 0x312498u, 0x3124A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124A0u;
label_3124a0:
    // 0x3124a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3124A0u;
    {
        const bool branch_taken_0x3124a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124A0u;
        // 0x3124a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124a0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124A8u;
label_3124a8:
    // 0x3124a8: 0xc0c5854  jal         func_316150
    ctx->pc = 0x3124A8u;
    SET_GPR_U32(ctx, 31, 0x3124B0u);
    ctx->pc = 0x316150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316150u, 0x3124A8u, 0x3124B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124B0u;
label_3124b0:
    // 0x3124b0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3124B0u;
    {
        const bool branch_taken_0x3124b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124B0u;
        // 0x3124b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124b0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124B8u;
label_3124b8:
    // 0x3124b8: 0xc0c5e58  jal         func_317960
    ctx->pc = 0x3124B8u;
    SET_GPR_U32(ctx, 31, 0x3124C0u);
    ctx->pc = 0x317960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317960u, 0x3124B8u, 0x3124C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124C0u;
label_3124c0:
    // 0x3124c0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3124C0u;
    {
        const bool branch_taken_0x3124c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124C0u;
        // 0x3124c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124c0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124C8u;
label_3124c8:
    // 0x3124c8: 0xc0c5e74  jal         func_3179D0
    ctx->pc = 0x3124C8u;
    SET_GPR_U32(ctx, 31, 0x3124D0u);
    ctx->pc = 0x3179D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3179D0u, 0x3124C8u, 0x3124D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124D0u;
label_3124d0:
    // 0x3124d0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3124D0u;
    {
        const bool branch_taken_0x3124d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124D0u;
        // 0x3124d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124d0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124D8u;
label_3124d8:
    // 0x3124d8: 0xc0c5e90  jal         func_317A40
    ctx->pc = 0x3124D8u;
    SET_GPR_U32(ctx, 31, 0x3124E0u);
    ctx->pc = 0x317A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317A40u, 0x3124D8u, 0x3124E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124E0u;
label_3124e0:
    // 0x3124e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3124E0u;
    {
        const bool branch_taken_0x3124e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124E0u;
        // 0x3124e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124e0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124E8u;
label_3124e8:
    // 0x3124e8: 0xc0c5eac  jal         func_317AB0
    ctx->pc = 0x3124E8u;
    SET_GPR_U32(ctx, 31, 0x3124F0u);
    ctx->pc = 0x317AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317AB0u, 0x3124E8u, 0x3124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124F0u;
label_3124f0:
    // 0x3124f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3124F0u;
    {
        const bool branch_taken_0x3124f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3124F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3124F0u;
        // 0x3124f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3124f0) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x3124F8u;
label_3124f8:
    // 0x3124f8: 0xc0c5ec8  jal         func_317B20
    ctx->pc = 0x3124F8u;
    SET_GPR_U32(ctx, 31, 0x312500u);
    ctx->pc = 0x317B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317B20u, 0x3124F8u, 0x312500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312500u;
label_312500:
    // 0x312500: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x312500u;
    {
        const bool branch_taken_0x312500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312500u;
        // 0x312504: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312500) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312508u;
label_312508:
    // 0x312508: 0xc0c5ee4  jal         func_317B90
    ctx->pc = 0x312508u;
    SET_GPR_U32(ctx, 31, 0x312510u);
    ctx->pc = 0x317B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317B90u, 0x312508u, 0x312510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312510u;
label_312510:
    // 0x312510: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x312510u;
    {
        const bool branch_taken_0x312510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312510u;
        // 0x312514: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312510) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312518u;
label_312518:
    // 0x312518: 0xc0c5f00  jal         func_317C00
    ctx->pc = 0x312518u;
    SET_GPR_U32(ctx, 31, 0x312520u);
    ctx->pc = 0x317C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317C00u, 0x312518u, 0x312520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312520u;
label_312520:
    // 0x312520: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x312520u;
    {
        const bool branch_taken_0x312520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312520u;
        // 0x312524: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312520) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312528u;
label_312528:
    // 0x312528: 0xc0c5f1c  jal         func_317C70
    ctx->pc = 0x312528u;
    SET_GPR_U32(ctx, 31, 0x312530u);
    ctx->pc = 0x317C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317C70u, 0x312528u, 0x312530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312530u;
label_312530:
    // 0x312530: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x312530u;
    {
        const bool branch_taken_0x312530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312530u;
        // 0x312534: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312530) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312538u;
label_312538:
    // 0x312538: 0xc0c5f38  jal         func_317CE0
    ctx->pc = 0x312538u;
    SET_GPR_U32(ctx, 31, 0x312540u);
    ctx->pc = 0x317CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317CE0u, 0x312538u, 0x312540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312540u;
label_312540:
    // 0x312540: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x312540u;
    {
        const bool branch_taken_0x312540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312540u;
        // 0x312544: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312540) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312548u;
label_312548:
    // 0x312548: 0xc0c50e4  jal         func_314390
    ctx->pc = 0x312548u;
    SET_GPR_U32(ctx, 31, 0x312550u);
    ctx->pc = 0x314390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314390u, 0x312548u, 0x312550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312550u;
label_312550:
    // 0x312550: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x312550u;
    {
        const bool branch_taken_0x312550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312550u;
        // 0x312554: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312550) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312558u;
label_312558:
    // 0x312558: 0xc0c5f54  jal         func_317D50
    ctx->pc = 0x312558u;
    SET_GPR_U32(ctx, 31, 0x312560u);
    ctx->pc = 0x317D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317D50u, 0x312558u, 0x312560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312560u;
label_312560:
    // 0x312560: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x312560u;
    {
        const bool branch_taken_0x312560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312560u;
        // 0x312564: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312560) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312568u;
label_312568:
    // 0x312568: 0xc0c5fa0  jal         func_317E80
    ctx->pc = 0x312568u;
    SET_GPR_U32(ctx, 31, 0x312570u);
    ctx->pc = 0x317E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317E80u, 0x312568u, 0x312570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312570u;
label_312570:
    // 0x312570: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x312570u;
    {
        const bool branch_taken_0x312570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312570u;
        // 0x312574: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312570) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312578u;
label_312578:
    // 0x312578: 0xc0c5fc0  jal         func_317F00
    ctx->pc = 0x312578u;
    SET_GPR_U32(ctx, 31, 0x312580u);
    ctx->pc = 0x317F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317F00u, 0x312578u, 0x312580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312580u;
label_312580:
    // 0x312580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x312580u;
    {
        const bool branch_taken_0x312580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312580u;
        // 0x312584: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312580) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312588u;
label_312588:
    // 0x312588: 0xc0c5fdc  jal         func_317F70
    ctx->pc = 0x312588u;
    SET_GPR_U32(ctx, 31, 0x312590u);
    ctx->pc = 0x317F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317F70u, 0x312588u, 0x312590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312590u;
label_312590:
    // 0x312590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312590u;
    {
        const bool branch_taken_0x312590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312590u;
        // 0x312594: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312590) {
            ctx->pc = 0x3125A4u;
            goto label_3125a4;
        }
    }
    ctx->pc = 0x312598u;
label_312598:
    // 0x312598: 0xc0c4e78  jal         func_3139E0
    ctx->pc = 0x312598u;
    SET_GPR_U32(ctx, 31, 0x3125A0u);
    ctx->pc = 0x3139E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3139E0u, 0x312598u, 0x3125A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125A0u;
label_3125a0:
    // 0x3125a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3125a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3125a4:
    // 0x3125a4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3125A4u;
    {
        const bool branch_taken_0x3125a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3125A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125A4u;
        // 0x3125a8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125a4) {
            ctx->pc = 0x3125B4u;
            goto label_3125b4;
        }
    }
    ctx->pc = 0x3125ACu;
    // 0x3125ac: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3125ACu;
    {
        const bool branch_taken_0x3125ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3125B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125ACu;
        // 0x3125b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125ac) {
            ctx->pc = 0x3126ECu;
            goto label_3126ec;
        }
    }
    ctx->pc = 0x3125B4u;
label_3125b4:
    // 0x3125b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3125b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125b8: 0x90663d18  lbu         $a2, 0x3D18($v1)
    ctx->pc = 0x3125b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15640)));
    // 0x3125bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3125bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125c0: 0xa24602fc  sb          $a2, 0x2FC($s2)
    ctx->pc = 0x3125c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 764), (uint8_t)GPR_U32(ctx, 6));
    // 0x3125c4: 0x90623d18  lbu         $v0, 0x3D18($v1)
    ctx->pc = 0x3125c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15640)));
    // 0x3125c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3125c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3125cc: 0xc0539a4  jal         func_14E690
    ctx->pc = 0x3125CCu;
    SET_GPR_U32(ctx, 31, 0x3125D4u);
    ctx->pc = 0x3125D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125CCu;
    // 0x3125d0: 0xa0623d18  sb          $v0, 0x3D18($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 15640), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E690u, 0x3125CCu, 0x3125D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125D4u;
label_3125d4:
    // 0x3125d4: 0xa6500300  sh          $s0, 0x300($s2)
    ctx->pc = 0x3125d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 768), (uint16_t)GPR_U32(ctx, 16));
    // 0x3125d8: 0xc0c1e38  jal         func_3078E0
    ctx->pc = 0x3125D8u;
    SET_GPR_U32(ctx, 31, 0x3125E0u);
    ctx->pc = 0x3125DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125D8u;
    // 0x3125dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3078E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3078E0u, 0x3125D8u, 0x3125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125E0u;
label_3125e0:
    // 0x3125e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3125e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3125e4: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3125E4u;
    {
        const bool branch_taken_0x3125e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3125E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125E4u;
        // 0x3125e8: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125e4) {
            ctx->pc = 0x312658u;
            goto label_312658;
        }
    }
    ctx->pc = 0x3125ECu;
    // 0x3125ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3125ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125f0: 0xc07fa92  jal         func_1FEA48
    ctx->pc = 0x3125F0u;
    SET_GPR_U32(ctx, 31, 0x3125F8u);
    ctx->pc = 0x3125F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125F0u;
    // 0x3125f4: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA48u, 0x3125F0u, 0x3125F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125F8u;
label_3125f8:
    // 0x3125f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3125f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3125FCu;
    {
        const bool branch_taken_0x3125fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125FCu;
        // 0x312600: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125fc) {
            ctx->pc = 0x312614u;
            goto label_312614;
        }
    }
    ctx->pc = 0x312604u;
    // 0x312604: 0xae430304  sw          $v1, 0x304($s2)
    ctx->pc = 0x312604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 3));
    // 0x312608: 0x24424220  addiu       $v0, $v0, 0x4220
    ctx->pc = 0x312608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
    // 0x31260c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x31260Cu;
    {
        const bool branch_taken_0x31260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31260Cu;
        // 0x312610: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31260c) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x312614u;
label_312614:
    // 0x312614: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x312614u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x312618: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x312618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x31261c: 0x26304220  addiu       $s0, $s1, 0x4220
    ctx->pc = 0x31261cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16928));
    // 0x312620: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x312620u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x312624: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x312624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x312628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x312628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31262c: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x31262Cu;
    SET_GPR_U32(ctx, 31, 0x312634u);
    ctx->pc = 0x312630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31262Cu;
    // 0x312630: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x31262Cu, 0x312634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312634u;
label_312634:
    // 0x312634: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x312634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x312638: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x312638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x31263c: 0xae5002c8  sw          $s0, 0x2C8($s2)
    ctx->pc = 0x31263cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 16));
    // 0x312640: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x312640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x312644: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x312644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
    // 0x312648: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x312648u;
    {
        const bool branch_taken_0x312648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312648u;
        // 0x31264c: 0xae430250  sw          $v1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312648) {
            ctx->pc = 0x3126A4u;
            goto label_3126a4;
        }
    }
    ctx->pc = 0x312650u;
    // 0x312650: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x312650u;
    {
        const bool branch_taken_0x312650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312650u;
        // 0x312654: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312650) {
            ctx->pc = 0x3126ECu;
            goto label_3126ec;
        }
    }
    ctx->pc = 0x312658u;
label_312658:
    // 0x312658: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x312658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x31265c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31265Cu;
    {
        const bool branch_taken_0x31265c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x312660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31265Cu;
        // 0x312660: 0x3a62ffff  xori        $v0, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31265c) {
            ctx->pc = 0x312674u;
            goto label_312674;
        }
    }
    ctx->pc = 0x312664u;
    // 0x312664: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x312664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x312668: 0x24424240  addiu       $v0, $v0, 0x4240
    ctx->pc = 0x312668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x31266c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31266Cu;
    {
        const bool branch_taken_0x31266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31266Cu;
        // 0x312670: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31266c) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x312674u;
label_312674:
    // 0x312674: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x312674u;
    {
        const bool branch_taken_0x312674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312674u;
        // 0x312678: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312674) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x31267Cu;
    // 0x31267c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x31267cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x312680: 0xc07fa92  jal         func_1FEA48
    ctx->pc = 0x312680u;
    SET_GPR_U32(ctx, 31, 0x312688u);
    ctx->pc = 0x312684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312680u;
    // 0x312684: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA48u, 0x312680u, 0x312688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312688u;
label_312688:
    // 0x312688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31268c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31268Cu;
    {
        const bool branch_taken_0x31268c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31268Cu;
        // 0x312690: 0x3c110075  lui         $s1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31268c) {
            ctx->pc = 0x3126A4u;
            goto label_3126a4;
        }
    }
    ctx->pc = 0x312694u;
    // 0x312694: 0x26224220  addiu       $v0, $s1, 0x4220
    ctx->pc = 0x312694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16928));
    // 0x312698: 0xae430304  sw          $v1, 0x304($s2)
    ctx->pc = 0x312698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 3));
    // 0x31269c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31269Cu;
    {
        const bool branch_taken_0x31269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31269Cu;
        // 0x3126a0: 0xae4202c8  sw          $v0, 0x2C8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31269c) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x3126A4u;
label_3126a4:
    // 0x3126a4: 0x26304220  addiu       $s0, $s1, 0x4220
    ctx->pc = 0x3126a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16928));
    // 0x3126a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3126a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3126ac: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x3126acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x3126b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3126b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3126b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3126b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3126b8: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x3126B8u;
    SET_GPR_U32(ctx, 31, 0x3126C0u);
    ctx->pc = 0x3126BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126B8u;
    // 0x3126bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x3126B8u, 0x3126C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126C0u;
label_3126c0:
    // 0x3126c0: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x3126c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x3126c4: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3126c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x3126c8: 0xae5002c8  sw          $s0, 0x2C8($s2)
    ctx->pc = 0x3126c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 16));
    // 0x3126cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3126ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3126d0: 0xae420304  sw          $v0, 0x304($s2)
    ctx->pc = 0x3126d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 2));
    // 0x3126d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3126D4u;
    {
        const bool branch_taken_0x3126d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3126D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126D4u;
        // 0x3126d8: 0xae430250  sw          $v1, 0x250($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126d4) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x3126DCu;
    // 0x3126dc: 0xc0c49de  jal         func_312778
    ctx->pc = 0x3126DCu;
    SET_GPR_U32(ctx, 31, 0x3126E4u);
    ctx->pc = 0x3126E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126DCu;
    // 0x3126e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312778u, 0x3126DCu, 0x3126E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126E4u;
label_3126e4:
    // 0x3126e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3126e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3126e8:
    // 0x3126e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3126e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3126ec:
    // 0x3126ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3126ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3126f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3126f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3126f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3126f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3126f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3126f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3126fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3126fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312700: 0x3e00008  jr          $ra
    ctx->pc = 0x312700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312700u;
        // 0x312704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312708u;
}
