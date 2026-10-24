#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: releaseBombWork__5cR409
// Address: 0x79b7b8 - 0x79b820
void releaseBombWork__5cR409_0x79b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("releaseBombWork__5cR409_0x79b7b8");
#endif

    switch (ctx->pc) {
        case 0x79b7d8u: goto label_79b7d8;
        case 0x79b7f4u: goto label_79b7f4;
        default: break;
    }

    ctx->pc = 0x79b7b8u;

    // 0x79b7b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b7bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b7c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b7c4: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x79b7c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79b7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79b7cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79b7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b7d4: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
label_79b7d8:
    // 0x79b7d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b7dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79b7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b7e0: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x79b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
    // 0x79b7e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B7E4u;
    {
        const bool branch_taken_0x79b7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7E4u;
        // 0x79b7e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7e4) {
            ctx->pc = 0x79B7F8u;
            goto label_79b7f8;
        }
    }
    ctx->pc = 0x79B7ECu;
    // 0x79b7ec: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x79B7ECu;
    SET_GPR_U32(ctx, 31, 0x79B7F4u);
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x79B7ECu, 0x79B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7F4u;
label_79b7f4:
    // 0x79b7f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_79b7f8:
    // 0x79b7f8: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x79b7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b7fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B7FCu;
    {
        const bool branch_taken_0x79b7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7FCu;
        // 0x79b800: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7fc) {
            ctx->pc = 0x79B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7d8;
        }
    }
    ctx->pc = 0x79B804u;
    // 0x79b804: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b80c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79b80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b814: 0x3e00008  jr          $ra
    ctx->pc = 0x79B814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B814u;
        // 0x79b818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B81Cu;
    // 0x79b81c: 0x0  nop
    ctx->pc = 0x79b81cu;
    // NOP
    ctx->pc = 0x79b820u;
}
} // namespace gh_r409
