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

// Function: func_00334A90
// Address: 0x334a90 - 0x334ac8
void func_00334A90_0x334a90(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334A90_0x334a90");
#endif

    if (__builtin_expect(ctx->pc != 0x334a90u, 0)) {
        switch (ctx->pc) {
            case 0x334aacu: goto label_334aac;
            default: break;
        }
    }


    // 0x334a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334a94: 0x80102d  daddu       $v0, $a0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334A98u;
    {
        const bool branch_taken_0x334a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A98u;
        // 0x334a9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a98) {
            ctx->pc = 0x334AB8u;
            goto label_334ab8;
        }
    }
    // 0x334aa0: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334aa4: 0xc0cd002  jal         func_334008
    SET_GPR_U32(ctx, 31, 0x334AACu);
    ctx->pc = 0x334AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AA4u;
    // 0x334aa8: 0x24a54960  addiu       $a1, $a1, 0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00334008_0x334008, 0x334008u, 0x334aacu)) {
        return;
    }
label_334aac:
    // 0x334aac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x334AACu;
    {
        const bool branch_taken_0x334aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AACu;
        // 0x334ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334aac) {
            ctx->pc = 0x334ABCu;
            goto label_334abc;
        }
    }
    // 0x334ab4: 0x0  nop
    // NOP
label_334ab8:
    // 0x334ab8: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x334ab8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_334abc:
    // 0x334abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x334AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AC0u;
        // 0x334ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334AC8u;
}