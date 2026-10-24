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

// Function: func_0017EA48
// Address: 0x17ea48 - 0x17ea98
void func_0017EA48_0x17ea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EA48_0x17ea48");
#endif

    switch (ctx->pc) {
        case 0x17ea6cu: goto label_17ea6c;
        case 0x17ea84u: goto label_17ea84;
        default: break;
    }

    ctx->pc = 0x17ea48u;

    // 0x17ea48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ea4c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17ea50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ea54: 0x8c6259e8  lw          $v0, 0x59E8($v1)
    ctx->pc = 0x17ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7859E8u));
    // 0x17ea58: 0x247059e8  addiu       $s0, $v1, 0x59E8
    ctx->pc = 0x17ea58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23016));
    // 0x17ea5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EA5Cu;
    {
        const bool branch_taken_0x17ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA5Cu;
        // 0x17ea60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea5c) {
            ctx->pc = 0x17EA84u;
            goto label_17ea84;
        }
    }
    ctx->pc = 0x17EA64u;
    // 0x17ea64: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x17EA64u;
    SET_GPR_U32(ctx, 31, 0x17EA6Cu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x17EA64u, 0x17EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA6Cu;
label_17ea6c:
    // 0x17ea6c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17ea70: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17ea74: 0x24a52160  addiu       $a1, $a1, 0x2160
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
    // 0x17ea78: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x17ea7c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17EA7Cu;
    SET_GPR_U32(ctx, 31, 0x17EA84u);
    ctx->pc = 0x17EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA7Cu;
    // 0x17ea80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17EA7Cu, 0x17EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA84u;
label_17ea84:
    // 0x17ea84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ea88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ea8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ea8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ea90: 0x3e00008  jr          $ra
    ctx->pc = 0x17EA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA90u;
        // 0x17ea94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EA98u;
}
