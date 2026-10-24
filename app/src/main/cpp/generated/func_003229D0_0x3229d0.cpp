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

// Function: func_003229D0
// Address: 0x3229d0 - 0x322a38
void func_003229D0_0x3229d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003229D0_0x3229d0");
#endif

    switch (ctx->pc) {
        case 0x3229fcu: goto label_3229fc;
        case 0x322a10u: goto label_322a10;
        case 0x322a18u: goto label_322a18;
        default: break;
    }

    ctx->pc = 0x3229d0u;

    // 0x3229d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3229d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3229d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3229d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3229d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3229dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3229e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3229e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3229e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3229e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3229e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3229ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3229f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3229f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3229f4: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3229F4u;
    SET_GPR_U32(ctx, 31, 0x3229FCu);
    ctx->pc = 0x3229F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3229F4u;
    // 0x3229f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x3229F4u, 0x3229FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229FCu;
label_3229fc:
    // 0x3229fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3229fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a08: 0xc0c8a8e  jal         func_322A38
    ctx->pc = 0x322A08u;
    SET_GPR_U32(ctx, 31, 0x322A10u);
    ctx->pc = 0x322A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A08u;
    // 0x322a0c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A38u, 0x322A08u, 0x322A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A10u;
label_322a10:
    // 0x322a10: 0xc0c9226  jal         func_324898
    ctx->pc = 0x322A10u;
    SET_GPR_U32(ctx, 31, 0x322A18u);
    ctx->pc = 0x322A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A10u;
    // 0x322a14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x322A10u, 0x322A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A18u;
label_322a18:
    // 0x322a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322a28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x322a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322a30: 0x3e00008  jr          $ra
    ctx->pc = 0x322A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A30u;
        // 0x322a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A38u;
}
