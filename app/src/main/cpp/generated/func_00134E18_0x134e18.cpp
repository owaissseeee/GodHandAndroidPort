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

// Function: func_00134E18
// Address: 0x134e18 - 0x135040
void func_00134E18_0x134e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134E18_0x134e18");
#endif

    switch (ctx->pc) {
        case 0x134e74u: goto label_134e74;
        case 0x134f14u: goto label_134f14;
        case 0x134f20u: goto label_134f20;
        case 0x134f30u: goto label_134f30;
        case 0x134facu: goto label_134fac;
        case 0x134fb8u: goto label_134fb8;
        case 0x134fc8u: goto label_134fc8;
        default: break;
    }

    ctx->pc = 0x134e18u;

    // 0x134e18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x134e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x134e1c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x134e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x134e20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x134e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x134e24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x134e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x134e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x134e2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x134e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x134e34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x134e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x134e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x134e3c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x134e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134e44: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x134e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x134e48: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x134e48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x134e4c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x134e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x134e50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x134e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134e54: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x134e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x134e58: 0x25080180  addiu       $t0, $t0, 0x180
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x134e5c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x134e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134e60: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x134e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134e64: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x134e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e6c: 0xc04dd9c  jal         func_137670
    ctx->pc = 0x134E6Cu;
    SET_GPR_U32(ctx, 31, 0x134E74u);
    ctx->pc = 0x134E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E6Cu;
    // 0x134e70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137670u, 0x134E6Cu, 0x134E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E74u;
label_134e74:
    // 0x134e74: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x134e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e78: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x134e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x134e7c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x134e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e80: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x134e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e84: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x134e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x134e88: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x134e88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x134e8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x134e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x134e90: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x134e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x134e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134e98: 0x0  nop
    ctx->pc = 0x134e98u;
    // NOP
    // 0x134e9c: 0x0  nop
    ctx->pc = 0x134e9cu;
    // NOP
    // 0x134ea0: 0x46000004  c1          0x4
    ctx->pc = 0x134ea0u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x134ea4: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x134ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x134ea8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x134ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134eac: 0x0  nop
    ctx->pc = 0x134eacu;
    // NOP
    // 0x134eb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x134EB0u;
    {
        const bool branch_taken_0x134eb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x134EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EB0u;
        // 0x134eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134eb0) {
            ctx->pc = 0x134EC0u;
            goto label_134ec0;
        }
    }
    ctx->pc = 0x134EB8u;
    // 0x134eb8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x134EB8u;
    {
        const bool branch_taken_0x134eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EB8u;
        // 0x134ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134eb8) {
            ctx->pc = 0x135018u;
            goto label_135018;
        }
    }
    ctx->pc = 0x134EC0u;
label_134ec0:
    // 0x134ec0: 0x56800029  bnel        $s4, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x134EC0u;
    {
        const bool branch_taken_0x134ec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x134ec0) {
            ctx->pc = 0x134EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134EC0u;
            // 0x134ec4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134F68u;
            goto label_134f68;
        }
    }
    ctx->pc = 0x134EC8u;
    // 0x134ec8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x134ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x134ecc: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x134ECCu;
    {
        const bool branch_taken_0x134ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ecc) {
            ctx->pc = 0x134ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134ECCu;
            // 0x134ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135018u;
            goto label_135018;
        }
    }
    ctx->pc = 0x134ED4u;
    // 0x134ed4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x134ed8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134ED8u;
    {
        const bool branch_taken_0x134ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134ED8u;
        // 0x134edc: 0x46006541  sub.s       $f21, $f12, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ed8) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x134EE0u;
    // 0x134ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134EE0u;
    {
        const bool branch_taken_0x134ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EE0u;
        // 0x134ee4: 0xc654000c  lwc1        $f20, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ee0) {
            ctx->pc = 0x134F00u;
            goto label_134f00;
        }
    }
    ctx->pc = 0x134EE8u;
label_134ee8:
    // 0x134ee8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x134ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134eec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134EF0u;
    {
        const bool branch_taken_0x134ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF0u;
        // 0x134ef4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ef0) {
            ctx->pc = 0x134F04u;
            goto label_134f04;
        }
    }
    ctx->pc = 0x134EF8u;
    // 0x134ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134efc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x134efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_134f00:
    // 0x134f00: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134f04:
    // 0x134f04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x134f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f0c: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x134F0Cu;
    SET_GPR_U32(ctx, 31, 0x134F14u);
    ctx->pc = 0x134F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F0Cu;
    // 0x134f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x134F0Cu, 0x134F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F14u;
label_134f14:
    // 0x134f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f18: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x134F18u;
    SET_GPR_U32(ctx, 31, 0x134F20u);
    ctx->pc = 0x134F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F18u;
    // 0x134f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x134F18u, 0x134F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F20u;
label_134f20:
    // 0x134f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x134f28: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x134F28u;
    SET_GPR_U32(ctx, 31, 0x134F30u);
    ctx->pc = 0x134F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F28u;
    // 0x134f2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x134F28u, 0x134F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F30u;
label_134f30:
    // 0x134f30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x134f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x134f38: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x134f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f3c: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x134f3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x134f40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x134f44: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x134f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x134f48: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x134f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x134f4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x134f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f50: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x134f50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x134f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134f58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x134f5c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x134f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f60: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x134F60u;
    {
        const bool branch_taken_0x134f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F60u;
        // 0x134f64: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f60) {
            ctx->pc = 0x134FFCu;
            goto label_134ffc;
        }
    }
    ctx->pc = 0x134F68u;
label_134f68:
    // 0x134f68: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x134F68u;
    {
        const bool branch_taken_0x134f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f68) {
            ctx->pc = 0x134F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134F68u;
            // 0x134f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135018u;
            goto label_135018;
        }
    }
    ctx->pc = 0x134F70u;
    // 0x134f70: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x134f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x134f74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134F74u;
    {
        const bool branch_taken_0x134f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x134F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F74u;
        // 0x134f78: 0x46006541  sub.s       $f21, $f12, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f74) {
            ctx->pc = 0x134F84u;
            goto label_134f84;
        }
    }
    ctx->pc = 0x134F7Cu;
    // 0x134f7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134F7Cu;
    {
        const bool branch_taken_0x134f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F7Cu;
        // 0x134f80: 0xc674000c  lwc1        $f20, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f7c) {
            ctx->pc = 0x134F9Cu;
            goto label_134f9c;
        }
    }
    ctx->pc = 0x134F84u;
label_134f84:
    // 0x134f84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x134f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x134f88: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134F8Cu;
    {
        const bool branch_taken_0x134f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F8Cu;
        // 0x134f90: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f8c) {
            ctx->pc = 0x134FA0u;
            goto label_134fa0;
        }
    }
    ctx->pc = 0x134F94u;
    // 0x134f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134f98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x134f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_134f9c:
    // 0x134f9c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134fa0:
    // 0x134fa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x134fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fa4: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x134FA4u;
    SET_GPR_U32(ctx, 31, 0x134FACu);
    ctx->pc = 0x134FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FA4u;
    // 0x134fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x134FA4u, 0x134FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FACu;
label_134fac:
    // 0x134fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fb0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x134FB0u;
    SET_GPR_U32(ctx, 31, 0x134FB8u);
    ctx->pc = 0x134FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FB0u;
    // 0x134fb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x134FB0u, 0x134FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FB8u;
label_134fb8:
    // 0x134fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fbc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134fbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x134fc0: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x134FC0u;
    SET_GPR_U32(ctx, 31, 0x134FC8u);
    ctx->pc = 0x134FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FC0u;
    // 0x134fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x134FC0u, 0x134FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FC8u;
label_134fc8:
    // 0x134fc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x134fcc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x134fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x134fd0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x134fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134fd4: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x134fd4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x134fd8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x134fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134fdc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x134fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x134fe0: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x134fe0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x134fe4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x134fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134fe8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x134fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x134fec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x134ff0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x134ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x134ff4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x134ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ff8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x134ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_134ffc:
    // 0x134ffc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x134ffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x135000: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x135000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x135004: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x135004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x135008: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x135008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13500c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13500cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135010: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x135010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x135014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135018:
    // 0x135018: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x135018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13501c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x13501cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135020: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x135020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135024: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x135024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135028: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x135028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13502c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13502cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135030: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x135030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135034: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x135034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135038: 0x3e00008  jr          $ra
    ctx->pc = 0x135038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135038u;
        // 0x13503c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135040u;
}
