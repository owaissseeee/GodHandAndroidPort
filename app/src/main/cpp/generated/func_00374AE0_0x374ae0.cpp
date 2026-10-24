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

// Function: func_00374AE0
// Address: 0x374ae0 - 0x374b00
void func_00374AE0_0x374ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374AE0_0x374ae0");
#endif

    ctx->pc = 0x374ae0u;

    // 0x374ae0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x374ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x374ae4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x374ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x374ae8: 0x24422160  addiu       $v0, $v0, 0x2160
    ctx->pc = 0x374ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8544));
    // 0x374aec: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x374aecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x374af0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x374af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374af4: 0x3e00008  jr          $ra
    ctx->pc = 0x374AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AF4u;
        // 0x374af8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374AFCu;
    // 0x374afc: 0x0  nop
    ctx->pc = 0x374afcu;
    // NOP
    ctx->pc = 0x374b00u;
}
