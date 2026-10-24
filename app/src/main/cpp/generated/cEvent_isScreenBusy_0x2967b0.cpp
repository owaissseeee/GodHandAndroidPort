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

// Function: cEvent_isScreenBusy
// Address: 0x2967b0 - 0x296818
void cEvent_isScreenBusy_0x2967b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_isScreenBusy_0x2967b0");
#endif

    switch (ctx->pc) {
        case 0x2967dcu: goto label_2967dc;
        default: break;
    }

    ctx->pc = 0x2967b0u;

    // 0x2967b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2967b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2967b4: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x2967b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2967B8u;
    {
        const bool branch_taken_0x2967b8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967B8u;
        // 0x2967bc: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967b8) {
            ctx->pc = 0x2967C8u;
            goto label_2967c8;
        }
    }
    ctx->pc = 0x2967C0u;
    // 0x2967c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2967C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967C0u;
        // 0x2967c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967C8u;
label_2967c8:
    // 0x2967c8: 0x8c636b34  lw          $v1, 0x6B34($v1)
    ctx->pc = 0x2967c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27444)));
    // 0x2967cc: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x2967ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x2967d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2967d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2967d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2967D4u;
    {
        const bool branch_taken_0x2967d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967D4u;
        // 0x2967d8: 0x310ba  dsrl        $v0, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967d4) {
            ctx->pc = 0x2967E4u;
            goto label_2967e4;
        }
    }
    ctx->pc = 0x2967DCu;
label_2967dc:
    // 0x2967dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2967DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967DCu;
        // 0x2967e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967E4u;
label_2967e4:
    // 0x2967e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2967e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2967e8: 0x0  nop
    ctx->pc = 0x2967e8u;
    // NOP
    // 0x2967ec: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2967ECu;
    {
        const bool branch_taken_0x2967ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2967F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967ECu;
        // 0x2967f0: 0x310fa  dsrl        $v0, $v1, 3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967ec) {
            ctx->pc = 0x2967DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2967dc;
        }
    }
    ctx->pc = 0x2967F4u;
    // 0x2967f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2967f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2967f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2967F8u;
    {
        const bool branch_taken_0x2967f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2967FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967F8u;
        // 0x2967fc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967f8) {
            ctx->pc = 0x296810u;
            goto label_296810;
        }
    }
    ctx->pc = 0x296800u;
    // 0x296800: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x296800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29836)));
    // 0x296804: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x296808: 0x3e00008  jr          $ra
    ctx->pc = 0x296808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296808u;
        // 0x29680c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296810u;
label_296810:
    // 0x296810: 0x3e00008  jr          $ra
    ctx->pc = 0x296810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296810u;
        // 0x296814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296818u;
}
