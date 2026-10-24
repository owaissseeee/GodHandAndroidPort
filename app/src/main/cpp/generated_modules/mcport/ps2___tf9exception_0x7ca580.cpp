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
// Function: __tf9exception
// Address: 0x7ca580 - 0x7ca5c0
void ps2___tf9exception_0x7ca580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9exception_0x7ca580");
#endif

    switch (ctx->pc) {
        case 0x7ca5acu: goto label_7ca5ac;
        default: break;
    }

    ctx->pc = 0x7ca580u;

    // 0x7ca580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ca580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ca584: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ca584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ca588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7ca588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7ca58c: 0x8c621490  lw          $v0, 0x1490($v1)
    ctx->pc = 0x7ca58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1490u));
    // 0x7ca590: 0x24701490  addiu       $s0, $v1, 0x1490
    ctx->pc = 0x7ca590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5264));
    // 0x7ca594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CA594u;
    {
        const bool branch_taken_0x7ca594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA594u;
        // 0x7ca598: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca594) {
            ctx->pc = 0x7CA5ACu;
            goto label_7ca5ac;
        }
    }
    ctx->pc = 0x7CA59Cu;
    // 0x7ca59c: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7ca59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7ca5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ca5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca5a4: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7CA5A4u;
    SET_GPR_U32(ctx, 31, 0x7CA5ACu);
    ctx->pc = 0x7CA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA5A4u;
    // 0x7ca5a8: 0x24a51080  addiu       $a1, $a1, 0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7CA5A4u, 0x7CA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA5ACu;
label_7ca5ac:
    // 0x7ca5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7ca5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ca5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ca5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ca5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA5B8u;
        // 0x7ca5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA5C0u;
}
} // namespace gh_mcport
