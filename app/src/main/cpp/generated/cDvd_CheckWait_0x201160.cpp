#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cDvd_CheckWait
// Address: 0x201160 - 0x2011b0
void cDvd_CheckWait_0x201160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_CheckWait_0x201160");
#endif

    switch (ctx->pc) {
        case 0x201180u: goto label_201180;
        case 0x201188u: goto label_201188;
        case 0x201194u: goto label_201194;
        default: break;
    }

    ctx->pc = 0x201160u;

    // 0x201160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20116c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20116cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x201174u;
    {
        const bool branch_taken_0x201174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201174u;
        // 0x201178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201174) {
            ctx->pc = 0x201188u;
            goto label_201188;
        }
    }
    ctx->pc = 0x20117Cu;
    // 0x20117c: 0x0  nop
    ctx->pc = 0x20117cu;
    // NOP
label_201180:
    // 0x201180: 0xc0802c8  jal         func_200B20
    ctx->pc = 0x201180u;
    SET_GPR_U32(ctx, 31, 0x201188u);
    ctx->pc = 0x200B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B20u, 0x201180u, 0x201188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201188u;
label_201188:
    // 0x201188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20118c: 0xc080426  jal         func_201098
    ctx->pc = 0x20118Cu;
    SET_GPR_U32(ctx, 31, 0x201194u);
    ctx->pc = 0x201190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20118Cu;
    // 0x201190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x20118Cu, 0x201194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201194u;
label_201194:
    // 0x201194: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201194u;
    {
        const bool branch_taken_0x201194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201194) {
            ctx->pc = 0x201180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201180;
        }
    }
    ctx->pc = 0x20119Cu;
    // 0x20119c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20119cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2011a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2011a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2011a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2011a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2011a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2011A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2011ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A8u;
        // 0x2011ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2011B0u;
}
