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

// Function: __as__22_IO_ostream_withassignR7ostream
// Address: 0x38f1a0 - 0x38f200
void ps2___as__22_IO_ostream_withassignR7ostream_0x38f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__22_IO_ostream_withassignR7ostream_0x38f1a0");
#endif

    ctx->pc = 0x38f1a0u;

    // 0x38f1a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x38f1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f1a4: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x38F1A4u;
    {
        const bool branch_taken_0x38f1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x38f1a4) {
            ctx->pc = 0x38F1F8u;
            goto label_38f1f8;
        }
    }
    ctx->pc = 0x38F1ACu;
    // 0x38f1ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38f1b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38f1b4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F1B4u;
    {
        const bool branch_taken_0x38f1b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1B4u;
        // 0x38f1b8: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1b4) {
            ctx->pc = 0x38F1C8u;
            goto label_38f1c8;
        }
    }
    ctx->pc = 0x38F1BCu;
    // 0x38f1bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38f1c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38F1C0u;
    {
        const bool branch_taken_0x38f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1C0u;
        // 0x38f1c4: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1c0) {
            ctx->pc = 0x38F1CCu;
            goto label_38f1cc;
        }
    }
    ctx->pc = 0x38F1C8u;
label_38f1c8:
    // 0x38f1c8: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x38f1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_38f1cc:
    // 0x38f1cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38f1d0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x38f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38f1d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x38f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38f1d8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x38f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x38f1dc: 0xa4c20018  sh          $v0, 0x18($a2)
    ctx->pc = 0x38f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x38f1e0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x38f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x38f1e4: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x38f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x38f1e8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x38f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x38f1ec: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x38f1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f1f0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x38f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x38f1f4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x38f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_38f1f8:
    // 0x38f1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1F8u;
        // 0x38f1fc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F200u;
}
