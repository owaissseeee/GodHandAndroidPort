#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Move__16r301CannonGameId
// Address: 0x79d428 - 0x79d488
void Move__16r301CannonGameId_0x79d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__16r301CannonGameId_0x79d428");
#endif

    switch (ctx->pc) {
        case 0x79d44cu: goto label_79d44c;
        case 0x79d450u: goto label_79d450;
        case 0x79d45cu: goto label_79d45c;
        case 0x79d470u: goto label_79d470;
        default: break;
    }

    ctx->pc = 0x79d428u;

    // 0x79d428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d42c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79d430: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79d430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d434: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79d438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79d43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d440: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x79d440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79d444: 0xc1e7568  jal         func_79D5A0
    ctx->pc = 0x79D444u;
    SET_GPR_U32(ctx, 31, 0x79D44Cu);
    ctx->pc = 0x79D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D444u;
    // 0x79d448: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D5A0u, 0x79D444u, 0x79D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D44Cu;
label_79d44c:
    // 0x79d44c: 0x0  nop
    ctx->pc = 0x79d44cu;
    // NOP
label_79d450:
    // 0x79d450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d454: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x79D454u;
    SET_GPR_U32(ctx, 31, 0x79D45Cu);
    ctx->pc = 0x79D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D454u;
    // 0x79d458: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x79D454u, 0x79D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D45Cu;
label_79d45c:
    // 0x79d45c: 0x0  nop
    ctx->pc = 0x79d45cu;
    // NOP
    // 0x79d460: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79D460u;
    {
        const bool branch_taken_0x79d460 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D460u;
        // 0x79d464: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d460) {
            ctx->pc = 0x79D450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d450;
        }
    }
    ctx->pc = 0x79D468u;
    // 0x79d468: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x79D468u;
    SET_GPR_U32(ctx, 31, 0x79D470u);
    ctx->pc = 0x79D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D468u;
    // 0x79d46c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x79D468u, 0x79D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D470u;
label_79d470:
    // 0x79d470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79d470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79d474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79d478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d480: 0x3e00008  jr          $ra
    ctx->pc = 0x79D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D480u;
        // 0x79d484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D488u;
}
} // namespace gh_r301
