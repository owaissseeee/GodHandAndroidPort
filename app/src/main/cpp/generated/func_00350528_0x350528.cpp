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

// Function: func_00350528
// Address: 0x350528 - 0x3505f8
void func_00350528_0x350528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350528_0x350528");
#endif

    switch (ctx->pc) {
        case 0x350558u: goto label_350558;
        case 0x3505b8u: goto label_3505b8;
        default: break;
    }

    ctx->pc = 0x350528u;

    // 0x350528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35052c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x35052cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350534: 0x8d221fc0  lw          $v0, 0x1FC0($t1)
    ctx->pc = 0x350534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8128)));
    // 0x350538: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x350538u;
    {
        const bool branch_taken_0x350538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350538u;
        // 0x35053c: 0x24481080  addiu       $t0, $v0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350538) {
            ctx->pc = 0x350550u;
            goto label_350550;
        }
    }
    ctx->pc = 0x350540u;
    // 0x350540: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x350540u;
    {
        const bool branch_taken_0x350540 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x350540) {
            ctx->pc = 0x350550u;
            goto label_350550;
        }
    }
    ctx->pc = 0x350548u;
    // 0x350548: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x350548u;
    {
        const bool branch_taken_0x350548 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x350548) {
            ctx->pc = 0x35054Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350548u;
            // 0x35054c: 0x8d22002c  lw          $v0, 0x2C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350560u;
            goto label_350560;
        }
    }
    ctx->pc = 0x350550u;
label_350550:
    // 0x350550: 0xc0d52d0  jal         func_354B40
    ctx->pc = 0x350550u;
    SET_GPR_U32(ctx, 31, 0x350558u);
    ctx->pc = 0x350554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350550u;
    // 0x350554: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B40u, 0x350550u, 0x350558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350558u;
label_350558:
    // 0x350558: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x350558u;
    {
        const bool branch_taken_0x350558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350558u;
        // 0x35055c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350558) {
            ctx->pc = 0x3505ECu;
            goto label_3505ec;
        }
    }
    ctx->pc = 0x350560u;
label_350560:
    // 0x350560: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x350560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x350564: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x350564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350568: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x350568u;
    {
        const bool branch_taken_0x350568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350568) {
            ctx->pc = 0x35056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350568u;
            // 0x35056c: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350588u;
            goto label_350588;
        }
    }
    ctx->pc = 0x350570u;
    // 0x350570: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x350570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x350574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350578: 0x34a50f1d  ori         $a1, $a1, 0xF1D
    ctx->pc = 0x350578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3869);
    // 0x35057c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35057Cu;
    ctx->pc = 0x350580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35057Cu;
    // 0x350580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35057Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350584u;
    // 0x350584: 0x0  nop
    ctx->pc = 0x350584u;
    // NOP
label_350588:
    // 0x350588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x350588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35058c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x35058cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x350590: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x350590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x350594: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x350594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x350598: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x350598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x35059c: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x35059cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x3505a0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3505a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3505a4: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x3505a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x3505a8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x3505a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x3505ac: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x3505acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x3505b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3505B0u;
    {
        const bool branch_taken_0x3505b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505B0u;
        // 0x3505b4: 0x28c90011  slti        $t1, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505b0) {
            ctx->pc = 0x3505D4u;
            goto label_3505d4;
        }
    }
    ctx->pc = 0x3505B8u;
label_3505b8:
    // 0x3505b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3505b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3505bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3505bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3505c0: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x3505c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3505c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3505c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3505c8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3505c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3505cc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x3505ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x3505d0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3505d4:
    // 0x3505d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3505d8: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x3505d8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3505dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3505dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3505e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3505E0u;
    {
        const bool branch_taken_0x3505e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505E0u;
        // 0x3505e4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505e0) {
            ctx->pc = 0x3505B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3505b8;
        }
    }
    ctx->pc = 0x3505E8u;
    // 0x3505e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3505e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3505ec:
    // 0x3505ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3505ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3505f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3505F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3505F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505F0u;
        // 0x3505f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3505F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3505F8u;
}
