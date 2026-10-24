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

// Function: init__3iosP9streambufP7ostream
// Address: 0x38b7a8 - 0x38b7f0
void init__3iosP9streambufP7ostream_0x38b7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("init__3iosP9streambufP7ostream_0x38b7a8");
#endif

    ctx->pc = 0x38b7a8u;

    // 0x38b7a8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B7A8u;
    {
        const bool branch_taken_0x38b7a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7A8u;
        // 0x38b7ac: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7a8) {
            ctx->pc = 0x38B7BCu;
            goto label_38b7bc;
        }
    }
    ctx->pc = 0x38B7B0u;
    // 0x38b7b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38b7b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38B7B4u;
    {
        const bool branch_taken_0x38b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7B4u;
        // 0x38b7b8: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7b4) {
            ctx->pc = 0x38B7C0u;
            goto label_38b7c0;
        }
    }
    ctx->pc = 0x38B7BCu;
label_38b7bc:
    // 0x38b7bc: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x38b7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_38b7c0:
    // 0x38b7c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38b7c4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x38b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38b7c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x38b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38b7cc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x38b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x38b7d0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x38b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x38b7d4: 0xa4e20018  sh          $v0, 0x18($a3)
    ctx->pc = 0x38b7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b7d8: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x38b7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x38b7dc: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x38b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x38b7e0: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x38b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x38b7e4: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x38b7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38b7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7E8u;
        // 0x38b7ec: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B7F0u;
}
