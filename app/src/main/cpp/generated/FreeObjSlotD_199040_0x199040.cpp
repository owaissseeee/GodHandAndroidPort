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

// Function: FreeObjSlotD_199040
// Address: 0x199040 - 0x1990a0
void FreeObjSlotD_199040_0x199040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjSlotD_199040_0x199040");
#endif

    switch (ctx->pc) {
        case 0x19907cu: goto label_19907c;
        case 0x19908cu: goto label_19908c;
        default: break;
    }

    ctx->pc = 0x199040u;

    // 0x199040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199044: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x199044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x199048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19904c: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
    // 0x199050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19905c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x199060: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x199064: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x199064u;
    {
        const bool branch_taken_0x199064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199064u;
        // 0x199068: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199064) {
            ctx->pc = 0x199080u;
            goto label_199080;
        }
    }
    ctx->pc = 0x19906Cu;
    // 0x19906c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19906cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x199070: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x199070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199074: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x199074u;
    SET_GPR_U32(ctx, 31, 0x19907Cu);
    ctx->pc = 0x199078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199074u;
    // 0x199078: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x199074u, 0x19907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19907Cu;
label_19907c:
    // 0x19907c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x19907cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_199080:
    // 0x199080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199084: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x199084u;
    SET_GPR_U32(ctx, 31, 0x19908Cu);
    ctx->pc = 0x199088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199084u;
    // 0x199088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x199084u, 0x19908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19908Cu;
label_19908c:
    // 0x19908c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19908cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199098: 0x3e00008  jr          $ra
    ctx->pc = 0x199098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199098u;
        // 0x19909c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1990A0u;
}
