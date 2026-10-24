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

// Function: func_00143500
// Address: 0x143500 - 0x143558
void func_00143500_0x143500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143500_0x143500");
#endif

    switch (ctx->pc) {
        case 0x143524u: goto label_143524;
        case 0x14353cu: goto label_14353c;
        default: break;
    }

    ctx->pc = 0x143500u;

    // 0x143500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143504: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x143508: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14350c: 0x8c625668  lw          $v0, 0x5668($v1)
    ctx->pc = 0x14350cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785668u));
    // 0x143510: 0x24705668  addiu       $s0, $v1, 0x5668
    ctx->pc = 0x143510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22120));
    // 0x143514: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143514u;
    {
        const bool branch_taken_0x143514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143514u;
        // 0x143518: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143514) {
            ctx->pc = 0x14353Cu;
            goto label_14353c;
        }
    }
    ctx->pc = 0x14351Cu;
    // 0x14351c: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x14351Cu;
    SET_GPR_U32(ctx, 31, 0x143524u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x14351Cu, 0x143524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143524u;
label_143524:
    // 0x143524: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x143524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x143528: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x14352c: 0x24a5e658  addiu       $a1, $a1, -0x19A8
    ctx->pc = 0x14352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960728));
    // 0x143530: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x143530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x143534: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x143534u;
    SET_GPR_U32(ctx, 31, 0x14353Cu);
    ctx->pc = 0x143538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143534u;
    // 0x143538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x143534u, 0x14353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14353Cu;
label_14353c:
    // 0x14353c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14353cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143548: 0x3e00008  jr          $ra
    ctx->pc = 0x143548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143548u;
        // 0x14354c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143550u;
    // 0x143550: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x143550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x143554: 0x0  nop
    ctx->pc = 0x143554u;
    // NOP
    ctx->pc = 0x143558u;
}
