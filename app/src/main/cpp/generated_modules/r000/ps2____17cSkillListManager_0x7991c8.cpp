#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: _$_17cSkillListManager
// Address: 0x7991c8 - 0x799210
void ps2____17cSkillListManager_0x7991c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____17cSkillListManager_0x7991c8");
#endif

    switch (ctx->pc) {
        case 0x7991e4u: goto label_7991e4;
        case 0x7991f8u: goto label_7991f8;
        default: break;
    }

    ctx->pc = 0x7991c8u;

    // 0x7991c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7991c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7991cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7991ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7991d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7991d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7991d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7991d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7991d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7991d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7991dc: 0xc1e6484  jal         func_799210
    ctx->pc = 0x7991DCu;
    SET_GPR_U32(ctx, 31, 0x7991E4u);
    ctx->pc = 0x7991E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7991DCu;
    // 0x7991e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799210u, 0x7991DCu, 0x7991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7991E4u;
label_7991e4:
    // 0x7991e4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x7991e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x7991e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7991E8u;
    {
        const bool branch_taken_0x7991e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7991ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7991E8u;
        // 0x7991ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7991e8) {
            ctx->pc = 0x7991FCu;
            goto label_7991fc;
        }
    }
    ctx->pc = 0x7991F0u;
    // 0x7991f0: 0xc1e6a90  jal         func_79AA40
    ctx->pc = 0x7991F0u;
    SET_GPR_U32(ctx, 31, 0x7991F8u);
    ctx->pc = 0x7991F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7991F0u;
    // 0x7991f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AA40u, 0x7991F0u, 0x7991F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7991F8u;
label_7991f8:
    // 0x7991f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7991f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7991fc:
    // 0x7991fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7991fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799204: 0x3e00008  jr          $ra
    ctx->pc = 0x799204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799204u;
        // 0x799208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79920Cu;
    // 0x79920c: 0x0  nop
    ctx->pc = 0x79920cu;
    // NOP
    ctx->pc = 0x799210u;
}
} // namespace gh_r000
