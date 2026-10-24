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

// Function: func_0017B820
// Address: 0x17b820 - 0x17b870
void func_0017B820_0x17b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B820_0x17b820");
#endif

    switch (ctx->pc) {
        case 0x17b844u: goto label_17b844;
        case 0x17b85cu: goto label_17b85c;
        default: break;
    }

    ctx->pc = 0x17b820u;

    // 0x17b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b824: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17b824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17b828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b82c: 0x8c625968  lw          $v0, 0x5968($v1)
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785968u));
    // 0x17b830: 0x24705968  addiu       $s0, $v1, 0x5968
    ctx->pc = 0x17b830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22888));
    // 0x17b834: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B834u;
    {
        const bool branch_taken_0x17b834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B834u;
        // 0x17b838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b834) {
            ctx->pc = 0x17B85Cu;
            goto label_17b85c;
        }
    }
    ctx->pc = 0x17B83Cu;
    // 0x17b83c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x17B83Cu;
    SET_GPR_U32(ctx, 31, 0x17B844u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x17B83Cu, 0x17B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B844u;
label_17b844:
    // 0x17b844: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17b844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17b848: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17b848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17b84c: 0x24a51ab8  addiu       $a1, $a1, 0x1AB8
    ctx->pc = 0x17b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6840));
    // 0x17b850: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x17b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17b854: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17B854u;
    SET_GPR_U32(ctx, 31, 0x17B85Cu);
    ctx->pc = 0x17B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B854u;
    // 0x17b858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17B854u, 0x17B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B85Cu;
label_17b85c:
    // 0x17b85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b868: 0x3e00008  jr          $ra
    ctx->pc = 0x17B868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B868u;
        // 0x17b86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B870u;
}
