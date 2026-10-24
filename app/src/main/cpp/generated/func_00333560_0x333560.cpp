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

// Function: func_00333560
// Address: 0x333560 - 0x3336f8
void func_00333560_0x333560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333560_0x333560");
#endif

    switch (ctx->pc) {
        case 0x3335d0u: goto label_3335d0;
        case 0x333644u: goto label_333644;
        case 0x33364cu: goto label_33364c;
        default: break;
    }

    ctx->pc = 0x333560u;

    // 0x333560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333564: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x333564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x333568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x333568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33356c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x333570: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x333570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333574: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x333574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x333578: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x333578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33357c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x333580: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x333580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333584: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x333584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x333588: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x333588u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33358c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x33358cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x333590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x333590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x333594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x333598: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x333598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33359c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3335a0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3335a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x3335a4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3335a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3335a8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3335a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3335ac: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3335ACu;
    {
        const bool branch_taken_0x3335ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335ACu;
        // 0x3335b0: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335ac) {
            ctx->pc = 0x333698u;
            goto label_333698;
        }
    }
    ctx->pc = 0x3335B4u;
    // 0x3335b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3335b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3335b8: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x3335b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3335bc: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x3335bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3335c0: 0x241e000d  addiu       $fp, $zero, 0xD
    ctx->pc = 0x3335c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3335c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3335c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3335c8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3335c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3335cc: 0x0  nop
    ctx->pc = 0x3335ccu;
    // NOP
label_3335d0:
    // 0x3335d0: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3335D0u;
    {
        const bool branch_taken_0x3335d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x3335d0) {
            ctx->pc = 0x3335D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3335D0u;
            // 0x3335d4: 0x80a20001  lb          $v0, 0x1($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3335E4u;
            goto label_3335e4;
        }
    }
    ctx->pc = 0x3335D8u;
    // 0x3335d8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3335D8u;
    {
        const bool branch_taken_0x3335d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3335DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335D8u;
        // 0x3335dc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335d8) {
            ctx->pc = 0x333674u;
            goto label_333674;
        }
    }
    ctx->pc = 0x3335E0u;
    // 0x3335e0: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x3335e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3335e4:
    // 0x3335e4: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3335E4u;
    {
        const bool branch_taken_0x3335e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x3335e4) {
            ctx->pc = 0x3335E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3335E4u;
            // 0x3335e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3335F8u;
            goto label_3335f8;
        }
    }
    ctx->pc = 0x3335ECu;
    // 0x3335ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3335ECu;
    {
        const bool branch_taken_0x3335ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3335F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335ECu;
        // 0x3335f0: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335ec) {
            ctx->pc = 0x333600u;
            goto label_333600;
        }
    }
    ctx->pc = 0x3335F4u;
    // 0x3335f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3335f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3335f8:
    // 0x3335f8: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x3335f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3335fc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3335fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_333600:
    // 0x333600: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333604: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x333604u;
    {
        const bool branch_taken_0x333604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x333608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333604u;
        // 0x333608: 0x2448823  subu        $s1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333604) {
            ctx->pc = 0x333614u;
            goto label_333614;
        }
    }
    ctx->pc = 0x33360Cu;
    // 0x33360c: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x33360Cu;
    {
        const bool branch_taken_0x33360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x333610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33360Cu;
        // 0x333610: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33360c) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x333614u;
label_333614:
    // 0x333614: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x333614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x333618: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x333618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_33361c:
    // 0x33361c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x33361cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333620: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x333620u;
    {
        const bool branch_taken_0x333620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x333620) {
            ctx->pc = 0x333624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333620u;
            // 0x333624: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333634u;
            goto label_333634;
        }
    }
    ctx->pc = 0x333628u;
    // 0x333628: 0x147e0003  bne         $v1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x333628u;
    {
        const bool branch_taken_0x333628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x33362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333628u;
        // 0x33362c: 0x2642821  addu        $a1, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333628) {
            ctx->pc = 0x333638u;
            goto label_333638;
        }
    }
    ctx->pc = 0x333630u;
    // 0x333630: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x333630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_333634:
    // 0x333634: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x333634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_333638:
    // 0x333638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33363c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x33363Cu;
    SET_GPR_U32(ctx, 31, 0x333644u);
    ctx->pc = 0x333640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33363Cu;
    // 0x333640: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x33363Cu, 0x333644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333644u;
label_333644:
    // 0x333644: 0xc0cca7a  jal         func_3329E8
    ctx->pc = 0x333644u;
    SET_GPR_U32(ctx, 31, 0x33364Cu);
    ctx->pc = 0x333648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333644u;
    // 0x333648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329E8u, 0x333644u, 0x33364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33364Cu;
label_33364c:
    // 0x33364c: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x33364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x333650: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x333650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x333654: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333654u;
    {
        const bool branch_taken_0x333654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333654) {
            ctx->pc = 0x333658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333654u;
            // 0x333658: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33365Cu;
            goto label_33365c;
        }
    }
    ctx->pc = 0x33365Cu;
label_33365c:
    // 0x33365c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x33365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x333660: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x333660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x333664: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x333664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x333668: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x333668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33366c: 0x12b6000a  beq         $s5, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x33366Cu;
    {
        const bool branch_taken_0x33366c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x333670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33366Cu;
        // 0x333670: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33366c) {
            ctx->pc = 0x333698u;
            goto label_333698;
        }
    }
    ctx->pc = 0x333674u;
label_333674:
    // 0x333674: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x333674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x333678: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x333678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33367c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33367Cu;
    {
        const bool branch_taken_0x33367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33367Cu;
        // 0x333680: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33367c) {
            ctx->pc = 0x333698u;
            goto label_333698;
        }
    }
    ctx->pc = 0x333684u;
    // 0x333684: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x333684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x333688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33368c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x33368cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x333690: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x333690u;
    {
        const bool branch_taken_0x333690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333690) {
            ctx->pc = 0x333694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333690u;
            // 0x333694: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3335D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3335d0;
        }
    }
    ctx->pc = 0x333698u;
label_333698:
    // 0x333698: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33369c: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x33369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x3336a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3336a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D9DC0u));
    // 0x3336a4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3336A4u;
    {
        const bool branch_taken_0x3336a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3336a4) {
            ctx->pc = 0x3336A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3336A4u;
            // 0x3336a8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3336C4u;
            goto label_3336c4;
        }
    }
    ctx->pc = 0x3336ACu;
    // 0x3336ac: 0xac57000c  sw          $s7, 0xC($v0)
    ctx->pc = 0x3336acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 23));
    // 0x3336b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3336b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3336b4: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x3336b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x3336b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3336b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3336bc: 0xac550004  sw          $s5, 0x4($v0)
    ctx->pc = 0x3336bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
    // 0x3336c0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3336c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3336c4:
    // 0x3336c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3336c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3336c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3336c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3336cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3336ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3336d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3336d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3336d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3336d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3336d8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3336d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3336dc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3336dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3336e0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3336e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3336e4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3336e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3336e8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3336e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3336ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3336ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3336F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336ECu;
        // 0x3336f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3336ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3336F4u;
    // 0x3336f4: 0x0  nop
    ctx->pc = 0x3336f4u;
    // NOP
    ctx->pc = 0x3336f8u;
}
