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

// Function: __rs__7istreamRd
// Address: 0x388380 - 0x388420
void ps2___rs__7istreamRd_0x388380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRd_0x388380");
#endif

    switch (ctx->pc) {
        case 0x3883c8u: goto label_3883c8;
        case 0x3883ecu: goto label_3883ec;
        case 0x388408u: goto label_388408;
        default: break;
    }

    ctx->pc = 0x388380u;

    // 0x388380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388384: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38838c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388398: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x388398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38839c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38839Cu;
    {
        const bool branch_taken_0x38839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38839Cu;
        // 0x3883a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38839c) {
            ctx->pc = 0x3883B4u;
            goto label_3883b4;
        }
    }
    ctx->pc = 0x3883A4u;
    // 0x3883a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3883a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3883a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3883a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3883ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3883ACu;
    {
        const bool branch_taken_0x3883ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883ACu;
        // 0x3883b0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883ac) {
            ctx->pc = 0x3883F0u;
            goto label_3883f0;
        }
    }
    ctx->pc = 0x3883B4u;
label_3883b4:
    // 0x3883b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3883b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3883b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3883B8u;
    {
        const bool branch_taken_0x3883b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3883b8) {
            ctx->pc = 0x3883BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3883B8u;
            // 0x3883bc: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3883D0u;
            goto label_3883d0;
        }
    }
    ctx->pc = 0x3883C0u;
    // 0x3883c0: 0xc0e249a  jal         func_389268
    ctx->pc = 0x3883C0u;
    SET_GPR_U32(ctx, 31, 0x3883C8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3883C0u, 0x3883C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883C8u;
label_3883c8:
    // 0x3883c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3883c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3883cc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x3883ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_3883d0:
    // 0x3883d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3883d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3883d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3883d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3883d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3883d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3883dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3883DCu;
    {
        const bool branch_taken_0x3883dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883DCu;
        // 0x3883e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883dc) {
            ctx->pc = 0x3883F0u;
            goto label_3883f0;
        }
    }
    ctx->pc = 0x3883E4u;
    // 0x3883e4: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x3883E4u;
    SET_GPR_U32(ctx, 31, 0x3883ECu);
    ctx->pc = 0x3883E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3883E4u;
    // 0x3883e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x3883E4u, 0x3883ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3883ECu;
label_3883ec:
    // 0x3883ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3883ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3883f0:
    // 0x3883f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3883F0u;
    {
        const bool branch_taken_0x3883f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883F0u;
        // 0x3883f4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883f0) {
            ctx->pc = 0x388408u;
            goto label_388408;
        }
    }
    ctx->pc = 0x3883F8u;
    // 0x3883f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3883f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3883fc: 0x24a5d0e8  addiu       $a1, $a1, -0x2F18
    ctx->pc = 0x3883fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955240));
    // 0x388400: 0xc0e2b72  jal         func_38ADC8
    ctx->pc = 0x388400u;
    SET_GPR_U32(ctx, 31, 0x388408u);
    ctx->pc = 0x388404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388400u;
    // 0x388404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ADC8u, 0x388400u, 0x388408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388408u;
label_388408:
    // 0x388408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38840c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388410: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388418: 0x3e00008  jr          $ra
    ctx->pc = 0x388418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388418u;
        // 0x38841c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388420u;
}
