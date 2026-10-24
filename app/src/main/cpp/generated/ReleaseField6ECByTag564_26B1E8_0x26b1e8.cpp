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

// Function: ReleaseField6ECByTag564_26B1E8
// Address: 0x26b1e8 - 0x26b240
void ReleaseField6ECByTag564_26B1E8_0x26b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseField6ECByTag564_26B1E8_0x26b1e8");
#endif

    switch (ctx->pc) {
        case 0x26b218u: goto label_26b218;
        case 0x26b228u: goto label_26b228;
        default: break;
    }

    ctx->pc = 0x26b1e8u;

    // 0x26b1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b1ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26b1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26b1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1f8: 0x8e0406ec  lw          $a0, 0x6EC($s0)
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x26b1fc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x26B1FCu;
    {
        const bool branch_taken_0x26b1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1FCu;
        // 0x26b200: 0x24020279  addiu       $v0, $zero, 0x279 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1fc) {
            ctx->pc = 0x26B22Cu;
            goto label_26b22c;
        }
    }
    ctx->pc = 0x26B204u;
    // 0x26b204: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x26b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26b208: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B208u;
    {
        const bool branch_taken_0x26b208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b208) {
            ctx->pc = 0x26B220u;
            goto label_26b220;
        }
    }
    ctx->pc = 0x26B210u;
    // 0x26b210: 0xc074206  jal         func_1D0818
    ctx->pc = 0x26B210u;
    SET_GPR_U32(ctx, 31, 0x26B218u);
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x26B210u, 0x26B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B218u;
label_26b218:
    // 0x26b218: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26B218u;
    {
        const bool branch_taken_0x26b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B218u;
        // 0x26b21c: 0xae0006ec  sw          $zero, 0x6EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b218) {
            ctx->pc = 0x26B22Cu;
            goto label_26b22c;
        }
    }
    ctx->pc = 0x26B220u;
label_26b220:
    // 0x26b220: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x26B220u;
    SET_GPR_U32(ctx, 31, 0x26B228u);
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x26B220u, 0x26B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B228u;
label_26b228:
    // 0x26b228: 0xae0006ec  sw          $zero, 0x6EC($s0)
    ctx->pc = 0x26b228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 0));
label_26b22c:
    // 0x26b22c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26b22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b234: 0x3e00008  jr          $ra
    ctx->pc = 0x26B234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B234u;
        // 0x26b238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B23Cu;
    // 0x26b23c: 0x0  nop
    ctx->pc = 0x26b23cu;
    // NOP
    ctx->pc = 0x26b240u;
}
