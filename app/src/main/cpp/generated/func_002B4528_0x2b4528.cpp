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

// Function: func_002B4528
// Address: 0x2b4528 - 0x2b4560
void func_002B4528_0x2b4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4528_0x2b4528");
#endif

    switch (ctx->pc) {
        case 0x2b4540u: goto label_2b4540;
        case 0x2b4550u: goto label_2b4550;
        default: break;
    }

    ctx->pc = 0x2b4528u;

    // 0x2b4528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b452c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4538: 0xc0c738e  jal         func_31CE38
    ctx->pc = 0x2B4538u;
    SET_GPR_U32(ctx, 31, 0x2B4540u);
    ctx->pc = 0x2B453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4538u;
    // 0x2b453c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CE38u, 0x2B4538u, 0x2B4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4540u;
label_2b4540:
    // 0x2b4540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4544: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4548: 0xc0ad10a  jal         func_2B4428
    ctx->pc = 0x2B4548u;
    SET_GPR_U32(ctx, 31, 0x2B4550u);
    ctx->pc = 0x2B454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4548u;
    // 0x2b454c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4428u, 0x2B4548u, 0x2B4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4550u;
label_2b4550:
    // 0x2b4550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4558: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4558u;
        // 0x2b455c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4560u;
}
