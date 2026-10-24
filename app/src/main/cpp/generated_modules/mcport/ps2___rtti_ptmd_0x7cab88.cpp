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
// Function: __rtti_ptmd
// Address: 0x7cab88 - 0x7caba8
void ps2___rtti_ptmd_0x7cab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_ptmd_0x7cab88");
#endif

    ctx->pc = 0x7cab88u;

    // 0x7cab88: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CAB88u;
    {
        const bool branch_taken_0x7cab88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CAB88u;
        // 0x7cab8c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cab88) {
            ctx->pc = 0x7CAB9Cu;
            goto label_7cab9c;
        }
    }
    ctx->pc = 0x7CAB90u;
    // 0x7cab90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cab90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7cab94: 0x24421138  addiu       $v0, $v0, 0x1138
    ctx->pc = 0x7cab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4408));
    // 0x7cab98: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7cab98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7cab9c:
    // 0x7cab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CAB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CAB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CABA4u;
    // 0x7caba4: 0x0  nop
    ctx->pc = 0x7caba4u;
    // NOP
    ctx->pc = 0x7caba8u;
}
} // namespace gh_mcport
