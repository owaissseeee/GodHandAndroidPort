#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetSaveFileIndex__6cMcSys
// Address: 0x7c9540 - 0x7c95a0
void GetSaveFileIndex__6cMcSys_0x7c9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSaveFileIndex__6cMcSys_0x7c9540");
#endif

    switch (ctx->pc) {
        case 0x7c9568u: goto label_7c9568;
        case 0x7c9570u: goto label_7c9570;
        default: break;
    }

    ctx->pc = 0x7c9540u;

    // 0x7c9540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c9540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c9544: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c9544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c9548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c9548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c954c: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x7c954cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x7c9550: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c9550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c9554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c9554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c955c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x7c955cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c9560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c9560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9564: 0x0  nop
    ctx->pc = 0x7c9564u;
    // NOP
label_7c9568:
    // 0x7c9568: 0xc1f23d6  jal         func_7C8F58
    ctx->pc = 0x7C9568u;
    SET_GPR_U32(ctx, 31, 0x7C9570u);
    ctx->pc = 0x7C956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9568u;
    // 0x7c956c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F58u, 0x7C9568u, 0x7C9570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9570u;
label_7c9570:
    // 0x7c9570: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C9570u;
    {
        const bool branch_taken_0x7c9570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9570u;
        // 0x7c9574: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9570) {
            ctx->pc = 0x7C9588u;
            goto label_7c9588;
        }
    }
    ctx->pc = 0x7C9578u;
    // 0x7c9578: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x7c9578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x7c957c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C957Cu;
    {
        const bool branch_taken_0x7c957c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x7C9580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C957Cu;
        // 0x7c9580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c957c) {
            ctx->pc = 0x7C9568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c9568;
        }
    }
    ctx->pc = 0x7C9584u;
    // 0x7c9584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c9584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c9588:
    // 0x7c9588: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c9588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c958c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c958cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c9590: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c9590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9598: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9598u;
        // 0x7c959c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C95A0u;
}
} // namespace gh_mcport
