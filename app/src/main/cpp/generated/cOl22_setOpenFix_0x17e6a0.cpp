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

// Function: cOl22_setOpenFix
// Address: 0x17e6a0 - 0x17e738
void cOl22_setOpenFix_0x17e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl22_setOpenFix_0x17e6a0");
#endif

    ctx->pc = 0x17e6a0u;

    // 0x17e6a0: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x17e6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17e6a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17E6A4u;
    {
        const bool branch_taken_0x17e6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6A4u;
        // 0x17e6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6a4) {
            ctx->pc = 0x17E724u;
            goto label_17e724;
        }
    }
    ctx->pc = 0x17E6ACu;
    // 0x17e6ac: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17e6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17e6b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E6B0u;
    {
        const bool branch_taken_0x17e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6B0u;
        // 0x17e6b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6b0) {
            ctx->pc = 0x17E6C4u;
            goto label_17e6c4;
        }
    }
    ctx->pc = 0x17E6B8u;
    // 0x17e6b8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17e6bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E6BCu;
    {
        const bool branch_taken_0x17e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6BCu;
        // 0x17e6c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6bc) {
            ctx->pc = 0x17E6C8u;
            goto label_17e6c8;
        }
    }
    ctx->pc = 0x17E6C4u;
label_17e6c4:
    // 0x17e6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e6c8:
    // 0x17e6c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17E6C8u;
    {
        const bool branch_taken_0x17e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C8u;
        // 0x17e6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6c8) {
            ctx->pc = 0x17E70Cu;
            goto label_17e70c;
        }
    }
    ctx->pc = 0x17E6D0u;
    // 0x17e6d0: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17e6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17e6d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E6D4u;
    {
        const bool branch_taken_0x17e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6D4u;
        // 0x17e6d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6d4) {
            ctx->pc = 0x17E6E8u;
            goto label_17e6e8;
        }
    }
    ctx->pc = 0x17E6DCu;
    // 0x17e6dc: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17e6e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E6E0u;
    {
        const bool branch_taken_0x17e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6E0u;
        // 0x17e6e4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6e0) {
            ctx->pc = 0x17E6ECu;
            goto label_17e6ec;
        }
    }
    ctx->pc = 0x17E6E8u;
label_17e6e8:
    // 0x17e6e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17e6e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e6ec:
    // 0x17e6ec: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x17e6f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17e6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17e6f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e6f8: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17e6fc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17e6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17e700: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17e700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17e704: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17e708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e70c:
    // 0x17e70c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17e70cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e710: 0xa0820601  sb          $v0, 0x601($a0)
    ctx->pc = 0x17e710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1537), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e714: 0xa0800600  sb          $zero, 0x600($a0)
    ctx->pc = 0x17e714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e718: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17e718u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e71c: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17e71cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e720: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17e720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17e724:
    // 0x17e724: 0x3e00008  jr          $ra
    ctx->pc = 0x17E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E724u;
        // 0x17e728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E72Cu;
    // 0x17e72c: 0x0  nop
    ctx->pc = 0x17e72cu;
    // NOP
    // 0x17e730: 0x0  nop
    ctx->pc = 0x17e730u;
    // NOP
    // 0x17e734: 0x0  nop
    ctx->pc = 0x17e734u;
    // NOP
    ctx->pc = 0x17e738u;
}
