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

// Function: func_0032FA68
// Address: 0x32fa68 - 0x32fad8
void func_0032FA68_0x32fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032FA68_0x32fa68");
#endif

    ctx->pc = 0x32fa68u;

    // 0x32fa68: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x32fa68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32fa6c: 0x3c054149  lui         $a1, 0x4149
    ctx->pc = 0x32fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16713 << 16));
    // 0x32fa70: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x32fa70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32fa74: 0x34a55845  ori         $a1, $a1, 0x5845
    ctx->pc = 0x32fa74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22597);
    // 0x32fa78: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x32fa78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32fa7c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x32fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32fa80: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x32fa80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x32fa84: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32fa88: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32fa8c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x32fa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x32fa90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32fa94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32fa98: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x32fa98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x32fa9c: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x32FA9Cu;
    {
        const bool branch_taken_0x32fa9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fa9c) {
            ctx->pc = 0x32FAD0u;
            goto label_32fad0;
        }
    }
    ctx->pc = 0x32FAA4u;
    // 0x32faa4: 0x3c024149  lui         $v0, 0x4149
    ctx->pc = 0x32faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
    // 0x32faa8: 0x34425846  ori         $v0, $v0, 0x5846
    ctx->pc = 0x32faa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22598);
    // 0x32faac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32faacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32fab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32FAB0u;
    {
        const bool branch_taken_0x32fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fab0) {
            ctx->pc = 0x32FAC8u;
            goto label_32fac8;
        }
    }
    ctx->pc = 0x32FAB8u;
    // 0x32fab8: 0x3c024149  lui         $v0, 0x4149
    ctx->pc = 0x32fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
    // 0x32fabc: 0x34425850  ori         $v0, $v0, 0x5850
    ctx->pc = 0x32fabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22608);
    // 0x32fac0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FAC0u;
    {
        const bool branch_taken_0x32fac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32fac0) {
            ctx->pc = 0x32FAD0u;
            goto label_32fad0;
        }
    }
    ctx->pc = 0x32FAC8u;
label_32fac8:
    // 0x32fac8: 0x3e00008  jr          $ra
    ctx->pc = 0x32FAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAC8u;
        // 0x32facc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAD0u;
label_32fad0:
    // 0x32fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAD0u;
        // 0x32fad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAD8u;
}
