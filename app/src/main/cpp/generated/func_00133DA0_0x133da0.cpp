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

// Function: func_00133DA0
// Address: 0x133da0 - 0x134270
void func_00133DA0_0x133da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133DA0_0x133da0");
#endif

    switch (ctx->pc) {
        case 0x133de8u: goto label_133de8;
        case 0x133e60u: goto label_133e60;
        case 0x133ebcu: goto label_133ebc;
        case 0x133f18u: goto label_133f18;
        case 0x133f70u: goto label_133f70;
        case 0x133fd0u: goto label_133fd0;
        case 0x13402cu: goto label_13402c;
        case 0x134088u: goto label_134088;
        case 0x1340e0u: goto label_1340e0;
        case 0x134138u: goto label_134138;
        case 0x134190u: goto label_134190;
        case 0x1341e8u: goto label_1341e8;
        case 0x134240u: goto label_134240;
        default: break;
    }

    ctx->pc = 0x133da0u;

    // 0x133da0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x133da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133da8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x133da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x133dac: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x133dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133db4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x133db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x133db8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x133db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133dbc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x133dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x133dc0: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x133dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x133dc4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x133dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x133dc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133dcc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x133dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x133dd0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x133dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x133dd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x133dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133dd8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x133dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x133ddc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x133ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x133de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x133de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x133de4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x133de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_133de8:
    // 0x133de8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x133de8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133dec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133df0: 0x0  nop
    ctx->pc = 0x133df0u;
    // NOP
    // 0x133df4: 0x0  nop
    ctx->pc = 0x133df4u;
    // NOP
    // 0x133df8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x133DF8u;
    {
        const bool branch_taken_0x133df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x133DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DF8u;
        // 0x133dfc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133df8) {
            ctx->pc = 0x133DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133de8;
        }
    }
    ctx->pc = 0x133E00u;
    // 0x133e00: 0x261500f0  addiu       $s5, $s0, 0xF0
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x133e04: 0x13b50008  beq         $sp, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E04u;
    {
        const bool branch_taken_0x133e04 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 21));
        ctx->pc = 0x133E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E04u;
        // 0x133e08: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e04) {
            ctx->pc = 0x133E28u;
            goto label_133e28;
        }
    }
    ctx->pc = 0x133E0Cu;
    // 0x133e0c: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x133e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e10: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x133e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e14: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x133e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133e18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133e1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133e20: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x133e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133e24: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x133e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133e28:
    // 0x133e28: 0x261e0100  addiu       $fp, $s0, 0x100
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x133e2c: 0x105e0008  beq         $v0, $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E2Cu;
    {
        const bool branch_taken_0x133e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x133E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E2Cu;
        // 0x133e30: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e2c) {
            ctx->pc = 0x133E50u;
            goto label_133e50;
        }
    }
    ctx->pc = 0x133E34u;
    // 0x133e34: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x133e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e38: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x133e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e3c: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x133e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133e40: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133e44: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133e48: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x133e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133e4c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x133e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133e50:
    // 0x133e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133e58: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x133E58u;
    SET_GPR_U32(ctx, 31, 0x133E60u);
    ctx->pc = 0x133E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E58u;
    // 0x133e5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x133E58u, 0x133E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E60u;
label_133e60:
    // 0x133e60: 0x13be0008  beq         $sp, $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E60u;
    {
        const bool branch_taken_0x133e60 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 30));
        ctx->pc = 0x133E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E60u;
        // 0x133e64: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e60) {
            ctx->pc = 0x133E84u;
            goto label_133e84;
        }
    }
    ctx->pc = 0x133E68u;
    // 0x133e68: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x133e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e6c: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x133e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e70: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x133e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133e74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133e78: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133e7c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x133e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133e80: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133e84:
    // 0x133e84: 0x26170110  addiu       $s7, $s0, 0x110
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x133e88: 0x10970008  beq         $a0, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x133E88u;
    {
        const bool branch_taken_0x133e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x133E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E88u;
        // 0x133e8c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e88) {
            ctx->pc = 0x133EACu;
            goto label_133eac;
        }
    }
    ctx->pc = 0x133E90u;
    // 0x133e90: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x133e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e94: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x133e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e98: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x133e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133e9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133ea0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133ea4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x133ea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133ea8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133eac:
    // 0x133eac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133eb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133eb4: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x133EB4u;
    SET_GPR_U32(ctx, 31, 0x133EBCu);
    ctx->pc = 0x133EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133EB4u;
    // 0x133eb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x133EB4u, 0x133EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EBCu;
label_133ebc:
    // 0x133ebc: 0x13b70008  beq         $sp, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x133EBCu;
    {
        const bool branch_taken_0x133ebc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 23));
        ctx->pc = 0x133EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EBCu;
        // 0x133ec0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ebc) {
            ctx->pc = 0x133EE0u;
            goto label_133ee0;
        }
    }
    ctx->pc = 0x133EC4u;
    // 0x133ec4: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x133ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ec8: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x133ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133ecc: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x133eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133ed0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133ed4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133ed8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x133ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133edc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133ee0:
    // 0x133ee0: 0x26160120  addiu       $s6, $s0, 0x120
    ctx->pc = 0x133ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x133ee4: 0x10560008  beq         $v0, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x133EE4u;
    {
        const bool branch_taken_0x133ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x133EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EE4u;
        // 0x133ee8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ee4) {
            ctx->pc = 0x133F08u;
            goto label_133f08;
        }
    }
    ctx->pc = 0x133EECu;
    // 0x133eec: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x133eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133ef0: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x133ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133ef4: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x133ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133ef8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133efc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133f00: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x133f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133f04: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x133f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133f08:
    // 0x133f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133f10: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x133F10u;
    SET_GPR_U32(ctx, 31, 0x133F18u);
    ctx->pc = 0x133F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F10u;
    // 0x133f14: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x133F10u, 0x133F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F18u;
label_133f18:
    // 0x133f18: 0x13b60008  beq         $sp, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x133F18u;
    {
        const bool branch_taken_0x133f18 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 22));
        ctx->pc = 0x133F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F18u;
        // 0x133f1c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f18) {
            ctx->pc = 0x133F3Cu;
            goto label_133f3c;
        }
    }
    ctx->pc = 0x133F20u;
    // 0x133f20: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x133f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f24: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x133f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f28: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x133f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133f2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133f30: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133f34: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x133f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133f38: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x133f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133f3c:
    // 0x133f3c: 0x10950008  beq         $a0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x133F3Cu;
    {
        const bool branch_taken_0x133f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x133F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F3Cu;
        // 0x133f40: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f3c) {
            ctx->pc = 0x133F60u;
            goto label_133f60;
        }
    }
    ctx->pc = 0x133F44u;
    // 0x133f44: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x133f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f48: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x133f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f4c: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x133f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133f50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133f54: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133f58: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x133f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133f5c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x133f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133f60:
    // 0x133f60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133f68: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x133F68u;
    SET_GPR_U32(ctx, 31, 0x133F70u);
    ctx->pc = 0x133F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F68u;
    // 0x133f6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x133F68u, 0x133F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F70u;
label_133f70:
    // 0x133f70: 0x26110130  addiu       $s1, $s0, 0x130
    ctx->pc = 0x133f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x133f74: 0x13b10008  beq         $sp, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x133F74u;
    {
        const bool branch_taken_0x133f74 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x133F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F74u;
        // 0x133f78: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f74) {
            ctx->pc = 0x133F98u;
            goto label_133f98;
        }
    }
    ctx->pc = 0x133F7Cu;
    // 0x133f7c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x133f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133f84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x133f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133f88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133f8c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x133f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133f90: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x133f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133f94: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x133f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133f98:
    // 0x133f98: 0x26140140  addiu       $s4, $s0, 0x140
    ctx->pc = 0x133f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x133f9c: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x133F9Cu;
    {
        const bool branch_taken_0x133f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x133FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F9Cu;
        // 0x133fa0: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f9c) {
            ctx->pc = 0x133FC0u;
            goto label_133fc0;
        }
    }
    ctx->pc = 0x133FA4u;
    // 0x133fa4: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x133fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133fa8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x133fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133fac: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x133facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133fb0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133fb4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x133fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133fb8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x133fb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133fbc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x133fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_133fc0:
    // 0x133fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x133fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133fc8: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x133FC8u;
    SET_GPR_U32(ctx, 31, 0x133FD0u);
    ctx->pc = 0x133FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FC8u;
    // 0x133fcc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x133FC8u, 0x133FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FD0u;
label_133fd0:
    // 0x133fd0: 0x13b40008  beq         $sp, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x133FD0u;
    {
        const bool branch_taken_0x133fd0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x133FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FD0u;
        // 0x133fd4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fd0) {
            ctx->pc = 0x133FF4u;
            goto label_133ff4;
        }
    }
    ctx->pc = 0x133FD8u;
    // 0x133fd8: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x133fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133fdc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x133fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133fe0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x133fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133fe4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x133fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133fe8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x133fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x133fec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x133fecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x133ff0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x133ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_133ff4:
    // 0x133ff4: 0x26130150  addiu       $s3, $s0, 0x150
    ctx->pc = 0x133ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x133ff8: 0x10930008  beq         $a0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x133FF8u;
    {
        const bool branch_taken_0x133ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x133FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FF8u;
        // 0x133ffc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ff8) {
            ctx->pc = 0x13401Cu;
            goto label_13401c;
        }
    }
    ctx->pc = 0x134000u;
    // 0x134000: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x134000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134004: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x134004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134008: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x134008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13400c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x13400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x134010: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x134010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x134014: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x134014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x134018: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13401c:
    // 0x13401c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134024: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x134024u;
    SET_GPR_U32(ctx, 31, 0x13402Cu);
    ctx->pc = 0x134028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134024u;
    // 0x134028: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x134024u, 0x13402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13402Cu;
label_13402c:
    // 0x13402c: 0x13b30008  beq         $sp, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13402Cu;
    {
        const bool branch_taken_0x13402c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x134030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13402Cu;
        // 0x134030: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13402c) {
            ctx->pc = 0x134050u;
            goto label_134050;
        }
    }
    ctx->pc = 0x134034u;
    // 0x134034: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x134034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134038: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x134038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13403c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x13403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134040: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x134040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x134044: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x134044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x134048: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x134048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13404c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_134050:
    // 0x134050: 0x26120160  addiu       $s2, $s0, 0x160
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x134054: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x134054u;
    {
        const bool branch_taken_0x134054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x134058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134054u;
        // 0x134058: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134054) {
            ctx->pc = 0x134078u;
            goto label_134078;
        }
    }
    ctx->pc = 0x13405Cu;
    // 0x13405c: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x13405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134060: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x134060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134064: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x134064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134068: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x134068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13406c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x13406cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x134070: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x134070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x134074: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_134078:
    // 0x134078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13407c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134080: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x134080u;
    SET_GPR_U32(ctx, 31, 0x134088u);
    ctx->pc = 0x134084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134080u;
    // 0x134084: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x134080u, 0x134088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134088u;
label_134088:
    // 0x134088: 0x13b20008  beq         $sp, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x134088u;
    {
        const bool branch_taken_0x134088 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x13408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134088u;
        // 0x13408c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134088) {
            ctx->pc = 0x1340ACu;
            goto label_1340ac;
        }
    }
    ctx->pc = 0x134090u;
    // 0x134090: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x134090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134094: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x134094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134098: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x134098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13409c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1340a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1340a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1340a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1340a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1340a8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1340a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1340ac:
    // 0x1340ac: 0x10910008  beq         $a0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1340ACu;
    {
        const bool branch_taken_0x1340ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x1340B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340ACu;
        // 0x1340b0: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340ac) {
            ctx->pc = 0x1340D0u;
            goto label_1340d0;
        }
    }
    ctx->pc = 0x1340B4u;
    // 0x1340b4: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x1340b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1340b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1340b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1340bc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1340bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1340c0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1340c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1340c4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1340c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1340c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1340c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1340cc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1340d0:
    // 0x1340d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1340d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1340d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1340d8: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x1340D8u;
    SET_GPR_U32(ctx, 31, 0x1340E0u);
    ctx->pc = 0x1340DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340D8u;
    // 0x1340dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x1340D8u, 0x1340E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340E0u;
label_1340e0:
    // 0x1340e0: 0x13b50008  beq         $sp, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1340E0u;
    {
        const bool branch_taken_0x1340e0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 21));
        ctx->pc = 0x1340E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340E0u;
        // 0x1340e4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340e0) {
            ctx->pc = 0x134104u;
            goto label_134104;
        }
    }
    ctx->pc = 0x1340E8u;
    // 0x1340e8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1340e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1340ec: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1340ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1340f0: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x1340f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1340f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1340f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1340f8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1340f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1340fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1340fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x134100: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_134104:
    // 0x134104: 0x10510008  beq         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x134104u;
    {
        const bool branch_taken_0x134104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x134108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134104u;
        // 0x134108: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134104) {
            ctx->pc = 0x134128u;
            goto label_134128;
        }
    }
    ctx->pc = 0x13410Cu;
    // 0x13410c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x13410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134110: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x134110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x134114: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x134114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134118: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x134118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13411c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134120: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x134120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x134124: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x134124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_134128:
    // 0x134128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13412c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134130: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x134130u;
    SET_GPR_U32(ctx, 31, 0x134138u);
    ctx->pc = 0x134134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134130u;
    // 0x134134: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x134130u, 0x134138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134138u;
label_134138:
    // 0x134138: 0x13be0008  beq         $sp, $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x134138u;
    {
        const bool branch_taken_0x134138 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 30));
        ctx->pc = 0x13413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134138u;
        // 0x13413c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134138) {
            ctx->pc = 0x13415Cu;
            goto label_13415c;
        }
    }
    ctx->pc = 0x134140u;
    // 0x134140: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x134140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134144: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x134144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134148: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x134148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13414c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x13414cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x134150: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x134150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x134154: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x134154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x134158: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_13415c:
    // 0x13415c: 0x10940008  beq         $a0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x13415Cu;
    {
        const bool branch_taken_0x13415c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x134160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13415Cu;
        // 0x134160: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13415c) {
            ctx->pc = 0x134180u;
            goto label_134180;
        }
    }
    ctx->pc = 0x134164u;
    // 0x134164: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x134164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134168: 0xc6010140  lwc1        $f1, 0x140($s0)
    ctx->pc = 0x134168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13416c: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x13416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134170: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x134170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x134174: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x134174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x134178: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x134178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13417c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_134180:
    // 0x134180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x134184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134188: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x134188u;
    SET_GPR_U32(ctx, 31, 0x134190u);
    ctx->pc = 0x13418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134188u;
    // 0x13418c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x134188u, 0x134190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134190u;
label_134190:
    // 0x134190: 0x13b70008  beq         $sp, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x134190u;
    {
        const bool branch_taken_0x134190 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 23));
        ctx->pc = 0x134194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134190u;
        // 0x134194: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134190) {
            ctx->pc = 0x1341B4u;
            goto label_1341b4;
        }
    }
    ctx->pc = 0x134198u;
    // 0x134198: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x134198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13419c: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x13419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1341a0: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x1341a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1341a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1341a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1341a8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1341a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1341ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1341acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1341b0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1341b4:
    // 0x1341b4: 0x10530008  beq         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1341B4u;
    {
        const bool branch_taken_0x1341b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1341B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341B4u;
        // 0x1341b8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341b4) {
            ctx->pc = 0x1341D8u;
            goto label_1341d8;
        }
    }
    ctx->pc = 0x1341BCu;
    // 0x1341bc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1341bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1341c0: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1341c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1341c4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1341c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1341c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1341c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1341cc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1341ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1341d0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1341d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1341d4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1341d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1341d8:
    // 0x1341d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1341d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1341dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1341e0: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x1341E0u;
    SET_GPR_U32(ctx, 31, 0x1341E8u);
    ctx->pc = 0x1341E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341E0u;
    // 0x1341e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x1341E0u, 0x1341E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341E8u;
label_1341e8:
    // 0x1341e8: 0x13b60008  beq         $sp, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1341E8u;
    {
        const bool branch_taken_0x1341e8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 22));
        ctx->pc = 0x1341ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341E8u;
        // 0x1341ec: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341e8) {
            ctx->pc = 0x13420Cu;
            goto label_13420c;
        }
    }
    ctx->pc = 0x1341F0u;
    // 0x1341f0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x1341f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1341f4: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x1341f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1341f8: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x1341f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1341fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1341fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x134200: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x134200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x134204: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x134204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x134208: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x134208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_13420c:
    // 0x13420c: 0x10920008  beq         $a0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13420Cu;
    {
        const bool branch_taken_0x13420c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x134210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13420Cu;
        // 0x134210: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13420c) {
            ctx->pc = 0x134230u;
            goto label_134230;
        }
    }
    ctx->pc = 0x134214u;
    // 0x134214: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x134214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134218: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x134218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13421c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x13421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134220: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x134220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x134224: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x134224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x134228: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x134228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13422c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x13422cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_134230:
    // 0x134230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134234: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x134234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134238: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x134238u;
    SET_GPR_U32(ctx, 31, 0x134240u);
    ctx->pc = 0x13423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134238u;
    // 0x13423c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x134238u, 0x134240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134240u;
label_134240:
    // 0x134240: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x134240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x134244: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x134244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x134248: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x134248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13424c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x13424cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134250: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x134250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134254: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x134254u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13425c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x13425cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134260: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x134260u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134264: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134268: 0x3e00008  jr          $ra
    ctx->pc = 0x134268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134268u;
        // 0x13426c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134270u;
}
