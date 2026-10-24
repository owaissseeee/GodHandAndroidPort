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

// Function: func_001D0DF8
// Address: 0x1d0df8 - 0x1d0ea8
void func_001D0DF8_0x1d0df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0DF8_0x1d0df8");
#endif

    switch (ctx->pc) {
        case 0x1d0e8cu: goto label_1d0e8c;
        default: break;
    }

    ctx->pc = 0x1d0df8u;

    // 0x1d0df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0dfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e08: 0x9e030004  lwu         $v1, 0x4($s0)
    ctx->pc = 0x1d0e08u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0e0c: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1d0e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1d0e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0e14: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D0E14u;
    {
        const bool branch_taken_0x1d0e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E14u;
        // 0x1d0e18: 0x310bb  dsra        $v0, $v1, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e14) {
            ctx->pc = 0x1D0E94u;
            goto label_1d0e94;
        }
    }
    ctx->pc = 0x1D0E1Cu;
    // 0x1d0e1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0e20: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0E20u;
    {
        const bool branch_taken_0x1d0e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e20) {
            ctx->pc = 0x1D0E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E20u;
            // 0x1d0e24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E98u;
            goto label_1d0e98;
        }
    }
    ctx->pc = 0x1D0E28u;
    // 0x1d0e28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0e2c: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x1d0e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x1d0e30: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1d0e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1d0e34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0e38: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1d0e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1d0e40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1d0e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1d0e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d0e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d0e48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0e4c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d0e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0e54: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e58: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d0e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0e5c: 0x0  nop
    ctx->pc = 0x1d0e5cu;
    // NOP
    // 0x1d0e60: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E60u;
    {
        const bool branch_taken_0x1d0e60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E60u;
        // 0x1d0e64: 0x2404fffb  addiu       $a0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e60) {
            ctx->pc = 0x1D0E84u;
            goto label_1d0e84;
        }
    }
    ctx->pc = 0x1D0E68u;
    // 0x1d0e68: 0xe4420104  swc1        $f2, 0x104($v0)
    ctx->pc = 0x1d0e68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d0e6c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d0e70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0e74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0e78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d0e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d0e7c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1d0e80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0e84:
    // 0x1d0e84: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1D0E84u;
    SET_GPR_U32(ctx, 31, 0x1D0E8Cu);
    ctx->pc = 0x1D0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E84u;
    // 0x1d0e88: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1D0E84u, 0x1D0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E8Cu;
label_1d0e8c:
    // 0x1d0e8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0e90: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_1d0e94:
    // 0x1d0e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0e98:
    // 0x1d0e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E9Cu;
        // 0x1d0ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EA4u;
    // 0x1d0ea4: 0x0  nop
    ctx->pc = 0x1d0ea4u;
    // NOP
    ctx->pc = 0x1d0ea8u;
}
