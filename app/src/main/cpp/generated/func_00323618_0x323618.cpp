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

// Function: func_00323618
// Address: 0x323618 - 0x323660
void func_00323618_0x323618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323618_0x323618");
#endif

    switch (ctx->pc) {
        case 0x323634u: goto label_323634;
        case 0x323640u: goto label_323640;
        case 0x323648u: goto label_323648;
        default: break;
    }

    ctx->pc = 0x323618u;

    // 0x323618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32361c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32362c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x32362Cu;
    SET_GPR_U32(ctx, 31, 0x323634u);
    ctx->pc = 0x323630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32362Cu;
    // 0x323630: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x32362Cu, 0x323634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323634u;
label_323634:
    // 0x323634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323638: 0xc0c8d98  jal         func_323660
    ctx->pc = 0x323638u;
    SET_GPR_U32(ctx, 31, 0x323640u);
    ctx->pc = 0x32363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323638u;
    // 0x32363c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323660u, 0x323638u, 0x323640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323640u;
label_323640:
    // 0x323640: 0xc0c9226  jal         func_324898
    ctx->pc = 0x323640u;
    SET_GPR_U32(ctx, 31, 0x323648u);
    ctx->pc = 0x323644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323640u;
    // 0x323644: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x323640u, 0x323648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323648u;
label_323648:
    // 0x323648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32364c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323658: 0x3e00008  jr          $ra
    ctx->pc = 0x323658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323658u;
        // 0x32365c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323660u;
}
