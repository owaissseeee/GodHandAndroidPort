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

// Function: func_001D0CE8
// Address: 0x1d0ce8 - 0x1d0d90
void func_001D0CE8_0x1d0ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0CE8_0x1d0ce8");
#endif

    switch (ctx->pc) {
        case 0x1d0d44u: goto label_1d0d44;
        default: break;
    }

    ctx->pc = 0x1d0ce8u;

    // 0x1d0ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf8: 0x9e030004  lwu         $v1, 0x4($s0)
    ctx->pc = 0x1d0cf8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0cfc: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1d0cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1d0d00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0d04: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D0D04u;
    {
        const bool branch_taken_0x1d0d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d04) {
            ctx->pc = 0x1D0D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0D04u;
            // 0x1d0d08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D80u;
            goto label_1d0d80;
        }
    }
    ctx->pc = 0x1D0D0Cu;
    // 0x1d0d0c: 0x310bb  dsra        $v0, $v1, 2
    ctx->pc = 0x1d0d0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
    // 0x1d0d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d0d14: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0D14u;
    {
        const bool branch_taken_0x1d0d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d14) {
            ctx->pc = 0x1D0D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0D14u;
            // 0x1d0d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D80u;
            goto label_1d0d80;
        }
    }
    ctx->pc = 0x1D0D1Cu;
    // 0x1d0d1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0d20: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x1d0d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x1d0d24: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1d0d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1d0d28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0d2c: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1d0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0d34: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1d0d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1d0d38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0d3c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1D0D3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D44u);
    ctx->pc = 0x1D0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D3Cu;
    // 0x1d0d40: 0xc44c0104  lwc1        $f12, 0x104($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1D0D3Cu, 0x1D0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D44u;
label_1d0d44:
    // 0x1d0d44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0d48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0d4c: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d0d50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0d54: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x1d0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0d58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0d5c: 0x0  nop
    ctx->pc = 0x1d0d5cu;
    // NOP
    // 0x1d0d60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0D60u;
    {
        const bool branch_taken_0x1d0d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D60u;
        // 0x1d0d64: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d60) {
            ctx->pc = 0x1D0D7Cu;
            goto label_1d0d7c;
        }
    }
    ctx->pc = 0x1D0D68u;
    // 0x1d0d68: 0xe4410104  swc1        $f1, 0x104($v0)
    ctx->pc = 0x1d0d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x1d0d6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0d70: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d0d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d0d74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0d78: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1d0d7c:
    // 0x1d0d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0d80:
    // 0x1d0d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D84u;
        // 0x1d0d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D8Cu;
    // 0x1d0d8c: 0x0  nop
    ctx->pc = 0x1d0d8cu;
    // NOP
    ctx->pc = 0x1d0d90u;
}
