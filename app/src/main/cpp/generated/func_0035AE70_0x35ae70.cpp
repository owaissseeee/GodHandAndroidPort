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

// Function: func_0035AE70
// Address: 0x35ae70 - 0x35aec8
void func_0035AE70_0x35ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AE70_0x35ae70");
#endif

    switch (ctx->pc) {
        case 0x35ae8cu: goto label_35ae8c;
        default: break;
    }

    ctx->pc = 0x35ae70u;

    // 0x35ae70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ae74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ae78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ae78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ae80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ae84: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35AE84u;
    SET_GPR_U32(ctx, 31, 0x35AE8Cu);
    ctx->pc = 0x35AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE84u;
    // 0x35ae88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35AE84u, 0x35AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE8Cu;
label_35ae8c:
    // 0x35ae8c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35ae90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35AE90u;
    {
        const bool branch_taken_0x35ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE90u;
        // 0x35ae94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae90) {
            ctx->pc = 0x35AEB0u;
            goto label_35aeb0;
        }
    }
    ctx->pc = 0x35AE98u;
    // 0x35ae98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ae98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ae9c: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x35ae9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
    // 0x35aea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35aea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aea8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35AEA8u;
    ctx->pc = 0x35AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEA8u;
    // 0x35aeac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35AEA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AEB0u;
label_35aeb0:
    // 0x35aeb0: 0xae110d48  sw          $s1, 0xD48($s0)
    ctx->pc = 0x35aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3400), GPR_U32(ctx, 17));
    // 0x35aeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aec0: 0x3e00008  jr          $ra
    ctx->pc = 0x35AEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEC0u;
        // 0x35aec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AEC8u;
}
