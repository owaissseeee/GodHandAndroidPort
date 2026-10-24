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

// Function: func_002B8D88
// Address: 0x2b8d88 - 0x2b8e10
void func_002B8D88_0x2b8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8D88_0x2b8d88");
#endif

    ctx->pc = 0x2b8d88u;

    // 0x2b8d88: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2b8d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d8c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2b8d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d90: 0x14aa000f  bne         $a1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2B8D90u;
    {
        const bool branch_taken_0x2b8d90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D90u;
        // 0x2b8d94: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d90) {
            ctx->pc = 0x2B8DD0u;
            goto label_2b8dd0;
        }
    }
    ctx->pc = 0x2B8D98u;
    // 0x2b8d98: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x2b8d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2b8d9c: 0x10a3804  sllv        $a3, $t2, $t0
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
    // 0x2b8da0: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b8da4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b8da8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b8dac: 0x12a3004  sllv        $a2, $t2, $t1
    ctx->pc = 0x2b8dacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x2b8db0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8db4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b8db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b8db8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2b8db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2b8dbc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2b8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2b8dc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b8dc4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b8dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2b8dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8DC8u;
        // 0x2b8dcc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8DD0u;
label_2b8dd0:
    // 0x2b8dd0: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2b8dd4: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2b8dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b8dd8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b8ddc: 0x10a1004  sllv        $v0, $t2, $t0
    ctx->pc = 0x2b8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
    // 0x2b8de0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b8de4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b8de4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b8de8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b8dec: 0x12a2004  sllv        $a0, $t2, $t1
    ctx->pc = 0x2b8decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x2b8df0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2b8df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b8df4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2b8df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b8df8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2b8dfc: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2b8dfcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2b8e00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b8e04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b8e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E08u;
        // 0x2b8e0c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8E10u;
}
