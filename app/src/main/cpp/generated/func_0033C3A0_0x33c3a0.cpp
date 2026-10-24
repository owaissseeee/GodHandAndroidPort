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

// Function: func_0033C3A0
// Address: 0x33c3a0 - 0x33c428
void func_0033C3A0_0x33c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C3A0_0x33c3a0");
#endif

    ctx->pc = 0x33c3a0u;

    // 0x33c3a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c3a4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x33c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33c3a8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x33c3a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33c3ac: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C3ACu;
    {
        const bool branch_taken_0x33c3ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3ACu;
        // 0x33c3b0: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3ac) {
            ctx->pc = 0x33C3C8u;
            goto label_33c3c8;
        }
    }
    ctx->pc = 0x33C3B4u;
    // 0x33c3b4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x33c3b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33c3b8: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x33c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x33c3bc: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x33C3BCu;
    {
        const bool branch_taken_0x33c3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3BCu;
        // 0x33c3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3bc) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C3C4u;
    // 0x33c3c4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x33c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_33c3c8:
    // 0x33c3c8: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C3C8u;
    {
        const bool branch_taken_0x33c3c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x33c3c8) {
            ctx->pc = 0x33C3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C3C8u;
            // 0x33c3cc: 0x90a60010  lbu         $a2, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C3E4u;
            goto label_33c3e4;
        }
    }
    ctx->pc = 0x33C3D0u;
    // 0x33c3d0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x33c3d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x33c3d4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33c3d8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33C3D8u;
    {
        const bool branch_taken_0x33c3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3D8u;
        // 0x33c3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3d8) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C3E0u;
    // 0x33c3e0: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x33c3e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_33c3e4:
    // 0x33c3e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x33c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33c3e8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C3E8u;
    {
        const bool branch_taken_0x33c3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3E8u;
        // 0x33c3ec: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3e8) {
            ctx->pc = 0x33C404u;
            goto label_33c404;
        }
    }
    ctx->pc = 0x33C3F0u;
    // 0x33c3f0: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x33c3f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x33c3f4: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x33c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x33c3f8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33C3F8u;
    {
        const bool branch_taken_0x33c3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C3F8u;
        // 0x33c3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3f8) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C400u;
    // 0x33c400: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x33c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_33c404:
    // 0x33c404: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C404u;
    {
        const bool branch_taken_0x33c404 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C404u;
        // 0x33c408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c404) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C40Cu;
    // 0x33c40c: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x33c40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x33c410: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33c414: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33C414u;
    {
        const bool branch_taken_0x33c414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C414u;
        // 0x33c418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c414) {
            ctx->pc = 0x33C420u;
            goto label_33c420;
        }
    }
    ctx->pc = 0x33C41Cu;
    // 0x33c41c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33c41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c420:
    // 0x33c420: 0x3e00008  jr          $ra
    ctx->pc = 0x33C420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C428u;
}
