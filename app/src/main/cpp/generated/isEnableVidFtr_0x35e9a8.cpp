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

// Function: isEnableVidFtr
// Address: 0x35e9a8 - 0x35e9e8
void isEnableVidFtr_0x35e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEnableVidFtr_0x35e9a8");
#endif

    switch (ctx->pc) {
        case 0x35e9bcu: goto label_35e9bc;
        default: break;
    }

    ctx->pc = 0x35e9a8u;

    // 0x35e9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e9b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35e9b4: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E9B4u;
    SET_GPR_U32(ctx, 31, 0x35E9BCu);
    ctx->pc = 0x35E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9B4u;
    // 0x35e9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E9B4u, 0x35E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9BCu;
label_35e9bc:
    // 0x35e9bc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e9c0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E9C0u;
    {
        const bool branch_taken_0x35e9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9C0u;
        // 0x35e9c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9c0) {
            ctx->pc = 0x35E9D8u;
            goto label_35e9d8;
        }
    }
    ctx->pc = 0x35E9C8u;
    // 0x35e9c8: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x35e9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35e9cc: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x35e9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e9d0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x35e9d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35e9d4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x35e9d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_35e9d8:
    // 0x35e9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e9dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35e9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9E0u;
        // 0x35e9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E9E8u;
}
