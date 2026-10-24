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

// Function: func_00383438
// Address: 0x383438 - 0x383478
void func_00383438_0x383438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383438_0x383438");
#endif

    switch (ctx->pc) {
        case 0x383458u: goto label_383458;
        case 0x383468u: goto label_383468;
        default: break;
    }

    ctx->pc = 0x383438u;

    // 0x383438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38343c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383440: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x383440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x383444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x383448u;
    {
        const bool branch_taken_0x383448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383448u;
        // 0x38344c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383448) {
            ctx->pc = 0x383460u;
            goto label_383460;
        }
    }
    ctx->pc = 0x383450u;
    // 0x383450: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x383450u;
    SET_GPR_U32(ctx, 31, 0x383458u);
    ctx->pc = 0x383454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383450u;
    // 0x383454: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x383450u, 0x383458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383458u;
label_383458:
    // 0x383458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x383458u;
    {
        const bool branch_taken_0x383458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383458u;
        // 0x38345c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383458) {
            ctx->pc = 0x38346Cu;
            goto label_38346c;
        }
    }
    ctx->pc = 0x383460u;
label_383460:
    // 0x383460: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x383460u;
    SET_GPR_U32(ctx, 31, 0x383468u);
    ctx->pc = 0x383464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383460u;
    // 0x383464: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x383460u, 0x383468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383468u;
label_383468:
    // 0x383468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38346c:
    // 0x38346c: 0x3e00008  jr          $ra
    ctx->pc = 0x38346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38346Cu;
        // 0x383470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383474u;
    // 0x383474: 0x0  nop
    ctx->pc = 0x383474u;
    // NOP
    ctx->pc = 0x383478u;
}
