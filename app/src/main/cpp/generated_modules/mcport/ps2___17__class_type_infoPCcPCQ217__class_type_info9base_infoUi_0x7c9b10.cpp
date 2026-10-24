#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __17__class_type_infoPCcPCQ217__class_type_info9base_infoUi
// Address: 0x7c9b10 - 0x7c9b30
void ps2___17__class_type_infoPCcPCQ217__class_type_info9base_infoUi_0x7c9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___17__class_type_infoPCcPCQ217__class_type_info9base_infoUi_0x7c9b10");
#endif

    ctx->pc = 0x7c9b10u;

    // 0x7c9b10: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c9b14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7c9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7c9b18: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x7c9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x7c9b1c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x7c9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x7c9b20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7c9b24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7c9b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9b28: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9B28u;
        // 0x7c9b2c: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9B30u;
}
} // namespace gh_mcport
