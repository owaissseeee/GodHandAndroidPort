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

// Function: GetOrInitSingletonC_13C758
// Address: 0x13c758 - 0x13c798
void GetOrInitSingletonC_13C758_0x13c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingletonC_13C758_0x13c758");
#endif

    switch (ctx->pc) {
        case 0x13c784u: goto label_13c784;
        default: break;
    }

    ctx->pc = 0x13c758u;

    // 0x13c758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c75c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x13c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x13c760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13c764: 0x8c620d28  lw          $v0, 0xD28($v1)
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D28u));
    // 0x13c768: 0x24700d28  addiu       $s0, $v1, 0xD28
    ctx->pc = 0x13c768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3368));
    // 0x13c76c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C76Cu;
    {
        const bool branch_taken_0x13c76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C76Cu;
        // 0x13c770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c76c) {
            ctx->pc = 0x13C784u;
            goto label_13c784;
        }
    }
    ctx->pc = 0x13C774u;
    // 0x13c774: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13c778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c77c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x13C77Cu;
    SET_GPR_U32(ctx, 31, 0x13C784u);
    ctx->pc = 0x13C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C77Cu;
    // 0x13c780: 0x24a5dd00  addiu       $a1, $a1, -0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x13C77Cu, 0x13C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C784u;
label_13c784:
    // 0x13c784: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c78c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13c78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c790: 0x3e00008  jr          $ra
    ctx->pc = 0x13C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C790u;
        // 0x13c794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C798u;
}
