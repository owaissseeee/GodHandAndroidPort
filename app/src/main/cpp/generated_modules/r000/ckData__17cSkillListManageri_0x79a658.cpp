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
// Function: ckData__17cSkillListManageri
// Address: 0x79a658 - 0x79a698
void ckData__17cSkillListManageri_0x79a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ckData__17cSkillListManageri_0x79a658");
#endif

    switch (ctx->pc) {
        case 0x79a67cu: goto label_79a67c;
        default: break;
    }

    ctx->pc = 0x79a658u;

    // 0x79a658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a660: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a664: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A664u;
    {
        const bool branch_taken_0x79a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A664u;
        // 0x79a668: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a664) {
            ctx->pc = 0x79A684u;
            goto label_79a684;
        }
    }
    ctx->pc = 0x79A66Cu;
    // 0x79a66c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a670: 0x80450014  lb          $a1, 0x14($v0)
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79a674: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x79A674u;
    SET_GPR_U32(ctx, 31, 0x79A67Cu);
    ctx->pc = 0x79A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A674u;
    // 0x79a678: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x79A674u, 0x79A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A67Cu;
label_79a67c:
    // 0x79a67c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A67Cu;
    {
        const bool branch_taken_0x79a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A67Cu;
        // 0x79a680: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a67c) {
            ctx->pc = 0x79A68Cu;
            goto label_79a68c;
        }
    }
    ctx->pc = 0x79A684u;
label_79a684:
    // 0x79a684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a68c:
    // 0x79a68c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A68Cu;
        // 0x79a690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A694u;
    // 0x79a694: 0x0  nop
    ctx->pc = 0x79a694u;
    // NOP
    ctx->pc = 0x79a698u;
}
} // namespace gh_r000
