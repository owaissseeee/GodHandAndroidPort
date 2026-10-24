#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __make_fp
// Address: 0x79b128 - 0x79b158
void ps2___make_fp_0x79b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x79b128");
#endif

    switch (ctx->pc) {
        case 0x79b148u: goto label_79b148;
        default: break;
    }

    ctx->pc = 0x79b128u;

    // 0x79b128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b12c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x79b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x79b130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b138: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x79b138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x79b13c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x79b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x79b140: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79B140u;
    SET_GPR_U32(ctx, 31, 0x79B148u);
    ctx->pc = 0x79B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B140u;
    // 0x79b144: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79B140u, 0x79B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B148u;
label_79b148:
    // 0x79b148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B14Cu;
        // 0x79b150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B154u;
    // 0x79b154: 0x0  nop
    ctx->pc = 0x79b154u;
    // NOP
    ctx->pc = 0x79b158u;
}
} // namespace gh_r505
