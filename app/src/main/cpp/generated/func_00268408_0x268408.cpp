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

// Function: func_00268408
// Address: 0x268408 - 0x2684a0
void func_00268408_0x268408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00268408_0x268408");
#endif

    switch (ctx->pc) {
        case 0x268448u: goto label_268448;
        default: break;
    }

    ctx->pc = 0x268408u;

    // 0x268408: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x268408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26840c: 0x8ca30564  lw          $v1, 0x564($a1)
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x268410: 0x2862020f  slti        $v0, $v1, 0x20F
    ctx->pc = 0x268410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
    // 0x268414: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x268414u;
    {
        const bool branch_taken_0x268414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268414u;
        // 0x268418: 0x28620211  slti        $v0, $v1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268414) {
            ctx->pc = 0x268448u;
            goto label_268448;
        }
    }
    ctx->pc = 0x26841Cu;
    // 0x26841c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26841Cu;
    {
        const bool branch_taken_0x26841c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26841c) {
            ctx->pc = 0x268420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26841Cu;
            // 0x268420: 0x8ca30474  lw          $v1, 0x474($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268434u;
            goto label_268434;
        }
    }
    ctx->pc = 0x268424u;
    // 0x268424: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x268424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x268428: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268428u;
    {
        const bool branch_taken_0x268428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268428) {
            ctx->pc = 0x268448u;
            goto label_268448;
        }
    }
    ctx->pc = 0x268430u;
    // 0x268430: 0x8ca30474  lw          $v1, 0x474($a1)
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1140)));
label_268434:
    // 0x268434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268438: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268438u;
    {
        const bool branch_taken_0x268438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268438u;
        // 0x26843c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268438) {
            ctx->pc = 0x268450u;
            goto label_268450;
        }
    }
    ctx->pc = 0x268440u;
    // 0x268440: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268440u;
    {
        const bool branch_taken_0x268440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268440u;
        // 0x268444: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268440) {
            ctx->pc = 0x268454u;
            goto label_268454;
        }
    }
    ctx->pc = 0x268448u;
label_268448:
    // 0x268448: 0x3e00008  jr          $ra
    ctx->pc = 0x268448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268448u;
        // 0x26844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268450u;
label_268450:
    // 0x268450: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x268450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_268454:
    // 0x268454: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x268454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x268458: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x268458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x26845c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26845Cu;
    {
        const bool branch_taken_0x26845c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26845c) {
            ctx->pc = 0x268448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268448;
        }
    }
    ctx->pc = 0x268464u;
    // 0x268464: 0xc4a11744  lwc1        $f1, 0x1744($a1)
    ctx->pc = 0x268464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26846c: 0x0  nop
    ctx->pc = 0x26846cu;
    // NOP
    // 0x268470: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x268470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268474: 0x0  nop
    ctx->pc = 0x268474u;
    // NOP
    // 0x268478: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x268478u;
    {
        const bool branch_taken_0x268478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268478u;
        // 0x26847c: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268478) {
            ctx->pc = 0x268498u;
            goto label_268498;
        }
    }
    ctx->pc = 0x268480u;
    // 0x268480: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x268480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x268484: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x268484u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x268488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26848c: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x26848cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x268490: 0x3e00008  jr          $ra
    ctx->pc = 0x268490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268490u;
        // 0x268494: 0xa0a002f6  sb          $zero, 0x2F6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268498u;
label_268498:
    // 0x268498: 0x3e00008  jr          $ra
    ctx->pc = 0x268498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268498u;
        // 0x26849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2684A0u;
}
