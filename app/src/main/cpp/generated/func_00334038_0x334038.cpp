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

// Function: func_00334038
// Address: 0x334038 - 0x334090
void func_00334038_0x334038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334038_0x334038");
#endif

    switch (ctx->pc) {
        case 0x334050u: goto label_334050;
        default: break;
    }

    ctx->pc = 0x334038u;

    // 0x334038: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33403c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334040: 0x24449fe0  addiu       $a0, $v0, -0x6020
    ctx->pc = 0x334040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x334044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x334044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334048: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x334048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33404c: 0x0  nop
    ctx->pc = 0x33404cu;
    // NOP
label_334050:
    // 0x334050: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x334054: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x334054u;
    {
        const bool branch_taken_0x334054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x334054) {
            ctx->pc = 0x334058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334054u;
            // 0x334058: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33406Cu;
            goto label_33406c;
        }
    }
    ctx->pc = 0x33405Cu;
    // 0x33405c: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x33405cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x334060: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x334060u;
    {
        const bool branch_taken_0x334060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x334064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334060u;
        // 0x334064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334060) {
            ctx->pc = 0x334080u;
            goto label_334080;
        }
    }
    ctx->pc = 0x334068u;
    // 0x334068: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_33406c:
    // 0x33406c: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x33406cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x334070: 0x0  nop
    ctx->pc = 0x334070u;
    // NOP
    // 0x334074: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x334074u;
    {
        const bool branch_taken_0x334074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334074u;
        // 0x334078: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334074) {
            ctx->pc = 0x334050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334050;
        }
    }
    ctx->pc = 0x33407Cu;
    // 0x33407c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33407cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334080:
    // 0x334080: 0x3e00008  jr          $ra
    ctx->pc = 0x334080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334088u;
    // 0x334088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x334088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33408c: 0x0  nop
    ctx->pc = 0x33408cu;
    // NOP
    ctx->pc = 0x334090u;
}
