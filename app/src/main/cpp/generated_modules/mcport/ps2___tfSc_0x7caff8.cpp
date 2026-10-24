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
// Function: __tfSc
// Address: 0x7caff8 - 0x7cb030
void ps2___tfSc_0x7caff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfSc_0x7caff8");
#endif

    ctx->pc = 0x7caff8u;

    // 0x7caff8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7caff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7caffc: 0x8c82fd20  lw          $v0, -0x2E0($a0)
    ctx->pc = 0x7caffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7CFD20u));
    // 0x7cb000: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CB000u;
    {
        const bool branch_taken_0x7cb000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB000u;
        // 0x7cb004: 0x2485fd20  addiu       $a1, $a0, -0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb000) {
            ctx->pc = 0x7CB024u;
            goto label_7cb024;
        }
    }
    ctx->pc = 0x7CB008u;
    // 0x7cb008: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CB008u;
    {
        const bool branch_taken_0x7cb008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB008u;
        // 0x7cb00c: 0x3c03007d  lui         $v1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb008) {
            ctx->pc = 0x7CB024u;
            goto label_7cb024;
        }
    }
    ctx->pc = 0x7CB010u;
    // 0x7cb010: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cb010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cb014: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x7cb014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
    // 0x7cb018: 0x24421168  addiu       $v0, $v0, 0x1168
    ctx->pc = 0x7cb018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4456));
    // 0x7cb01c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7cb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7cb020: 0xac83fd20  sw          $v1, -0x2E0($a0)
    ctx->pc = 0x7cb020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966560), GPR_U32(ctx, 3));
label_7cb024:
    // 0x7cb024: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB024u;
        // 0x7cb028: 0x2482fd20  addiu       $v0, $a0, -0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB02Cu;
    // 0x7cb02c: 0x0  nop
    ctx->pc = 0x7cb02cu;
    // NOP
    ctx->pc = 0x7cb030u;
}
} // namespace gh_mcport
