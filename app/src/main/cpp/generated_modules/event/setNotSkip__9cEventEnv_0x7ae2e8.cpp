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
// Function: setNotSkip__9cEventEnv
// Address: 0x7ae2e8 - 0x7ae320
void setNotSkip__9cEventEnv_0x7ae2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setNotSkip__9cEventEnv_0x7ae2e8");
#endif

    switch (ctx->pc) {
        case 0x7ae2fcu: goto label_7ae2fc;
        default: break;
    }

    ctx->pc = 0x7ae2e8u;

    // 0x7ae2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae2ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae2f4: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE2F4u;
    SET_GPR_U32(ctx, 31, 0x7AE2FCu);
    ctx->pc = 0x7AE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE2F4u;
    // 0x7ae2f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE2F4u, 0x7AE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE2FCu;
label_7ae2fc:
    // 0x7ae2fc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AE2FCu;
    {
        const bool branch_taken_0x7ae2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae2fc) {
            ctx->pc = 0x7AE300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AE2FCu;
            // 0x7ae300: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AE314u;
            goto label_7ae314;
        }
    }
    ctx->pc = 0x7AE304u;
    // 0x7ae304: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7ae304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae308: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x7ae308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x7ae30c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7ae30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7ae310: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae314:
    // 0x7ae314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae318: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE318u;
        // 0x7ae31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE320u;
}
} // namespace gh_event
