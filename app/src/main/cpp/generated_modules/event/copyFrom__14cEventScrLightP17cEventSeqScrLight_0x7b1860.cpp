#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: copyFrom__14cEventScrLightP17cEventSeqScrLight
// Address: 0x7b1860 - 0x7b18a0
void copyFrom__14cEventScrLightP17cEventSeqScrLight_0x7b1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFrom__14cEventScrLightP17cEventSeqScrLight_0x7b1860");
#endif

    switch (ctx->pc) {
        case 0x7b1880u: goto label_7b1880;
        case 0x7b1890u: goto label_7b1890;
        default: break;
    }

    ctx->pc = 0x7b1860u;

    // 0x7b1860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b1864: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x7b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7b1868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b1868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b186c: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x7b186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x7b1870: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B1870u;
    {
        const bool branch_taken_0x7b1870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7b1870) {
            ctx->pc = 0x7B1888u;
            goto label_7b1888;
        }
    }
    ctx->pc = 0x7B1878u;
    // 0x7b1878: 0xc1ec678  jal         func_7B19E0
    ctx->pc = 0x7B1878u;
    SET_GPR_U32(ctx, 31, 0x7B1880u);
    ctx->pc = 0x7B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B19E0u, 0x7B1878u, 0x7B1880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1880u;
label_7b1880:
    // 0x7b1880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B1880u;
    {
        const bool branch_taken_0x7b1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1880u;
        // 0x7b1884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1880) {
            ctx->pc = 0x7B1894u;
            goto label_7b1894;
        }
    }
    ctx->pc = 0x7B1888u;
label_7b1888:
    // 0x7b1888: 0xc1ec628  jal         func_7B18A0
    ctx->pc = 0x7B1888u;
    SET_GPR_U32(ctx, 31, 0x7B1890u);
    ctx->pc = 0x7B188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1888u;
    // 0x7b188c: 0x90a60009  lbu         $a2, 0x9($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B18A0u, 0x7B1888u, 0x7B1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1890u;
label_7b1890:
    // 0x7b1890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b1890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b1894:
    // 0x7b1894: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1894u;
        // 0x7b1898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B189Cu;
    // 0x7b189c: 0x0  nop
    ctx->pc = 0x7b189cu;
    // NOP
    ctx->pc = 0x7b18a0u;
}
} // namespace gh_event
