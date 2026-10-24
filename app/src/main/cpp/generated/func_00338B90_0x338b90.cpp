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

// Function: func_00338B90
// Address: 0x338b90 - 0x338bd8
void func_00338B90_0x338b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338B90_0x338b90");
#endif

    switch (ctx->pc) {
        case 0x338bacu: goto label_338bac;
        case 0x338bb8u: goto label_338bb8;
        case 0x338bc0u: goto label_338bc0;
        default: break;
    }

    ctx->pc = 0x338b90u;

    // 0x338b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338ba0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338ba4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338BA4u;
    SET_GPR_U32(ctx, 31, 0x338BACu);
    ctx->pc = 0x338BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338BA4u;
    // 0x338ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338BA4u, 0x338BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BACu;
label_338bac:
    // 0x338bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bb0: 0xc0ce2f6  jal         func_338BD8
    ctx->pc = 0x338BB0u;
    SET_GPR_U32(ctx, 31, 0x338BB8u);
    ctx->pc = 0x338BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338BB0u;
    // 0x338bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BD8u, 0x338BB0u, 0x338BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BB8u;
label_338bb8:
    // 0x338bb8: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338BB8u;
    SET_GPR_U32(ctx, 31, 0x338BC0u);
    ctx->pc = 0x338BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338BB8u;
    // 0x338bbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338BB8u, 0x338BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338BC0u;
label_338bc0:
    // 0x338bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338bc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x338bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x338BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BD0u;
        // 0x338bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338BD8u;
}
