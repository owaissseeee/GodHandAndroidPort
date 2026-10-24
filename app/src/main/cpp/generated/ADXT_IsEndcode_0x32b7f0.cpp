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

// Function: ADXT_IsEndcode
// Address: 0x32b7f0 - 0x32b830
void ADXT_IsEndcode_0x32b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_IsEndcode_0x32b7f0");
#endif

    ctx->pc = 0x32b7f0u;

    // 0x32b7f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x32b7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b7f4: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x32b7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32b7f8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32B7F8u;
    {
        const bool branch_taken_0x32b7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7F8u;
        // 0x32b7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7f8) {
            ctx->pc = 0x32B828u;
            goto label_32b828;
        }
    }
    ctx->pc = 0x32B800u;
    // 0x32b800: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x32b800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b804: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x32b804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32b808: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x32b808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32b80c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x32b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x32b810: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x32b810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x32b814: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32b818: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B818u;
    {
        const bool branch_taken_0x32b818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x32b818) {
            ctx->pc = 0x32B828u;
            goto label_32b828;
        }
    }
    ctx->pc = 0x32B820u;
    // 0x32b820: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x32b820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x32b824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32b828:
    // 0x32b828: 0x3e00008  jr          $ra
    ctx->pc = 0x32B828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B830u;
}
