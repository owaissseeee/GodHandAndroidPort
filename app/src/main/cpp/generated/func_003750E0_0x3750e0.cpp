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

// Function: func_003750E0
// Address: 0x3750e0 - 0x375128
void func_003750E0_0x3750e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003750E0_0x3750e0");
#endif

    switch (ctx->pc) {
        case 0x3750fcu: goto label_3750fc;
        case 0x37510cu: goto label_37510c;
        default: break;
    }

    ctx->pc = 0x3750e0u;

    // 0x3750e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3750e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3750e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3750e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3750e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3750e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3750ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3750ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3750f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3750f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3750f4: 0xc0df46a  jal         func_37D1A8
    ctx->pc = 0x3750F4u;
    SET_GPR_U32(ctx, 31, 0x3750FCu);
    ctx->pc = 0x3750F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750F4u;
    // 0x3750f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1A8u, 0x3750F4u, 0x3750FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750FCu;
label_3750fc:
    // 0x3750fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3750FCu;
    {
        const bool branch_taken_0x3750fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3750fc) {
            ctx->pc = 0x375100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3750FCu;
            // 0x375100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375118u;
            goto label_375118;
        }
    }
    ctx->pc = 0x375104u;
    // 0x375104: 0xc0df418  jal         func_37D060
    ctx->pc = 0x375104u;
    SET_GPR_U32(ctx, 31, 0x37510Cu);
    ctx->pc = 0x375108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375104u;
    // 0x375108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D060u, 0x375104u, 0x37510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37510Cu;
label_37510c:
    // 0x37510c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375110: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x375110u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x375114: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x375114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_375118:
    // 0x375118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37511c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375120: 0x3e00008  jr          $ra
    ctx->pc = 0x375120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375120u;
        // 0x375124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375128u;
}
