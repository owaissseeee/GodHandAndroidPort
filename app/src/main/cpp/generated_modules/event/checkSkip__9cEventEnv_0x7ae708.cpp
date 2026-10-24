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
// Function: checkSkip__9cEventEnv
// Address: 0x7ae708 - 0x7ae750
void checkSkip__9cEventEnv_0x7ae708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkSkip__9cEventEnv_0x7ae708");
#endif

    switch (ctx->pc) {
        case 0x7ae71cu: goto label_7ae71c;
        case 0x7ae740u: goto label_7ae740;
        default: break;
    }

    ctx->pc = 0x7ae708u;

    // 0x7ae708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae70c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae714: 0xc1eb9d4  jal         func_7AE750
    ctx->pc = 0x7AE714u;
    SET_GPR_U32(ctx, 31, 0x7AE71Cu);
    ctx->pc = 0x7AE718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE714u;
    // 0x7ae718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE750u, 0x7AE714u, 0x7AE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE71Cu;
label_7ae71c:
    // 0x7ae71c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AE71Cu;
    {
        const bool branch_taken_0x7ae71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE71Cu;
        // 0x7ae720: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae71c) {
            ctx->pc = 0x7AE740u;
            goto label_7ae740;
        }
    }
    ctx->pc = 0x7AE724u;
    // 0x7ae724: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x7ae724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x7ae728: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7ae728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x7ae72c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7ae72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7ae730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE730u;
    {
        const bool branch_taken_0x7ae730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE730u;
        // 0x7ae734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae730) {
            ctx->pc = 0x7AE740u;
            goto label_7ae740;
        }
    }
    ctx->pc = 0x7AE738u;
    // 0x7ae738: 0xc1eb924  jal         func_7AE490
    ctx->pc = 0x7AE738u;
    SET_GPR_U32(ctx, 31, 0x7AE740u);
    ctx->pc = 0x7AE73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE738u;
    // 0x7ae73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE490u, 0x7AE738u, 0x7AE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE740u;
label_7ae740:
    // 0x7ae740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae748: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE748u;
        // 0x7ae74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE750u;
}
} // namespace gh_event
