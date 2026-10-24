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

// Function: func_00328240
// Address: 0x328240 - 0x328288
void func_00328240_0x328240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328240_0x328240");
#endif

    switch (ctx->pc) {
        case 0x32825cu: goto label_32825c;
        case 0x328268u: goto label_328268;
        case 0x328270u: goto label_328270;
        default: break;
    }

    ctx->pc = 0x328240u;

    // 0x328240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32824c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328254: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328254u;
    SET_GPR_U32(ctx, 31, 0x32825Cu);
    ctx->pc = 0x328258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328254u;
    // 0x328258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328254u, 0x32825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32825Cu;
label_32825c:
    // 0x32825c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32825cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328260: 0xc0ca0a2  jal         func_328288
    ctx->pc = 0x328260u;
    SET_GPR_U32(ctx, 31, 0x328268u);
    ctx->pc = 0x328264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328260u;
    // 0x328264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328288u, 0x328260u, 0x328268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328268u;
label_328268:
    // 0x328268: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328268u;
    SET_GPR_U32(ctx, 31, 0x328270u);
    ctx->pc = 0x32826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328268u;
    // 0x32826c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328268u, 0x328270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328270u;
label_328270:
    // 0x328270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32827c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32827cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328280: 0x3e00008  jr          $ra
    ctx->pc = 0x328280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328280u;
        // 0x328284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328288u;
}
