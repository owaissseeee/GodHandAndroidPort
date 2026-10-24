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
// Function: AddSkill__17cSkillListManager8PL_SKILLUc
// Address: 0x79a740 - 0x79a778
void AddSkill__17cSkillListManager8PL_SKILLUc_0x79a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddSkill__17cSkillListManager8PL_SKILLUc_0x79a740");
#endif

    switch (ctx->pc) {
        case 0x79a768u: goto label_79a768;
        default: break;
    }

    ctx->pc = 0x79a740u;

    // 0x79a740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a748: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a74c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A74Cu;
    {
        const bool branch_taken_0x79a74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A74Cu;
        // 0x79a750: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a74c) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A754u;
    // 0x79a754: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x79a758: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a75c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79a760: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79A760u;
    SET_GPR_U32(ctx, 31, 0x79A768u);
    ctx->pc = 0x79A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A760u;
    // 0x79a764: 0x63603  sra         $a2, $a2, 24 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79A760u, 0x79A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A76Cu;
        // 0x79a770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A774u;
    // 0x79a774: 0x0  nop
    ctx->pc = 0x79a774u;
    // NOP
    ctx->pc = 0x79a778u;
}
} // namespace gh_r000
