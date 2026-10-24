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

// Function: func_001AE748
// Address: 0x1ae748 - 0x1ae798
void func_001AE748_0x1ae748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE748_0x1ae748");
#endif

    switch (ctx->pc) {
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae784u: goto label_1ae784;
        default: break;
    }

    ctx->pc = 0x1ae748u;

    // 0x1ae748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae74c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1ae750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ae750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ae754: 0x8c626028  lw          $v0, 0x6028($v1)
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786028u));
    // 0x1ae758: 0x24706028  addiu       $s0, $v1, 0x6028
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24616));
    // 0x1ae75c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE75Cu;
    {
        const bool branch_taken_0x1ae75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE75Cu;
        // 0x1ae760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae75c) {
            ctx->pc = 0x1AE784u;
            goto label_1ae784;
        }
    }
    ctx->pc = 0x1AE764u;
    // 0x1ae764: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1AE764u;
    SET_GPR_U32(ctx, 31, 0x1AE76Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1AE764u, 0x1AE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE76Cu;
label_1ae76c:
    // 0x1ae76c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1ae76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1ae770: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1ae770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1ae774: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
    // 0x1ae778: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1ae77c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1AE77Cu;
    SET_GPR_U32(ctx, 31, 0x1AE784u);
    ctx->pc = 0x1AE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE77Cu;
    // 0x1ae780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1AE77Cu, 0x1AE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE784u;
label_1ae784:
    // 0x1ae784: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ae784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae78c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ae78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae790: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE790u;
        // 0x1ae794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE798u;
}
