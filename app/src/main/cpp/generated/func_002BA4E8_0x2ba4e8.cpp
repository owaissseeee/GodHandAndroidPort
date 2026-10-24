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

// Function: func_002BA4E8
// Address: 0x2ba4e8 - 0x2ba538
void func_002BA4E8_0x2ba4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA4E8_0x2ba4e8");
#endif

    switch (ctx->pc) {
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba524u: goto label_2ba524;
        default: break;
    }

    ctx->pc = 0x2ba4e8u;

    // 0x2ba4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba4ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba4f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba4f4: 0x8c626308  lw          $v0, 0x6308($v1)
    ctx->pc = 0x2ba4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786308u));
    // 0x2ba4f8: 0x24706308  addiu       $s0, $v1, 0x6308
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25352));
    // 0x2ba4fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA4FCu;
    {
        const bool branch_taken_0x2ba4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4FCu;
        // 0x2ba500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4fc) {
            ctx->pc = 0x2BA524u;
            goto label_2ba524;
        }
    }
    ctx->pc = 0x2BA504u;
    // 0x2ba504: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA504u;
    SET_GPR_U32(ctx, 31, 0x2BA50Cu);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA504u, 0x2BA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA50Cu;
label_2ba50c:
    // 0x2ba50c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba510: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba514: 0x24a5bdc0  addiu       $a1, $a1, -0x4240
    ctx->pc = 0x2ba514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950336));
    // 0x2ba518: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba51c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA51Cu;
    SET_GPR_U32(ctx, 31, 0x2BA524u);
    ctx->pc = 0x2BA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA51Cu;
    // 0x2ba520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA51Cu, 0x2BA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA524u;
label_2ba524:
    // 0x2ba524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba52c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba530: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA538u;
}
