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
// Function: sceMcMkdir
// Address: 0x7cd8e0 - 0x7cd918
void sceMcMkdir_0x7cd8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcMkdir_0x7cd8e0");
#endif

    switch (ctx->pc) {
        case 0x7cd8f0u: goto label_7cd8f0;
        default: break;
    }

    ctx->pc = 0x7cd8e0u;

    // 0x7cd8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cd8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cd8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cd8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cd8e8: 0xc1f35ee  jal         func_7CD7B8
    ctx->pc = 0x7CD8E8u;
    SET_GPR_U32(ctx, 31, 0x7CD8F0u);
    ctx->pc = 0x7CD8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD8E8u;
    // 0x7cd8ec: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD7B8u, 0x7CD8E8u, 0x7CD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD8F0u;
label_7cd8f0:
    // 0x7cd8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cd8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd8f4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD8F4u;
    {
        const bool branch_taken_0x7cd8f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD8F4u;
        // 0x7cd8f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd8f4) {
            ctx->pc = 0x7CD908u;
            goto label_7cd908;
        }
    }
    ctx->pc = 0x7CD8FCu;
    // 0x7cd8fc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd900: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x7cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7cd904: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cd904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
label_7cd908:
    // 0x7cd908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7cd908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd90c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD90Cu;
        // 0x7cd910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD914u;
    // 0x7cd914: 0x0  nop
    ctx->pc = 0x7cd914u;
    // NOP
    ctx->pc = 0x7cd918u;
}
} // namespace gh_mcport
