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

// Function: cCoreSave_ckClearStage
// Address: 0x1fbfd0 - 0x1fc020
void cCoreSave_ckClearStage_0x1fbfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_ckClearStage_0x1fbfd0");
#endif

    ctx->pc = 0x1fbfd0u;

    // 0x1fbfd0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbfd4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBFD4u;
    {
        const bool branch_taken_0x1fbfd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFD4u;
        // 0x1fbfd8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfd4) {
            ctx->pc = 0x1FBFE8u;
            goto label_1fbfe8;
        }
    }
    ctx->pc = 0x1FBFDCu;
    // 0x1fbfdc: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x1fbfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fbfe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBFE0u;
    {
        const bool branch_taken_0x1fbfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFE0u;
        // 0x1fbfe4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfe0) {
            ctx->pc = 0x1FBFF0u;
            goto label_1fbff0;
        }
    }
    ctx->pc = 0x1FBFE8u;
label_1fbfe8:
    // 0x1fbfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFE8u;
        // 0x1fbfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBFF0u;
label_1fbff0:
    // 0x1fbff0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1fbff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1fbff4: 0x8c437a3c  lw          $v1, 0x7A3C($v0)
    ctx->pc = 0x1fbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31292)));
    // 0x1fbff8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fbff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fbffc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBFFCu;
    {
        const bool branch_taken_0x1fbffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFFCu;
        // 0x1fc000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbffc) {
            ctx->pc = 0x1FC018u;
            goto label_1fc018;
        }
    }
    ctx->pc = 0x1FC004u;
    // 0x1fc004: 0x8cc300a4  lw          $v1, 0xA4($a2)
    ctx->pc = 0x1fc004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x1fc008: 0xa22004  sllv        $a0, $v0, $a1
    ctx->pc = 0x1fc008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc00c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fc00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fc010: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC010u;
        // 0x1fc014: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC018u;
label_1fc018:
    // 0x1fc018: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC020u;
}
