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

// Function: IK_InverseKinematics
// Address: 0x152a20 - 0x153158
void IK_InverseKinematics_0x152a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IK_InverseKinematics_0x152a20");
#endif

    switch (ctx->pc) {
        case 0x152ac0u: goto label_152ac0;
        case 0x152b20u: goto label_152b20;
        case 0x152b84u: goto label_152b84;
        case 0x152ba8u: goto label_152ba8;
        case 0x152c70u: goto label_152c70;
        case 0x152ca4u: goto label_152ca4;
        case 0x152d04u: goto label_152d04;
        case 0x152e98u: goto label_152e98;
        case 0x152eb8u: goto label_152eb8;
        case 0x152ed4u: goto label_152ed4;
        case 0x152f0cu: goto label_152f0c;
        case 0x152f1cu: goto label_152f1c;
        case 0x152f2cu: goto label_152f2c;
        case 0x152f3cu: goto label_152f3c;
        case 0x152f58u: goto label_152f58;
        case 0x152f88u: goto label_152f88;
        case 0x152f90u: goto label_152f90;
        case 0x152fa0u: goto label_152fa0;
        case 0x152fd0u: goto label_152fd0;
        case 0x153000u: goto label_153000;
        case 0x153008u: goto label_153008;
        case 0x153050u: goto label_153050;
        case 0x153094u: goto label_153094;
        case 0x1530a4u: goto label_1530a4;
        case 0x1530b4u: goto label_1530b4;
        case 0x1530bcu: goto label_1530bc;
        case 0x1530d4u: goto label_1530d4;
        case 0x1530e4u: goto label_1530e4;
        case 0x153110u: goto label_153110;
        case 0x15311cu: goto label_15311c;
        default: break;
    }

    ctx->pc = 0x152a20u;

    // 0x152a20: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x152a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x152a24: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x152a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x152a28: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x152a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x152a2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x152a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a30: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x152a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x152a34: 0x26a30490  addiu       $v1, $s5, 0x490
    ctx->pc = 0x152a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1168));
    // 0x152a38: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x152a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x152a3c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x152a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x152a40: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x152a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x152a44: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x152a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x152a48: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x152a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x152a4c: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x152a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x152a50: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x152a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x152a54: 0xafa400f4  sw          $a0, 0xF4($sp)
    ctx->pc = 0x152a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 4));
    // 0x152a58: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x152a5c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x152a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152a60: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x152a60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152a64: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x152a64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152a68: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x152a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152a6c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x152a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152a70: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x152a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x152a74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152a78: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x152a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152a7c: 0x8eb20144  lw          $s2, 0x144($s5)
    ctx->pc = 0x152a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
    // 0x152a80: 0x124001a9  beqz        $s2, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x152A80u;
    {
        const bool branch_taken_0x152a80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A80u;
        // 0x152a84: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a80) {
            ctx->pc = 0x153128u;
            goto label_153128;
        }
    }
    ctx->pc = 0x152A88u;
    // 0x152a88: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x152a8c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x152a90: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x152a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x152a94: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x152a98: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x152a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x152a9c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x152a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x152aa0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x152aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x152aa4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x152aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152aa8: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x152aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x152aac: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x152aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x152ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152ab4: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x152ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x152ab8: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x152abc: 0x0  nop
    ctx->pc = 0x152abcu;
    // NOP
label_152ac0:
    // 0x152ac0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x152ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x152ac4: 0x10400195  beqz        $v0, . + 4 + (0x195 << 2)
    ctx->pc = 0x152AC4u;
    {
        const bool branch_taken_0x152ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AC4u;
        // 0x152ac8: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ac4) {
            ctx->pc = 0x15311Cu;
            goto label_15311c;
        }
    }
    ctx->pc = 0x152ACCu;
    // 0x152acc: 0x54400194  bnel        $v0, $zero, . + 4 + (0x194 << 2)
    ctx->pc = 0x152ACCu;
    {
        const bool branch_taken_0x152acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152acc) {
            ctx->pc = 0x152AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152ACCu;
            // 0x152ad0: 0x8e520144  lw          $s2, 0x144($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153120u;
            goto label_153120;
        }
    }
    ctx->pc = 0x152AD4u;
    // 0x152ad4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x152ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x152ad8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x152adc: 0x50400190  beql        $v0, $zero, . + 4 + (0x190 << 2)
    ctx->pc = 0x152ADCu;
    {
        const bool branch_taken_0x152adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152adc) {
            ctx->pc = 0x152AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152ADCu;
            // 0x152ae0: 0x8e520144  lw          $s2, 0x144($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153120u;
            goto label_153120;
        }
    }
    ctx->pc = 0x152AE4u;
    // 0x152ae4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x152ae8: 0x8e530144  lw          $s3, 0x144($s2)
    ctx->pc = 0x152ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x152aec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152af0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x152af4: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x152af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x152af8: 0x8e710144  lw          $s1, 0x144($s3)
    ctx->pc = 0x152af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x152afc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x152afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152b00: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x152b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x152b04: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x152b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x152b08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x152b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152b0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x152B0Cu;
    {
        const bool branch_taken_0x152b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B0Cu;
        // 0x152b10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b0c) {
            ctx->pc = 0x152B28u;
            goto label_152b28;
        }
    }
    ctx->pc = 0x152B14u;
    // 0x152b14: 0x8e2600d0  lw          $a2, 0xD0($s1)
    ctx->pc = 0x152b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152b18: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x152B18u;
    SET_GPR_U32(ctx, 31, 0x152B20u);
    ctx->pc = 0x152B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B18u;
    // 0x152b1c: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x152B18u, 0x152B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B20u;
label_152b20:
    // 0x152b20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x152B20u;
    {
        const bool branch_taken_0x152b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B20u;
        // 0x152b24: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b20) {
            ctx->pc = 0x152B60u;
            goto label_152b60;
        }
    }
    ctx->pc = 0x152B28u;
label_152b28:
    // 0x152b28: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x152b2c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x152b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x152b30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x152B30u;
    {
        const bool branch_taken_0x152b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b30) {
            ctx->pc = 0x152B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152B30u;
            // 0x152b34: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152B40u;
            goto label_152b40;
        }
    }
    ctx->pc = 0x152B38u;
    // 0x152b38: 0x8e220144  lw          $v0, 0x144($s1)
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x152b3c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x152b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_152b40:
    // 0x152b40: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152B40u;
    {
        const bool branch_taken_0x152b40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x152B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B40u;
        // 0x152b44: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b40) {
            ctx->pc = 0x152B60u;
            goto label_152b60;
        }
    }
    ctx->pc = 0x152B48u;
    // 0x152b48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x152b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b4c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x152b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x152b50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x152b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152b54: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x152b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x152b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x152b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b5c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x152b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_152b60:
    // 0x152b60: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x152b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152b68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x152B68u;
    {
        const bool branch_taken_0x152b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B68u;
        // 0x152b6c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b68) {
            ctx->pc = 0x152BA8u;
            goto label_152ba8;
        }
    }
    ctx->pc = 0x152B70u;
    // 0x152b70: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x152b74: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x152b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x152b78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152b7c: 0xc057dc0  jal         func_15F700
    ctx->pc = 0x152B7Cu;
    SET_GPR_U32(ctx, 31, 0x152B84u);
    ctx->pc = 0x152B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B7Cu;
    // 0x152b80: 0x26a40080  addiu       $a0, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F700u, 0x152B7Cu, 0x152B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B84u;
label_152b84:
    // 0x152b84: 0x3c058093  lui         $a1, 0x8093
    ctx->pc = 0x152b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32915 << 16));
    // 0x152b88: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x152b8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x152b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x152b90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152b94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x152b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b98: 0x34a514ff  ori         $a1, $a1, 0x14FF
    ctx->pc = 0x152b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5375);
    // 0x152b9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ba0: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x152BA0u;
    SET_GPR_U32(ctx, 31, 0x152BA8u);
    ctx->pc = 0x152BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BA0u;
    // 0x152ba4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x152BA0u, 0x152BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BA8u;
label_152ba8:
    // 0x152ba8: 0x8ea20258  lw          $v0, 0x258($s5)
    ctx->pc = 0x152ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x152bac: 0x44000ae  bltz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x152BACu;
    {
        const bool branch_taken_0x152bac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x152BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BACu;
        // 0x152bb0: 0x27b40090  addiu       $s4, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bac) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152BB4u;
    // 0x152bb4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x152bb8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152bbc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x152bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152bc0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x152bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bc4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152bc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152bc8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x152bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152bcc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152bd0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x152bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152bd4: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x152bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x152bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152bdc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x152bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x152be0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x152be4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x152be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x152be8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x152be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x152becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152bf0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x152bf4: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x152bf8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x152bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c00: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x152c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152c04: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x152c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152c08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x152c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c0c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x152c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x152c10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c14: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x152c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x152c18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c1c: 0xc6610158  lwc1        $f1, 0x158($s3)
    ctx->pc = 0x152c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152c20: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x152c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152c24: 0xc6a40114  lwc1        $f4, 0x114($s5)
    ctx->pc = 0x152c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x152c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x152c2c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x152c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x152c30: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x152c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x152c34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x152c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x152c38: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152c3c: 0xc6600124  lwc1        $f0, 0x124($s3)
    ctx->pc = 0x152c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152c40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x152c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152c44: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x152c44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x152c48: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x152c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x152c4c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x152c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x152c50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x152c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x152c54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x152c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x152c58: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x152c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x152c5c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x152c5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x152c60: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x152c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x152c64: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x152c64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x152c68: 0xc04c784  jal         func_131E10
    ctx->pc = 0x152C68u;
    SET_GPR_U32(ctx, 31, 0x152C70u);
    ctx->pc = 0x152C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C68u;
    // 0x152c6c: 0xe7a200b4  swc1        $f2, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x152C68u, 0x152C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C70u;
label_152c70:
    // 0x152c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c74: 0x8ec27a2c  lw          $v0, 0x7A2C($s6)
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31276)));
    // 0x152c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152c7c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x152C7Cu;
    {
        const bool branch_taken_0x152c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C7Cu;
        // 0x152c80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c7c) {
            ctx->pc = 0x152D04u;
            goto label_152d04;
        }
    }
    ctx->pc = 0x152C84u;
    // 0x152c84: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x152c88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x152c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x152c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152c90: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x152c94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x152c98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152c9c: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x152C9Cu;
    SET_GPR_U32(ctx, 31, 0x152CA4u);
    ctx->pc = 0x152CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C9Cu;
    // 0x152ca0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x152C9Cu, 0x152CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CA4u;
label_152ca4:
    // 0x152ca4: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152cb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x152cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152cb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x152cb8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x152cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x152cbc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x152cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x152cc0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x152cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x152cc4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x152cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x152cc8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x152cc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x152ccc: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x152cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152cd0: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x152cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x152cd4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x152cd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152cd8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x152cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152cdc: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x152cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152ce0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x152ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x152ce4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152ce4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152ce8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x152ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152cec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x152cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x152cf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x152cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152cf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cf8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x152cfc: 0xc057ee8  jal         func_15FBA0
    ctx->pc = 0x152CFCu;
    SET_GPR_U32(ctx, 31, 0x152D04u);
    ctx->pc = 0x152D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CFCu;
    // 0x152d00: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBA0u, 0x152CFCu, 0x152D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D04u;
label_152d04:
    // 0x152d04: 0x8ea20258  lw          $v0, 0x258($s5)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    // 0x152d08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x152d0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x152d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152d10: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D10u;
        // 0x152d14: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152E0Cu;
            goto label_152e0c;
        }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152d1c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x152d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152d20: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x152d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152d24: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x152d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152d28: 0xc6a40114  lwc1        $f4, 0x114($s5)
    ctx->pc = 0x152d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152d2c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x152d2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x152d30: 0xc64501b0  lwc1        $f5, 0x1B0($s2)
    ctx->pc = 0x152d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152d34: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x152d34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x152d38: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x152d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152d3c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x152d3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x152d40: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x152d40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x152d44: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x152d44u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x152d48: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x152d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x152d4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x152d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d54: 0x0  nop
    ctx->pc = 0x152d54u;
    // NOP
    // 0x152d58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x152d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152d5c: 0x0  nop
    ctx->pc = 0x152d5cu;
    // NOP
    // 0x152d60: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x152D60u;
    {
        const bool branch_taken_0x152d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152d60) {
            ctx->pc = 0x152D9Cu;
            goto label_152d9c;
        }
    }
    ctx->pc = 0x152D68u;
    // 0x152d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d6c: 0x0  nop
    ctx->pc = 0x152d6cu;
    // NOP
    // 0x152d70: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x152d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152d74: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x152d78: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x152d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x152d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d80: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x152D80u;
    {
        const bool branch_taken_0x152d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152d80) {
            ctx->pc = 0x152D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152D80u;
            // 0x152d84: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x152D9Cu;
            goto label_152d9c;
        }
    }
    ctx->pc = 0x152D88u;
    // 0x152d88: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x152d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x152d8c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x152d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x152d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152d94: 0x0  nop
    ctx->pc = 0x152d94u;
    // NOP
    // 0x152d98: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x152d98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_152d9c:
    // 0x152d9c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x152d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x152da0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x152da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x152da4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x152da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152da8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x152da8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x152dac: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x152db0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x152db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x152db4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152db8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x152db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152dbc: 0x0  nop
    ctx->pc = 0x152dbcu;
    // NOP
    // 0x152dc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x152DC0u;
    {
        const bool branch_taken_0x152dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DC0u;
        // 0x152dc4: 0xe7a100f0  swc1        $f1, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dc0) {
            ctx->pc = 0x152DCCu;
            goto label_152dcc;
        }
    }
    ctx->pc = 0x152DC8u;
    // 0x152dc8: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x152dc8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_152dcc:
    // 0x152dcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152dd0: 0x0  nop
    ctx->pc = 0x152dd0u;
    // NOP
    // 0x152dd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x152DD4u;
    {
        const bool branch_taken_0x152dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152dd4) {
            ctx->pc = 0x152DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152DD4u;
            // 0x152dd8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x152DDCu;
            goto label_152ddc;
        }
    }
    ctx->pc = 0x152DDCu;
label_152ddc:
    // 0x152ddc: 0xc64201b0  lwc1        $f2, 0x1B0($s2)
    ctx->pc = 0x152ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152de0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x152de0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x152de4: 0xe64201b0  swc1        $f2, 0x1B0($s2)
    ctx->pc = 0x152de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
    // 0x152de8: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152dec: 0xc6a30114  lwc1        $f3, 0x114($s5)
    ctx->pc = 0x152decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152df0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x152df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152df4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152df8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x152df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x152dfc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x152dfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x152e00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x152e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x152e04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152E04u;
    {
        const bool branch_taken_0x152e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E04u;
        // 0x152e08: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e04) {
            ctx->pc = 0x152E14u;
            goto label_152e14;
        }
    }
    ctx->pc = 0x152E0Cu;
label_152e0c:
    // 0x152e0c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x152e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x152e10: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x152e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
label_152e14:
    // 0x152e14: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152E14u;
    {
        const bool branch_taken_0x152e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E14u;
        // 0x152e18: 0x8ec27a2c  lw          $v0, 0x7A2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e14) {
            ctx->pc = 0x152E6Cu;
            goto label_152e6c;
        }
    }
    ctx->pc = 0x152E1Cu;
    // 0x152e1c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x152e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152e20: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x152e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e24: 0xc6a30114  lwc1        $f3, 0x114($s5)
    ctx->pc = 0x152e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e28: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x152e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x152e2c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x152e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e30: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152e34: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x152e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x152e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e3c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x152e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x152e40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x152e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x152e44: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x152e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x152e48: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x152e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x152e4c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x152e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x152e50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x152e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e54: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x152e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x152e58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x152e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152e5c: 0x0  nop
    ctx->pc = 0x152e5cu;
    // NOP
    // 0x152e60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x152E60u;
    {
        const bool branch_taken_0x152e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152e60) {
            ctx->pc = 0x152E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152E60u;
            // 0x152e64: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152E68u;
label_152e68:
    // 0x152e68: 0x8ec27a2c  lw          $v0, 0x7A2C($s6)
    ctx->pc = 0x152e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31276)));
label_152e6c:
    // 0x152e6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152e70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152E70u;
    {
        const bool branch_taken_0x152e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E70u;
        // 0x152e74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e70) {
            ctx->pc = 0x152E98u;
            goto label_152e98;
        }
    }
    ctx->pc = 0x152E78u;
    // 0x152e78: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x152e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x152e7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x152e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x152e80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x152e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x152e84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x152e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152e88: 0x34a5bf00  ori         $a1, $a1, 0xBF00
    ctx->pc = 0x152e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48896);
    // 0x152e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152e90: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x152E90u;
    SET_GPR_U32(ctx, 31, 0x152E98u);
    ctx->pc = 0x152E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E90u;
    // 0x152e94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x152E90u, 0x152E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E98u;
label_152e98:
    // 0x152e98: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x152e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x152e9c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x152e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x152ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152EA0u;
    {
        const bool branch_taken_0x152ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EA0u;
        // 0x152ea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ea0) {
            ctx->pc = 0x152EC0u;
            goto label_152ec0;
        }
    }
    ctx->pc = 0x152EA8u;
    // 0x152ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152eac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x152eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152eb0: 0xc054e02  jal         func_153808
    ctx->pc = 0x152EB0u;
    SET_GPR_U32(ctx, 31, 0x152EB8u);
    ctx->pc = 0x152EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EB0u;
    // 0x152eb4: 0x26360080  addiu       $s6, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153808u, 0x152EB0u, 0x152EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EB8u;
label_152eb8:
    // 0x152eb8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x152EB8u;
    {
        const bool branch_taken_0x152eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EB8u;
        // 0x152ebc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eb8) {
            ctx->pc = 0x152F1Cu;
            goto label_152f1c;
        }
    }
    ctx->pc = 0x152EC0u;
label_152ec0:
    // 0x152ec0: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x152ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x152ec4: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x152ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x152ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ecc: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x152ECCu;
    SET_GPR_U32(ctx, 31, 0x152ED4u);
    ctx->pc = 0x152ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ECCu;
    // 0x152ed0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x152ECCu, 0x152ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ED4u;
label_152ed4:
    // 0x152ed4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x152ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x152ed8: 0x10570007  beq         $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x152ED8u;
    {
        const bool branch_taken_0x152ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x152EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152ED8u;
        // 0x152edc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ed8) {
            ctx->pc = 0x152EF8u;
            goto label_152ef8;
        }
    }
    ctx->pc = 0x152EE0u;
    // 0x152ee0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x152ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ee4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x152ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x152ee8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x152ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152eec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x152eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x152ef0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x152ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ef4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x152ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_152ef8:
    // 0x152ef8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x152ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x152efc: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x152efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x152f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f04: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x152F04u;
    SET_GPR_U32(ctx, 31, 0x152F0Cu);
    ctx->pc = 0x152F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F04u;
    // 0x152f08: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x152F04u, 0x152F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F0Cu;
label_152f0c:
    // 0x152f0c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x152f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f14: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x152F14u;
    SET_GPR_U32(ctx, 31, 0x152F1Cu);
    ctx->pc = 0x152F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F14u;
    // 0x152f18: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x152F14u, 0x152F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F1Cu;
label_152f1c:
    // 0x152f1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f24: 0xc054c56  jal         func_153158
    ctx->pc = 0x152F24u;
    SET_GPR_U32(ctx, 31, 0x152F2Cu);
    ctx->pc = 0x152F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F24u;
    // 0x152f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153158u, 0x152F24u, 0x152F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F2Cu;
label_152f2c:
    // 0x152f2c: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x152f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f34: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x152F34u;
    SET_GPR_U32(ctx, 31, 0x152F3Cu);
    ctx->pc = 0x152F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F34u;
    // 0x152f38: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x152F34u, 0x152F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F3Cu;
label_152f3c:
    // 0x152f3c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x152f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x152f40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152f40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152f44: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x152f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f50: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x152F50u;
    SET_GPR_U32(ctx, 31, 0x152F58u);
    ctx->pc = 0x152F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F50u;
    // 0x152f54: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x152F50u, 0x152F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F58u;
label_152f58:
    // 0x152f58: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x152f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x152f5c: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x152F5Cu;
    {
        const bool branch_taken_0x152f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x152F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F5Cu;
        // 0x152f60: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f5c) {
            ctx->pc = 0x152F78u;
            goto label_152f78;
        }
    }
    ctx->pc = 0x152F64u;
    // 0x152f64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x152f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x152f68: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x152f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152f6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x152f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x152f70: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152f74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x152f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_152f78:
    // 0x152f78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f80: 0xc051f22  jal         func_147C88
    ctx->pc = 0x152F80u;
    SET_GPR_U32(ctx, 31, 0x152F88u);
    ctx->pc = 0x152F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F80u;
    // 0x152f84: 0x26440100  addiu       $a0, $s2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x152F80u, 0x152F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F88u;
label_152f88:
    // 0x152f88: 0xc05404e  jal         func_150138
    ctx->pc = 0x152F88u;
    SET_GPR_U32(ctx, 31, 0x152F90u);
    ctx->pc = 0x152F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F88u;
    // 0x152f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x152F88u, 0x152F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F90u;
label_152f90:
    // 0x152f90: 0x8e650148  lw          $a1, 0x148($s3)
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x152f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f98: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x152F98u;
    SET_GPR_U32(ctx, 31, 0x152FA0u);
    ctx->pc = 0x152F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F98u;
    // 0x152f9c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x152F98u, 0x152FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FA0u;
label_152fa0:
    // 0x152fa0: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x152fa4: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152FA4u;
    {
        const bool branch_taken_0x152fa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x152FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA4u;
        // 0x152fa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fa4) {
            ctx->pc = 0x152FC4u;
            goto label_152fc4;
        }
    }
    ctx->pc = 0x152FACu;
    // 0x152fac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x152facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152fb0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x152fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x152fb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x152fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152fb8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x152fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x152fbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x152fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152fc0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x152fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_152fc4:
    // 0x152fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fc8: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x152FC8u;
    SET_GPR_U32(ctx, 31, 0x152FD0u);
    ctx->pc = 0x152FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FC8u;
    // 0x152fcc: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x152FC8u, 0x152FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FD0u;
label_152fd0:
    // 0x152fd0: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x152fd4: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x152FD4u;
    {
        const bool branch_taken_0x152fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x152FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FD4u;
        // 0x152fd8: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fd4) {
            ctx->pc = 0x152FF0u;
            goto label_152ff0;
        }
    }
    ctx->pc = 0x152FDCu;
    // 0x152fdc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x152fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x152fe0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x152fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152fe4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x152fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x152fe8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x152fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152fec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x152fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_152ff0:
    // 0x152ff0: 0x26640100  addiu       $a0, $s3, 0x100
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x152ff4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ff8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x152FF8u;
    SET_GPR_U32(ctx, 31, 0x153000u);
    ctx->pc = 0x152FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FF8u;
    // 0x152ffc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x152FF8u, 0x153000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153000u;
label_153000:
    // 0x153000: 0xc05404e  jal         func_150138
    ctx->pc = 0x153000u;
    SET_GPR_U32(ctx, 31, 0x153008u);
    ctx->pc = 0x153004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153000u;
    // 0x153004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x153000u, 0x153008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153008u;
label_153008:
    // 0x153008: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x15300c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x153010: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x153010u;
    {
        const bool branch_taken_0x153010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153010u;
        // 0x153014: 0x262300c0  addiu       $v1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153010) {
            ctx->pc = 0x1530C4u;
            goto label_1530c4;
        }
    }
    ctx->pc = 0x153018u;
    // 0x153018: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x15301c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x15301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x153020: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153024: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x153024u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153028: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x153028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15302c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x15302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153030: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x153034: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153038: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x153038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15303c: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x15303cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x153040: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x153040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153044: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153048: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x153048u;
    SET_GPR_U32(ctx, 31, 0x153050u);
    ctx->pc = 0x15304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153048u;
    // 0x15304c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x153048u, 0x153050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153050u;
label_153050:
    // 0x153050: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153054: 0x105e0007  beq         $v0, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x153054u;
    {
        const bool branch_taken_0x153054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x153058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153054u;
        // 0x153058: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153054) {
            ctx->pc = 0x153074u;
            goto label_153074;
        }
    }
    ctx->pc = 0x15305Cu;
    // 0x15305c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15305cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x153060: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x153060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153064: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x153064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x153068: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x153068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15306c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x15306cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x153070: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_153074:
    // 0x153074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15307c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15307cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153080: 0x0  nop
    ctx->pc = 0x153080u;
    // NOP
    // 0x153084: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x153084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x153088: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x153088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x15308c: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x15308Cu;
    SET_GPR_U32(ctx, 31, 0x153094u);
    ctx->pc = 0x153090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15308Cu;
    // 0x153090: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x15308Cu, 0x153094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153094u;
label_153094:
    // 0x153094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153098: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x153098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15309c: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x15309Cu;
    SET_GPR_U32(ctx, 31, 0x1530A4u);
    ctx->pc = 0x1530A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15309Cu;
    // 0x1530a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x15309Cu, 0x1530A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530A4u;
label_1530a4:
    // 0x1530a4: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1530a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1530a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1530a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530ac: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1530ACu;
    SET_GPR_U32(ctx, 31, 0x1530B4u);
    ctx->pc = 0x1530B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530ACu;
    // 0x1530b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1530ACu, 0x1530B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530B4u;
label_1530b4:
    // 0x1530b4: 0xc05404e  jal         func_150138
    ctx->pc = 0x1530B4u;
    SET_GPR_U32(ctx, 31, 0x1530BCu);
    ctx->pc = 0x1530B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530B4u;
    // 0x1530b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x1530B4u, 0x1530BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530BCu;
label_1530bc:
    // 0x1530bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1530BCu;
    {
        const bool branch_taken_0x1530bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530BCu;
        // 0x1530c0: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530bc) {
            ctx->pc = 0x1530E8u;
            goto label_1530e8;
        }
    }
    ctx->pc = 0x1530C4u;
label_1530c4:
    // 0x1530c4: 0x8e250148  lw          $a1, 0x148($s1)
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1530c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530cc: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x1530CCu;
    SET_GPR_U32(ctx, 31, 0x1530D4u);
    ctx->pc = 0x1530D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530CCu;
    // 0x1530d0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x1530CCu, 0x1530D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530D4u;
label_1530d4:
    // 0x1530d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1530d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530d8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1530d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530dc: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x1530DCu;
    SET_GPR_U32(ctx, 31, 0x1530E4u);
    ctx->pc = 0x1530E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530DCu;
    // 0x1530e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x1530DCu, 0x1530E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530E4u;
label_1530e4:
    // 0x1530e4: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1530e8:
    // 0x1530e8: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1530ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1530ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1530f0: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x1530f4: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1530f8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1530f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1530fc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1530FCu;
    {
        const bool branch_taken_0x1530fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1530fc) {
            ctx->pc = 0x153100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1530FCu;
            // 0x153100: 0x8e520144  lw          $s2, 0x144($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153120u;
            goto label_153120;
        }
    }
    ctx->pc = 0x153104u;
    // 0x153104: 0x8e300144  lw          $s0, 0x144($s1)
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x153108: 0xc05404e  jal         func_150138
    ctx->pc = 0x153108u;
    SET_GPR_U32(ctx, 31, 0x153110u);
    ctx->pc = 0x15310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153108u;
    // 0x15310c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x153108u, 0x153110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153110u;
label_153110:
    // 0x153110: 0x8ea50250  lw          $a1, 0x250($s5)
    ctx->pc = 0x153110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 592)));
    // 0x153114: 0xc054074  jal         func_1501D0
    ctx->pc = 0x153114u;
    SET_GPR_U32(ctx, 31, 0x15311Cu);
    ctx->pc = 0x153118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153114u;
    // 0x153118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x153114u, 0x15311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15311Cu;
label_15311c:
    // 0x15311c: 0x8e520144  lw          $s2, 0x144($s2)
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
label_153120:
    // 0x153120: 0x5640fe67  bnel        $s2, $zero, . + 4 + (-0x199 << 2)
    ctx->pc = 0x153120u;
    {
        const bool branch_taken_0x153120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x153120) {
            ctx->pc = 0x153124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153120u;
            // 0x153124: 0x8e430154  lw          $v1, 0x154($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152ac0;
        }
    }
    ctx->pc = 0x153128u;
label_153128:
    // 0x153128: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x153128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15312c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x15312cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x153130: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x153130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x153134: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x153134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x153138: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x153138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15313c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x15313cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x153140: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x153140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x153144: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x153144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x153148: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x153148u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15314c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x15314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x153150: 0x3e00008  jr          $ra
    ctx->pc = 0x153150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153150u;
        // 0x153154: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153158u;
}
