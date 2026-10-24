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
// Function: __register_frame
// Address: 0x7cce70 - 0x7ccea0
void ps2___register_frame_0x7cce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_0x7cce70");
#endif

    switch (ctx->pc) {
        case 0x7cce88u: goto label_7cce88;
        default: break;
    }

    ctx->pc = 0x7cce70u;

    // 0x7cce70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cce74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cce78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7cce78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cce7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7cce80: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CCE80u;
    SET_GPR_U32(ctx, 31, 0x7CCE88u);
    ctx->pc = 0x7CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCE80u;
    // 0x7cce84: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CCE80u, 0x7CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCE88u;
label_7cce88:
    // 0x7cce88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cce8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cce90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cce90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cce94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7cce94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cce98: 0x81f3392  j           func_7CCE48
    ctx->pc = 0x7CCE98u;
    ctx->pc = 0x7CCE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCE98u;
    // 0x7cce9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCE48u, 0x7CCE98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CCEA0u;
}
} // namespace gh_mcport
