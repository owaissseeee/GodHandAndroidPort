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
// Function: MakeCheckSum__6cMcSysP12GH_SAVE_WORK
// Address: 0x7c8c88 - 0x7c8cd8
void MakeCheckSum__6cMcSysP12GH_SAVE_WORK_0x7c8c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeCheckSum__6cMcSysP12GH_SAVE_WORK_0x7c8c88");
#endif

    switch (ctx->pc) {
        case 0x7c8cb8u: goto label_7c8cb8;
        default: break;
    }

    ctx->pc = 0x7c8c88u;

    // 0x7c8c88: 0x3402b108  ori         $v0, $zero, 0xB108
    ctx->pc = 0x7c8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45320);
    // 0x7c8c8c: 0x34049be6  ori         $a0, $zero, 0x9BE6
    ctx->pc = 0x7c8c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39910);
    // 0x7c8c90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x7c8c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x7c8c94: 0x3484fa3b  ori         $a0, $a0, 0xFA3B
    ctx->pc = 0x7c8c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64059);
    // 0x7c8c98: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x7c8c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x7c8c9c: 0x3484e55f  ori         $a0, $a0, 0xE55F
    ctx->pc = 0x7c8c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)58719);
    // 0x7c8ca0: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x7c8ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x7c8ca4: 0x34845a1d  ori         $a0, $a0, 0x5A1D
    ctx->pc = 0x7c8ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23069);
    // 0x7c8ca8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x7c8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c8cac: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x7c8cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c8cb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C8CB0u;
    {
        const bool branch_taken_0x7c8cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8CB0u;
        // 0x7c8cb4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8cb0) {
            ctx->pc = 0x7C8CD0u;
            goto label_7c8cd0;
        }
    }
    ctx->pc = 0x7C8CB8u;
label_7c8cb8:
    // 0x7c8cb8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x7c8cb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c8cbc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x7c8cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x7c8cc0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x7c8cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x7c8cc4: 0x0  nop
    ctx->pc = 0x7c8cc4u;
    // NOP
    // 0x7c8cc8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C8CC8u;
    {
        const bool branch_taken_0x7c8cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8CC8u;
        // 0x7c8ccc: 0x832026  xor         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8cc8) {
            ctx->pc = 0x7C8CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c8cb8;
        }
    }
    ctx->pc = 0x7C8CD0u;
label_7c8cd0:
    // 0x7c8cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8CD0u;
        // 0x7c8cd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8CD8u;
}
} // namespace gh_mcport
