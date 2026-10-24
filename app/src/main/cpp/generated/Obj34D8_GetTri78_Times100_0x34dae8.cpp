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

// Function: Obj34D8_GetTri78_Times100
// Address: 0x34dae8 - 0x34db20
void Obj34D8_GetTri78_Times100_0x34dae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj34D8_GetTri78_Times100_0x34dae8");
#endif

    ctx->pc = 0x34dae8u;

    // 0x34dae8: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x34daec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34daf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DAF0u;
    {
        const bool branch_taken_0x34daf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DAF0u;
        // 0x34daf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34daf0) {
            ctx->pc = 0x34DB18u;
            goto label_34db18;
        }
    }
    ctx->pc = 0x34DAF8u;
    // 0x34daf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34dafc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x34dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34db00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x34db00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34db04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34db08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34db0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34db10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34db14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_34db18:
    // 0x34db18: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB20u;
}
