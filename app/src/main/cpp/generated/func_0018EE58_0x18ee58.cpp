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

// Function: func_0018EE58
// Address: 0x18ee58 - 0x18eea8
void func_0018EE58_0x18ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EE58_0x18ee58");
#endif

    switch (ctx->pc) {
        case 0x18ee7cu: goto label_18ee7c;
        case 0x18ee94u: goto label_18ee94;
        default: break;
    }

    ctx->pc = 0x18ee58u;

    // 0x18ee58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ee5c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18ee60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ee64: 0x8c625bb8  lw          $v0, 0x5BB8($v1)
    ctx->pc = 0x18ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785BB8u));
    // 0x18ee68: 0x24705bb8  addiu       $s0, $v1, 0x5BB8
    ctx->pc = 0x18ee68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23480));
    // 0x18ee6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18EE6Cu;
    {
        const bool branch_taken_0x18ee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE6Cu;
        // 0x18ee70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee6c) {
            ctx->pc = 0x18EE94u;
            goto label_18ee94;
        }
    }
    ctx->pc = 0x18EE74u;
    // 0x18ee74: 0xc070006  jal         func_1C0018
    ctx->pc = 0x18EE74u;
    SET_GPR_U32(ctx, 31, 0x18EE7Cu);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x18EE74u, 0x18EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE7Cu;
label_18ee7c:
    // 0x18ee7c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18ee80: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18ee84: 0x24a53d28  addiu       $a1, $a1, 0x3D28
    ctx->pc = 0x18ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15656));
    // 0x18ee88: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x18ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x18ee8c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18EE8Cu;
    SET_GPR_U32(ctx, 31, 0x18EE94u);
    ctx->pc = 0x18EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE8Cu;
    // 0x18ee90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18EE8Cu, 0x18EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE94u;
label_18ee94:
    // 0x18ee94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ee94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ee9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x18EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEA0u;
        // 0x18eea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EEA8u;
}
