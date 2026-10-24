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

// Function: SphereSquare
// Address: 0x135d50 - 0x135ec8
void SphereSquare_0x135d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphereSquare_0x135d50");
#endif

    switch (ctx->pc) {
        case 0x135dacu: goto label_135dac;
        case 0x135dc4u: goto label_135dc4;
        default: break;
    }

    ctx->pc = 0x135d50u;

    // 0x135d50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x135d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x135d54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x135d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x135d58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x135d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x135d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x135d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x135d64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x135d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d68: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x135d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x135d6c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x135d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x135d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x135d74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x135d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d78: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x135d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x135d7c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x135d7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135d84: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x135d84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x135d88: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x135d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135d8c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x135d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135d90: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x135d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135d94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x135d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135da0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x135da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135da4: 0xc04d4d2  jal         func_135348
    ctx->pc = 0x135DA4u;
    SET_GPR_U32(ctx, 31, 0x135DACu);
    ctx->pc = 0x135DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DA4u;
    // 0x135da8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135348u, 0x135DA4u, 0x135DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DACu;
label_135dac:
    // 0x135dac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135db0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x135db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135db4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x135db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135db8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x135db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x135dbc: 0xc04d4d2  jal         func_135348
    ctx->pc = 0x135DBCu;
    SET_GPR_U32(ctx, 31, 0x135DC4u);
    ctx->pc = 0x135DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DBCu;
    // 0x135dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135348u, 0x135DBCu, 0x135DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DC4u;
label_135dc4:
    // 0x135dc4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x135dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135dc8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x135dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135dcc: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x135dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x135dd0: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x135dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x135dd4: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x135dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x135dd8: 0x46060941  sub.s       $f5, $f1, $f6
    ctx->pc = 0x135dd8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x135ddc: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x135ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x135de0: 0x46070101  sub.s       $f4, $f0, $f7
    ctx->pc = 0x135de0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x135de4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x135de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135de8: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x135de8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x135dec: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x135decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x135df0: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x135df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x135df4: 0xc7ab0008  lwc1        $f11, 0x8($sp)
    ctx->pc = 0x135df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x135df8: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x135df8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x135dfc: 0x460810c1  sub.s       $f3, $f2, $f8
    ctx->pc = 0x135dfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x135e00: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x135e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x135e04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x135e04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x135e08: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x135e08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x135e0c: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x135e0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x135e10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x135e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135e14: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x135e14u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x135e18: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x135e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135e1c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x135e1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x135e20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x135e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x135e24: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x135e24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x135e28: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x135e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135e2c: 0x0  nop
    ctx->pc = 0x135e2cu;
    // NOP
    // 0x135e30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x135E30u;
    {
        const bool branch_taken_0x135e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E30u;
        // 0x135e34: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e30) {
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x135E38u;
    // 0x135e38: 0x505d000a  beql        $v0, $sp, . + 4 + (0xA << 2)
    ctx->pc = 0x135E38u;
    {
        const bool branch_taken_0x135e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        if (branch_taken_0x135e38) {
            ctx->pc = 0x135E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135E38u;
            // 0x135e3c: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135E64u;
            goto label_135e64;
        }
    }
    ctx->pc = 0x135E40u;
    // 0x135e40: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x135e40u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x135e44: 0xe7aa0024  swc1        $f10, 0x24($sp)
    ctx->pc = 0x135e44u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x135e48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135E48u;
    {
        const bool branch_taken_0x135e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E48u;
        // 0x135e4c: 0xe7ab0028  swc1        $f11, 0x28($sp) (Delay Slot)
        { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e48) {
            ctx->pc = 0x135E60u;
            goto label_135e60;
        }
    }
    ctx->pc = 0x135E50u;
label_135e50:
    // 0x135e50: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x135e50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x135e54: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x135e54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x135e58: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x135e58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x135e5c: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x135e5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_135e60:
    // 0x135e60: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x135e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_135e64:
    // 0x135e64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135e68: 0x0  nop
    ctx->pc = 0x135e68u;
    // NOP
    // 0x135e6c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x135E6Cu;
    {
        const bool branch_taken_0x135e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E6Cu;
        // 0x135e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e6c) {
            ctx->pc = 0x135E9Cu;
            goto label_135e9c;
        }
    }
    ctx->pc = 0x135E74u;
    // 0x135e74: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x135E74u;
    {
        const bool branch_taken_0x135e74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e74) {
            ctx->pc = 0x135E98u;
            goto label_135e98;
        }
    }
    ctx->pc = 0x135E7Cu;
    // 0x135e7c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135E7Cu;
    {
        const bool branch_taken_0x135e7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x135E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E7Cu;
        // 0x135e80: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e7c) {
            ctx->pc = 0x135E98u;
            goto label_135e98;
        }
    }
    ctx->pc = 0x135E84u;
    // 0x135e84: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x135e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135e88: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x135e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e8c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x135e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x135e90: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x135e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x135e94: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x135e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_135e98:
    // 0x135e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135e9c:
    // 0x135e9c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x135e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135ea0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x135ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135ea4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x135ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135ea8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x135ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135eac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x135eacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135eb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135eb4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x135eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x135EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB8u;
        // 0x135ebc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135EC0u;
    // 0x135ec0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x135ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x135ec4: 0x0  nop
    ctx->pc = 0x135ec4u;
    // NOP
    ctx->pc = 0x135ec8u;
}
