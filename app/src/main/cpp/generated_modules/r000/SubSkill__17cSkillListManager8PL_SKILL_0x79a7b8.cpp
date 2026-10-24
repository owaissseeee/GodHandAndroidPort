#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: SubSkill__17cSkillListManager8PL_SKILL
// Address: 0x79a7b8 - 0x79a7e8
void SubSkill__17cSkillListManager8PL_SKILL_0x79a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubSkill__17cSkillListManager8PL_SKILL_0x79a7b8");
#endif

    switch (ctx->pc) {
        case 0x79a7d8u: goto label_79a7d8;
        default: break;
    }

    ctx->pc = 0x79a7b8u;

    // 0x79a7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a7c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a7c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A7C4u;
    {
        const bool branch_taken_0x79a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C4u;
        // 0x79a7c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c4) {
            ctx->pc = 0x79A7D8u;
            goto label_79a7d8;
        }
    }
    ctx->pc = 0x79A7CCu;
    // 0x79a7cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a7d0: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79A7D0u;
    SET_GPR_U32(ctx, 31, 0x79A7D8u);
    ctx->pc = 0x79A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7D0u;
    // 0x79a7d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79A7D0u, 0x79A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7D8u;
label_79a7d8:
    // 0x79a7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7DCu;
        // 0x79a7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7E4u;
    // 0x79a7e4: 0x0  nop
    ctx->pc = 0x79a7e4u;
    // NOP
    ctx->pc = 0x79a7e8u;
}
} // namespace gh_r000
