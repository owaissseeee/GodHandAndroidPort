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

// Function: cCollisionScroll_SetLayerCollEnable
// Address: 0x133330 - 0x1333b8
void cCollisionScroll_SetLayerCollEnable_0x133330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionScroll_SetLayerCollEnable_0x133330");
#endif

    switch (ctx->pc) {
        case 0x133358u: goto label_133358;
        default: break;
    }

    ctx->pc = 0x133330u;

    // 0x133330: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x133330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133334: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x133338: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x133338u;
    {
        const bool branch_taken_0x133338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133338u;
        // 0x13333c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133338) {
            ctx->pc = 0x1333ACu;
            goto label_1333ac;
        }
    }
    ctx->pc = 0x133340u;
    // 0x133340: 0x94420028  lhu         $v0, 0x28($v0)
    ctx->pc = 0x133340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x133344: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x133344u;
    {
        const bool branch_taken_0x133344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133344u;
        // 0x133348: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133344) {
            ctx->pc = 0x1333ACu;
            goto label_1333ac;
        }
    }
    ctx->pc = 0x13334Cu;
    // 0x13334c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x13334cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x133350: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133354: 0x354afffd  ori         $t2, $t2, 0xFFFD
    ctx->pc = 0x133354u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
label_133358:
    // 0x133358: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x13335c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x13335cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x133360: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x133360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x133364: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x133364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x133368: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13336c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x133370: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x133370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x133374: 0x54650008  bnel        $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x133374u;
    {
        const bool branch_taken_0x133374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x133374) {
            ctx->pc = 0x133378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133374u;
            // 0x133378: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133398u;
            goto label_133398;
        }
    }
    ctx->pc = 0x13337Cu;
    // 0x13337c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13337Cu;
    {
        const bool branch_taken_0x13337c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x133380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13337Cu;
        // 0x133380: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13337c) {
            ctx->pc = 0x13338Cu;
            goto label_13338c;
        }
    }
    ctx->pc = 0x133384u;
    // 0x133384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133384u;
    {
        const bool branch_taken_0x133384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133384u;
        // 0x133388: 0x4a1024  and         $v0, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133384) {
            ctx->pc = 0x133390u;
            goto label_133390;
        }
    }
    ctx->pc = 0x13338Cu;
label_13338c:
    // 0x13338c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_133390:
    // 0x133390: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x133390u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x133394: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x133394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_133398:
    // 0x133398: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x133398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13339c: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x13339cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1333a0: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1333a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1333a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1333A4u;
    {
        const bool branch_taken_0x1333a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1333A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333A4u;
        // 0x1333a8: 0x256b0014  addiu       $t3, $t3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333a4) {
            ctx->pc = 0x133358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133358;
        }
    }
    ctx->pc = 0x1333ACu;
label_1333ac:
    // 0x1333ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1333ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1333B4u;
    // 0x1333b4: 0x0  nop
    ctx->pc = 0x1333b4u;
    // NOP
    ctx->pc = 0x1333b8u;
}
