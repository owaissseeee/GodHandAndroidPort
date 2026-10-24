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

// Function: Obj0000_Set_Vtbl_D_00451008_31F360
// Address: 0x31f360 - 0x31f378
void Obj0000_Set_Vtbl_D_00451008_31F360_0x31f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Vtbl_D_00451008_31F360_0x31f360");
#endif

    ctx->pc = 0x31f360u;

    // 0x31f360: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x31f360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x31f364: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31f364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f368: 0x24631008  addiu       $v1, $v1, 0x1008
    ctx->pc = 0x31f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4104));
    // 0x31f36c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F36Cu;
        // 0x31f370: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F374u;
    // 0x31f374: 0x0  nop
    ctx->pc = 0x31f374u;
    // NOP
    ctx->pc = 0x31f378u;
}
