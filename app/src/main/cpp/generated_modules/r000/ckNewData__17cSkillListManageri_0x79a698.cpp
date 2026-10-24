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
// Function: ckNewData__17cSkillListManageri
// Address: 0x79a698 - 0x79a6d8
void ckNewData__17cSkillListManageri_0x79a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ckNewData__17cSkillListManageri_0x79a698");
#endif

    switch (ctx->pc) {
        case 0x79a6bcu: goto label_79a6bc;
        default: break;
    }

    ctx->pc = 0x79a698u;

    // 0x79a698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a69c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a6a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6C8u;
            goto label_79a6c8;
        }
    }
    ctx->pc = 0x79A6ACu;
    // 0x79a6ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a6b0: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79a6b4: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A6B4u;
    SET_GPR_U32(ctx, 31, 0x79A6BCu);
    ctx->pc = 0x79A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B4u;
    // 0x79a6b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A6B4u, 0x79A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6BCu;
label_79a6bc:
    // 0x79a6bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a6c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A6C0u;
    {
        const bool branch_taken_0x79a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C0u;
        // 0x79a6c4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c0) {
            ctx->pc = 0x79A6CCu;
            goto label_79a6cc;
        }
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a6cc:
    // 0x79a6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D0u;
        // 0x79a6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6D8u;
}
} // namespace gh_r000
