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

// Function: func_003395A0
// Address: 0x3395a0 - 0x3395f8
void func_003395A0_0x3395a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003395A0_0x3395a0");
#endif

    switch (ctx->pc) {
        case 0x3395c4u: goto label_3395c4;
        case 0x3395d4u: goto label_3395d4;
        case 0x3395dcu: goto label_3395dc;
        default: break;
    }

    ctx->pc = 0x3395a0u;

    // 0x3395a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3395a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3395a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3395a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3395a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3395acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3395b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3395b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3395b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3395b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3395b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3395bc: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3395BCu;
    SET_GPR_U32(ctx, 31, 0x3395C4u);
    ctx->pc = 0x3395C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395BCu;
    // 0x3395c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3395BCu, 0x3395C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395C4u;
label_3395c4:
    // 0x3395c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3395c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3395c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395cc: 0xc0ce57e  jal         func_3395F8
    ctx->pc = 0x3395CCu;
    SET_GPR_U32(ctx, 31, 0x3395D4u);
    ctx->pc = 0x3395D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395CCu;
    // 0x3395d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395F8u, 0x3395CCu, 0x3395D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395D4u;
label_3395d4:
    // 0x3395d4: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x3395D4u;
    SET_GPR_U32(ctx, 31, 0x3395DCu);
    ctx->pc = 0x3395D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395D4u;
    // 0x3395d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3395D4u, 0x3395DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395DCu;
label_3395dc:
    // 0x3395dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3395dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3395e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3395e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3395e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3395e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3395e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3395ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3395ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3395f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3395F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3395F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395F0u;
        // 0x3395f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3395F8u;
}
