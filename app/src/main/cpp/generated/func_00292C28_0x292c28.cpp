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

// Function: func_00292C28
// Address: 0x292c28 - 0x292d18
void func_00292C28_0x292c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00292C28_0x292c28");
#endif

    switch (ctx->pc) {
        case 0x292c54u: goto label_292c54;
        case 0x292c6cu: goto label_292c6c;
        case 0x292cb4u: goto label_292cb4;
        case 0x292d04u: goto label_292d04;
        default: break;
    }

    ctx->pc = 0x292c28u;

    // 0x292c28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x292c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x292c2c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x292c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x292c30: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x292c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x292c34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x292c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x292c3c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x292c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x292c40: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x292c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x292c44: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x292c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292c48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c4c: 0xc0a4abc  jal         func_292AF0
    ctx->pc = 0x292C4Cu;
    SET_GPR_U32(ctx, 31, 0x292C54u);
    ctx->pc = 0x292C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C4Cu;
    // 0x292c50: 0xa3a20031  sb          $v0, 0x31($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AF0u, 0x292C4Cu, 0x292C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C54u;
label_292c54:
    // 0x292c54: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x292c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x292c58: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x292C58u;
    {
        const bool branch_taken_0x292c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x292C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C58u;
        // 0x292c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c58) {
            ctx->pc = 0x292D04u;
            goto label_292d04;
        }
    }
    ctx->pc = 0x292C60u;
    // 0x292c60: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x292c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x292c64: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x292C64u;
    SET_GPR_U32(ctx, 31, 0x292C6Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x292C64u, 0x292C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C6Cu;
label_292c6c:
    // 0x292c6c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x292c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x292c70: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x292c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x292c74: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x292c74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292c78: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x292c78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292c7c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x292c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x292c80: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x292c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x292c84: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x292c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x292c88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x292c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292c8c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x292c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x292c90: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x292c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292c94: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x292c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292c98: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x292c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292c9c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x292c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x292ca0: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x292ca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x292ca4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x292ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x292ca8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x292ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x292cac: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x292CACu;
    SET_GPR_U32(ctx, 31, 0x292CB4u);
    ctx->pc = 0x292CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CACu;
    // 0x292cb0: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x292CACu, 0x292CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CB4u;
label_292cb4:
    // 0x292cb4: 0x12300007  beq         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292CB4u;
    {
        const bool branch_taken_0x292cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x292CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CB4u;
        // 0x292cb8: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cb4) {
            ctx->pc = 0x292CD4u;
            goto label_292cd4;
        }
    }
    ctx->pc = 0x292CBCu;
    // 0x292cbc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x292cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292cc0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x292cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292cc4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x292cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292cc8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x292cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x292ccc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x292cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x292cd0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x292cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_292cd4:
    // 0x292cd4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x292cd8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292cdc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x292cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x292ce0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x292ce0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x292ce4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x292ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x292ce8: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x292ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x292cec: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x292cecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x292cf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x292cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cf4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x292cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x292cf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cfc: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x292CFCu;
    SET_GPR_U32(ctx, 31, 0x292D04u);
    ctx->pc = 0x292D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CFCu;
    // 0x292d00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x292CFCu, 0x292D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D04u;
label_292d04:
    // 0x292d04: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x292d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x292d08: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x292d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x292d0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x292d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292d10: 0x3e00008  jr          $ra
    ctx->pc = 0x292D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D10u;
        // 0x292d14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292D18u;
}
