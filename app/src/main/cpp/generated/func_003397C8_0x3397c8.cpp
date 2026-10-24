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

// Function: func_003397C8
// Address: 0x3397c8 - 0x339848
void func_003397C8_0x3397c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003397C8_0x3397c8");
#endif

    ctx->pc = 0x3397c8u;

    // 0x3397c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3397cc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3397CCu;
    {
        const bool branch_taken_0x3397cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3397CCu;
        // 0x3397d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3397cc) {
            ctx->pc = 0x3397F0u;
            goto label_3397f0;
        }
    }
    ctx->pc = 0x3397D4u;
    // 0x3397d4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3397d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3397d8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3397d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3397dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3397dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397e0: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x3397e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x3397e4: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x3397e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
    // 0x3397e8: 0x80ce516  j           func_339458
    ctx->pc = 0x3397E8u;
    ctx->pc = 0x3397ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397E8u;
    // 0x3397ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x3397E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3397F0u;
label_3397f0:
    // 0x3397f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3397f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3397F4u;
    {
        const bool branch_taken_0x3397f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3397f4) {
            ctx->pc = 0x3397F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3397F4u;
            // 0x3397f8: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339818u;
            goto label_339818;
        }
    }
    ctx->pc = 0x3397FCu;
    // 0x3397fc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3397fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x339800: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x339804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339808: 0x24845ae0  addiu       $a0, $a0, 0x5AE0
    ctx->pc = 0x339808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23264));
    // 0x33980c: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x33980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
    // 0x339810: 0x80ce516  j           func_339458
    ctx->pc = 0x339810u;
    ctx->pc = 0x339814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339810u;
    // 0x339814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339818u;
label_339818:
    // 0x339818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33981c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x33981cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x339820: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x339820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x339824: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x339824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x339828: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x339828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x33982c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x33982cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x339830: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x339830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x339834: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x339834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x339838: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x339838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x33983c: 0x3e00008  jr          $ra
    ctx->pc = 0x33983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339844u;
    // 0x339844: 0x0  nop
    ctx->pc = 0x339844u;
    // NOP
    ctx->pc = 0x339848u;
}
