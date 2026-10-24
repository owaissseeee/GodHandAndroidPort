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
// Function: SubListSkill__17cSkillListManageri
// Address: 0x79a7e8 - 0x79a820
void SubListSkill__17cSkillListManageri_0x79a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubListSkill__17cSkillListManageri_0x79a7e8");
#endif

    switch (ctx->pc) {
        case 0x79a810u: goto label_79a810;
        default: break;
    }

    ctx->pc = 0x79a7e8u;

    // 0x79a7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a7f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a7f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A7F4u;
    {
        const bool branch_taken_0x79a7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F4u;
        // 0x79a7f8: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7f4) {
            ctx->pc = 0x79A810u;
            goto label_79a810;
        }
    }
    ctx->pc = 0x79A7FCu;
    // 0x79a7fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a800: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a804: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79a808: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79A808u;
    SET_GPR_U32(ctx, 31, 0x79A810u);
    ctx->pc = 0x79A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A808u;
    // 0x79a80c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79A808u, 0x79A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a814: 0x3e00008  jr          $ra
    ctx->pc = 0x79A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A81Cu;
    // 0x79a81c: 0x0  nop
    ctx->pc = 0x79a81cu;
    // NOP
    ctx->pc = 0x79a820u;
}
} // namespace gh_r000
