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

// Function: CreateObj
// Address: 0x30fa98 - 0x30fac8
void CreateObj_0x30fa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateObj_0x30fa98");
#endif

    switch (ctx->pc) {
        case 0x30faacu: goto label_30faac;
        case 0x30fab8u: goto label_30fab8;
        default: break;
    }

    ctx->pc = 0x30fa98u;

    // 0x30fa98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30fa9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30faa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30faa4: 0xc0c3eb2  jal         func_30FAC8
    ctx->pc = 0x30FAA4u;
    SET_GPR_U32(ctx, 31, 0x30FAACu);
    ctx->pc = 0x30FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAA4u;
    // 0x30faa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FAC8u, 0x30FAA4u, 0x30FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAACu;
label_30faac:
    // 0x30faac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fab0: 0xc0c3ec8  jal         func_30FB20
    ctx->pc = 0x30FAB0u;
    SET_GPR_U32(ctx, 31, 0x30FAB8u);
    ctx->pc = 0x30FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAB0u;
    // 0x30fab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FB20u, 0x30FAB0u, 0x30FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAB8u;
label_30fab8:
    // 0x30fab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30fab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fac0: 0x3e00008  jr          $ra
    ctx->pc = 0x30FAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAC0u;
        // 0x30fac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FAC8u;
}
