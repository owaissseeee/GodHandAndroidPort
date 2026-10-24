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

// Function: cCoreSave_getGodItemNum
// Address: 0x1fabb0 - 0x1fac00
void cCoreSave_getGodItemNum_0x1fabb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getGodItemNum_0x1fabb0");
#endif

    switch (ctx->pc) {
        case 0x1fabd0u: goto label_1fabd0;
        default: break;
    }

    ctx->pc = 0x1fabb0u;

    // 0x1fabb0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fabb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fabb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fabb8: 0x90820156  lbu         $v0, 0x156($a0)
    ctx->pc = 0x1fabb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 342)));
    // 0x1fabbc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FABBCu;
    {
        const bool branch_taken_0x1fabbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABBCu;
        // 0x1fabc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabbc) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABC4u;
    // 0x1fabc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fabc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fabc8: 0x24e800a8  addiu       $t0, $a3, 0xA8
    ctx->pc = 0x1fabc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 168));
    // 0x1fabcc: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1fabccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1fabd0:
    // 0x1fabd0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1fabd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fabd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fabd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fabd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fabdc: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x1fabdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fabe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FABE0u;
    {
        const bool branch_taken_0x1fabe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABE0u;
        // 0x1fabe4: 0x83280b  movn        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabe0) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABE8u;
    // 0x1fabe8: 0x90e20156  lbu         $v0, 0x156($a3)
    ctx->pc = 0x1fabe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 342)));
    // 0x1fabec: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1fabecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fabf0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FABF0u;
    {
        const bool branch_taken_0x1fabf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABF0u;
        // 0x1fabf4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabf0) {
            ctx->pc = 0x1FABD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fabd0;
        }
    }
    ctx->pc = 0x1FABF8u;
label_1fabf8:
    // 0x1fabf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABF8u;
        // 0x1fabfc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC00u;
}
