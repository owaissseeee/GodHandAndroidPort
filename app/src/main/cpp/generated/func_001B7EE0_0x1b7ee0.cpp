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

// Function: func_001B7EE0
// Address: 0x1b7ee0 - 0x1b8030
void func_001B7EE0_0x1b7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7EE0_0x1b7ee0");
#endif

    switch (ctx->pc) {
        case 0x1b7ee0u: goto label_1b7ee0;
        case 0x1b7ee4u: goto label_1b7ee4;
        case 0x1b7ee8u: goto label_1b7ee8;
        case 0x1b7eecu: goto label_1b7eec;
        case 0x1b7ef0u: goto label_1b7ef0;
        case 0x1b7ef4u: goto label_1b7ef4;
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f04u: goto label_1b7f04;
        case 0x1b7f08u: goto label_1b7f08;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f10u: goto label_1b7f10;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f18u: goto label_1b7f18;
        case 0x1b7f1cu: goto label_1b7f1c;
        case 0x1b7f20u: goto label_1b7f20;
        case 0x1b7f24u: goto label_1b7f24;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f2cu: goto label_1b7f2c;
        case 0x1b7f30u: goto label_1b7f30;
        case 0x1b7f34u: goto label_1b7f34;
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f40u: goto label_1b7f40;
        case 0x1b7f44u: goto label_1b7f44;
        case 0x1b7f48u: goto label_1b7f48;
        case 0x1b7f4cu: goto label_1b7f4c;
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f58u: goto label_1b7f58;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7f60u: goto label_1b7f60;
        case 0x1b7f64u: goto label_1b7f64;
        case 0x1b7f68u: goto label_1b7f68;
        case 0x1b7f6cu: goto label_1b7f6c;
        case 0x1b7f70u: goto label_1b7f70;
        case 0x1b7f74u: goto label_1b7f74;
        case 0x1b7f78u: goto label_1b7f78;
        case 0x1b7f7cu: goto label_1b7f7c;
        case 0x1b7f80u: goto label_1b7f80;
        case 0x1b7f84u: goto label_1b7f84;
        case 0x1b7f88u: goto label_1b7f88;
        case 0x1b7f8cu: goto label_1b7f8c;
        case 0x1b7f90u: goto label_1b7f90;
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7f98u: goto label_1b7f98;
        case 0x1b7f9cu: goto label_1b7f9c;
        case 0x1b7fa0u: goto label_1b7fa0;
        case 0x1b7fa4u: goto label_1b7fa4;
        case 0x1b7fa8u: goto label_1b7fa8;
        case 0x1b7facu: goto label_1b7fac;
        case 0x1b7fb0u: goto label_1b7fb0;
        case 0x1b7fb4u: goto label_1b7fb4;
        case 0x1b7fb8u: goto label_1b7fb8;
        case 0x1b7fbcu: goto label_1b7fbc;
        case 0x1b7fc0u: goto label_1b7fc0;
        case 0x1b7fc4u: goto label_1b7fc4;
        case 0x1b7fc8u: goto label_1b7fc8;
        case 0x1b7fccu: goto label_1b7fcc;
        case 0x1b7fd0u: goto label_1b7fd0;
        case 0x1b7fd4u: goto label_1b7fd4;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b7fdcu: goto label_1b7fdc;
        case 0x1b7fe0u: goto label_1b7fe0;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fe8u: goto label_1b7fe8;
        case 0x1b7fecu: goto label_1b7fec;
        case 0x1b7ff0u: goto label_1b7ff0;
        case 0x1b7ff4u: goto label_1b7ff4;
        case 0x1b7ff8u: goto label_1b7ff8;
        case 0x1b7ffcu: goto label_1b7ffc;
        case 0x1b8000u: goto label_1b8000;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8008u: goto label_1b8008;
        case 0x1b800cu: goto label_1b800c;
        case 0x1b8010u: goto label_1b8010;
        case 0x1b8014u: goto label_1b8014;
        case 0x1b8018u: goto label_1b8018;
        case 0x1b801cu: goto label_1b801c;
        case 0x1b8020u: goto label_1b8020;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b8028u: goto label_1b8028;
        case 0x1b802cu: goto label_1b802c;
        default: break;
    }

    ctx->pc = 0x1b7ee0u;

label_1b7ee0:
    // 0x1b7ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b7ee4:
    // 0x1b7ee4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b7ee8:
    // 0x1b7ee8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b7ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1b7eec:
    // 0x1b7eec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ef0:
    // 0x1b7ef0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1b7ef4:
    // 0x1b7ef4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1b7ef8:
    // 0x1b7ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b7efc:
    // 0x1b7efc: 0x9e4205b0  lwu         $v0, 0x5B0($s2)
    ctx->pc = 0x1b7efcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 1456)));
label_1b7f00:
    // 0x1b7f00: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1b7f00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1b7f04:
    // 0x1b7f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b7f08:
    // 0x1b7f08: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1b7f0c:
    if (ctx->pc == 0x1B7F0Cu) {
        ctx->pc = 0x1B7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F08u;
        // 0x1b7f0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F10u;
        goto label_1b7f10;
    }
    ctx->pc = 0x1B7F08u;
    {
        const bool branch_taken_0x1b7f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F08u;
        // 0x1b7f0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f08) {
            ctx->pc = 0x1B8014u;
            goto label_1b8014;
        }
    }
    ctx->pc = 0x1B7F10u;
label_1b7f10:
    // 0x1b7f10: 0xc0b6dac  jal         func_2DB6B0
label_1b7f14:
    if (ctx->pc == 0x1B7F14u) {
        ctx->pc = 0x1B7F18u;
        goto label_1b7f18;
    }
    ctx->pc = 0x1B7F10u;
    SET_GPR_U32(ctx, 31, 0x1B7F18u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B7F10u, 0x1B7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F18u;
label_1b7f18:
    // 0x1b7f18: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1b7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1b7f1c:
    // 0x1b7f1c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1b7f20:
    // 0x1b7f20: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1b7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1b7f24:
    // 0x1b7f24: 0xa0f809  jalr        $a1
label_1b7f28:
    if (ctx->pc == 0x1B7F28u) {
        ctx->pc = 0x1B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F24u;
        // 0x1b7f28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F2Cu;
        goto label_1b7f2c;
    }
    ctx->pc = 0x1B7F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B7F2Cu);
        ctx->pc = 0x1B7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F24u;
        // 0x1b7f28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F24u, 0x1B7F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7F2Cu;
label_1b7f2c:
    // 0x1b7f2c: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1b7f30:
    // 0x1b7f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f34:
    // 0x1b7f34: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b7f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b7f38:
    // 0x1b7f38: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b7f3c:
    // 0x1b7f3c: 0x40f809  jalr        $v0
label_1b7f40:
    if (ctx->pc == 0x1B7F40u) {
        ctx->pc = 0x1B7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F3Cu;
        // 0x1b7f40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F44u;
        goto label_1b7f44;
    }
    ctx->pc = 0x1B7F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7F44u);
        ctx->pc = 0x1B7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F3Cu;
        // 0x1b7f40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F3Cu, 0x1B7F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7F44u;
label_1b7f44:
    // 0x1b7f44: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b7f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b7f48:
    // 0x1b7f48: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b7f48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1b7f4c:
    // 0x1b7f4c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b7f4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b7f50:
    // 0x1b7f50: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b7f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1b7f54:
    // 0x1b7f54: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b7f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b7f58:
    // 0x1b7f58: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b7f5c:
    // 0x1b7f5c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b7f5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1b7f60:
    // 0x1b7f60: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b7f64:
    // 0x1b7f64: 0xc07df8a  jal         func_1F7E28
label_1b7f68:
    if (ctx->pc == 0x1B7F68u) {
        ctx->pc = 0x1B7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F64u;
        // 0x1b7f68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F6Cu;
        goto label_1b7f6c;
    }
    ctx->pc = 0x1B7F64u;
    SET_GPR_U32(ctx, 31, 0x1B7F6Cu);
    ctx->pc = 0x1B7F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F64u;
    // 0x1b7f68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B7F64u, 0x1B7F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F6Cu;
label_1b7f6c:
    // 0x1b7f6c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1b7f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1b7f70:
    // 0x1b7f70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b7f74:
    // 0x1b7f74: 0x0  nop
    ctx->pc = 0x1b7f74u;
    // NOP
label_1b7f78:
    // 0x1b7f78: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_1b7f7c:
    if (ctx->pc == 0x1B7F7Cu) {
        ctx->pc = 0x1B7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F78u;
        // 0x1b7f7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F80u;
        goto label_1b7f80;
    }
    ctx->pc = 0x1B7F78u;
    {
        const bool branch_taken_0x1b7f78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F78u;
        // 0x1b7f7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f78) {
            ctx->pc = 0x1B8018u;
            goto label_1b8018;
        }
    }
    ctx->pc = 0x1B7F80u;
label_1b7f80:
    // 0x1b7f80: 0xc0b6dac  jal         func_2DB6B0
label_1b7f84:
    if (ctx->pc == 0x1B7F84u) {
        ctx->pc = 0x1B7F88u;
        goto label_1b7f88;
    }
    ctx->pc = 0x1B7F80u;
    SET_GPR_U32(ctx, 31, 0x1B7F88u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B7F80u, 0x1B7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F88u;
label_1b7f88:
    // 0x1b7f88: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1b7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1b7f8c:
    // 0x1b7f8c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1b7f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1b7f90:
    // 0x1b7f90: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1b7f94:
    // 0x1b7f94: 0xa0f809  jalr        $a1
label_1b7f98:
    if (ctx->pc == 0x1B7F98u) {
        ctx->pc = 0x1B7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F94u;
        // 0x1b7f98: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F9Cu;
        goto label_1b7f9c;
    }
    ctx->pc = 0x1B7F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B7F9Cu);
        ctx->pc = 0x1B7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F94u;
        // 0x1b7f98: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F94u, 0x1B7F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7F9Cu;
label_1b7f9c:
    // 0x1b7f9c: 0xc0b6dac  jal         func_2DB6B0
label_1b7fa0:
    if (ctx->pc == 0x1B7FA0u) {
        ctx->pc = 0x1B7FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F9Cu;
        // 0x1b7fa0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FA4u;
        goto label_1b7fa4;
    }
    ctx->pc = 0x1B7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7FA4u);
    ctx->pc = 0x1B7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F9Cu;
    // 0x1b7fa0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B7F9Cu, 0x1B7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FA4u;
label_1b7fa4:
    // 0x1b7fa4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1b7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1b7fa8:
    // 0x1b7fa8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1b7fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1b7fac:
    // 0x1b7fac: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x1b7facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1b7fb0:
    // 0x1b7fb0: 0xa0f809  jalr        $a1
label_1b7fb4:
    if (ctx->pc == 0x1B7FB4u) {
        ctx->pc = 0x1B7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FB0u;
        // 0x1b7fb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FB8u;
        goto label_1b7fb8;
    }
    ctx->pc = 0x1B7FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B7FB8u);
        ctx->pc = 0x1B7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FB0u;
        // 0x1b7fb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7FB0u, 0x1B7FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7FB8u;
label_1b7fb8:
    // 0x1b7fb8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1b7fbc:
    // 0x1b7fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7fc0:
    // 0x1b7fc0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b7fc4:
    // 0x1b7fc4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b7fc8:
    // 0x1b7fc8: 0x40f809  jalr        $v0
label_1b7fcc:
    if (ctx->pc == 0x1B7FCCu) {
        ctx->pc = 0x1B7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC8u;
        // 0x1b7fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FD0u;
        goto label_1b7fd0;
    }
    ctx->pc = 0x1B7FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7FD0u);
        ctx->pc = 0x1B7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC8u;
        // 0x1b7fcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7FC8u, 0x1B7FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7FD0u;
label_1b7fd0:
    // 0x1b7fd0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1b7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b7fd4:
    // 0x1b7fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7fd8:
    // 0x1b7fd8: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
label_1b7fdc:
    // 0x1b7fdc: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x1b7fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
label_1b7fe0:
    // 0x1b7fe0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b7fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b7fe4:
    // 0x1b7fe4: 0xc0b68b4  jal         func_2DA2D0
label_1b7fe8:
    if (ctx->pc == 0x1B7FE8u) {
        ctx->pc = 0x1B7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FE4u;
        // 0x1b7fe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FECu;
        goto label_1b7fec;
    }
    ctx->pc = 0x1B7FE4u;
    SET_GPR_U32(ctx, 31, 0x1B7FECu);
    ctx->pc = 0x1B7FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7FE4u;
    // 0x1b7fe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1B7FE4u, 0x1B7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FECu;
label_1b7fec:
    // 0x1b7fec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b7ff0:
    if (ctx->pc == 0x1B7FF0u) {
        ctx->pc = 0x1B7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FECu;
        // 0x1b7ff0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FF4u;
        goto label_1b7ff4;
    }
    ctx->pc = 0x1B7FECu;
    {
        const bool branch_taken_0x1b7fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FECu;
        // 0x1b7ff0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fec) {
            ctx->pc = 0x1B8014u;
            goto label_1b8014;
        }
    }
    ctx->pc = 0x1B7FF4u;
label_1b7ff4:
    // 0x1b7ff4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7ff8:
    // 0x1b7ff8: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1b7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1b7ffc:
    // 0x1b7ffc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x1b7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1b8000:
    // 0x1b8000: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1b8000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1b8004:
    // 0x1b8004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8008:
    // 0x1b8008: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b8008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b800c:
    // 0x1b800c: 0xc07de16  jal         func_1F7858
label_1b8010:
    if (ctx->pc == 0x1B8010u) {
        ctx->pc = 0x1B8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B800Cu;
        // 0x1b8010: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8014u;
        goto label_1b8014;
    }
    ctx->pc = 0x1B800Cu;
    SET_GPR_U32(ctx, 31, 0x1B8014u);
    ctx->pc = 0x1B8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B800Cu;
    // 0x1b8010: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1B800Cu, 0x1B8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8014u;
label_1b8014:
    // 0x1b8014: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b8014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8018:
    // 0x1b8018: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b8018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b801c:
    // 0x1b801c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b801cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8020:
    // 0x1b8020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8024:
    // 0x1b8024: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b8028:
    // 0x1b8028: 0x3e00008  jr          $ra
label_1b802c:
    if (ctx->pc == 0x1B802Cu) {
        ctx->pc = 0x1B802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8028u;
        // 0x1b802c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8030u;
        goto label_fallthrough_0x1b8028;
    }
    ctx->pc = 0x1B8028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8028u;
        // 0x1b802c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8028:
    ctx->pc = 0x1B8030u;
}
