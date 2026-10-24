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
// Function: movePlayPendulum__15cEventActorWork
// Address: 0x7ab548 - 0x7ab640
void movePlayPendulum__15cEventActorWork_0x7ab548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayPendulum__15cEventActorWork_0x7ab548");
#endif

    switch (ctx->pc) {
        case 0x7ab568u: goto label_7ab568;
        case 0x7ab5e0u: goto label_7ab5e0;
        default: break;
    }

    ctx->pc = 0x7ab548u;

    // 0x7ab548: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x7ab548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x7ab54c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7AB54Cu;
    {
        const bool branch_taken_0x7ab54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB54Cu;
        // 0x7ab550: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab54c) {
            ctx->pc = 0x7AB5C8u;
            goto label_7ab5c8;
        }
    }
    ctx->pc = 0x7AB554u;
    // 0x7ab554: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7ab554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7ab558: 0x904802b4  lbu         $t0, 0x2B4($v0)
    ctx->pc = 0x7ab558u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x7ab55c: 0x11000036  beqz        $t0, . + 4 + (0x36 << 2)
    ctx->pc = 0x7AB55Cu;
    {
        const bool branch_taken_0x7ab55c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB55Cu;
        // 0x7ab560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab55c) {
            ctx->pc = 0x7AB638u;
            goto label_7ab638;
        }
    }
    ctx->pc = 0x7AB564u;
    // 0x7ab564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ab564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ab568:
    // 0x7ab568: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x7ab568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7ab56c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ab56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab570: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x7ab570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x7ab574: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x7ab574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x7ab578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB578u;
    {
        const bool branch_taken_0x7ab578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB578u;
        // 0x7ab57c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab578) {
            ctx->pc = 0x7AB588u;
            goto label_7ab588;
        }
    }
    ctx->pc = 0x7AB580u;
    // 0x7ab580: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x7ab580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7ab584: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7ab584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ab588:
    // 0x7ab588: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x7ab588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x7ab58c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB58Cu;
    {
        const bool branch_taken_0x7ab58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB58Cu;
        // 0x7ab590: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab58c) {
            ctx->pc = 0x7AB5A4u;
            goto label_7ab5a4;
        }
    }
    ctx->pc = 0x7AB594u;
    // 0x7ab594: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x7ab594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x7ab598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ab598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ab59c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB59Cu;
    {
        const bool branch_taken_0x7ab59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB59Cu;
        // 0x7ab5a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab59c) {
            ctx->pc = 0x7AB5A8u;
            goto label_7ab5a8;
        }
    }
    ctx->pc = 0x7AB5A4u;
label_7ab5a4:
    // 0x7ab5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ab5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ab5a8:
    // 0x7ab5a8: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x7ab5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x7ab5ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7ab5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7ab5b0: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x7ab5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x7ab5b4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x7ab5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x7ab5b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x7AB5B8u;
    {
        const bool branch_taken_0x7ab5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB5B8u;
        // 0x7ab5bc: 0xaca20154  sw          $v0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab5b8) {
            ctx->pc = 0x7AB568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ab568;
        }
    }
    ctx->pc = 0x7AB5C0u;
    // 0x7ab5c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x7AB5C0u;
    {
        const bool branch_taken_0x7ab5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab5c0) {
            ctx->pc = 0x7AB638u;
            goto label_7ab638;
        }
    }
    ctx->pc = 0x7AB5C8u;
label_7ab5c8:
    // 0x7ab5c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7ab5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7ab5cc: 0x904802b4  lbu         $t0, 0x2B4($v0)
    ctx->pc = 0x7ab5ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x7ab5d0: 0x11000019  beqz        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AB5D0u;
    {
        const bool branch_taken_0x7ab5d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB5D0u;
        // 0x7ab5d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab5d0) {
            ctx->pc = 0x7AB638u;
            goto label_7ab638;
        }
    }
    ctx->pc = 0x7AB5D8u;
    // 0x7ab5d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ab5d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab5dc: 0x0  nop
    ctx->pc = 0x7ab5dcu;
    // NOP
label_7ab5e0:
    // 0x7ab5e0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x7ab5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7ab5e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ab5e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab5e8: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x7ab5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x7ab5ec: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x7ab5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x7ab5f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AB5F0u;
    {
        const bool branch_taken_0x7ab5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB5F0u;
        // 0x7ab5f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab5f0) {
            ctx->pc = 0x7AB600u;
            goto label_7ab600;
        }
    }
    ctx->pc = 0x7AB5F8u;
    // 0x7ab5f8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x7ab5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7ab5fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7ab5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ab600:
    // 0x7ab600: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x7ab600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x7ab604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AB604u;
    {
        const bool branch_taken_0x7ab604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB604u;
        // 0x7ab608: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab604) {
            ctx->pc = 0x7AB61Cu;
            goto label_7ab61c;
        }
    }
    ctx->pc = 0x7AB60Cu;
    // 0x7ab60c: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x7ab60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x7ab610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ab610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ab614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB614u;
    {
        const bool branch_taken_0x7ab614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB614u;
        // 0x7ab618: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab614) {
            ctx->pc = 0x7AB620u;
            goto label_7ab620;
        }
    }
    ctx->pc = 0x7AB61Cu;
label_7ab61c:
    // 0x7ab61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ab61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ab620:
    // 0x7ab620: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x7ab620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x7ab624: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7ab624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7ab628: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x7ab628u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x7ab62c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x7ab62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x7ab630: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x7AB630u;
    {
        const bool branch_taken_0x7ab630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB630u;
        // 0x7ab634: 0xaca20154  sw          $v0, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab630) {
            ctx->pc = 0x7AB5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ab5e0;
        }
    }
    ctx->pc = 0x7AB638u;
label_7ab638:
    // 0x7ab638: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB638u;
        // 0x7ab63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB640u;
}
} // namespace gh_event
