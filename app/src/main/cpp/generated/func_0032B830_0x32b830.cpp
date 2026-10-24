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

// Function: func_0032B830
// Address: 0x32b830 - 0x32b888
void func_0032B830_0x32b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B830_0x32b830");
#endif

    switch (ctx->pc) {
        case 0x32b854u: goto label_32b854;
        case 0x32b864u: goto label_32b864;
        case 0x32b86cu: goto label_32b86c;
        default: break;
    }

    ctx->pc = 0x32b830u;

    // 0x32b830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b83c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32b848: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32b84c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B84Cu;
    SET_GPR_U32(ctx, 31, 0x32B854u);
    ctx->pc = 0x32B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B84Cu;
    // 0x32b850: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B84Cu, 0x32B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B854u;
label_32b854:
    // 0x32b854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32b858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b85c: 0xc0cae22  jal         func_32B888
    ctx->pc = 0x32B85Cu;
    SET_GPR_U32(ctx, 31, 0x32B864u);
    ctx->pc = 0x32B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B85Cu;
    // 0x32b860: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B888u, 0x32B85Cu, 0x32B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B864u;
label_32b864:
    // 0x32b864: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32B864u;
    SET_GPR_U32(ctx, 31, 0x32B86Cu);
    ctx->pc = 0x32B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B864u;
    // 0x32b868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B864u, 0x32B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B86Cu;
label_32b86c:
    // 0x32b86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32b870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32b874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b87c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32b880: 0x3e00008  jr          $ra
    ctx->pc = 0x32B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B880u;
        // 0x32b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B888u;
}
