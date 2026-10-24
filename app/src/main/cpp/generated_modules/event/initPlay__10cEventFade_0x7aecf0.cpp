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
// Function: initPlay__10cEventFade
// Address: 0x7aecf0 - 0x7aed20
void initPlay__10cEventFade_0x7aecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__10cEventFade_0x7aecf0");
#endif

    switch (ctx->pc) {
        case 0x7aed0cu: goto label_7aed0c;
        default: break;
    }

    ctx->pc = 0x7aecf0u;

    // 0x7aecf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7aecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7aecf4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7aecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7aecf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7aecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7aecfc: 0x24a54e80  addiu       $a1, $a1, 0x4E80
    ctx->pc = 0x7aecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20096));
    // 0x7aed00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aed04: 0xc1ed1ae  jal         func_7B46B8
    ctx->pc = 0x7AED04u;
    SET_GPR_U32(ctx, 31, 0x7AED0Cu);
    ctx->pc = 0x7AED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED04u;
    // 0x7aed08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B46B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B46B8u, 0x7AED04u, 0x7AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED0Cu;
label_7aed0c:
    // 0x7aed0c: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x7aed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x7aed10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7aed10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aed14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aed18: 0x3e00008  jr          $ra
    ctx->pc = 0x7AED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AED18u;
        // 0x7aed1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AED18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AED20u;
}
} // namespace gh_event
