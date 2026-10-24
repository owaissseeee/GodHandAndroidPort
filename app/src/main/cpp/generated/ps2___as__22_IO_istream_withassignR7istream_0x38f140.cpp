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

// Function: __as__22_IO_istream_withassignR7istream
// Address: 0x38f140 - 0x38f1a0
void ps2___as__22_IO_istream_withassignR7istream_0x38f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__22_IO_istream_withassignR7istream_0x38f140");
#endif

    ctx->pc = 0x38f140u;

    // 0x38f140: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x38F140u;
    {
        const bool branch_taken_0x38f140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x38f140) {
            ctx->pc = 0x38F198u;
            goto label_38f198;
        }
    }
    ctx->pc = 0x38F148u;
    // 0x38f148: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38f14c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38f150: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F150u;
    {
        const bool branch_taken_0x38f150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F150u;
        // 0x38f154: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f150) {
            ctx->pc = 0x38F164u;
            goto label_38f164;
        }
    }
    ctx->pc = 0x38F158u;
    // 0x38f158: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38f15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38F15Cu;
    {
        const bool branch_taken_0x38f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F15Cu;
        // 0x38f160: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f15c) {
            ctx->pc = 0x38F168u;
            goto label_38f168;
        }
    }
    ctx->pc = 0x38F164u;
label_38f164:
    // 0x38f164: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x38f164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_38f168:
    // 0x38f168: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x38f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38f16c: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x38f16cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38f170: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x38f170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x38f174: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38f178: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x38f178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x38f17c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x38f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38f180: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x38f180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x38f184: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x38f184u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x38f188: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x38f188u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x38f18c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x38f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x38f190: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x38f190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x38f194: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x38f194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_38f198:
    // 0x38f198: 0x3e00008  jr          $ra
    ctx->pc = 0x38F198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F198u;
        // 0x38f19c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F1A0u;
}
