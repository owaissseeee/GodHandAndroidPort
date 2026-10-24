#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isEndQuitFadeOut__9cEventEnv
// Address: 0x7ae548 - 0x7ae648
void isEndQuitFadeOut__9cEventEnv_0x7ae548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEndQuitFadeOut__9cEventEnv_0x7ae548");
#endif

    switch (ctx->pc) {
        case 0x7ae55cu: goto label_7ae55c;
        case 0x7ae5a4u: goto label_7ae5a4;
        case 0x7ae5acu: goto label_7ae5ac;
        default: break;
    }

    ctx->pc = 0x7ae548u;

    // 0x7ae548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae54c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae554: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE554u;
    SET_GPR_U32(ctx, 31, 0x7AE55Cu);
    ctx->pc = 0x7AE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE554u;
    // 0x7ae558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE554u, 0x7AE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE55Cu;
label_7ae55c:
    // 0x7ae55c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x7AE55Cu;
    {
        const bool branch_taken_0x7ae55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE55Cu;
        // 0x7ae560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae55c) {
            ctx->pc = 0x7AE634u;
            goto label_7ae634;
        }
    }
    ctx->pc = 0x7AE564u;
    // 0x7ae564: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x7ae564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x7ae568: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x7ae568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x7ae56c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7AE570u;
    {
        const bool branch_taken_0x7ae570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE570u;
        // 0x7ae574: 0x410ba  dsrl        $v0, $a0, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae570) {
            ctx->pc = 0x7AE594u;
            goto label_7ae594;
        }
    }
    ctx->pc = 0x7AE578u;
    // 0x7ae578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae57c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AE57Cu;
    {
        const bool branch_taken_0x7ae57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE57Cu;
        // 0x7ae580: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae57c) {
            ctx->pc = 0x7AE59Cu;
            goto label_7ae59c;
        }
    }
    ctx->pc = 0x7AE584u;
    // 0x7ae584: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x7ae584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29836)));
    // 0x7ae588: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x7ae588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x7ae58c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE58Cu;
    {
        const bool branch_taken_0x7ae58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ae58c) {
            ctx->pc = 0x7AE59Cu;
            goto label_7ae59c;
        }
    }
    ctx->pc = 0x7AE594u;
label_7ae594:
    // 0x7ae594: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7AE594u;
    {
        const bool branch_taken_0x7ae594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE594u;
        // 0x7ae598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae594) {
            ctx->pc = 0x7AE634u;
            goto label_7ae634;
        }
    }
    ctx->pc = 0x7AE59Cu;
label_7ae59c:
    // 0x7ae59c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x7AE59Cu;
    SET_GPR_U32(ctx, 31, 0x7AE5A4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7AE59Cu, 0x7AE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE5A4u;
label_7ae5a4:
    // 0x7ae5a4: 0xc0b6db0  jal         func_2DB6C0
    ctx->pc = 0x7AE5A4u;
    SET_GPR_U32(ctx, 31, 0x7AE5ACu);
    ctx->pc = 0x7AE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE5A4u;
    // 0x7ae5a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x7AE5A4u, 0x7AE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE5ACu;
label_7ae5ac:
    // 0x7ae5ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7ae5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae5b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7ae5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7ae5b4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x7ae5b8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x7ae5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x7ae5bc: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x7ae5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x7ae5c0: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x7ae5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x7ae5c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae5c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7ae5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7ae5cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AE5CCu;
    {
        const bool branch_taken_0x7ae5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE5CCu;
        // 0x7ae5d0: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae5cc) {
            ctx->pc = 0x7AE5ECu;
            goto label_7ae5ec;
        }
    }
    ctx->pc = 0x7AE5D4u;
    // 0x7ae5d4: 0x8cc50250  lw          $a1, 0x250($a2)
    ctx->pc = 0x7ae5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x7ae5d8: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x7ae5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x7ae5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE5DCu;
    {
        const bool branch_taken_0x7ae5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE5DCu;
        // 0x7ae5e0: 0xa31024  and         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae5dc) {
            ctx->pc = 0x7AE5ECu;
            goto label_7ae5ec;
        }
    }
    ctx->pc = 0x7AE5E4u;
    // 0x7ae5e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7ae5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7ae5e8: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x7ae5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
label_7ae5ec:
    // 0x7ae5ec: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x7ae5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x7ae5f0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AE5F0u;
    {
        const bool branch_taken_0x7ae5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE5F0u;
        // 0x7ae5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae5f0) {
            ctx->pc = 0x7AE634u;
            goto label_7ae634;
        }
    }
    ctx->pc = 0x7AE5F8u;
    // 0x7ae5f8: 0x8c850250  lw          $a1, 0x250($a0)
    ctx->pc = 0x7ae5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7ae5fc: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x7ae5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x7ae600: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AE600u;
    {
        const bool branch_taken_0x7ae600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE600u;
        // 0x7ae604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae600) {
            ctx->pc = 0x7AE634u;
            goto label_7ae634;
        }
    }
    ctx->pc = 0x7AE608u;
    // 0x7ae608: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7ae608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7ae60c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7ae60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7ae610: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x7ae610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x7ae614: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x7ae614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x7ae618: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x7ae618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x7ae61c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7ae61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x7ae620: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x7ae620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x7ae624: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x7ae624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x7ae628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae62c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x7ae62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x7ae630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7ae634:
    // 0x7ae634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ae638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae63c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE63Cu;
        // 0x7ae640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE644u;
    // 0x7ae644: 0x0  nop
    ctx->pc = 0x7ae644u;
    // NOP
    ctx->pc = 0x7ae648u;
}
} // namespace gh_event
