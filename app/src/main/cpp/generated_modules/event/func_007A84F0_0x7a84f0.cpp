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
// Function: func_007A84F0
// Address: 0x7a84f0 - 0x7a8550
void func_007A84F0_0x7a84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A84F0_0x7a84f0");
#endif

    ctx->pc = 0x7a84f0u;

    // 0x7a84f0: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x7a84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x7a84f4: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7A84F4u;
    {
        const bool branch_taken_0x7a84f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A84F4u;
        // 0x7a84f8: 0x2482fd9d  addiu       $v0, $a0, -0x263 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966685));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a84f4) {
            ctx->pc = 0x7A8528u;
            goto label_7a8528;
        }
    }
    ctx->pc = 0x7A84FCu;
    // 0x7a84fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x7a84fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7a8500: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7A8500u;
    {
        const bool branch_taken_0x7a8500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8500u;
        // 0x7a8504: 0x2482fd9b  addiu       $v0, $a0, -0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8500) {
            ctx->pc = 0x7A8528u;
            goto label_7a8528;
        }
    }
    ctx->pc = 0x7A8508u;
    // 0x7a8508: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x7a8508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7a850c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7A850Cu;
    {
        const bool branch_taken_0x7a850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A850Cu;
        // 0x7a8510: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a850c) {
            ctx->pc = 0x7A8528u;
            goto label_7a8528;
        }
    }
    ctx->pc = 0x7A8514u;
    // 0x7a8514: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A8514u;
    {
        const bool branch_taken_0x7a8514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7A8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8514u;
        // 0x7a8518: 0x2482fd96  addiu       $v0, $a0, -0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966678));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8514) {
            ctx->pc = 0x7A8528u;
            goto label_7a8528;
        }
    }
    ctx->pc = 0x7A851Cu;
    // 0x7a851c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x7a851cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x7a8520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8520u;
    {
        const bool branch_taken_0x7a8520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8520u;
        // 0x7a8524: 0x28820200  slti        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8520) {
            ctx->pc = 0x7A8530u;
            goto label_7a8530;
        }
    }
    ctx->pc = 0x7A8528u;
label_7a8528:
    // 0x7a8528: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8528u;
        // 0x7a852c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8530u;
label_7a8530:
    // 0x7a8530: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7a8530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7a8534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8534u;
    {
        const bool branch_taken_0x7a8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8534u;
        // 0x7a8538: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8534) {
            ctx->pc = 0x7A8544u;
            goto label_7a8544;
        }
    }
    ctx->pc = 0x7A853Cu;
    // 0x7a853c: 0x28820300  slti        $v0, $a0, 0x300
    ctx->pc = 0x7a853cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7a8540: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7a8540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a8544:
    // 0x7a8544: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8544u;
        // 0x7a8548: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A854Cu;
    // 0x7a854c: 0x0  nop
    ctx->pc = 0x7a854cu;
    // NOP
    ctx->pc = 0x7a8550u;
}
} // namespace gh_event
