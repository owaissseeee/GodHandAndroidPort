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

// Function: cEmManage_GetEm
// Address: 0x290868 - 0x2908c0
void cEmManage_GetEm_0x290868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_GetEm_0x290868");
#endif

    switch (ctx->pc) {
        case 0x290880u: goto label_290880;
        case 0x290898u: goto label_290898;
        default: break;
    }

    ctx->pc = 0x290868u;

    // 0x290868: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x290868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29086c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x290870: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290870u;
    {
        const bool branch_taken_0x290870 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x290870) {
            ctx->pc = 0x290874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290870u;
            // 0x290874: 0x8c840500  lw          $a0, 0x500($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290888u;
            goto label_290888;
        }
    }
    ctx->pc = 0x290878u;
    // 0x290878: 0x3e00008  jr          $ra
    ctx->pc = 0x290878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290878u;
        // 0x29087c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290880u;
label_290880:
    // 0x290880: 0x3e00008  jr          $ra
    ctx->pc = 0x290880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290880u;
        // 0x290884: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290888u;
label_290888:
    // 0x290888: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290888u;
    {
        const bool branch_taken_0x290888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290888u;
        // 0x29088c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290888) {
            ctx->pc = 0x2908B0u;
            goto label_2908b0;
        }
    }
    ctx->pc = 0x290890u;
    // 0x290890: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x290890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x290894: 0x0  nop
    ctx->pc = 0x290894u;
    // NOP
label_290898:
    // 0x290898: 0x94620640  lhu         $v0, 0x640($v1)
    ctx->pc = 0x290898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x29089c: 0x1045fff8  beq         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29089Cu;
    {
        const bool branch_taken_0x29089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x29089c) {
            ctx->pc = 0x290880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290880;
        }
    }
    ctx->pc = 0x2908A4u;
    // 0x2908a4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2908a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2908a8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2908A8u;
            // 0x2908ac: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290898;
        }
    }
    ctx->pc = 0x2908B0u;
label_2908b0:
    // 0x2908b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2908B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2908B0u;
        // 0x2908b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2908B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2908B8u;
    // 0x2908b8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2908b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2908bc: 0x0  nop
    ctx->pc = 0x2908bcu;
    // NOP
    ctx->pc = 0x2908c0u;
}
