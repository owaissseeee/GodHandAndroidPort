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

// Function: func_00374508
// Address: 0x374508 - 0x374548
void func_00374508_0x374508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374508_0x374508");
#endif

    switch (ctx->pc) {
        case 0x374520u: goto label_374520;
        case 0x37452cu: goto label_37452c;
        default: break;
    }

    ctx->pc = 0x374508u;

    // 0x374508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37450c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374510: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x374510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x374514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374518: 0xc0dd0d8  jal         func_374360
    ctx->pc = 0x374518u;
    SET_GPR_U32(ctx, 31, 0x374520u);
    ctx->pc = 0x37451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374518u;
    // 0x37451c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374360u, 0x374518u, 0x374520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374520u;
label_374520:
    // 0x374520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x374520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374524: 0xc0dd166  jal         func_374598
    ctx->pc = 0x374524u;
    SET_GPR_U32(ctx, 31, 0x37452Cu);
    ctx->pc = 0x374528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374524u;
    // 0x374528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374598u, 0x374524u, 0x37452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37452Cu;
label_37452c:
    // 0x37452c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37452cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374534: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x374534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37453c: 0x3e00008  jr          $ra
    ctx->pc = 0x37453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37453Cu;
        // 0x374540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37453Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374544u;
    // 0x374544: 0x0  nop
    ctx->pc = 0x374544u;
    // NOP
    ctx->pc = 0x374548u;
}
