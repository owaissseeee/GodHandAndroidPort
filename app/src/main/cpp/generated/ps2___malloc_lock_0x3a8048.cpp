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

// Function: __malloc_lock
// Address: 0x3a8048 - 0x3a80a8
void ps2___malloc_lock_0x3a8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___malloc_lock_0x3a8048");
#endif

    switch (ctx->pc) {
        case 0x3a8060u: goto label_3a8060;
        case 0x3a8080u: goto label_3a8080;
        default: break;
    }

    ctx->pc = 0x3a8048u;

    // 0x3a8048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a804c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a8050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a8050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a8054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a8058: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x3A8058u;
    SET_GPR_U32(ctx, 31, 0x3A8060u);
    ctx->pc = 0x3A805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8058u;
    // 0x3a805c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x3A8058u, 0x3A8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8060u;
label_3a8060:
    // 0x3a8060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a8060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8064: 0x8e22a990  lw          $v0, -0x5670($s1)
    ctx->pc = 0x3a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945168)));
    // 0x3a8068: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8068u;
    {
        const bool branch_taken_0x3a8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8068u;
        // 0x3a806c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8068) {
            ctx->pc = 0x3A8078u;
            goto label_3a8078;
        }
    }
    ctx->pc = 0x3A8070u;
    // 0x3a8070: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8070u;
    {
        const bool branch_taken_0x3a8070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8070u;
        // 0x3a8074: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8070) {
            ctx->pc = 0x3A8088u;
            goto label_3a8088;
        }
    }
    ctx->pc = 0x3A8078u;
label_3a8078:
    // 0x3a8078: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3A8078u;
    SET_GPR_U32(ctx, 31, 0x3A8080u);
    ctx->pc = 0x3A807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8078u;
    // 0x3a807c: 0x8c44af18  lw          $a0, -0x50E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3A8078u, 0x3A8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8080u;
label_3a8080:
    // 0x3a8080: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a8084: 0xae30a990  sw          $s0, -0x5670($s1)
    ctx->pc = 0x3a8084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945168), GPR_U32(ctx, 16));
label_3a8088:
    // 0x3a8088: 0x8c62a994  lw          $v0, -0x566C($v1)
    ctx->pc = 0x3a8088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945172)));
    // 0x3a808c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a8090: 0xac62a994  sw          $v0, -0x566C($v1)
    ctx->pc = 0x3a8090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945172), GPR_U32(ctx, 2));
    // 0x3a8094: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a8094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a8098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a809c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a80a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A80A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80A0u;
        // 0x3a80a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A80A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A80A8u;
}
