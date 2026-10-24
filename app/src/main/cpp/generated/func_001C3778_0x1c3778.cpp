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

// Function: func_001C3778
// Address: 0x1c3778 - 0x1c3988
void func_001C3778_0x1c3778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3778_0x1c3778");
#endif

    switch (ctx->pc) {
        case 0x1c378cu: goto label_1c378c;
        case 0x1c37d8u: goto label_1c37d8;
        case 0x1c3890u: goto label_1c3890;
        case 0x1c38c8u: goto label_1c38c8;
        default: break;
    }

    ctx->pc = 0x1c3778u;

    // 0x1c3778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c377c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c3780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3784: 0xc06df94  jal         func_1B7E50
    ctx->pc = 0x1C3784u;
    SET_GPR_U32(ctx, 31, 0x1C378Cu);
    ctx->pc = 0x1C3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3784u;
    // 0x1c3788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E50u, 0x1C3784u, 0x1C378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C378Cu;
label_1c378c:
    // 0x1c378c: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1c378cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1c3790: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c3790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1c3794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3798: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x1C3798u;
    {
        const bool branch_taken_0x1c3798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3798) {
            ctx->pc = 0x1C379Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3798u;
            // 0x1c379c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C397Cu;
            goto label_1c397c;
        }
    }
    ctx->pc = 0x1C37A0u;
    // 0x1c37a0: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c37a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c37a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c37a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c37a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c37a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c37ac: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C37ACu;
    {
        const bool branch_taken_0x1c37ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c37ac) {
            ctx->pc = 0x1C3888u;
            goto label_1c3888;
        }
    }
    ctx->pc = 0x1C37B4u;
    // 0x1c37b4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c37b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c37b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c37b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c37bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c37c0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C37C0u;
    {
        const bool branch_taken_0x1c37c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37C0u;
        // 0x1c37c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37c0) {
            ctx->pc = 0x1C3888u;
            goto label_1c3888;
        }
    }
    ctx->pc = 0x1C37C8u;
    // 0x1c37c8: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1c37c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1c37cc: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1c37ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1c37d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c37d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c37d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c37d8:
    // 0x1c37d8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c37d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c37dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C37DCu;
    {
        const bool branch_taken_0x1c37dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37DCu;
        // 0x1c37e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37dc) {
            ctx->pc = 0x1C37ECu;
            goto label_1c37ec;
        }
    }
    ctx->pc = 0x1C37E4u;
    // 0x1c37e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c37e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c37e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c37ec:
    // 0x1c37ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c37ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c37f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C37F0u;
    {
        const bool branch_taken_0x1c37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37F0u;
        // 0x1c37f4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37f0) {
            ctx->pc = 0x1C3808u;
            goto label_1c3808;
        }
    }
    ctx->pc = 0x1C37F8u;
    // 0x1c37f8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c37fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3800u;
    {
        const bool branch_taken_0x1c3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3800u;
        // 0x1c3804: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3800) {
            ctx->pc = 0x1C380Cu;
            goto label_1c380c;
        }
    }
    ctx->pc = 0x1C3808u;
label_1c3808:
    // 0x1c3808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c380c:
    // 0x1c380c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c3810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3814: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c3814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3818: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c3818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c381c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c381cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c3820: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3824u;
    {
        const bool branch_taken_0x1c3824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3824u;
        // 0x1c3828: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3824) {
            ctx->pc = 0x1C3834u;
            goto label_1c3834;
        }
    }
    ctx->pc = 0x1C382Cu;
    // 0x1c382c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c382cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3830: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c3830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3834:
    // 0x1c3834: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1c3834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c3838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3838u;
    {
        const bool branch_taken_0x1c3838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3838u;
        // 0x1c383c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3838) {
            ctx->pc = 0x1C3850u;
            goto label_1c3850;
        }
    }
    ctx->pc = 0x1C3840u;
    // 0x1c3840: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3848u;
    {
        const bool branch_taken_0x1c3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3848u;
        // 0x1c384c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3848) {
            ctx->pc = 0x1C3854u;
            goto label_1c3854;
        }
    }
    ctx->pc = 0x1C3850u;
label_1c3850:
    // 0x1c3850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3854:
    // 0x1c3854: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c3854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c3858: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c385c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1c385cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1c3860: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c3864: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3868: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c386c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C386Cu;
    {
        const bool branch_taken_0x1c386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C386Cu;
        // 0x1c3870: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c386c) {
            ctx->pc = 0x1C3888u;
            goto label_1c3888;
        }
    }
    ctx->pc = 0x1C3874u;
    // 0x1c3874: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c387c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3880: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C3880u;
    {
        const bool branch_taken_0x1c3880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3880) {
            ctx->pc = 0x1C3884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3880u;
            // 0x1c3884: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C37D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c37d8;
        }
    }
    ctx->pc = 0x1C3888u;
label_1c3888:
    // 0x1c3888: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C3888u;
    SET_GPR_U32(ctx, 31, 0x1C3890u);
    ctx->pc = 0x1C388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3888u;
    // 0x1c388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C3888u, 0x1C3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3890u;
label_1c3890:
    // 0x1c3890: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3898: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c389c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C389Cu;
    {
        const bool branch_taken_0x1c389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c389c) {
            ctx->pc = 0x1C38A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C389Cu;
            // 0x1c38a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C397Cu;
            goto label_1c397c;
        }
    }
    ctx->pc = 0x1C38A4u;
    // 0x1c38a4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c38a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c38a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c38a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38ac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c38acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c38b0: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C38B0u;
    {
        const bool branch_taken_0x1c38b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c38b0) {
            ctx->pc = 0x1C38B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38B0u;
            // 0x1c38b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C397Cu;
            goto label_1c397c;
        }
    }
    ctx->pc = 0x1C38B8u;
    // 0x1c38b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c38b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c38c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c38c4: 0x0  nop
    ctx->pc = 0x1c38c4u;
    // NOP
label_1c38c8:
    // 0x1c38c8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c38c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c38cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C38CCu;
    {
        const bool branch_taken_0x1c38cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38CCu;
        // 0x1c38d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38cc) {
            ctx->pc = 0x1C38DCu;
            goto label_1c38dc;
        }
    }
    ctx->pc = 0x1C38D4u;
    // 0x1c38d4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c38d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c38d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c38dc:
    // 0x1c38dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c38e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C38E0u;
    {
        const bool branch_taken_0x1c38e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38E0u;
        // 0x1c38e4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38e0) {
            ctx->pc = 0x1C38F8u;
            goto label_1c38f8;
        }
    }
    ctx->pc = 0x1C38E8u;
    // 0x1c38e8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c38ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c38f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C38F0u;
    {
        const bool branch_taken_0x1c38f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38F0u;
        // 0x1c38f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38f0) {
            ctx->pc = 0x1C38FCu;
            goto label_1c38fc;
        }
    }
    ctx->pc = 0x1C38F8u;
label_1c38f8:
    // 0x1c38f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c38f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c38fc:
    // 0x1c38fc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c3900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3904: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c3904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3908: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c3908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c390c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c390cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c3910: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3914: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3914u;
    {
        const bool branch_taken_0x1c3914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3914u;
        // 0x1c3918: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3914) {
            ctx->pc = 0x1C3924u;
            goto label_1c3924;
        }
    }
    ctx->pc = 0x1C391Cu;
    // 0x1c391c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c391cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3920: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c3920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3924:
    // 0x1c3924: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1c3924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c3928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3928u;
    {
        const bool branch_taken_0x1c3928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3928u;
        // 0x1c392c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3928) {
            ctx->pc = 0x1C3940u;
            goto label_1c3940;
        }
    }
    ctx->pc = 0x1C3930u;
    // 0x1c3930: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3938u;
    {
        const bool branch_taken_0x1c3938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3938u;
        // 0x1c393c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3938) {
            ctx->pc = 0x1C3944u;
            goto label_1c3944;
        }
    }
    ctx->pc = 0x1C3940u;
label_1c3940:
    // 0x1c3940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3944:
    // 0x1c3944: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c3948: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c3948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c394c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1c394cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1c3950: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c3954: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3958: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c395c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C395Cu;
    {
        const bool branch_taken_0x1c395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C395Cu;
        // 0x1c3960: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c395c) {
            ctx->pc = 0x1C3978u;
            goto label_1c3978;
        }
    }
    ctx->pc = 0x1C3964u;
    // 0x1c3964: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3968: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c396c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c396cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3970: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C3970u;
    {
        const bool branch_taken_0x1c3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3970) {
            ctx->pc = 0x1C3974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3970u;
            // 0x1c3974: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C38C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c38c8;
        }
    }
    ctx->pc = 0x1C3978u;
label_1c3978:
    // 0x1c3978: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c397c:
    // 0x1c397c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3980: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3980u;
        // 0x1c3984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3988u;
}
