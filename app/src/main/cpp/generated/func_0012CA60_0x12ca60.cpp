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

// Function: func_0012CA60
// Address: 0x12ca60 - 0x12cae0
void func_0012CA60_0x12ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012CA60_0x12ca60");
#endif

    ctx->pc = 0x12ca60u;

    // 0x12ca60: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x12ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12ca64: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x12ca68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12ca6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA6Cu;
    {
        const bool branch_taken_0x12ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA6Cu;
        // 0x12ca70: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca6c) {
            ctx->pc = 0x12CA7Cu;
            goto label_12ca7c;
        }
    }
    ctx->pc = 0x12CA74u;
    // 0x12ca74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12CA74u;
    {
        const bool branch_taken_0x12ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA74u;
        // 0x12ca78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca74) {
            ctx->pc = 0x12CAD4u;
            goto label_12cad4;
        }
    }
    ctx->pc = 0x12CA7Cu;
label_12ca7c:
    // 0x12ca7c: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x12ca7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x12ca80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA80u;
    {
        const bool branch_taken_0x12ca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA80u;
        // 0x12ca84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca80) {
            ctx->pc = 0x12CA94u;
            goto label_12ca94;
        }
    }
    ctx->pc = 0x12CA88u;
    // 0x12ca88: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x12ca8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CA8Cu;
    {
        const bool branch_taken_0x12ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA8Cu;
        // 0x12ca90: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca8c) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12CA94u;
label_12ca94:
    // 0x12ca94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12ca94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ca98:
    // 0x12ca98: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12CA98u;
    {
        const bool branch_taken_0x12ca98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA98u;
        // 0x12ca9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca98) {
            ctx->pc = 0x12CAD4u;
            goto label_12cad4;
        }
    }
    ctx->pc = 0x12CAA0u;
    // 0x12caa0: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x12caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x12caa4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x12caa8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12caac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12caacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cab0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x12cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cab4: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x12cab8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12cab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12cabc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cac4: 0x0  nop
    ctx->pc = 0x12cac4u;
    // NOP
    // 0x12cac8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x12CAC8u;
    {
        const bool branch_taken_0x12cac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAC8u;
        // 0x12cacc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cac8) {
            ctx->pc = 0x12CAD4u;
            goto label_12cad4;
        }
    }
    ctx->pc = 0x12CAD0u;
    // 0x12cad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12cad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cad4:
    // 0x12cad4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAD4u;
        // 0x12cad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CADCu;
    // 0x12cadc: 0x0  nop
    ctx->pc = 0x12cadcu;
    // NOP
    ctx->pc = 0x12cae0u;
}
