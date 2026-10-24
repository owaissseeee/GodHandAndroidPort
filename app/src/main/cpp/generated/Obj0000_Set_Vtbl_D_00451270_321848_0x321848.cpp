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

// Function: Obj0000_Set_Vtbl_D_00451270_321848
// Address: 0x321848 - 0x321860
void Obj0000_Set_Vtbl_D_00451270_321848_0x321848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Vtbl_D_00451270_321848_0x321848");
#endif

    ctx->pc = 0x321848u;

    // 0x321848: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x321848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x32184c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32184cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321850: 0x24631270  addiu       $v1, $v1, 0x1270
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4720));
    // 0x321854: 0x3e00008  jr          $ra
    ctx->pc = 0x321854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321854u;
        // 0x321858: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32185Cu;
    // 0x32185c: 0x0  nop
    ctx->pc = 0x32185cu;
    // NOP
    ctx->pc = 0x321860u;
}
