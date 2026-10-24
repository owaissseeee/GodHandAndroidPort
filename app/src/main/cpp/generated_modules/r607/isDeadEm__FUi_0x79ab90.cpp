#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: isDeadEm__FUi
// Address: 0x79ab90 - 0x79abb0
void isDeadEm__FUi_0x79ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isDeadEm__FUi_0x79ab90");
#endif

    switch (ctx->pc) {
        case 0x79aba4u: goto label_79aba4;
        default: break;
    }

    ctx->pc = 0x79ab90u;

    // 0x79ab90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ab94: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x79ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79ab98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79ab9c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79AB9Cu;
    SET_GPR_U32(ctx, 31, 0x79ABA4u);
    ctx->pc = 0x79ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB9Cu;
    // 0x79aba0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AB9Cu, 0x79ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABA4u;
label_79aba4:
    // 0x79aba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79aba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA8u;
        // 0x79abac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ABB0u;
}
} // namespace gh_r607
