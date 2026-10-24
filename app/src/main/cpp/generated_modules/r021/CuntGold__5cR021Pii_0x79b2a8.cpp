#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: CuntGold__5cR021Pii
// Address: 0x79b2a8 - 0x79b380
void CuntGold__5cR021Pii_0x79b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CuntGold__5cR021Pii_0x79b2a8");
#endif

    switch (ctx->pc) {
        case 0x79b34cu: goto label_79b34c;
        default: break;
    }

    ctx->pc = 0x79b2a8u;

    // 0x79b2a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b2ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x79b2b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b2b4: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x79b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x79b2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b2bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79b2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b2c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x79b2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b2cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x79b2d0: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79b2d4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B2D4u;
    {
        const bool branch_taken_0x79b2d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b2d4) {
            ctx->pc = 0x79B2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2D4u;
            // 0x79b2d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B2DCu;
    // 0x79b2dc: 0x24832710  addiu       $v1, $a0, 0x2710
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10000));
    // 0x79b2e0: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79b2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79b2e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B2E4u;
    {
        const bool branch_taken_0x79b2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b2e4) {
            ctx->pc = 0x79B2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2E4u;
            // 0x79b2e8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B2ECu;
    // 0x79b2ec: 0x248303e8  addiu       $v1, $a0, 0x3E8
    ctx->pc = 0x79b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x79b2f0: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79b2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79b2f4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79B2F4u;
    {
        const bool branch_taken_0x79b2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b2f4) {
            ctx->pc = 0x79B2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2F4u;
            // 0x79b2f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B2FCu;
    // 0x79b2fc: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x79b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x79b300: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79b300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79b304: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B304u;
    {
        const bool branch_taken_0x79b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b304) {
            ctx->pc = 0x79B308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B304u;
            // 0x79b308: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B30Cu;
    // 0x79b30c: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x79b310: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x79b310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x79b314: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B314u;
    {
        const bool branch_taken_0x79b314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B314u;
        // 0x79b318: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b314) {
            ctx->pc = 0x79B324u;
            goto label_79b324;
        }
    }
    ctx->pc = 0x79B31Cu;
    // 0x79b31c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B31Cu;
    {
        const bool branch_taken_0x79b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B31Cu;
        // 0x79b320: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b31c) {
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B324u;
label_79b324:
    // 0x79b324: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79b324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_79b328:
    // 0x79b328: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b330: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b334: 0x24060165  addiu       $a2, $zero, 0x165
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x79b338: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b33c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b340: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b344: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B344u;
    SET_GPR_U32(ctx, 31, 0x79B34Cu);
    ctx->pc = 0x79B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B344u;
    // 0x79b348: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B344u, 0x79B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B34Cu;
label_79b34c:
    // 0x79b34c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b350: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x79b350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b354: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B354u;
    {
        const bool branch_taken_0x79b354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b354) {
            ctx->pc = 0x79B358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B354u;
            // 0x79b358: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B364u;
            goto label_79b364;
        }
    }
    ctx->pc = 0x79B35Cu;
    // 0x79b35c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B35Cu;
    {
        const bool branch_taken_0x79b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B35Cu;
        // 0x79b360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b35c) {
            ctx->pc = 0x79B368u;
            goto label_79b368;
        }
    }
    ctx->pc = 0x79B364u;
label_79b364:
    // 0x79b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b368:
    // 0x79b368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b374: 0x3e00008  jr          $ra
    ctx->pc = 0x79B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B374u;
        // 0x79b378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B37Cu;
    // 0x79b37c: 0x0  nop
    ctx->pc = 0x79b37cu;
    // NOP
    ctx->pc = 0x79b380u;
}
} // namespace gh_r021
