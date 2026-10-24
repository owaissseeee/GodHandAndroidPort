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
// Function: __register_frame_table
// Address: 0x7ccec8 - 0x7ccef8
void ps2___register_frame_table_0x7ccec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_table_0x7ccec8");
#endif

    switch (ctx->pc) {
        case 0x7ccee0u: goto label_7ccee0;
        default: break;
    }

    ctx->pc = 0x7ccec8u;

    // 0x7ccec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ccec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ccecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cced0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7cced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cced4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7cced8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CCED8u;
    SET_GPR_U32(ctx, 31, 0x7CCEE0u);
    ctx->pc = 0x7CCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCED8u;
    // 0x7ccedc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CCED8u, 0x7CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCEE0u;
label_7ccee0:
    // 0x7ccee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ccee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ccee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ccee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cceec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7cceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccef0: 0x81f33a8  j           func_7CCEA0
    ctx->pc = 0x7CCEF0u;
    ctx->pc = 0x7CCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCEF0u;
    // 0x7ccef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCEA0u, 0x7CCEF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CCEF8u;
}
} // namespace gh_mcport
