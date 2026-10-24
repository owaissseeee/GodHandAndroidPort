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

// Function: func_001D6F30
// Address: 0x1d6f30 - 0x1d6fe0
void func_001D6F30_0x1d6f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6F30_0x1d6f30");
#endif

    switch (ctx->pc) {
        case 0x1d6fc4u: goto label_1d6fc4;
        default: break;
    }

    ctx->pc = 0x1d6f30u;

    // 0x1d6f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6f34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f40: 0x9e030004  lwu         $v1, 0x4($s0)
    ctx->pc = 0x1d6f40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d6f44: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x1d6f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x1d6f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6f4c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D6F4Cu;
    {
        const bool branch_taken_0x1d6f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F4Cu;
        // 0x1d6f50: 0x3113b  dsra        $v0, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f4c) {
            ctx->pc = 0x1D6FCCu;
            goto label_1d6fcc;
        }
    }
    ctx->pc = 0x1D6F54u;
    // 0x1d6f54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6f58: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D6F58u;
    {
        const bool branch_taken_0x1d6f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f58) {
            ctx->pc = 0x1D6F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6F58u;
            // 0x1d6f5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6FD0u;
            goto label_1d6fd0;
        }
    }
    ctx->pc = 0x1D6F60u;
    // 0x1d6f60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6f64: 0x3c013e56  lui         $at, 0x3E56
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15958 << 16));
    // 0x1d6f68: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1d6f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1d6f6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6f70: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f74: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1d6f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1d6f78: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1d6f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1d6f7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d6f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6f84: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d6f88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6f8c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6f90: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d6f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f94: 0x0  nop
    ctx->pc = 0x1d6f94u;
    // NOP
    // 0x1d6f98: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6F98u;
    {
        const bool branch_taken_0x1d6f98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F98u;
        // 0x1d6f9c: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f98) {
            ctx->pc = 0x1D6FBCu;
            goto label_1d6fbc;
        }
    }
    ctx->pc = 0x1D6FA0u;
    // 0x1d6fa0: 0xe4420104  swc1        $f2, 0x104($v0)
    ctx->pc = 0x1d6fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d6fa4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1d6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1d6fa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d6fac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d6facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d6fb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d6fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d6fb4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d6fb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6fbc:
    // 0x1d6fbc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1D6FBCu;
    SET_GPR_U32(ctx, 31, 0x1D6FC4u);
    ctx->pc = 0x1D6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6FBCu;
    // 0x1d6fc0: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1D6FBCu, 0x1D6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FC4u;
label_1d6fc4:
    // 0x1d6fc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6fc8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1d6fcc:
    // 0x1d6fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fd0:
    // 0x1d6fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FD4u;
        // 0x1d6fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6FDCu;
    // 0x1d6fdc: 0x0  nop
    ctx->pc = 0x1d6fdcu;
    // NOP
    ctx->pc = 0x1d6fe0u;
}
