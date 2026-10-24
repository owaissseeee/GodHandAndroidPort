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

// Function: func_001D6E20
// Address: 0x1d6e20 - 0x1d6ec8
void func_001D6E20_0x1d6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6E20_0x1d6e20");
#endif

    switch (ctx->pc) {
        case 0x1d6e7cu: goto label_1d6e7c;
        default: break;
    }

    ctx->pc = 0x1d6e20u;

    // 0x1d6e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6e24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e30: 0x9e030004  lwu         $v1, 0x4($s0)
    ctx->pc = 0x1d6e30u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d6e34: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x1d6e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x1d6e38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6e3c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D6E3Cu;
    {
        const bool branch_taken_0x1d6e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e3c) {
            ctx->pc = 0x1D6E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6E3Cu;
            // 0x1d6e40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EB8u;
            goto label_1d6eb8;
        }
    }
    ctx->pc = 0x1D6E44u;
    // 0x1d6e44: 0x3113b  dsra        $v0, $v1, 4
    ctx->pc = 0x1d6e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
    // 0x1d6e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6e4c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6E4Cu;
    {
        const bool branch_taken_0x1d6e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e4c) {
            ctx->pc = 0x1D6E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6E4Cu;
            // 0x1d6e50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6EB8u;
            goto label_1d6eb8;
        }
    }
    ctx->pc = 0x1D6E54u;
    // 0x1d6e54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6e58: 0x3c013e56  lui         $at, 0x3E56
    ctx->pc = 0x1d6e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15958 << 16));
    // 0x1d6e5c: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1d6e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1d6e60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d6e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6e64: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1d6e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6e68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6e6c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1d6e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1d6e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6e74: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1D6E74u;
    SET_GPR_U32(ctx, 31, 0x1D6E7Cu);
    ctx->pc = 0x1D6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E74u;
    // 0x1d6e78: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1D6E74u, 0x1D6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E7Cu;
label_1d6e7c:
    // 0x1d6e7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6e80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6e84: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d6e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6e8c: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6e90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6e94: 0x0  nop
    ctx->pc = 0x1d6e94u;
    // NOP
    // 0x1d6e98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6E98u;
    {
        const bool branch_taken_0x1d6e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E98u;
        // 0x1d6e9c: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e98) {
            ctx->pc = 0x1D6EB4u;
            goto label_1d6eb4;
        }
    }
    ctx->pc = 0x1D6EA0u;
    // 0x1d6ea0: 0xe4410104  swc1        $f1, 0x104($v0)
    ctx->pc = 0x1d6ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d6ea4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d6ea8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d6ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d6eac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d6eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d6eb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1d6eb4:
    // 0x1d6eb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6eb8:
    // 0x1d6eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EBCu;
        // 0x1d6ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6EC4u;
    // 0x1d6ec4: 0x0  nop
    ctx->pc = 0x1d6ec4u;
    // NOP
    ctx->pc = 0x1d6ec8u;
}
