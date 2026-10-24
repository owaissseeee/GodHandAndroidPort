#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __unpack_f
// Address: 0x79b2c8 - 0x79b358
void ps2___unpack_f_0x79b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x79b2c8");
#endif

    ctx->pc = 0x79b2c8u;

    // 0x79b2c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2cc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x79b2d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79b2d4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x79b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x79b2d8: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x79b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x79b2dc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79b2e0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x79b2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79b2e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B2E4u;
    {
        const bool branch_taken_0x79b2e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E4u;
        // 0x79b2e8: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2e4) {
            ctx->pc = 0x79B2F8u;
            goto label_79b2f8;
        }
    }
    ctx->pc = 0x79B2ECu;
    // 0x79b2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2F0u;
        // 0x79b2f4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2F8u;
label_79b2f8:
    // 0x79b2f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x79b2fc: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B2FCu;
    {
        const bool branch_taken_0x79b2fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2FCu;
        // 0x79b300: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2fc) {
            ctx->pc = 0x79B338u;
            goto label_79b338;
        }
    }
    ctx->pc = 0x79B304u;
    // 0x79b304: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B304u;
    {
        const bool branch_taken_0x79b304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B304u;
        // 0x79b308: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b304) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B30Cu;
    // 0x79b30c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b310: 0x3e00008  jr          $ra
    ctx->pc = 0x79B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B310u;
        // 0x79b314: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B318u;
label_79b318:
    // 0x79b318: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b31c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B31Cu;
    {
        const bool branch_taken_0x79b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B31Cu;
        // 0x79b320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b31c) {
            ctx->pc = 0x79B32Cu;
            goto label_79b32c;
        }
    }
    ctx->pc = 0x79B324u;
    // 0x79b324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B324u;
    {
        const bool branch_taken_0x79b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B324u;
        // 0x79b328: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b324) {
            ctx->pc = 0x79B330u;
            goto label_79b330;
        }
    }
    ctx->pc = 0x79B32Cu;
label_79b32c:
    // 0x79b32c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79b330:
    // 0x79b330: 0x3e00008  jr          $ra
    ctx->pc = 0x79B330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B330u;
        // 0x79b334: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B338u;
label_79b338:
    // 0x79b338: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x79b33c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79b33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79b340: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x79b344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b348: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x79b348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x79b34c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79b350: 0x3e00008  jr          $ra
    ctx->pc = 0x79B350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B350u;
        // 0x79b354: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B358u;
}
} // namespace gh_r022
