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

// Function: func_003315D8
// Address: 0x3315d8 - 0x331718
void func_003315D8_0x3315d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003315D8_0x3315d8");
#endif

    switch (ctx->pc) {
        case 0x331640u: goto label_331640;
        case 0x331648u: goto label_331648;
        case 0x331650u: goto label_331650;
        case 0x33165cu: goto label_33165c;
        case 0x331664u: goto label_331664;
        case 0x331678u: goto label_331678;
        case 0x331680u: goto label_331680;
        case 0x33168cu: goto label_33168c;
        case 0x3316ccu: goto label_3316cc;
        default: break;
    }

    ctx->pc = 0x3315d8u;

    // 0x3315d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3315d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3315dc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3315dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3315e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3315e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3315e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3315e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3315e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3315e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3315ec: 0x2463845c  addiu       $v1, $v1, -0x7BA4
    ctx->pc = 0x3315ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935644));
    // 0x3315f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3315f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3315f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3315f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3315f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3315f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3315fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3315fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3D845Cu));
    // 0x331600: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x331600u;
    {
        const bool branch_taken_0x331600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x331604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331600u;
        // 0x331604: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331600) {
            ctx->pc = 0x3316DCu;
            goto label_3316dc;
        }
    }
    ctx->pc = 0x331608u;
    // 0x331608: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x331608u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33160c: 0x54830034  bnel        $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x33160Cu;
    {
        const bool branch_taken_0x33160c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33160c) {
            ctx->pc = 0x331610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33160Cu;
            // 0x331610: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3316E0u;
            goto label_3316e0;
        }
    }
    ctx->pc = 0x331614u;
    // 0x331614: 0x3c12003e  lui         $s2, 0x3E
    ctx->pc = 0x331614u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    // 0x331618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33161c: 0x26448464  addiu       $a0, $s2, -0x7B9C
    ctx->pc = 0x33161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935652));
    // 0x331620: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331624: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x331624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3D8464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8464u, _value); } while (0);
    // 0x331628: 0x24428458  addiu       $v0, $v0, -0x7BA8
    ctx->pc = 0x331628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935640));
    // 0x33162c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33162cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8458u));
    // 0x331630: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x331630u;
    {
        const bool branch_taken_0x331630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x331630) {
            ctx->pc = 0x331670u;
            goto label_331670;
        }
    }
    ctx->pc = 0x331638u;
    // 0x331638: 0xc0ceda8  jal         func_33B6A0
    ctx->pc = 0x331638u;
    SET_GPR_U32(ctx, 31, 0x331640u);
    ctx->pc = 0x33B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6A0u, 0x331638u, 0x331640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331640u;
label_331640:
    // 0x331640: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331640u;
    SET_GPR_U32(ctx, 31, 0x331648u);
    ctx->pc = 0x331644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331640u;
    // 0x331644: 0x24041400  addiu       $a0, $zero, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331640u, 0x331648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331648u;
label_331648:
    // 0x331648: 0xc0e6674  jal         func_3999D0
    ctx->pc = 0x331648u;
    SET_GPR_U32(ctx, 31, 0x331650u);
    ctx->pc = 0x3999D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999D0u, 0x331648u, 0x331650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331650u;
label_331650:
    // 0x331650: 0x24041401  addiu       $a0, $zero, 0x1401
    ctx->pc = 0x331650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5121));
    // 0x331654: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331654u;
    SET_GPR_U32(ctx, 31, 0x33165Cu);
    ctx->pc = 0x331658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331654u;
    // 0x331658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331654u, 0x33165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33165Cu;
label_33165c:
    // 0x33165c: 0xc0cedb4  jal         func_33B6D0
    ctx->pc = 0x33165Cu;
    SET_GPR_U32(ctx, 31, 0x331664u);
    ctx->pc = 0x33B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6D0u, 0x33165Cu, 0x331664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331664u;
label_331664:
    // 0x331664: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331664u;
    {
        const bool branch_taken_0x331664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331664u;
        // 0x331668: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331664) {
            ctx->pc = 0x331690u;
            goto label_331690;
        }
    }
    ctx->pc = 0x33166Cu;
    // 0x33166c: 0x0  nop
    ctx->pc = 0x33166cu;
    // NOP
label_331670:
    // 0x331670: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331670u;
    SET_GPR_U32(ctx, 31, 0x331678u);
    ctx->pc = 0x331674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331670u;
    // 0x331674: 0x24041500  addiu       $a0, $zero, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331670u, 0x331678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331678u;
label_331678:
    // 0x331678: 0xc0e6674  jal         func_3999D0
    ctx->pc = 0x331678u;
    SET_GPR_U32(ctx, 31, 0x331680u);
    ctx->pc = 0x3999D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999D0u, 0x331678u, 0x331680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331680u;
label_331680:
    // 0x331680: 0x24041501  addiu       $a0, $zero, 0x1501
    ctx->pc = 0x331680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5377));
    // 0x331684: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331684u;
    SET_GPR_U32(ctx, 31, 0x33168Cu);
    ctx->pc = 0x331688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331684u;
    // 0x331688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331684u, 0x33168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33168Cu;
label_33168c:
    // 0x33168c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_331690:
    // 0x331690: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x331690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x331694: 0x26448464  addiu       $a0, $s2, -0x7B9C
    ctx->pc = 0x331694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935652));
    // 0x331698: 0x24428494  addiu       $v0, $v0, -0x7B6C
    ctx->pc = 0x331698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935700));
    // 0x33169c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x33169cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3316a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3316a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3316a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3316a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3316a8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3316A8u;
    {
        const bool branch_taken_0x3316a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316A8u;
        // 0x3316ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3316a8) {
            ctx->pc = 0x3316DCu;
            goto label_3316dc;
        }
    }
    ctx->pc = 0x3316B0u;
    // 0x3316b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3316b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3316b4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3316B4u;
    {
        const bool branch_taken_0x3316b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3316B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316B4u;
        // 0x3316b8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3316b4) {
            ctx->pc = 0x3316D8u;
            goto label_3316d8;
        }
    }
    ctx->pc = 0x3316BCu;
    // 0x3316bc: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x3316bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x3316c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3316c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316c4: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3316C4u;
    SET_GPR_U32(ctx, 31, 0x3316CCu);
    ctx->pc = 0x3316C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3316C4u;
    // 0x3316c8: 0x24843ee8  addiu       $a0, $a0, 0x3EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3316C4u, 0x3316CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316CCu;
label_3316cc:
    // 0x3316cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3316CCu;
    {
        const bool branch_taken_0x3316cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3316D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316CCu;
        // 0x3316d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3316cc) {
            ctx->pc = 0x3316DCu;
            goto label_3316dc;
        }
    }
    ctx->pc = 0x3316D4u;
    // 0x3316d4: 0x0  nop
    ctx->pc = 0x3316d4u;
    // NOP
label_3316d8:
    // 0x3316d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3316d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3316dc:
    // 0x3316dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3316dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3316e0:
    // 0x3316e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3316e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3316e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3316e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3316e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3316e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3316ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3316ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3316F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3316ECu;
        // 0x3316f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3316ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3316F4u;
    // 0x3316f4: 0x0  nop
    ctx->pc = 0x3316f4u;
    // NOP
    // 0x3316f8: 0xa044008c  sb          $a0, 0x8C($v0)
    ctx->pc = 0x3316f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x3316fc: 0x0  nop
    ctx->pc = 0x3316fcu;
    // NOP
    // 0x331700: 0xac440088  sw          $a0, 0x88($v0)
    ctx->pc = 0x331700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 4));
    // 0x331704: 0x0  nop
    ctx->pc = 0x331704u;
    // NOP
    // 0x331708: 0x9062008c  lbu         $v0, 0x8C($v1)
    ctx->pc = 0x331708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x33170c: 0x0  nop
    ctx->pc = 0x33170cu;
    // NOP
    // 0x331710: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x331710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x331714: 0x0  nop
    ctx->pc = 0x331714u;
    // NOP
    ctx->pc = 0x331718u;
}
