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

// Function: func_002E6EE8
// Address: 0x2e6ee8 - 0x2e6fd8
void func_002E6EE8_0x2e6ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E6EE8_0x2e6ee8");
#endif

    switch (ctx->pc) {
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6fc4u: goto label_2e6fc4;
        default: break;
    }

    ctx->pc = 0x2e6ee8u;

    // 0x2e6ee8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e6eec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e6eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e6ef0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e6ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e6ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ef8: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x2e6efc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e6efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e6f00: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E6F00u;
    {
        const bool branch_taken_0x2e6f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F00u;
        // 0x2e6f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f00) {
            ctx->pc = 0x2E6FBCu;
            goto label_2e6fbc;
        }
    }
    ctx->pc = 0x2E6F08u;
    // 0x2e6f08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6f0c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F14u);
    ctx->pc = 0x2E6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F0Cu;
    // 0x2e6f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E6F0Cu, 0x2E6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F14u;
label_2e6f14:
    // 0x2e6f14: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6f18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e6f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6f1c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e6f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e6f20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e6f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6f24: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2e6f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e6f28: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e6f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6f2c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2e6f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6f30: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6f38: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2e6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e6f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6f44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e6f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e6f48: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6f4c: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x2e6f50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e6f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e6f54: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e6f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e6f58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e6f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e6f5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e6f60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2e6f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2e6f64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e6f68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e6f6c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e6f70: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2e6f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e6f74: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2e6f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6f78: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2e6f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e6f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e6f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f80: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e6f84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e6f84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f88: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e6f8c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F94u);
    ctx->pc = 0x2E6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F8Cu;
    // 0x2e6f90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E6F8Cu, 0x2E6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F94u;
label_2e6f94:
    // 0x2e6f94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6F94u;
    {
        const bool branch_taken_0x2e6f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f94) {
            ctx->pc = 0x2E6FACu;
            goto label_2e6fac;
        }
    }
    ctx->pc = 0x2E6F9Cu;
    // 0x2e6f9c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x2e6fa0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e6fa4: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x2e6fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x2e6fa8: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_2e6fac:
    // 0x2e6fac: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x2e6fb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e6fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e6fb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6FB4u;
    {
        const bool branch_taken_0x2e6fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB4u;
        // 0x2e6fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fb4) {
            ctx->pc = 0x2E6FC4u;
            goto label_2e6fc4;
        }
    }
    ctx->pc = 0x2E6FBCu;
label_2e6fbc:
    // 0x2e6fbc: 0xc0b9ae2  jal         func_2E6B88
    ctx->pc = 0x2E6FBCu;
    SET_GPR_U32(ctx, 31, 0x2E6FC4u);
    ctx->pc = 0x2E6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FBCu;
    // 0x2e6fc0: 0xc48c02e0  lwc1        $f12, 0x2E0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6B88u, 0x2E6FBCu, 0x2E6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FC4u;
label_2e6fc4:
    // 0x2e6fc4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e6fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6fc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e6fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FCCu;
        // 0x2e6fd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6FD4u;
    // 0x2e6fd4: 0x0  nop
    ctx->pc = 0x2e6fd4u;
    // NOP
    ctx->pc = 0x2e6fd8u;
}
