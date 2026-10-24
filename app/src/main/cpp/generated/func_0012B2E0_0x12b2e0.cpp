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

// Function: func_0012B2E0
// Address: 0x12b2e0 - 0x12b328
void func_0012B2E0_0x12b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012B2E0_0x12b2e0");
#endif

    switch (ctx->pc) {
        case 0x12b304u: goto label_12b304;
        case 0x12b314u: goto label_12b314;
        default: break;
    }

    ctx->pc = 0x12b2e0u;

    // 0x12b2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2f0: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x12b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12b2f4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B2F4u;
    {
        const bool branch_taken_0x12b2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2f4) {
            ctx->pc = 0x12B2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B2F4u;
            // 0x12b2f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B31Cu;
            goto label_12b31c;
        }
    }
    ctx->pc = 0x12B2FCu;
    // 0x12b2fc: 0xc0741fc  jal         func_1D07F0
    ctx->pc = 0x12B2FCu;
    SET_GPR_U32(ctx, 31, 0x12B304u);
    ctx->pc = 0x1D07F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07F0u, 0x12B2FCu, 0x12B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B304u;
label_12b304:
    // 0x12b304: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B304u;
    {
        const bool branch_taken_0x12b304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b304) {
            ctx->pc = 0x12B308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B304u;
            // 0x12b308: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B31Cu;
            goto label_12b31c;
        }
    }
    ctx->pc = 0x12B30Cu;
    // 0x12b30c: 0xc074206  jal         func_1D0818
    ctx->pc = 0x12B30Cu;
    SET_GPR_U32(ctx, 31, 0x12B314u);
    ctx->pc = 0x12B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B30Cu;
    // 0x12b310: 0x8e040698  lw          $a0, 0x698($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x12B30Cu, 0x12B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B314u;
label_12b314:
    // 0x12b314: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x12b314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x12b318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b31c:
    // 0x12b31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b320: 0x3e00008  jr          $ra
    ctx->pc = 0x12B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B320u;
        // 0x12b324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B328u;
}
