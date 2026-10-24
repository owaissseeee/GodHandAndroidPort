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
// Function: AddListSkill__17cSkillListManageriUc
// Address: 0x79a778 - 0x79a7b8
void AddListSkill__17cSkillListManageriUc_0x79a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddListSkill__17cSkillListManageriUc_0x79a778");
#endif

    switch (ctx->pc) {
        case 0x79a7a8u: goto label_79a7a8;
        default: break;
    }

    ctx->pc = 0x79a778u;

    // 0x79a778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a780: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A784u;
    {
        const bool branch_taken_0x79a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A784u;
        // 0x79a788: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a784) {
            ctx->pc = 0x79A7A8u;
            goto label_79a7a8;
        }
    }
    ctx->pc = 0x79A78Cu;
    // 0x79a78c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x79a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x79a790: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x79a794: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a798: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79a79c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79a7a0: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79A7A0u;
    SET_GPR_U32(ctx, 31, 0x79A7A8u);
    ctx->pc = 0x79A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A0u;
    // 0x79a7a4: 0x63603  sra         $a2, $a2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79A7A0u, 0x79A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7A8u;
label_79a7a8:
    // 0x79a7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ACu;
        // 0x79a7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7B4u;
    // 0x79a7b4: 0x0  nop
    ctx->pc = 0x79a7b4u;
    // NOP
    ctx->pc = 0x79a7b8u;
}
} // namespace gh_r000
