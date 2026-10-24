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

// Function: func_0027EEC0
// Address: 0x27eec0 - 0x27ef10
void func_0027EEC0_0x27eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027EEC0_0x27eec0");
#endif

    switch (ctx->pc) {
        case 0x27eee8u: goto label_27eee8;
        case 0x27eef0u: goto label_27eef0;
        case 0x27eefcu: goto label_27eefc;
        default: break;
    }

    ctx->pc = 0x27eec0u;

    // 0x27eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27eec4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27eec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27eecc: 0x24428598  addiu       $v0, $v0, -0x7A68
    ctx->pc = 0x27eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935960));
    // 0x27eed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27eed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27eed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27eedc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27eedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eee0: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x27EEE0u;
    SET_GPR_U32(ctx, 31, 0x27EEE8u);
    ctx->pc = 0x27EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEE0u;
    // 0x27eee4: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x27EEE0u, 0x27EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEE8u;
label_27eee8:
    // 0x27eee8: 0xc09fc5c  jal         func_27F170
    ctx->pc = 0x27EEE8u;
    SET_GPR_U32(ctx, 31, 0x27EEF0u);
    ctx->pc = 0x27EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEE8u;
    // 0x27eeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F170u, 0x27EEE8u, 0x27EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEF0u;
label_27eef0:
    // 0x27eef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eef4: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x27EEF4u;
    SET_GPR_U32(ctx, 31, 0x27EEFCu);
    ctx->pc = 0x27EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EEF4u;
    // 0x27eef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x27EEF4u, 0x27EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEFCu;
label_27eefc:
    // 0x27eefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27eefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ef00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ef00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x27EF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF08u;
        // 0x27ef0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EF10u;
}
