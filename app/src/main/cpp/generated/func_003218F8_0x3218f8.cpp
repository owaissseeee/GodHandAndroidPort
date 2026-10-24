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

// Function: func_003218F8
// Address: 0x3218f8 - 0x321938
void func_003218F8_0x3218f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003218F8_0x3218f8");
#endif

    switch (ctx->pc) {
        case 0x321924u: goto label_321924;
        default: break;
    }

    ctx->pc = 0x3218f8u;

    // 0x3218f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3218f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3218fc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3218fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x321900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321904: 0x8c620da8  lw          $v0, 0xDA8($v1)
    ctx->pc = 0x321904u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460DA8u));
    // 0x321908: 0x24700da8  addiu       $s0, $v1, 0xDA8
    ctx->pc = 0x321908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3496));
    // 0x32190c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32190Cu;
    {
        const bool branch_taken_0x32190c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32190Cu;
        // 0x321910: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32190c) {
            ctx->pc = 0x321924u;
            goto label_321924;
        }
    }
    ctx->pc = 0x321914u;
    // 0x321914: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x321914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x321918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32191c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x32191Cu;
    SET_GPR_U32(ctx, 31, 0x321924u);
    ctx->pc = 0x321920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32191Cu;
    // 0x321920: 0x24a512b0  addiu       $a1, $a1, 0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x32191Cu, 0x321924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321924u;
label_321924:
    // 0x321924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x321924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32192c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32192cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321930: 0x3e00008  jr          $ra
    ctx->pc = 0x321930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321930u;
        // 0x321934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321938u;
}
