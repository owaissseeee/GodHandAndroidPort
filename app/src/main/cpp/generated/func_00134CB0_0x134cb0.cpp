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

// Function: func_00134CB0
// Address: 0x134cb0 - 0x134e18
void func_00134CB0_0x134cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134CB0_0x134cb0");
#endif

    switch (ctx->pc) {
        case 0x134d90u: goto label_134d90;
        case 0x134d9cu: goto label_134d9c;
        case 0x134dacu: goto label_134dac;
        default: break;
    }

    ctx->pc = 0x134cb0u;

    // 0x134cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x134cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x134cb4: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x134cb8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x134cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x134cbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x134cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x134cc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134cc8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x134cc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x134ccc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x134cccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x134cd0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x134cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134cd4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x134cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x134cd8: 0x25030060  addiu       $v1, $t0, 0x60
    ctx->pc = 0x134cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x134cdc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x134cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134ce0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x134ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x134ce4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x134ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134ce8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x134ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134cec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x134cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134cf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x134cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134cf4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x134cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134cf8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x134cf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x134cfc: 0xc5020070  lwc1        $f2, 0x70($t0)
    ctx->pc = 0x134cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134d00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x134d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x134d04: 0xc4c40070  lwc1        $f4, 0x70($a2)
    ctx->pc = 0x134d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134d08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x134d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x134d0c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x134d0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x134d10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x134d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x134d14: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x134d14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x134d18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x134d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134d1c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x134d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d20: 0x0  nop
    ctx->pc = 0x134d20u;
    // NOP
    // 0x134d24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x134D24u;
    {
        const bool branch_taken_0x134d24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x134D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D24u;
        // 0x134d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d24) {
            ctx->pc = 0x134D34u;
            goto label_134d34;
        }
    }
    ctx->pc = 0x134D2Cu;
    // 0x134d2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x134D2Cu;
    {
        const bool branch_taken_0x134d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D2Cu;
        // 0x134d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d2c) {
            ctx->pc = 0x134DFCu;
            goto label_134dfc;
        }
    }
    ctx->pc = 0x134D34u;
label_134d34:
    // 0x134d34: 0x0  nop
    ctx->pc = 0x134d34u;
    // NOP
    // 0x134d38: 0x0  nop
    ctx->pc = 0x134d38u;
    // NOP
    // 0x134d3c: 0x46010004  c1          0x10004
    ctx->pc = 0x134d3cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x134d40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x134d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x134d44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D44u;
    {
        const bool branch_taken_0x134d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D44u;
        // 0x134d48: 0x46002541  sub.s       $f21, $f4, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d44) {
            ctx->pc = 0x134D54u;
            goto label_134d54;
        }
    }
    ctx->pc = 0x134D4Cu;
    // 0x134d4c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x134D4Cu;
    {
        const bool branch_taken_0x134d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D4Cu;
        // 0x134d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d4c) {
            ctx->pc = 0x134DFCu;
            goto label_134dfc;
        }
    }
    ctx->pc = 0x134D54u;
label_134d54:
    // 0x134d54: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x134d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x134d58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134D58u;
    {
        const bool branch_taken_0x134d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D58u;
        // 0x134d5c: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d58) {
            ctx->pc = 0x134D68u;
            goto label_134d68;
        }
    }
    ctx->pc = 0x134D60u;
    // 0x134d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134D60u;
    {
        const bool branch_taken_0x134d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D60u;
        // 0x134d64: 0xc4f4000c  lwc1        $f20, 0xC($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d60) {
            ctx->pc = 0x134D7Cu;
            goto label_134d7c;
        }
    }
    ctx->pc = 0x134D68u;
label_134d68:
    // 0x134d68: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134D6Cu;
    {
        const bool branch_taken_0x134d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D6Cu;
        // 0x134d70: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d6c) {
            ctx->pc = 0x134D80u;
            goto label_134d80;
        }
    }
    ctx->pc = 0x134D74u;
    // 0x134d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134d78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x134d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_134d7c:
    // 0x134d7c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134d80:
    // 0x134d80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x134d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d88: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x134D88u;
    SET_GPR_U32(ctx, 31, 0x134D90u);
    ctx->pc = 0x134D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D88u;
    // 0x134d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x134D88u, 0x134D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D90u;
label_134d90:
    // 0x134d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d94: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x134D94u;
    SET_GPR_U32(ctx, 31, 0x134D9Cu);
    ctx->pc = 0x134D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D94u;
    // 0x134d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x134D94u, 0x134D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D9Cu;
label_134d9c:
    // 0x134d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134da0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x134da4: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x134DA4u;
    SET_GPR_U32(ctx, 31, 0x134DACu);
    ctx->pc = 0x134DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DA4u;
    // 0x134da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x134DA4u, 0x134DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DACu;
label_134dac:
    // 0x134dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134db0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x134db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x134db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134db8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x134db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134dbc: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x134dbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x134dc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134dc4: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x134dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x134dc8: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x134dc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x134dcc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x134dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134dd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x134dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x134dd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134dd8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x134dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x134ddc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x134ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134de4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x134de4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x134de8: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x134dec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x134decu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x134df0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x134df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134df8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x134df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_134dfc:
    // 0x134dfc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x134dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134e00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x134e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134e04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134e08: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x134e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x134e0c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x134e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134e10: 0x3e00008  jr          $ra
    ctx->pc = 0x134E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E10u;
        // 0x134e14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E18u;
}
