#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __unpack_d
// Address: 0x79b2c8 - 0x79b368
void ps2___unpack_d_0x79b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x79b2c8");
#endif

    ctx->pc = 0x79b2c8u;

    // 0x79b2c8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x79b2c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b2d0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x79b2d4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x79b2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x79b2d8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79b2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79b2dc: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x79b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x79b2e0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x79b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x79b2e4: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x79b2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x79b2e8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B2E8u;
    {
        const bool branch_taken_0x79b2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E8u;
        // 0x79b2ec: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2e8) {
            ctx->pc = 0x79B300u;
            goto label_79b300;
        }
    }
    ctx->pc = 0x79B2F0u;
    // 0x79b2f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2F4u;
        // 0x79b2f8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2FCu;
    // 0x79b2fc: 0x0  nop
    ctx->pc = 0x79b2fcu;
    // NOP
label_79b300:
    // 0x79b300: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79B300u;
    {
        const bool branch_taken_0x79b300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b300) {
            ctx->pc = 0x79B304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B300u;
            // 0x79b304: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B340u;
            goto label_79b340;
        }
    }
    ctx->pc = 0x79B308u;
    // 0x79b308: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B308u;
    {
        const bool branch_taken_0x79b308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B308u;
        // 0x79b30c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b308) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B310u;
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
    // 0x79b318: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79b318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79b31c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79b31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79b320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B324u;
    {
        const bool branch_taken_0x79b324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B324u;
        // 0x79b328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b324) {
            ctx->pc = 0x79B334u;
            goto label_79b334;
        }
    }
    ctx->pc = 0x79B32Cu;
    // 0x79b32c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B32Cu;
    {
        const bool branch_taken_0x79b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B32Cu;
        // 0x79b330: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b32c) {
            ctx->pc = 0x79B338u;
            goto label_79b338;
        }
    }
    ctx->pc = 0x79B334u;
label_79b334:
    // 0x79b334: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79b334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79b338:
    // 0x79b338: 0x3e00008  jr          $ra
    ctx->pc = 0x79B338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B338u;
        // 0x79b33c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B340u;
label_79b340:
    // 0x79b340: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79b344: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79b348: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79b348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79b34c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x79b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x79b350: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b354: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x79b354u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x79b358: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79b358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B35Cu;
        // 0x79b360: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B364u;
    // 0x79b364: 0x0  nop
    ctx->pc = 0x79b364u;
    // NOP
    ctx->pc = 0x79b368u;
}
} // namespace gh_r505
