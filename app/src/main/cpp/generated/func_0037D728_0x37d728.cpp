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

// Function: func_0037D728
// Address: 0x37d728 - 0x37d760
void func_0037D728_0x37d728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D728_0x37d728");
#endif

    ctx->pc = 0x37d728u;

    // 0x37d728: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37d728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d72c: 0x94a40046  lhu         $a0, 0x46($a1)
    ctx->pc = 0x37d72cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x37d730: 0x94a30048  lhu         $v1, 0x48($a1)
    ctx->pc = 0x37d730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x37d734: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x37d734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x37d738: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x37d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37d73c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d740: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D740u;
    {
        const bool branch_taken_0x37d740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D740u;
        // 0x37d744: 0xa4a4004a  sh          $a0, 0x4A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 74), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d740) {
            ctx->pc = 0x37D754u;
            goto label_37d754;
        }
    }
    ctx->pc = 0x37D748u;
    // 0x37d748: 0x94a2002e  lhu         $v0, 0x2E($a1)
    ctx->pc = 0x37d748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x37d74c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x37d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37d750: 0xa4a2004a  sh          $v0, 0x4A($a1)
    ctx->pc = 0x37d750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 74), (uint16_t)GPR_U32(ctx, 2));
label_37d754:
    // 0x37d754: 0x3e00008  jr          $ra
    ctx->pc = 0x37D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D75Cu;
    // 0x37d75c: 0x0  nop
    ctx->pc = 0x37d75cu;
    // NOP
    ctx->pc = 0x37d760u;
}
