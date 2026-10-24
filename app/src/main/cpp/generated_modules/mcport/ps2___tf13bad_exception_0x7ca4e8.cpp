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
// Function: __tf13bad_exception
// Address: 0x7ca4e8 - 0x7ca538
void ps2___tf13bad_exception_0x7ca4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf13bad_exception_0x7ca4e8");
#endif

    switch (ctx->pc) {
        case 0x7ca50cu: goto label_7ca50c;
        case 0x7ca524u: goto label_7ca524;
        default: break;
    }

    ctx->pc = 0x7ca4e8u;

    // 0x7ca4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ca4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ca4ec: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ca4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ca4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7ca4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7ca4f4: 0x8c625928  lw          $v0, 0x5928($v1)
    ctx->pc = 0x7ca4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5928u));
    // 0x7ca4f8: 0x24705928  addiu       $s0, $v1, 0x5928
    ctx->pc = 0x7ca4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22824));
    // 0x7ca4fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CA4FCu;
    {
        const bool branch_taken_0x7ca4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA4FCu;
        // 0x7ca500: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca4fc) {
            ctx->pc = 0x7CA524u;
            goto label_7ca524;
        }
    }
    ctx->pc = 0x7CA504u;
    // 0x7ca504: 0xc1f2960  jal         func_7CA580
    ctx->pc = 0x7CA504u;
    SET_GPR_U32(ctx, 31, 0x7CA50Cu);
    ctx->pc = 0x7CA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA580u, 0x7CA504u, 0x7CA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA50Cu;
label_7ca50c:
    // 0x7ca50c: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7ca510: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7ca510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7ca514: 0x24a51070  addiu       $a1, $a1, 0x1070
    ctx->pc = 0x7ca514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    // 0x7ca518: 0x24c61490  addiu       $a2, $a2, 0x1490
    ctx->pc = 0x7ca518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5264));
    // 0x7ca51c: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CA51Cu;
    SET_GPR_U32(ctx, 31, 0x7CA524u);
    ctx->pc = 0x7CA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA51Cu;
    // 0x7ca520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CA51Cu, 0x7CA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA524u;
label_7ca524:
    // 0x7ca524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7ca524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ca528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ca52c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ca52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca530: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA530u;
        // 0x7ca534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA538u;
}
} // namespace gh_mcport
