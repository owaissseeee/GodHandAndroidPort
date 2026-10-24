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

// Function: func_0032B4E8
// Address: 0x32b4e8 - 0x32b530
void func_0032B4E8_0x32b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B4E8_0x32b4e8");
#endif

    switch (ctx->pc) {
        case 0x32b504u: goto label_32b504;
        case 0x32b510u: goto label_32b510;
        case 0x32b518u: goto label_32b518;
        default: break;
    }

    ctx->pc = 0x32b4e8u;

    // 0x32b4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b4f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b4fc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B4FCu;
    SET_GPR_U32(ctx, 31, 0x32B504u);
    ctx->pc = 0x32B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4FCu;
    // 0x32b500: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B4FCu, 0x32B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B504u;
label_32b504:
    // 0x32b504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b508: 0xc0cad4c  jal         func_32B530
    ctx->pc = 0x32B508u;
    SET_GPR_U32(ctx, 31, 0x32B510u);
    ctx->pc = 0x32B50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B508u;
    // 0x32b50c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B530u, 0x32B508u, 0x32B510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B510u;
label_32b510:
    // 0x32b510: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32B510u;
    SET_GPR_U32(ctx, 31, 0x32B518u);
    ctx->pc = 0x32B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B510u;
    // 0x32b514: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B510u, 0x32B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B518u;
label_32b518:
    // 0x32b518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b51c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32b51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b528: 0x3e00008  jr          $ra
    ctx->pc = 0x32B528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B528u;
        // 0x32b52c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B530u;
}
