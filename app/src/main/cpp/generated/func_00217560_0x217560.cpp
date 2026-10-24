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

// Function: func_00217560
// Address: 0x217560 - 0x217980
void func_00217560_0x217560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00217560_0x217560");
#endif

    switch (ctx->pc) {
        case 0x2175c4u: goto label_2175c4;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175d4u: goto label_2175d4;
        case 0x2175f0u: goto label_2175f0;
        case 0x2176ccu: goto label_2176cc;
        case 0x217704u: goto label_217704;
        case 0x21770cu: goto label_21770c;
        case 0x21771cu: goto label_21771c;
        case 0x217730u: goto label_217730;
        case 0x21773cu: goto label_21773c;
        case 0x217768u: goto label_217768;
        case 0x217770u: goto label_217770;
        case 0x21778cu: goto label_21778c;
        case 0x217828u: goto label_217828;
        case 0x217838u: goto label_217838;
        case 0x217844u: goto label_217844;
        case 0x21784cu: goto label_21784c;
        case 0x217868u: goto label_217868;
        case 0x217894u: goto label_217894;
        case 0x2178c0u: goto label_2178c0;
        case 0x2178c8u: goto label_2178c8;
        case 0x2178d8u: goto label_2178d8;
        case 0x2178ecu: goto label_2178ec;
        case 0x2178f8u: goto label_2178f8;
        case 0x217928u: goto label_217928;
        case 0x217940u: goto label_217940;
        case 0x21794cu: goto label_21794c;
        case 0x217964u: goto label_217964;
        default: break;
    }

    ctx->pc = 0x217560u;

    // 0x217560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21756c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x217570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217574: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x217574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x217578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21757c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x21757cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x217580: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x217580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x217584: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x217584u;
    {
        const bool branch_taken_0x217584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217584u;
        // 0x217588: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217584) {
            ctx->pc = 0x2176E4u;
            goto label_2176e4;
        }
    }
    ctx->pc = 0x21758Cu;
    // 0x21758c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21758Cu;
    {
        const bool branch_taken_0x21758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21758c) {
            ctx->pc = 0x217590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21758Cu;
            // 0x217590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2175A4u;
            goto label_2175a4;
        }
    }
    ctx->pc = 0x217594u;
    // 0x217594: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217594u;
    {
        const bool branch_taken_0x217594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217594u;
        // 0x217598: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217594) {
            ctx->pc = 0x2175BCu;
            goto label_2175bc;
        }
    }
    ctx->pc = 0x21759Cu;
    // 0x21759c: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x21759Cu;
    {
        const bool branch_taken_0x21759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2175A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21759Cu;
        // 0x2175a0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21759c) {
            ctx->pc = 0x21796Cu;
            goto label_21796c;
        }
    }
    ctx->pc = 0x2175A4u;
label_2175a4:
    // 0x2175a4: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2175A4u;
    {
        const bool branch_taken_0x2175a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2175A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175A4u;
        // 0x2175a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175a4) {
            ctx->pc = 0x217830u;
            goto label_217830;
        }
    }
    ctx->pc = 0x2175ACu;
    // 0x2175ac: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2175ACu;
    {
        const bool branch_taken_0x2175ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2175B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175ACu;
        // 0x2175b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175ac) {
            ctx->pc = 0x2178A0u;
            goto label_2178a0;
        }
    }
    ctx->pc = 0x2175B4u;
    // 0x2175b4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x2175B4u;
    {
        const bool branch_taken_0x2175b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2175B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175B4u;
        // 0x2175b8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175b4) {
            ctx->pc = 0x21796Cu;
            goto label_21796c;
        }
    }
    ctx->pc = 0x2175BCu;
label_2175bc:
    // 0x2175bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2175BCu;
    SET_GPR_U32(ctx, 31, 0x2175C4u);
    ctx->pc = 0x2175C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175BCu;
    // 0x2175c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2175BCu, 0x2175C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175C4u;
label_2175c4:
    // 0x2175c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2175C4u;
    SET_GPR_U32(ctx, 31, 0x2175CCu);
    ctx->pc = 0x2175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175C4u;
    // 0x2175c8: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2175C4u, 0x2175CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175CCu;
label_2175cc:
    // 0x2175cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2175CCu;
    SET_GPR_U32(ctx, 31, 0x2175D4u);
    ctx->pc = 0x2175D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175CCu;
    // 0x2175d0: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2175CCu, 0x2175D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175D4u;
label_2175d4:
    // 0x2175d4: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2175d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2175d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2175d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175dc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2175dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2175e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2175e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2175e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2175e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2175e8: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2175E8u;
    SET_GPR_U32(ctx, 31, 0x2175F0u);
    ctx->pc = 0x2175ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175E8u;
    // 0x2175ec: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2175E8u, 0x2175F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175F0u;
label_2175f0:
    // 0x2175f0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2175f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2175f4: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x2175f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2175f8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2175F8u;
    {
        const bool branch_taken_0x2175f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175F8u;
        // 0x2175fc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175f8) {
            ctx->pc = 0x217664u;
            goto label_217664;
        }
    }
    ctx->pc = 0x217600u;
    // 0x217600: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x217600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x217604: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x217604u;
    {
        const bool branch_taken_0x217604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217604) {
            ctx->pc = 0x217664u;
            goto label_217664;
        }
    }
    ctx->pc = 0x21760Cu;
    // 0x21760c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21760cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217610: 0x0  nop
    ctx->pc = 0x217610u;
    // NOP
    // 0x217614: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x217614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217618: 0x0  nop
    ctx->pc = 0x217618u;
    // NOP
    // 0x21761c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x21761Cu;
    {
        const bool branch_taken_0x21761c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21761Cu;
        // 0x217620: 0x922217c3  lbu         $v0, 0x17C3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21761c) {
            ctx->pc = 0x217644u;
            goto label_217644;
        }
    }
    ctx->pc = 0x217624u;
    // 0x217624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217624u;
    {
        const bool branch_taken_0x217624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217624u;
        // 0x217628: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217624) {
            ctx->pc = 0x217638u;
            goto label_217638;
        }
    }
    ctx->pc = 0x21762Cu;
    // 0x21762c: 0x8c431670  lw          $v1, 0x1670($v0)
    ctx->pc = 0x21762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5744)));
    // 0x217630: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x217630u;
    {
        const bool branch_taken_0x217630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217630u;
        // 0x217634: 0x8c441674  lw          $a0, 0x1674($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217630) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x217638u;
label_217638:
    // 0x217638: 0x8c431660  lw          $v1, 0x1660($v0)
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5728)));
    // 0x21763c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21763Cu;
    {
        const bool branch_taken_0x21763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21763Cu;
        // 0x217640: 0x8c441664  lw          $a0, 0x1664($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21763c) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x217644u;
label_217644:
    // 0x217644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217644u;
    {
        const bool branch_taken_0x217644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217644u;
        // 0x217648: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217644) {
            ctx->pc = 0x217658u;
            goto label_217658;
        }
    }
    ctx->pc = 0x21764Cu;
    // 0x21764c: 0x8c431660  lw          $v1, 0x1660($v0)
    ctx->pc = 0x21764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5728)));
    // 0x217650: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x217650u;
    {
        const bool branch_taken_0x217650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217650u;
        // 0x217654: 0x8c441664  lw          $a0, 0x1664($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217650) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x217658u;
label_217658:
    // 0x217658: 0x8c431670  lw          $v1, 0x1670($v0)
    ctx->pc = 0x217658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5744)));
    // 0x21765c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21765Cu;
    {
        const bool branch_taken_0x21765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21765Cu;
        // 0x217660: 0x8c441674  lw          $a0, 0x1674($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21765c) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x217664u;
label_217664:
    // 0x217664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x217664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217668: 0x0  nop
    ctx->pc = 0x217668u;
    // NOP
    // 0x21766c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21766cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217670: 0x0  nop
    ctx->pc = 0x217670u;
    // NOP
    // 0x217674: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x217674u;
    {
        const bool branch_taken_0x217674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217674u;
        // 0x217678: 0x922217c3  lbu         $v0, 0x17C3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217674) {
            ctx->pc = 0x217690u;
            goto label_217690;
        }
    }
    ctx->pc = 0x21767Cu;
    // 0x21767c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21767Cu;
    {
        const bool branch_taken_0x21767c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21767Cu;
        // 0x217680: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21767c) {
            ctx->pc = 0x2176A4u;
            goto label_2176a4;
        }
    }
    ctx->pc = 0x217684u;
    // 0x217684: 0x8c4325c4  lw          $v1, 0x25C4($v0)
    ctx->pc = 0x217684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9668)));
    // 0x217688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217688u;
    {
        const bool branch_taken_0x217688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217688u;
        // 0x21768c: 0x8c4425c8  lw          $a0, 0x25C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217688) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x217690u;
label_217690:
    // 0x217690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217690u;
    {
        const bool branch_taken_0x217690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217690u;
        // 0x217694: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217690) {
            ctx->pc = 0x2176A4u;
            goto label_2176a4;
        }
    }
    ctx->pc = 0x217698u;
    // 0x217698: 0x8c4325c4  lw          $v1, 0x25C4($v0)
    ctx->pc = 0x217698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9668)));
    // 0x21769c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21769Cu;
    {
        const bool branch_taken_0x21769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21769Cu;
        // 0x2176a0: 0x8c4425c8  lw          $a0, 0x25C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21769c) {
            ctx->pc = 0x2176ACu;
            goto label_2176ac;
        }
    }
    ctx->pc = 0x2176A4u;
label_2176a4:
    // 0x2176a4: 0x8c4325bc  lw          $v1, 0x25BC($v0)
    ctx->pc = 0x2176a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9660)));
    // 0x2176a8: 0x8c4425c0  lw          $a0, 0x25C0($v0)
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9664)));
label_2176ac:
    // 0x2176ac: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2176acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2176b0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2176b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2176b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2176b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2176b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2176b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2176bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176c0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2176c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2176c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2176C4u;
    SET_GPR_U32(ctx, 31, 0x2176CCu);
    ctx->pc = 0x2176C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176C4u;
    // 0x2176c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2176C4u, 0x2176CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176CCu;
label_2176cc:
    // 0x2176cc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2176ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2176d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2176d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2176d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2176d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2176d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2176dc: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x2176dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x2176e0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2176e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2176e4:
    // 0x2176e4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2176e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2176e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2176e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176ec: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2176ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2176f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2176f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2176f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2176f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2176f8: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x2176f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x2176fc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2176FCu;
    SET_GPR_U32(ctx, 31, 0x217704u);
    ctx->pc = 0x217700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176FCu;
    // 0x217700: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2176FCu, 0x217704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217704u;
label_217704:
    // 0x217704: 0xc055f06  jal         func_157C18
    ctx->pc = 0x217704u;
    SET_GPR_U32(ctx, 31, 0x21770Cu);
    ctx->pc = 0x217708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217704u;
    // 0x217708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x217704u, 0x21770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21770Cu;
label_21770c:
    // 0x21770c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21770Cu;
    {
        const bool branch_taken_0x21770c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21770c) {
            ctx->pc = 0x21771Cu;
            goto label_21771c;
        }
    }
    ctx->pc = 0x217714u;
    // 0x217714: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x217714u;
    SET_GPR_U32(ctx, 31, 0x21771Cu);
    ctx->pc = 0x217718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217714u;
    // 0x217718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x217714u, 0x21771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21771Cu;
label_21771c:
    // 0x21771c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217720: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x217720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x217724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217728: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x217728u;
    SET_GPR_U32(ctx, 31, 0x217730u);
    ctx->pc = 0x21772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217728u;
    // 0x21772c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x217728u, 0x217730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217730u;
label_217730:
    // 0x217730: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x217730u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217734: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x217734u;
    SET_GPR_U32(ctx, 31, 0x21773Cu);
    ctx->pc = 0x217738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217734u;
    // 0x217738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x217734u, 0x21773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21773Cu;
label_21773c:
    // 0x21773c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x21773cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x217740: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x217740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x217744: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x217744u;
    {
        const bool branch_taken_0x217744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217744u;
        // 0x217748: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217744) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x21774Cu;
    // 0x21774c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x21774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x217750: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x217750u;
    {
        const bool branch_taken_0x217750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217750u;
        // 0x217754: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217750) {
            ctx->pc = 0x2177D0u;
            goto label_2177d0;
        }
    }
    ctx->pc = 0x217758u;
    // 0x217758: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x217758u;
    {
        const bool branch_taken_0x217758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217758) {
            ctx->pc = 0x21775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217758u;
            // 0x21775c: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2177D4u;
            goto label_2177d4;
        }
    }
    ctx->pc = 0x217760u;
    // 0x217760: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217760u;
    SET_GPR_U32(ctx, 31, 0x217768u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217760u, 0x217768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217768u;
label_217768:
    // 0x217768: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217768u;
    SET_GPR_U32(ctx, 31, 0x217770u);
    ctx->pc = 0x21776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217768u;
    // 0x21776c: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217768u, 0x217770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217770u;
label_217770:
    // 0x217770: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x217770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217778: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x21777c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21777cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x217780: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217784: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x217784u;
    SET_GPR_U32(ctx, 31, 0x21778Cu);
    ctx->pc = 0x217788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217784u;
    // 0x217788: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x217784u, 0x21778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21778Cu;
label_21778c:
    // 0x21778c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21778cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217790: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x217790u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x217794: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x217794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217798: 0x0  nop
    ctx->pc = 0x217798u;
    // NOP
    // 0x21779c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21779Cu;
    {
        const bool branch_taken_0x21779c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2177A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21779Cu;
        // 0x2177a0: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21779c) {
            ctx->pc = 0x2177A8u;
            goto label_2177a8;
        }
    }
    ctx->pc = 0x2177A4u;
    // 0x2177a4: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x2177a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
label_2177a8:
    // 0x2177a8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2177ac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2177b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2177b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2177b4: 0x0  nop
    ctx->pc = 0x2177b4u;
    // NOP
    // 0x2177b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2177b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2177bc: 0x0  nop
    ctx->pc = 0x2177bcu;
    // NOP
    // 0x2177c0: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x2177C0u;
    {
        const bool branch_taken_0x2177c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C0u;
        // 0x2177c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177c0) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x2177C8u;
    // 0x2177c8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2177C8u;
    {
        const bool branch_taken_0x2177c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2177CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177C8u;
        // 0x2177cc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177c8) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x2177D0u;
label_2177d0:
    // 0x2177d0: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2177d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2177d4:
    // 0x2177d4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2177d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2177d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2177d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2177dc: 0x0  nop
    ctx->pc = 0x2177dcu;
    // NOP
    // 0x2177e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2177e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2177e4: 0x0  nop
    ctx->pc = 0x2177e4u;
    // NOP
    // 0x2177e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2177E8u;
    {
        const bool branch_taken_0x2177e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2177ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2177E8u;
        // 0x2177ec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2177e8) {
            ctx->pc = 0x21780Cu;
            goto label_21780c;
        }
    }
    ctx->pc = 0x2177F0u;
    // 0x2177f0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2177f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2177f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2177f8: 0x0  nop
    ctx->pc = 0x2177f8u;
    // NOP
    // 0x2177fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2177fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217800: 0x0  nop
    ctx->pc = 0x217800u;
    // NOP
    // 0x217804: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x217804u;
    {
        const bool branch_taken_0x217804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217804u;
        // 0x217808: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217804) {
            ctx->pc = 0x217820u;
            goto label_217820;
        }
    }
    ctx->pc = 0x21780Cu;
label_21780c:
    // 0x21780c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x21780cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x217810: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x217810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x217814: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x217814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x217818: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x217818u;
    {
        const bool branch_taken_0x217818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217818u;
        // 0x21781c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217818) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x217820u;
label_217820:
    // 0x217820: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x217820u;
    SET_GPR_U32(ctx, 31, 0x217828u);
    ctx->pc = 0x217824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217820u;
    // 0x217824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x217820u, 0x217828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217828u;
label_217828:
    // 0x217828: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x217828u;
    {
        const bool branch_taken_0x217828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217828u;
        // 0x21782c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217828) {
            ctx->pc = 0x217968u;
            goto label_217968;
        }
    }
    ctx->pc = 0x217830u;
label_217830:
    // 0x217830: 0xc09d91a  jal         func_276468
    ctx->pc = 0x217830u;
    SET_GPR_U32(ctx, 31, 0x217838u);
    ctx->pc = 0x217834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217830u;
    // 0x217834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x217830u, 0x217838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217838u;
label_217838:
    // 0x217838: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x217838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x21783c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21783Cu;
    SET_GPR_U32(ctx, 31, 0x217844u);
    ctx->pc = 0x217840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21783Cu;
    // 0x217840: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21783Cu, 0x217844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217844u;
label_217844:
    // 0x217844: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217844u;
    SET_GPR_U32(ctx, 31, 0x21784Cu);
    ctx->pc = 0x217848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217844u;
    // 0x217848: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217844u, 0x21784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21784Cu;
label_21784c:
    // 0x21784c: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x21784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217854: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x217854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x217858: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x217858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x21785c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21785cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217860: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x217860u;
    SET_GPR_U32(ctx, 31, 0x217868u);
    ctx->pc = 0x217864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217860u;
    // 0x217864: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x217860u, 0x217868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217868u;
label_217868:
    // 0x217868: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21786c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21786cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x217870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217878: 0x8c451668  lw          $a1, 0x1668($v0)
    ctx->pc = 0x217878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5736)));
    // 0x21787c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x21787cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217880: 0x8c46166c  lw          $a2, 0x166C($v0)
    ctx->pc = 0x217880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5740)));
    // 0x217884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217888: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x217888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21788c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21788Cu;
    SET_GPR_U32(ctx, 31, 0x217894u);
    ctx->pc = 0x217890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21788Cu;
    // 0x217890: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21788Cu, 0x217894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217894u;
label_217894:
    // 0x217894: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x217894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x217898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21789c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21789cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2178a0:
    // 0x2178a0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2178a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2178a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2178a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178a8: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2178a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2178ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2178acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2178b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2178b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2178b4: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x2178b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x2178b8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2178B8u;
    SET_GPR_U32(ctx, 31, 0x2178C0u);
    ctx->pc = 0x2178BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178B8u;
    // 0x2178bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2178B8u, 0x2178C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178C0u;
label_2178c0:
    // 0x2178c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2178C0u;
    SET_GPR_U32(ctx, 31, 0x2178C8u);
    ctx->pc = 0x2178C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178C0u;
    // 0x2178c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2178C0u, 0x2178C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178C8u;
label_2178c8:
    // 0x2178c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2178C8u;
    {
        const bool branch_taken_0x2178c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178c8) {
            ctx->pc = 0x2178D8u;
            goto label_2178d8;
        }
    }
    ctx->pc = 0x2178D0u;
    // 0x2178d0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2178D0u;
    SET_GPR_U32(ctx, 31, 0x2178D8u);
    ctx->pc = 0x2178D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178D0u;
    // 0x2178d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2178D0u, 0x2178D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178D8u;
label_2178d8:
    // 0x2178d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2178d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2178dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2178dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2178e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2178e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2178E4u;
    SET_GPR_U32(ctx, 31, 0x2178ECu);
    ctx->pc = 0x2178E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178E4u;
    // 0x2178e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2178E4u, 0x2178ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178ECu;
label_2178ec:
    // 0x2178ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2178ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2178f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2178F0u;
    SET_GPR_U32(ctx, 31, 0x2178F8u);
    ctx->pc = 0x2178F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178F0u;
    // 0x2178f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2178F0u, 0x2178F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178F8u;
label_2178f8:
    // 0x2178f8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2178f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2178fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2178fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x217900: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x217900u;
    {
        const bool branch_taken_0x217900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217900u;
        // 0x217904: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217900) {
            ctx->pc = 0x217968u;
            goto label_217968;
        }
    }
    ctx->pc = 0x217908u;
    // 0x217908: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x217908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x21790c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21790Cu;
    {
        const bool branch_taken_0x21790c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21790c) {
            ctx->pc = 0x217910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21790Cu;
            // 0x217910: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21796Cu;
            goto label_21796c;
        }
    }
    ctx->pc = 0x217914u;
    // 0x217914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21791c: 0xa2221864  sb          $v0, 0x1864($s1)
    ctx->pc = 0x21791cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 2));
    // 0x217920: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x217920u;
    SET_GPR_U32(ctx, 31, 0x217928u);
    ctx->pc = 0x217924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217920u;
    // 0x217924: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x217920u, 0x217928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217928u;
label_217928:
    // 0x217928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217928u;
    {
        const bool branch_taken_0x217928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217928u;
        // 0x21792c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217928) {
            ctx->pc = 0x217940u;
            goto label_217940;
        }
    }
    ctx->pc = 0x217930u;
    // 0x217930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217934: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x217934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x217938: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x217938u;
    SET_GPR_U32(ctx, 31, 0x217940u);
    ctx->pc = 0x21793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217938u;
    // 0x21793c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x217938u, 0x217940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217940u;
label_217940:
    // 0x217940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217944: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x217944u;
    SET_GPR_U32(ctx, 31, 0x21794Cu);
    ctx->pc = 0x217948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217944u;
    // 0x217948: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x217944u, 0x21794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21794Cu;
label_21794c:
    // 0x21794c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21794Cu;
    {
        const bool branch_taken_0x21794c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21794Cu;
        // 0x217950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21794c) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x217954u;
    // 0x217954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217958: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x217958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x21795c: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x21795Cu;
    SET_GPR_U32(ctx, 31, 0x217964u);
    ctx->pc = 0x217960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21795Cu;
    // 0x217960: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x21795Cu, 0x217964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217964u;
label_217964:
    // 0x217964: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x217964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217968:
    // 0x217968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21796c:
    // 0x21796c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21796cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217974: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x217974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217978: 0x3e00008  jr          $ra
    ctx->pc = 0x217978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217978u;
        // 0x21797c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217980u;
}
