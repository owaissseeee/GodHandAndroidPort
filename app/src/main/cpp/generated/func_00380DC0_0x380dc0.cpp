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

// Function: func_00380DC0
// Address: 0x380dc0 - 0x380e10
void func_00380DC0_0x380dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380DC0_0x380dc0");
#endif

    switch (ctx->pc) {
        case 0x380dd4u: goto label_380dd4;
        case 0x380de4u: goto label_380de4;
        case 0x380df0u: goto label_380df0;
        case 0x380e00u: goto label_380e00;
        default: break;
    }

    ctx->pc = 0x380dc0u;

    // 0x380dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380dc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380dcc: 0xc0e0384  jal         func_380E10
    ctx->pc = 0x380DCCu;
    SET_GPR_U32(ctx, 31, 0x380DD4u);
    ctx->pc = 0x380DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DCCu;
    // 0x380dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E10u, 0x380DCCu, 0x380DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DD4u;
label_380dd4:
    // 0x380dd4: 0x26060318  addiu       $a2, $s0, 0x318
    ctx->pc = 0x380dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x380dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ddc: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x380DDCu;
    SET_GPR_U32(ctx, 31, 0x380DE4u);
    ctx->pc = 0x380DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DDCu;
    // 0x380de0: 0x26050348  addiu       $a1, $s0, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x380DDCu, 0x380DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DE4u;
label_380de4:
    // 0x380de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380de8: 0xc0e0d0e  jal         func_383438
    ctx->pc = 0x380DE8u;
    SET_GPR_U32(ctx, 31, 0x380DF0u);
    ctx->pc = 0x380DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DE8u;
    // 0x380dec: 0x26050370  addiu       $a1, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383438u, 0x380DE8u, 0x380DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380DF0u;
label_380df0:
    // 0x380df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380df4: 0x24850484  addiu       $a1, $a0, 0x484
    ctx->pc = 0x380df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x380df8: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x380DF8u;
    SET_GPR_U32(ctx, 31, 0x380E00u);
    ctx->pc = 0x380DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380DF8u;
    // 0x380dfc: 0x24860470  addiu       $a2, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x380DF8u, 0x380E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E00u;
label_380e00:
    // 0x380e00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x380e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380e08: 0x3e00008  jr          $ra
    ctx->pc = 0x380E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E08u;
        // 0x380e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380E10u;
}
