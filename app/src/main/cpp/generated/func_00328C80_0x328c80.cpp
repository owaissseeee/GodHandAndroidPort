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

// Function: func_00328C80
// Address: 0x328c80 - 0x328cd8
void func_00328C80_0x328c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328C80_0x328c80");
#endif

    switch (ctx->pc) {
        case 0x328ca4u: goto label_328ca4;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cbcu: goto label_328cbc;
        default: break;
    }

    ctx->pc = 0x328c80u;

    // 0x328c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328c90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x328c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x328c98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x328c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x328c9c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328C9Cu;
    SET_GPR_U32(ctx, 31, 0x328CA4u);
    ctx->pc = 0x328CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C9Cu;
    // 0x328ca0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328C9Cu, 0x328CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CA4u;
label_328ca4:
    // 0x328ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cac: 0xc0ca336  jal         func_328CD8
    ctx->pc = 0x328CACu;
    SET_GPR_U32(ctx, 31, 0x328CB4u);
    ctx->pc = 0x328CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CACu;
    // 0x328cb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328CD8u, 0x328CACu, 0x328CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CB4u;
label_328cb4:
    // 0x328cb4: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328CB4u;
    SET_GPR_U32(ctx, 31, 0x328CBCu);
    ctx->pc = 0x328CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CB4u;
    // 0x328cb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328CB4u, 0x328CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CBCu;
label_328cbc:
    // 0x328cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328cc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328ccc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x328CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CD0u;
        // 0x328cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328CD8u;
}
