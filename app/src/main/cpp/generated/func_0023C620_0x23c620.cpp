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

// Function: func_0023C620
// Address: 0x23c620 - 0x23d410
void func_0023C620_0x23c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023C620_0x23c620");
#endif

    switch (ctx->pc) {
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c780u: goto label_23c780;
        case 0x23c794u: goto label_23c794;
        case 0x23c840u: goto label_23c840;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c964u: goto label_23c964;
        case 0x23c990u: goto label_23c990;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23ca00u: goto label_23ca00;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cce8u: goto label_23cce8;
        case 0x23cd14u: goto label_23cd14;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23ce40u: goto label_23ce40;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cff8u: goto label_23cff8;
        case 0x23d03cu: goto label_23d03c;
        case 0x23d078u: goto label_23d078;
        case 0x23d08cu: goto label_23d08c;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0ccu: goto label_23d0cc;
        case 0x23d0e0u: goto label_23d0e0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d178u: goto label_23d178;
        case 0x23d198u: goto label_23d198;
        case 0x23d1a0u: goto label_23d1a0;
        case 0x23d1b0u: goto label_23d1b0;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d204u: goto label_23d204;
        case 0x23d220u: goto label_23d220;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d260u: goto label_23d260;
        case 0x23d274u: goto label_23d274;
        case 0x23d294u: goto label_23d294;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d310u: goto label_23d310;
        case 0x23d324u: goto label_23d324;
        case 0x23d338u: goto label_23d338;
        case 0x23d358u: goto label_23d358;
        case 0x23d360u: goto label_23d360;
        case 0x23d378u: goto label_23d378;
        case 0x23d384u: goto label_23d384;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3ecu: goto label_23d3ec;
        default: break;
    }

    ctx->pc = 0x23c620u;

    // 0x23c620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23c624: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23c628: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23c62c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23c62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c630: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23c634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c63c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23c63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23c640: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x23c644: 0x926402f6  lbu         $a0, 0x2F6($s3)
    ctx->pc = 0x23c644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23c648: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23c64c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23c64cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23c650: 0x1060035c  beqz        $v1, . + 4 + (0x35C << 2)
    ctx->pc = 0x23C650u;
    {
        const bool branch_taken_0x23c650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C650u;
        // 0x23c654: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c650) {
            ctx->pc = 0x23D3C4u;
            goto label_23d3c4;
        }
    }
    ctx->pc = 0x23C658u;
    // 0x23c658: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23c658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23c65c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c660: 0x2442aec0  addiu       $v0, $v0, -0x5140
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x23c664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c668: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c66c: 0x800008  jr          $a0
    ctx->pc = 0x23C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C674u: goto label_23c674;
            case 0x23D150u: goto label_23d150;
            case 0x23D1B8u: goto label_23d1b8;
            case 0x23D214u: goto label_23d214;
            case 0x23D26Cu: goto label_23d26c;
            case 0x23D2D8u: goto label_23d2d8;
            case 0x23D330u: goto label_23d330;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C66Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C674u;
label_23c674:
    // 0x23c674: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23c678: 0x2463fdfe  addiu       $v1, $v1, -0x202
    ctx->pc = 0x23c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x23c67c: 0x2c62007d  sltiu       $v0, $v1, 0x7D
    ctx->pc = 0x23c67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23c680: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C680u;
    {
        const bool branch_taken_0x23c680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C680u;
        // 0x23c684: 0xa2601864  sb          $zero, 0x1864($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c680) {
            ctx->pc = 0x23C6A4u;
            goto label_23c6a4;
        }
    }
    ctx->pc = 0x23C688u;
    // 0x23c688: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23c68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23c690: 0x2442aee0  addiu       $v0, $v0, -0x5120
    ctx->pc = 0x23c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946528));
    // 0x23c694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c698: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c69c: 0x800008  jr          $a0
    ctx->pc = 0x23C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C6A4u: goto label_23c6a4;
            case 0x23C778u: goto label_23c778;
            case 0x23C838u: goto label_23c838;
            case 0x23C864u: goto label_23c864;
            case 0x23C874u: goto label_23c874;
            case 0x23C884u: goto label_23c884;
            case 0x23C894u: goto label_23c894;
            case 0x23C8F4u: goto label_23c8f4;
            case 0x23C92Cu: goto label_23c92c;
            case 0x23C998u: goto label_23c998;
            case 0x23C9E8u: goto label_23c9e8;
            case 0x23C9F8u: goto label_23c9f8;
            case 0x23CACCu: goto label_23cacc;
            case 0x23CB04u: goto label_23cb04;
            case 0x23CB98u: goto label_23cb98;
            case 0x23CC00u: goto label_23cc00;
            case 0x23CC38u: goto label_23cc38;
            case 0x23CC70u: goto label_23cc70;
            case 0x23CCD0u: goto label_23ccd0;
            case 0x23CCE0u: goto label_23cce0;
            case 0x23CD0Cu: goto label_23cd0c;
            case 0x23CD38u: goto label_23cd38;
            case 0x23CD48u: goto label_23cd48;
            case 0x23CD58u: goto label_23cd58;
            case 0x23CD84u: goto label_23cd84;
            case 0x23CDB0u: goto label_23cdb0;
            case 0x23CE38u: goto label_23ce38;
            case 0x23CED4u: goto label_23ced4;
            case 0x23CF00u: goto label_23cf00;
            case 0x23CF90u: goto label_23cf90;
            case 0x23CFA0u: goto label_23cfa0;
            case 0x23CFB0u: goto label_23cfb0;
            case 0x23CFC0u: goto label_23cfc0;
            case 0x23CFD0u: goto label_23cfd0;
            case 0x23CFE0u: goto label_23cfe0;
            case 0x23CFF0u: goto label_23cff0;
            case 0x23D01Cu: goto label_23d01c;
            case 0x23D034u: goto label_23d034;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C69Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C6A4u;
label_23c6a4:
    // 0x23c6a4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C6A4u;
    SET_GPR_U32(ctx, 31, 0x23C6ACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C6A4u, 0x23C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6ACu;
label_23c6ac:
    // 0x23c6ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23c6b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23c6b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c6b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C6B4u;
    {
        const bool branch_taken_0x23c6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6b4) {
            ctx->pc = 0x23C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C6B4u;
            // 0x23c6b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C6BCu;
            goto label_23c6bc;
        }
    }
    ctx->pc = 0x23C6BCu;
label_23c6bc:
    // 0x23c6bc: 0x2010  mfhi        $a0
    ctx->pc = 0x23c6bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23c6c0: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x23c6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23c6c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C6C4u;
    {
        const bool branch_taken_0x23c6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6C4u;
        // 0x23c6c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6c4) {
            ctx->pc = 0x23C6E4u;
            goto label_23c6e4;
        }
    }
    ctx->pc = 0x23C6CCu;
    // 0x23c6cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c6d0: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x23c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x23c6d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c6d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c6dc: 0x800008  jr          $a0
    ctx->pc = 0x23C6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C6E4u: goto label_23c6e4;
            case 0x23C6F8u: goto label_23c6f8;
            case 0x23C70Cu: goto label_23c70c;
            case 0x23C720u: goto label_23c720;
            case 0x23C734u: goto label_23c734;
            case 0x23C748u: goto label_23c748;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C6DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C6E4u;
label_23c6e4:
    // 0x23c6e4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c6e8: 0x8c4403c4  lw          $a0, 0x3C4($v0)
    ctx->pc = 0x23c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x23c6ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23C6F0u;
    {
        const bool branch_taken_0x23c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6F0u;
        // 0x23c6f4: 0x8c4303c8  lw          $v1, 0x3C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c6f0) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C6F8u;
label_23c6f8:
    // 0x23c6f8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c6fc: 0x8c4403cc  lw          $a0, 0x3CC($v0)
    ctx->pc = 0x23c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x23c700: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c704: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23C704u;
    {
        const bool branch_taken_0x23c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C704u;
        // 0x23c708: 0x8c4303d0  lw          $v1, 0x3D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c704) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C70Cu;
label_23c70c:
    // 0x23c70c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c710: 0x8c4403d4  lw          $a0, 0x3D4($v0)
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x23c714: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c718: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23C718u;
    {
        const bool branch_taken_0x23c718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C718u;
        // 0x23c71c: 0x8c4303d8  lw          $v1, 0x3D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c718) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C720u;
label_23c720:
    // 0x23c720: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c724: 0x8c4403dc  lw          $a0, 0x3DC($v0)
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
    // 0x23c728: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c72c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23C72Cu;
    {
        const bool branch_taken_0x23c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C72Cu;
        // 0x23c730: 0x8c4303e0  lw          $v1, 0x3E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c72c) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C734u;
label_23c734:
    // 0x23c734: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c738: 0x8c4403e4  lw          $a0, 0x3E4($v0)
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 996)));
    // 0x23c73c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23C740u;
    {
        const bool branch_taken_0x23c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C740u;
        // 0x23c744: 0x8c4303e8  lw          $v1, 0x3E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c740) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C748u;
label_23c748:
    // 0x23c748: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c74c: 0x8c4403ec  lw          $a0, 0x3EC($v0)
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
    // 0x23c750: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c754: 0x8c4303f0  lw          $v1, 0x3F0($v0)
    ctx->pc = 0x23c754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
label_23c758:
    // 0x23c758: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23c758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c75c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23c75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c760: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c764: 0x50400264  beql        $v0, $zero, . + 4 + (0x264 << 2)
    ctx->pc = 0x23C764u;
    {
        const bool branch_taken_0x23c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c764) {
            ctx->pc = 0x23C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C764u;
            // 0x23c768: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23C76Cu;
    // 0x23c76c: 0x8ce203e4  lw          $v0, 0x3E4($a3)
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 996)));
    // 0x23c770: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x23C770u;
    {
        const bool branch_taken_0x23c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C770u;
        // 0x23c774: 0x8ce303e8  lw          $v1, 0x3E8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c770) {
            ctx->pc = 0x23CEC8u;
            goto label_23cec8;
        }
    }
    ctx->pc = 0x23C778u;
label_23c778:
    // 0x23c778: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C778u;
    SET_GPR_U32(ctx, 31, 0x23C780u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C778u, 0x23C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C780u;
label_23c780:
    // 0x23c780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c784: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23C788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C784u;
            // 0x23c788: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C82Cu;
            goto label_23c82c;
        }
    }
    ctx->pc = 0x23C78Cu;
    // 0x23c78c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C78Cu;
    SET_GPR_U32(ctx, 31, 0x23C794u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C78Cu, 0x23C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C794u;
label_23c794:
    // 0x23c794: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23c794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23c798: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23c798u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c79c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C79Cu;
    {
        const bool branch_taken_0x23c79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c79c) {
            ctx->pc = 0x23C7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C79Cu;
            // 0x23c7a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C7A4u;
            goto label_23c7a4;
        }
    }
    ctx->pc = 0x23C7A4u;
label_23c7a4:
    // 0x23c7a4: 0x2010  mfhi        $a0
    ctx->pc = 0x23c7a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23c7a8: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x23c7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23c7ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C7ACu;
    {
        const bool branch_taken_0x23c7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7ACu;
        // 0x23c7b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7ac) {
            ctx->pc = 0x23C7CCu;
            goto label_23c7cc;
        }
    }
    ctx->pc = 0x23C7B4u;
    // 0x23c7b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23c7b8: 0x2442b100  addiu       $v0, $v0, -0x4F00
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947072));
    // 0x23c7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c7c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c7c4: 0x800008  jr          $a0
    ctx->pc = 0x23C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7DCu: goto label_23c7dc;
            case 0x23C7ECu: goto label_23c7ec;
            case 0x23C7FCu: goto label_23c7fc;
            case 0x23C80Cu: goto label_23c80c;
            case 0x23C81Cu: goto label_23c81c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23C7CCu;
label_23c7cc:
    // 0x23c7cc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c7d0: 0x8c4303c4  lw          $v1, 0x3C4($v0)
    ctx->pc = 0x23c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x23c7d4: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x23C7D4u;
    {
        const bool branch_taken_0x23c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7D4u;
        // 0x23c7d8: 0x8c4403c8  lw          $a0, 0x3C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7d4) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C7DCu;
label_23c7dc:
    // 0x23c7dc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c7e0: 0x8c4303cc  lw          $v1, 0x3CC($v0)
    ctx->pc = 0x23c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x23c7e4: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x23C7E4u;
    {
        const bool branch_taken_0x23c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7E4u;
        // 0x23c7e8: 0x8c4403d0  lw          $a0, 0x3D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7e4) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C7ECu;
label_23c7ec:
    // 0x23c7ec: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c7f0: 0x8c4303d4  lw          $v1, 0x3D4($v0)
    ctx->pc = 0x23c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x23c7f4: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x23C7F4u;
    {
        const bool branch_taken_0x23c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7F4u;
        // 0x23c7f8: 0x8c4403d8  lw          $a0, 0x3D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c7f4) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C7FCu;
label_23c7fc:
    // 0x23c7fc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c800: 0x8c4303dc  lw          $v1, 0x3DC($v0)
    ctx->pc = 0x23c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
    // 0x23c804: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x23C804u;
    {
        const bool branch_taken_0x23c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C804u;
        // 0x23c808: 0x8c4403e0  lw          $a0, 0x3E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c804) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C80Cu;
label_23c80c:
    // 0x23c80c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c810: 0x8c4303e4  lw          $v1, 0x3E4($v0)
    ctx->pc = 0x23c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 996)));
    // 0x23c814: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x23C814u;
    {
        const bool branch_taken_0x23c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C814u;
        // 0x23c818: 0x8c4403e8  lw          $a0, 0x3E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c814) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C81Cu;
label_23c81c:
    // 0x23c81c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c820: 0x8c4303ec  lw          $v1, 0x3EC($v0)
    ctx->pc = 0x23c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1004)));
    // 0x23c824: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x23C824u;
    {
        const bool branch_taken_0x23c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C824u;
        // 0x23c828: 0x8c4403f0  lw          $a0, 0x3F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c824) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C82Cu;
label_23c82c:
    // 0x23c82c: 0x8c4302b4  lw          $v1, 0x2B4($v0)
    ctx->pc = 0x23c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x23c830: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x23C830u;
    {
        const bool branch_taken_0x23c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C830u;
        // 0x23c834: 0x8c4402b8  lw          $a0, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c830) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C838u;
label_23c838:
    // 0x23c838: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C838u;
    SET_GPR_U32(ctx, 31, 0x23C840u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C838u, 0x23C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C840u;
label_23c840:
    // 0x23c840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C844u;
    {
        const bool branch_taken_0x23c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C844u;
        // 0x23c848: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c844) {
            ctx->pc = 0x23C858u;
            goto label_23c858;
        }
    }
    ctx->pc = 0x23C84Cu;
    // 0x23c84c: 0x8c432fa4  lw          $v1, 0x2FA4($v0)
    ctx->pc = 0x23c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12196)));
    // 0x23c850: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x23C850u;
    {
        const bool branch_taken_0x23c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C850u;
        // 0x23c854: 0x8c442fa8  lw          $a0, 0x2FA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c850) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C858u;
label_23c858:
    // 0x23c858: 0x8c432fac  lw          $v1, 0x2FAC($v0)
    ctx->pc = 0x23c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12204)));
    // 0x23c85c: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x23C85Cu;
    {
        const bool branch_taken_0x23c85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C85Cu;
        // 0x23c860: 0x8c442fb0  lw          $a0, 0x2FB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c85c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C864u;
label_23c864:
    // 0x23c864: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c868: 0x8c4323e8  lw          $v1, 0x23E8($v0)
    ctx->pc = 0x23c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9192)));
    // 0x23c86c: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x23C86Cu;
    {
        const bool branch_taken_0x23c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C86Cu;
        // 0x23c870: 0x8c4423ec  lw          $a0, 0x23EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c86c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C874u;
label_23c874:
    // 0x23c874: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c878: 0x8c4336b8  lw          $v1, 0x36B8($v0)
    ctx->pc = 0x23c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14008)));
    // 0x23c87c: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x23C87Cu;
    {
        const bool branch_taken_0x23c87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C87Cu;
        // 0x23c880: 0x8c4436bc  lw          $a0, 0x36BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c87c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C884u;
label_23c884:
    // 0x23c884: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c888: 0x8c4336b8  lw          $v1, 0x36B8($v0)
    ctx->pc = 0x23c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14008)));
    // 0x23c88c: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x23C88Cu;
    {
        const bool branch_taken_0x23c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C88Cu;
        // 0x23c890: 0x8c4436c0  lw          $a0, 0x36C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c88c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C894u;
label_23c894:
    // 0x23c894: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C894u;
    SET_GPR_U32(ctx, 31, 0x23C89Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C894u, 0x23C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C89Cu;
label_23c89c:
    // 0x23c89c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23c8a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c8a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23c8a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23c8a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C8A8u;
    {
        const bool branch_taken_0x23c8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8a8) {
            ctx->pc = 0x23C8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8A8u;
            // 0x23c8ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8B0u;
            goto label_23c8b0;
        }
    }
    ctx->pc = 0x23C8B0u;
label_23c8b0:
    // 0x23c8b0: 0x2810  mfhi        $a1
    ctx->pc = 0x23c8b0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23c8b4: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C8B4u;
    {
        const bool branch_taken_0x23c8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23c8b4) {
            ctx->pc = 0x23C8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8B4u;
            // 0x23c8b8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8DCu;
            goto label_23c8dc;
        }
    }
    ctx->pc = 0x23C8BCu;
    // 0x23c8bc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C8BCu;
    {
        const bool branch_taken_0x23c8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8BCu;
        // 0x23c8c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8bc) {
            ctx->pc = 0x23C8CCu;
            goto label_23c8cc;
        }
    }
    ctx->pc = 0x23C8C4u;
    // 0x23c8c4: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C8C4u;
    {
        const bool branch_taken_0x23c8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c8c4) {
            ctx->pc = 0x23C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C8C4u;
            // 0x23c8c8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C8E8u;
            goto label_23c8e8;
        }
    }
    ctx->pc = 0x23C8CCu;
label_23c8cc:
    // 0x23c8cc: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c8d0: 0x8c432afc  lw          $v1, 0x2AFC($v0)
    ctx->pc = 0x23c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11004)));
    // 0x23c8d4: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x23C8D4u;
    {
        const bool branch_taken_0x23c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8D4u;
        // 0x23c8d8: 0x8c442b00  lw          $a0, 0x2B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8d4) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C8DCu;
label_23c8dc:
    // 0x23c8dc: 0x8c432b04  lw          $v1, 0x2B04($v0)
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
    // 0x23c8e0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x23C8E0u;
    {
        const bool branch_taken_0x23c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E0u;
        // 0x23c8e4: 0x8c442b08  lw          $a0, 0x2B08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8e0) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C8E8u;
label_23c8e8:
    // 0x23c8e8: 0x8c432be4  lw          $v1, 0x2BE4($v0)
    ctx->pc = 0x23c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11236)));
    // 0x23c8ec: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x23C8ECu;
    {
        const bool branch_taken_0x23c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ECu;
        // 0x23c8f0: 0x8c442be8  lw          $a0, 0x2BE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8ec) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C8F4u;
label_23c8f4:
    // 0x23c8f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C8F4u;
    SET_GPR_U32(ctx, 31, 0x23C8FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C8F4u, 0x23C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8FCu;
label_23c8fc:
    // 0x23c8fc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23c8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c900: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C900u;
        // 0x23c904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C908u;
    // 0x23c908: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C908u;
    {
        const bool branch_taken_0x23c908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c908) {
            ctx->pc = 0x23C90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C908u;
            // 0x23c90c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C910u;
label_23c910:
    // 0x23c910: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c914: 0x8c432c40  lw          $v1, 0x2C40($v0)
    ctx->pc = 0x23c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11328)));
    // 0x23c918: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x23C918u;
    {
        const bool branch_taken_0x23c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C918u;
        // 0x23c91c: 0x8c442c44  lw          $a0, 0x2C44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c918) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C920u;
label_23c920:
    // 0x23c920: 0x8c432c48  lw          $v1, 0x2C48($v0)
    ctx->pc = 0x23c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11336)));
    // 0x23c924: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x23C924u;
    {
        const bool branch_taken_0x23c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x8c442c4c  lw          $a0, 0x2C4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c924) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x8e670304  lw          $a3, 0x304($s3)
    ctx->pc = 0x23c92cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c930: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c934: 0x8ce31a98  lw          $v1, 0x1A98($a3)
    ctx->pc = 0x23c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6808)));
    // 0x23c938: 0x8ce41a9c  lw          $a0, 0x1A9C($a3)
    ctx->pc = 0x23c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6812)));
    // 0x23c93c: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23c940: 0x104001ec  beqz        $v0, . + 4 + (0x1EC << 2)
    ctx->pc = 0x23C940u;
    {
        const bool branch_taken_0x23c940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C940u;
        // 0x23c944: 0x878821  addu        $s1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c940) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23C948u;
    // 0x23c948: 0x8ce213e8  lw          $v0, 0x13E8($a3)
    ctx->pc = 0x23c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5096)));
    // 0x23c94c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x23c950: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x23c950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x23c954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c958: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x23c958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23c95c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x23C95Cu;
    SET_GPR_U32(ctx, 31, 0x23C964u);
    ctx->pc = 0x23C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C95Cu;
    // 0x23c960: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x23C95Cu, 0x23C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C964u;
label_23c964:
    // 0x23c964: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x23c968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c96c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23c970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c974: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x23c974u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23c978: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23c978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c980: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c984: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23c984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c988: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x23C988u;
    SET_GPR_U32(ctx, 31, 0x23C990u);
    ctx->pc = 0x23C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C988u;
    // 0x23c98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x23C988u, 0x23C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C990u;
label_23c990:
    // 0x23c990: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x23C990u;
    {
        const bool branch_taken_0x23c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C990u;
        // 0x23c994: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c990) {
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23C998u;
label_23c998:
    // 0x23c998: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C998u;
    SET_GPR_U32(ctx, 31, 0x23C9A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C998u, 0x23C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9A0u;
label_23c9a0:
    // 0x23c9a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c9a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C9A4u;
    {
        const bool branch_taken_0x23c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A4u;
        // 0x23c9a8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9a4) {
            ctx->pc = 0x23C9BCu;
            goto label_23c9bc;
        }
    }
    ctx->pc = 0x23C9ACu;
    // 0x23c9ac: 0x8c4413e8  lw          $a0, 0x13E8($v0)
    ctx->pc = 0x23c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x23c9b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23C9B4u;
    {
        const bool branch_taken_0x23c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9B4u;
        // 0x23c9b8: 0x8c4313ec  lw          $v1, 0x13EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9b4) {
            ctx->pc = 0x23C9C8u;
            goto label_23c9c8;
        }
    }
    ctx->pc = 0x23C9BCu;
label_23c9bc:
    // 0x23c9bc: 0x8c4413f0  lw          $a0, 0x13F0($v0)
    ctx->pc = 0x23c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5104)));
    // 0x23c9c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9c4: 0x8c4313f4  lw          $v1, 0x13F4($v0)
    ctx->pc = 0x23c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5108)));
label_23c9c8:
    // 0x23c9c8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c9cc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23c9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c9d0: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23c9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23c9d4: 0x504001c8  beql        $v0, $zero, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x23C9D4u;
    {
        const bool branch_taken_0x23c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c9d4) {
            ctx->pc = 0x23C9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C9D4u;
            // 0x23c9d8: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23C9DCu;
    // 0x23c9dc: 0x8ce213f0  lw          $v0, 0x13F0($a3)
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5104)));
    // 0x23c9e0: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x23C9E0u;
    {
        const bool branch_taken_0x23c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E0u;
        // 0x23c9e4: 0x8ce313f4  lw          $v1, 0x13F4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9e0) {
            ctx->pc = 0x23CEC8u;
            goto label_23cec8;
        }
    }
    ctx->pc = 0x23C9E8u;
label_23c9e8:
    // 0x23c9e8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23c9ec: 0x8c4324f4  lw          $v1, 0x24F4($v0)
    ctx->pc = 0x23c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9460)));
    // 0x23c9f0: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x23C9F0u;
    {
        const bool branch_taken_0x23c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9F0u;
        // 0x23c9f4: 0x8c4424f8  lw          $a0, 0x24F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9f0) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23C9F8u;
label_23c9f8:
    // 0x23c9f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23C9F8u;
    SET_GPR_U32(ctx, 31, 0x23CA00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23C9F8u, 0x23CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA00u;
label_23ca00:
    // 0x23ca00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23ca04: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23ca04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23ca08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CA08u;
    {
        const bool branch_taken_0x23ca08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca08) {
            ctx->pc = 0x23CA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CA08u;
            // 0x23ca0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CA10u;
            goto label_23ca10;
        }
    }
    ctx->pc = 0x23CA10u;
label_23ca10:
    // 0x23ca10: 0x2010  mfhi        $a0
    ctx->pc = 0x23ca10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23ca14: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x23ca14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23ca18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CA18u;
    {
        const bool branch_taken_0x23ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA18u;
        // 0x23ca1c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca18) {
            ctx->pc = 0x23CA38u;
            goto label_23ca38;
        }
    }
    ctx->pc = 0x23CA20u;
    // 0x23ca20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23ca24: 0x2442b120  addiu       $v0, $v0, -0x4EE0
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
    // 0x23ca28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ca2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ca30: 0x800008  jr          $a0
    ctx->pc = 0x23CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CA38u: goto label_23ca38;
            case 0x23CA4Cu: goto label_23ca4c;
            case 0x23CA60u: goto label_23ca60;
            case 0x23CA74u: goto label_23ca74;
            case 0x23CA88u: goto label_23ca88;
            case 0x23CA9Cu: goto label_23ca9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CA30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23CA38u;
label_23ca38:
    // 0x23ca38: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ca3c: 0x8c440b84  lw          $a0, 0xB84($v0)
    ctx->pc = 0x23ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
    // 0x23ca40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23CA44u;
    {
        const bool branch_taken_0x23ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA44u;
        // 0x23ca48: 0x8c430b88  lw          $v1, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca44) {
            ctx->pc = 0x23CAACu;
            goto label_23caac;
        }
    }
    ctx->pc = 0x23CA4Cu;
label_23ca4c:
    // 0x23ca4c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ca50: 0x8c440b8c  lw          $a0, 0xB8C($v0)
    ctx->pc = 0x23ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2956)));
    // 0x23ca54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ca54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23CA58u;
    {
        const bool branch_taken_0x23ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA58u;
        // 0x23ca5c: 0x8c430b90  lw          $v1, 0xB90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca58) {
            ctx->pc = 0x23CAACu;
            goto label_23caac;
        }
    }
    ctx->pc = 0x23CA60u;
label_23ca60:
    // 0x23ca60: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ca64: 0x8c440b94  lw          $a0, 0xB94($v0)
    ctx->pc = 0x23ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2964)));
    // 0x23ca68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ca68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23CA6Cu;
    {
        const bool branch_taken_0x23ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA6Cu;
        // 0x23ca70: 0x8c430b98  lw          $v1, 0xB98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca6c) {
            ctx->pc = 0x23CAACu;
            goto label_23caac;
        }
    }
    ctx->pc = 0x23CA74u;
label_23ca74:
    // 0x23ca74: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ca78: 0x8c440b9c  lw          $a0, 0xB9C($v0)
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2972)));
    // 0x23ca7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ca7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23CA80u;
    {
        const bool branch_taken_0x23ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA80u;
        // 0x23ca84: 0x8c430ba0  lw          $v1, 0xBA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca80) {
            ctx->pc = 0x23CAACu;
            goto label_23caac;
        }
    }
    ctx->pc = 0x23CA88u;
label_23ca88:
    // 0x23ca88: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ca8c: 0x8c440ba4  lw          $a0, 0xBA4($v0)
    ctx->pc = 0x23ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2980)));
    // 0x23ca90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ca90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CA94u;
    {
        const bool branch_taken_0x23ca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA94u;
        // 0x23ca98: 0x8c430ba8  lw          $v1, 0xBA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca94) {
            ctx->pc = 0x23CAACu;
            goto label_23caac;
        }
    }
    ctx->pc = 0x23CA9Cu;
label_23ca9c:
    // 0x23ca9c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23caa0: 0x8c440bac  lw          $a0, 0xBAC($v0)
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2988)));
    // 0x23caa4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23caa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caa8: 0x8c430bb0  lw          $v1, 0xBB0($v0)
    ctx->pc = 0x23caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2992)));
label_23caac:
    // 0x23caac: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23caacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23cab0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23cab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cab4: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23cab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23cab8: 0x5040018f  beql        $v0, $zero, . + 4 + (0x18F << 2)
    ctx->pc = 0x23CAB8u;
    {
        const bool branch_taken_0x23cab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cab8) {
            ctx->pc = 0x23CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAB8u;
            // 0x23cabc: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CAC0u;
    // 0x23cac0: 0x8ce20b8c  lw          $v0, 0xB8C($a3)
    ctx->pc = 0x23cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2956)));
    // 0x23cac4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x23CAC4u;
    {
        const bool branch_taken_0x23cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAC4u;
        // 0x23cac8: 0x8ce30b90  lw          $v1, 0xB90($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cac4) {
            ctx->pc = 0x23CEC8u;
            goto label_23cec8;
        }
    }
    ctx->pc = 0x23CACCu;
label_23cacc:
    // 0x23cacc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CACCu;
    SET_GPR_U32(ctx, 31, 0x23CAD4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CACCu, 0x23CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAD4u;
label_23cad4:
    // 0x23cad4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23cad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cad8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CAD8u;
    {
        const bool branch_taken_0x23cad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAD8u;
        // 0x23cadc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cad8) {
            ctx->pc = 0x23CAE8u;
            goto label_23cae8;
        }
    }
    ctx->pc = 0x23CAE0u;
    // 0x23cae0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CAE0u;
    {
        const bool branch_taken_0x23cae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cae0) {
            ctx->pc = 0x23CAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAE0u;
            // 0x23cae4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CAF8u;
            goto label_23caf8;
        }
    }
    ctx->pc = 0x23CAE8u;
label_23cae8:
    // 0x23cae8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23caec: 0x8c433bbc  lw          $v1, 0x3BBC($v0)
    ctx->pc = 0x23caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15292)));
    // 0x23caf0: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x23CAF0u;
    {
        const bool branch_taken_0x23caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAF0u;
        // 0x23caf4: 0x8c443bc0  lw          $a0, 0x3BC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23caf0) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CAF8u;
label_23caf8:
    // 0x23caf8: 0x8c433bc4  lw          $v1, 0x3BC4($v0)
    ctx->pc = 0x23caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15300)));
    // 0x23cafc: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x23CAFCu;
    {
        const bool branch_taken_0x23cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAFCu;
        // 0x23cb00: 0x8c443bc8  lw          $a0, 0x3BC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cafc) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CB04u;
label_23cb04:
    // 0x23cb04: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CB04u;
    SET_GPR_U32(ctx, 31, 0x23CB0Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CB04u, 0x23CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB0Cu;
label_23cb0c:
    // 0x23cb0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x23cb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23cb10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cb14: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CB14u;
    {
        const bool branch_taken_0x23cb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cb14) {
            ctx->pc = 0x23CB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB14u;
            // 0x23cb18: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB48u;
            goto label_23cb48;
        }
    }
    ctx->pc = 0x23CB1Cu;
    // 0x23cb1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CB1Cu;
    {
        const bool branch_taken_0x23cb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB1Cu;
        // 0x23cb20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb1c) {
            ctx->pc = 0x23CB34u;
            goto label_23cb34;
        }
    }
    ctx->pc = 0x23CB24u;
    // 0x23cb24: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CB24u;
    {
        const bool branch_taken_0x23cb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB24u;
        // 0x23cb28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb24) {
            ctx->pc = 0x23CB58u;
            goto label_23cb58;
        }
    }
    ctx->pc = 0x23CB2Cu;
    // 0x23cb2c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23CB2Cu;
    {
        const bool branch_taken_0x23cb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cb2c) {
            ctx->pc = 0x23CB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB2Cu;
            // 0x23cb30: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB6Cu;
            goto label_23cb6c;
        }
    }
    ctx->pc = 0x23CB34u;
label_23cb34:
    // 0x23cb34: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cb38: 0x8c442084  lw          $a0, 0x2084($v0)
    ctx->pc = 0x23cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8324)));
    // 0x23cb3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23CB40u;
    {
        const bool branch_taken_0x23cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB40u;
        // 0x23cb44: 0x8c432088  lw          $v1, 0x2088($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb40) {
            ctx->pc = 0x23CB78u;
            goto label_23cb78;
        }
    }
    ctx->pc = 0x23CB48u;
label_23cb48:
    // 0x23cb48: 0x8c44208c  lw          $a0, 0x208C($v0)
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8332)));
    // 0x23cb4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23CB50u;
    {
        const bool branch_taken_0x23cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB50u;
        // 0x23cb54: 0x8c432090  lw          $v1, 0x2090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb50) {
            ctx->pc = 0x23CB78u;
            goto label_23cb78;
        }
    }
    ctx->pc = 0x23CB58u;
label_23cb58:
    // 0x23cb58: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cb5c: 0x8c442094  lw          $a0, 0x2094($v0)
    ctx->pc = 0x23cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8340)));
    // 0x23cb60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23CB64u;
    {
        const bool branch_taken_0x23cb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB64u;
        // 0x23cb68: 0x8c432098  lw          $v1, 0x2098($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb64) {
            ctx->pc = 0x23CB78u;
            goto label_23cb78;
        }
    }
    ctx->pc = 0x23CB6Cu;
label_23cb6c:
    // 0x23cb6c: 0x8c44209c  lw          $a0, 0x209C($v0)
    ctx->pc = 0x23cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8348)));
    // 0x23cb70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb74: 0x8c4320a0  lw          $v1, 0x20A0($v0)
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8352)));
label_23cb78:
    // 0x23cb78: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23cb7c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23cb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cb80: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23cb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23cb84: 0x5040015c  beql        $v0, $zero, . + 4 + (0x15C << 2)
    ctx->pc = 0x23CB84u;
    {
        const bool branch_taken_0x23cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb84) {
            ctx->pc = 0x23CB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB84u;
            // 0x23cb88: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CB8Cu;
    // 0x23cb8c: 0x8ce22084  lw          $v0, 0x2084($a3)
    ctx->pc = 0x23cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8324)));
    // 0x23cb90: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x23CB90u;
    {
        const bool branch_taken_0x23cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB90u;
        // 0x23cb94: 0x8ce32088  lw          $v1, 0x2088($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb90) {
            ctx->pc = 0x23CEC8u;
            goto label_23cec8;
        }
    }
    ctx->pc = 0x23CB98u;
label_23cb98:
    // 0x23cb98: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CB98u;
    SET_GPR_U32(ctx, 31, 0x23CBA0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CB98u, 0x23CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CBA0u;
label_23cba0:
    // 0x23cba0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x23cba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23cba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cba8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23CBA8u;
    {
        const bool branch_taken_0x23cba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cba8) {
            ctx->pc = 0x23CBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBA8u;
            // 0x23cbac: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CBD8u;
            goto label_23cbd8;
        }
    }
    ctx->pc = 0x23CBB0u;
    // 0x23cbb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CBB0u;
    {
        const bool branch_taken_0x23cbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBB0u;
        // 0x23cbb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbb0) {
            ctx->pc = 0x23CBC8u;
            goto label_23cbc8;
        }
    }
    ctx->pc = 0x23CBB8u;
    // 0x23cbb8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23CBB8u;
    {
        const bool branch_taken_0x23cbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBB8u;
        // 0x23cbbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbb8) {
            ctx->pc = 0x23CBE4u;
            goto label_23cbe4;
        }
    }
    ctx->pc = 0x23CBC0u;
    // 0x23cbc0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CBC0u;
    {
        const bool branch_taken_0x23cbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cbc0) {
            ctx->pc = 0x23CBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBC0u;
            // 0x23cbc4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CBF4u;
            goto label_23cbf4;
        }
    }
    ctx->pc = 0x23CBC8u;
label_23cbc8:
    // 0x23cbc8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cbcc: 0x8c432084  lw          $v1, 0x2084($v0)
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8324)));
    // 0x23cbd0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x23CBD0u;
    {
        const bool branch_taken_0x23cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBD0u;
        // 0x23cbd4: 0x8c442088  lw          $a0, 0x2088($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbd0) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CBD8u;
label_23cbd8:
    // 0x23cbd8: 0x8c43208c  lw          $v1, 0x208C($v0)
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8332)));
    // 0x23cbdc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x23CBDCu;
    {
        const bool branch_taken_0x23cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBDCu;
        // 0x23cbe0: 0x8c442090  lw          $a0, 0x2090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbdc) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CBE4u;
label_23cbe4:
    // 0x23cbe4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cbe8: 0x8c432094  lw          $v1, 0x2094($v0)
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8340)));
    // 0x23cbec: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x23CBECu;
    {
        const bool branch_taken_0x23cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBECu;
        // 0x23cbf0: 0x8c442098  lw          $a0, 0x2098($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbec) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CBF4u;
label_23cbf4:
    // 0x23cbf4: 0x8c43209c  lw          $v1, 0x209C($v0)
    ctx->pc = 0x23cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8348)));
    // 0x23cbf8: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x23CBF8u;
    {
        const bool branch_taken_0x23cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBF8u;
        // 0x23cbfc: 0x8c4420a0  lw          $a0, 0x20A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbf8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CC00u;
label_23cc00:
    // 0x23cc00: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CC00u;
    SET_GPR_U32(ctx, 31, 0x23CC08u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CC00u, 0x23CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC08u;
label_23cc08:
    // 0x23cc08: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23cc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cc0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC0Cu;
    {
        const bool branch_taken_0x23cc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC0Cu;
        // 0x23cc10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc0c) {
            ctx->pc = 0x23CC1Cu;
            goto label_23cc1c;
        }
    }
    ctx->pc = 0x23CC14u;
    // 0x23cc14: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC14u;
    {
        const bool branch_taken_0x23cc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cc14) {
            ctx->pc = 0x23CC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC14u;
            // 0x23cc18: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC2Cu;
            goto label_23cc2c;
        }
    }
    ctx->pc = 0x23CC1Cu;
label_23cc1c:
    // 0x23cc1c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cc20: 0x8c431e4c  lw          $v1, 0x1E4C($v0)
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7756)));
    // 0x23cc24: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x23CC24u;
    {
        const bool branch_taken_0x23cc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC24u;
        // 0x23cc28: 0x8c441e50  lw          $a0, 0x1E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc24) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CC2Cu;
label_23cc2c:
    // 0x23cc2c: 0x8c431e54  lw          $v1, 0x1E54($v0)
    ctx->pc = 0x23cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7764)));
    // 0x23cc30: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x23CC30u;
    {
        const bool branch_taken_0x23cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC30u;
        // 0x23cc34: 0x8c441e58  lw          $a0, 0x1E58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc30) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CC38u;
label_23cc38:
    // 0x23cc38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CC38u;
    SET_GPR_U32(ctx, 31, 0x23CC40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CC38u, 0x23CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC40u;
label_23cc40:
    // 0x23cc40: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cc44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC44u;
    {
        const bool branch_taken_0x23cc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC44u;
        // 0x23cc48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc44) {
            ctx->pc = 0x23CC54u;
            goto label_23cc54;
        }
    }
    ctx->pc = 0x23CC4Cu;
    // 0x23cc4c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC4Cu;
    {
        const bool branch_taken_0x23cc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cc4c) {
            ctx->pc = 0x23CC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC4Cu;
            // 0x23cc50: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC64u;
            goto label_23cc64;
        }
    }
    ctx->pc = 0x23CC54u;
label_23cc54:
    // 0x23cc54: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cc58: 0x8c431f98  lw          $v1, 0x1F98($v0)
    ctx->pc = 0x23cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8088)));
    // 0x23cc5c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x23CC5Cu;
    {
        const bool branch_taken_0x23cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC5Cu;
        // 0x23cc60: 0x8c441f9c  lw          $a0, 0x1F9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc5c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CC64u;
label_23cc64:
    // 0x23cc64: 0x8c431fa0  lw          $v1, 0x1FA0($v0)
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8096)));
    // 0x23cc68: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x23CC68u;
    {
        const bool branch_taken_0x23cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC68u;
        // 0x23cc6c: 0x8c441fa4  lw          $a0, 0x1FA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc68) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CC70u;
label_23cc70:
    // 0x23cc70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CC70u;
    SET_GPR_U32(ctx, 31, 0x23CC78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CC70u, 0x23CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CC78u;
label_23cc78:
    // 0x23cc78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cc7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cc80: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23cc80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23cc84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CC84u;
    {
        const bool branch_taken_0x23cc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc84) {
            ctx->pc = 0x23CC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC84u;
            // 0x23cc88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC8Cu;
            goto label_23cc8c;
        }
    }
    ctx->pc = 0x23CC8Cu;
label_23cc8c:
    // 0x23cc8c: 0x2810  mfhi        $a1
    ctx->pc = 0x23cc8cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23cc90: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23CC90u;
    {
        const bool branch_taken_0x23cc90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23cc90) {
            ctx->pc = 0x23CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC90u;
            // 0x23cc94: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCB8u;
            goto label_23ccb8;
        }
    }
    ctx->pc = 0x23CC98u;
    // 0x23cc98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC98u;
    {
        const bool branch_taken_0x23cc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC98u;
        // 0x23cc9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc98) {
            ctx->pc = 0x23CCA8u;
            goto label_23cca8;
        }
    }
    ctx->pc = 0x23CCA0u;
    // 0x23cca0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23CCA0u;
    {
        const bool branch_taken_0x23cca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cca0) {
            ctx->pc = 0x23CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCA0u;
            // 0x23cca4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23CCA8u;
label_23cca8:
    // 0x23cca8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ccac: 0x8c432fbc  lw          $v1, 0x2FBC($v0)
    ctx->pc = 0x23ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12220)));
    // 0x23ccb0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x23CCB0u;
    {
        const bool branch_taken_0x23ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB0u;
        // 0x23ccb4: 0x8c442fc0  lw          $a0, 0x2FC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccb0) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CCB8u;
label_23ccb8:
    // 0x23ccb8: 0x8c432fc4  lw          $v1, 0x2FC4($v0)
    ctx->pc = 0x23ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12228)));
    // 0x23ccbc: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x23CCBCu;
    {
        const bool branch_taken_0x23ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCBCu;
        // 0x23ccc0: 0x8c442fc8  lw          $a0, 0x2FC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccbc) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CCC4u;
label_23ccc4:
    // 0x23ccc4: 0x8c432fcc  lw          $v1, 0x2FCC($v0)
    ctx->pc = 0x23ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12236)));
    // 0x23ccc8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x23CCC8u;
    {
        const bool branch_taken_0x23ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC8u;
        // 0x23cccc: 0x8c442fd0  lw          $a0, 0x2FD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CCD0u;
label_23ccd0:
    // 0x23ccd0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ccd4: 0x8c4317f8  lw          $v1, 0x17F8($v0)
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6136)));
    // 0x23ccd8: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x23CCD8u;
    {
        const bool branch_taken_0x23ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCD8u;
        // 0x23ccdc: 0x8c4417fc  lw          $a0, 0x17FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccd8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CCE0u;
label_23cce0:
    // 0x23cce0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CCE0u;
    SET_GPR_U32(ctx, 31, 0x23CCE8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CCE0u, 0x23CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCE8u;
label_23cce8:
    // 0x23cce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ccec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CCECu;
    {
        const bool branch_taken_0x23ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCECu;
        // 0x23ccf0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccec) {
            ctx->pc = 0x23CD00u;
            goto label_23cd00;
        }
    }
    ctx->pc = 0x23CCF4u;
    // 0x23ccf4: 0x8c4318dc  lw          $v1, 0x18DC($v0)
    ctx->pc = 0x23ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6364)));
    // 0x23ccf8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x23CCF8u;
    {
        const bool branch_taken_0x23ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF8u;
        // 0x23ccfc: 0x8c4418e0  lw          $a0, 0x18E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccf8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD00u;
label_23cd00:
    // 0x23cd00: 0x8c4318e4  lw          $v1, 0x18E4($v0)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6372)));
    // 0x23cd04: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x23CD04u;
    {
        const bool branch_taken_0x23cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD04u;
        // 0x23cd08: 0x8c4418e8  lw          $a0, 0x18E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd04) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD0Cu;
label_23cd0c:
    // 0x23cd0c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CD0Cu;
    SET_GPR_U32(ctx, 31, 0x23CD14u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CD0Cu, 0x23CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD14u;
label_23cd14:
    // 0x23cd14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cd18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CD18u;
    {
        const bool branch_taken_0x23cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD18u;
        // 0x23cd1c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd18) {
            ctx->pc = 0x23CD2Cu;
            goto label_23cd2c;
        }
    }
    ctx->pc = 0x23CD20u;
    // 0x23cd20: 0x8c433b1c  lw          $v1, 0x3B1C($v0)
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15132)));
    // 0x23cd24: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x23CD24u;
    {
        const bool branch_taken_0x23cd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD24u;
        // 0x23cd28: 0x8c443b20  lw          $a0, 0x3B20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd24) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD2Cu;
label_23cd2c:
    // 0x23cd2c: 0x8c433b24  lw          $v1, 0x3B24($v0)
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15140)));
    // 0x23cd30: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x23CD30u;
    {
        const bool branch_taken_0x23cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD30u;
        // 0x23cd34: 0x8c443b28  lw          $a0, 0x3B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd30) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD38u;
label_23cd38:
    // 0x23cd38: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cd3c: 0x8c431890  lw          $v1, 0x1890($v0)
    ctx->pc = 0x23cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6288)));
    // 0x23cd40: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x23CD40u;
    {
        const bool branch_taken_0x23cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD40u;
        // 0x23cd44: 0x8c441894  lw          $a0, 0x1894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd40) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD48u;
label_23cd48:
    // 0x23cd48: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cd4c: 0x8c431ea0  lw          $v1, 0x1EA0($v0)
    ctx->pc = 0x23cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7840)));
    // 0x23cd50: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x23CD50u;
    {
        const bool branch_taken_0x23cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD50u;
        // 0x23cd54: 0x8c441ea4  lw          $a0, 0x1EA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd50) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD58u;
label_23cd58:
    // 0x23cd58: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CD58u;
    SET_GPR_U32(ctx, 31, 0x23CD60u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CD58u, 0x23CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD60u;
label_23cd60:
    // 0x23cd60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cd64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CD64u;
    {
        const bool branch_taken_0x23cd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD64u;
        // 0x23cd68: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd64) {
            ctx->pc = 0x23CD78u;
            goto label_23cd78;
        }
    }
    ctx->pc = 0x23CD6Cu;
    // 0x23cd6c: 0x8c4334f4  lw          $v1, 0x34F4($v0)
    ctx->pc = 0x23cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13556)));
    // 0x23cd70: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x23CD70u;
    {
        const bool branch_taken_0x23cd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD70u;
        // 0x23cd74: 0x8c4434f8  lw          $a0, 0x34F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd70) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD78u;
label_23cd78:
    // 0x23cd78: 0x8c4334fc  lw          $v1, 0x34FC($v0)
    ctx->pc = 0x23cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13564)));
    // 0x23cd7c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x23CD7Cu;
    {
        const bool branch_taken_0x23cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD7Cu;
        // 0x23cd80: 0x8c443500  lw          $a0, 0x3500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd7c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CD84u;
label_23cd84:
    // 0x23cd84: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CD84u;
    SET_GPR_U32(ctx, 31, 0x23CD8Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CD84u, 0x23CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD8Cu;
label_23cd8c:
    // 0x23cd8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cd90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CD90u;
    {
        const bool branch_taken_0x23cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD90u;
        // 0x23cd94: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd90) {
            ctx->pc = 0x23CDA4u;
            goto label_23cda4;
        }
    }
    ctx->pc = 0x23CD98u;
    // 0x23cd98: 0x8c4335c0  lw          $v1, 0x35C0($v0)
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13760)));
    // 0x23cd9c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x23CD9Cu;
    {
        const bool branch_taken_0x23cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD9Cu;
        // 0x23cda0: 0x8c4435c4  lw          $a0, 0x35C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd9c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CDA4u;
label_23cda4:
    // 0x23cda4: 0x8c4334fc  lw          $v1, 0x34FC($v0)
    ctx->pc = 0x23cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13564)));
    // 0x23cda8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x23CDA8u;
    {
        const bool branch_taken_0x23cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDA8u;
        // 0x23cdac: 0x8c443500  lw          $a0, 0x3500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cda8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CDB0u;
label_23cdb0:
    // 0x23cdb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CDB0u;
    SET_GPR_U32(ctx, 31, 0x23CDB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CDB0u, 0x23CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDB8u;
label_23cdb8:
    // 0x23cdb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cdbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cdc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23cdc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23cdc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23CDC4u;
    {
        const bool branch_taken_0x23cdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cdc4) {
            ctx->pc = 0x23CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDC4u;
            // 0x23cdc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDCCu;
            goto label_23cdcc;
        }
    }
    ctx->pc = 0x23CDCCu;
label_23cdcc:
    // 0x23cdcc: 0x2810  mfhi        $a1
    ctx->pc = 0x23cdccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23cdd0: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23CDD0u;
    {
        const bool branch_taken_0x23cdd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23cdd0) {
            ctx->pc = 0x23CDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDD0u;
            // 0x23cdd4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDFCu;
            goto label_23cdfc;
        }
    }
    ctx->pc = 0x23CDD8u;
    // 0x23cdd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CDD8u;
    {
        const bool branch_taken_0x23cdd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDD8u;
        // 0x23cddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdd8) {
            ctx->pc = 0x23CDE8u;
            goto label_23cde8;
        }
    }
    ctx->pc = 0x23CDE0u;
    // 0x23cde0: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23CDE0u;
    {
        const bool branch_taken_0x23cde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cde0) {
            ctx->pc = 0x23CDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDE0u;
            // 0x23cde4: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE0Cu;
            goto label_23ce0c;
        }
    }
    ctx->pc = 0x23CDE8u;
label_23cde8:
    // 0x23cde8: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cdec: 0x8c441a30  lw          $a0, 0x1A30($v0)
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x23cdf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cdf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23CDF4u;
    {
        const bool branch_taken_0x23cdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDF4u;
        // 0x23cdf8: 0x8c431a34  lw          $v1, 0x1A34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdf4) {
            ctx->pc = 0x23CE18u;
            goto label_23ce18;
        }
    }
    ctx->pc = 0x23CDFCu;
label_23cdfc:
    // 0x23cdfc: 0x8c441a38  lw          $a0, 0x1A38($v0)
    ctx->pc = 0x23cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6712)));
    // 0x23ce00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23CE04u;
    {
        const bool branch_taken_0x23ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE04u;
        // 0x23ce08: 0x8c431a3c  lw          $v1, 0x1A3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce04) {
            ctx->pc = 0x23CE18u;
            goto label_23ce18;
        }
    }
    ctx->pc = 0x23CE0Cu;
label_23ce0c:
    // 0x23ce0c: 0x8c441a40  lw          $a0, 0x1A40($v0)
    ctx->pc = 0x23ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6720)));
    // 0x23ce10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce14: 0x8c431a44  lw          $v1, 0x1A44($v0)
    ctx->pc = 0x23ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
label_23ce18:
    // 0x23ce18: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23ce18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ce1c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ce20: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23ce20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23ce24: 0x504000b4  beql        $v0, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x23CE24u;
    {
        const bool branch_taken_0x23ce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce24) {
            ctx->pc = 0x23CE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE24u;
            // 0x23ce28: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CE2Cu;
    // 0x23ce2c: 0x8ce21a38  lw          $v0, 0x1A38($a3)
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6712)));
    // 0x23ce30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23CE30u;
    {
        const bool branch_taken_0x23ce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE30u;
        // 0x23ce34: 0x8ce31a3c  lw          $v1, 0x1A3C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce30) {
            ctx->pc = 0x23CEC8u;
            goto label_23cec8;
        }
    }
    ctx->pc = 0x23CE38u;
label_23ce38:
    // 0x23ce38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CE38u;
    SET_GPR_U32(ctx, 31, 0x23CE40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CE38u, 0x23CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE40u;
label_23ce40:
    // 0x23ce40: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23ce44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ce48: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CE48u;
    {
        const bool branch_taken_0x23ce48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ce48) {
            ctx->pc = 0x23CE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE48u;
            // 0x23ce4c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE7Cu;
            goto label_23ce7c;
        }
    }
    ctx->pc = 0x23CE50u;
    // 0x23ce50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CE50u;
    {
        const bool branch_taken_0x23ce50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE50u;
        // 0x23ce54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce50) {
            ctx->pc = 0x23CE68u;
            goto label_23ce68;
        }
    }
    ctx->pc = 0x23CE58u;
    // 0x23ce58: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CE58u;
    {
        const bool branch_taken_0x23ce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE58u;
        // 0x23ce5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce58) {
            ctx->pc = 0x23CE8Cu;
            goto label_23ce8c;
        }
    }
    ctx->pc = 0x23CE60u;
    // 0x23ce60: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23CE60u;
    {
        const bool branch_taken_0x23ce60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ce60) {
            ctx->pc = 0x23CE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE60u;
            // 0x23ce64: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CEA0u;
            goto label_23cea0;
        }
    }
    ctx->pc = 0x23CE68u;
label_23ce68:
    // 0x23ce68: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ce6c: 0x8c4431c4  lw          $a0, 0x31C4($v0)
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12740)));
    // 0x23ce70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23CE74u;
    {
        const bool branch_taken_0x23ce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE74u;
        // 0x23ce78: 0x8c4331c8  lw          $v1, 0x31C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce74) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CE7Cu;
label_23ce7c:
    // 0x23ce7c: 0x8c4431cc  lw          $a0, 0x31CC($v0)
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12748)));
    // 0x23ce80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23CE84u;
    {
        const bool branch_taken_0x23ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE84u;
        // 0x23ce88: 0x8c4331d0  lw          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce84) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CE8Cu;
label_23ce8c:
    // 0x23ce8c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ce90: 0x8c4431d4  lw          $a0, 0x31D4($v0)
    ctx->pc = 0x23ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12756)));
    // 0x23ce94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23ce94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23CE98u;
    {
        const bool branch_taken_0x23ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE98u;
        // 0x23ce9c: 0x8c4331d8  lw          $v1, 0x31D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce98) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CEA0u;
label_23cea0:
    // 0x23cea0: 0x8c4431dc  lw          $a0, 0x31DC($v0)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12764)));
    // 0x23cea4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23cea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cea8: 0x8c4331e0  lw          $v1, 0x31E0($v0)
    ctx->pc = 0x23cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12768)));
label_23ceac:
    // 0x23ceac: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ceb0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x23ceb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ceb4: 0x926202f7  lbu         $v0, 0x2F7($s3)
    ctx->pc = 0x23ceb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 759)));
    // 0x23ceb8: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x23CEB8u;
    {
        const bool branch_taken_0x23ceb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ceb8) {
            ctx->pc = 0x23CEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CEB8u;
            // 0x23cebc: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CEC0u;
    // 0x23cec0: 0x8ce231cc  lw          $v0, 0x31CC($a3)
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12748)));
    // 0x23cec4: 0x8ce331d0  lw          $v1, 0x31D0($a3)
    ctx->pc = 0x23cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12752)));
label_23cec8:
    // 0x23cec8: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x23cec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23cecc: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x23CECCu;
    {
        const bool branch_taken_0x23cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CECCu;
        // 0x23ced0: 0x678821  addu        $s1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cecc) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23CED4u;
label_23ced4:
    // 0x23ced4: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23ced8: 0x8e670740  lw          $a3, 0x740($s3)
    ctx->pc = 0x23ced8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1856)));
    // 0x23cedc: 0x8c4333b8  lw          $v1, 0x33B8($v0)
    ctx->pc = 0x23cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13240)));
    // 0x23cee0: 0x8c4433bc  lw          $a0, 0x33BC($v0)
    ctx->pc = 0x23cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13244)));
    // 0x23cee4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23cee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cee8: 0x10e00082  beqz        $a3, . + 4 + (0x82 << 2)
    ctx->pc = 0x23CEE8u;
    {
        const bool branch_taken_0x23cee8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee8) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23CEF0u;
    // 0x23cef0: 0xc09f6bc  jal         func_27DAF0
    ctx->pc = 0x23CEF0u;
    SET_GPR_U32(ctx, 31, 0x23CEF8u);
    ctx->pc = 0x23CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CEF0u;
    // 0x23cef4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DAF0u, 0x23CEF0u, 0x23CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEF8u;
label_23cef8:
    // 0x23cef8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x23CEF8u;
    {
        const bool branch_taken_0x23cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF8u;
        // 0x23cefc: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cef8) {
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CF00u;
label_23cf00:
    // 0x23cf00: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x23cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
    // 0x23cf04: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x23cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x23cf08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cf0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CF0Cu;
    {
        const bool branch_taken_0x23cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf0c) {
            ctx->pc = 0x23CF24u;
            goto label_23cf24;
        }
    }
    ctx->pc = 0x23CF14u;
    // 0x23cf14: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cf18: 0x8c433770  lw          $v1, 0x3770($v0)
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14192)));
    // 0x23cf1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x23CF1Cu;
    {
        const bool branch_taken_0x23cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF1Cu;
        // 0x23cf20: 0x8c443774  lw          $a0, 0x3774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf1c) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CF24u;
label_23cf24:
    // 0x23cf24: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x23CF24u;
    SET_GPR_U32(ctx, 31, 0x23CF2Cu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x23CF24u, 0x23CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF2Cu;
label_23cf2c:
    // 0x23cf2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cf30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CF30u;
    {
        const bool branch_taken_0x23cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF30u;
        // 0x23cf34: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf30) {
            ctx->pc = 0x23CF64u;
            goto label_23cf64;
        }
    }
    ctx->pc = 0x23CF38u;
    // 0x23cf38: 0x8e670744  lw          $a3, 0x744($s3)
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1860)));
    // 0x23cf3c: 0x8c43372c  lw          $v1, 0x372C($v0)
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14124)));
    // 0x23cf40: 0x8c443730  lw          $a0, 0x3730($v0)
    ctx->pc = 0x23cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14128)));
    // 0x23cf44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf48: 0x10e0006a  beqz        $a3, . + 4 + (0x6A << 2)
    ctx->pc = 0x23CF48u;
    {
        const bool branch_taken_0x23cf48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF48u;
        // 0x23cf4c: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf48) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23CF50u;
    // 0x23cf50: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23cf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf54: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x23CF54u;
    SET_GPR_U32(ctx, 31, 0x23CF5Cu);
    ctx->pc = 0x23CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF54u;
    // 0x23cf58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x23CF54u, 0x23CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF5Cu;
label_23cf5c:
    // 0x23cf5c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x23CF5Cu;
    {
        const bool branch_taken_0x23cf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF5Cu;
        // 0x23cf60: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf5c) {
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CF64u;
label_23cf64:
    // 0x23cf64: 0x8e670744  lw          $a3, 0x744($s3)
    ctx->pc = 0x23cf64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1860)));
    // 0x23cf68: 0x8c433768  lw          $v1, 0x3768($v0)
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14184)));
    // 0x23cf6c: 0x8c44376c  lw          $a0, 0x376C($v0)
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14188)));
    // 0x23cf70: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cf74: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x23CF74u;
    {
        const bool branch_taken_0x23cf74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF74u;
        // 0x23cf78: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf74) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23CF7Cu;
    // 0x23cf7c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf80: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x23CF80u;
    SET_GPR_U32(ctx, 31, 0x23CF88u);
    ctx->pc = 0x23CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF80u;
    // 0x23cf84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x23CF80u, 0x23CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF88u;
label_23cf88:
    // 0x23cf88: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x23CF88u;
    {
        const bool branch_taken_0x23cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF88u;
        // 0x23cf8c: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf88) {
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23CF90u;
label_23cf90:
    // 0x23cf90: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cf94: 0x8c430f94  lw          $v1, 0xF94($v0)
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
    // 0x23cf98: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23CF98u;
    {
        const bool branch_taken_0x23cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF98u;
        // 0x23cf9c: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf98) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFA0u;
label_23cfa0:
    // 0x23cfa0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cfa4: 0x8c432224  lw          $v1, 0x2224($v0)
    ctx->pc = 0x23cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8740)));
    // 0x23cfa8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23CFA8u;
    {
        const bool branch_taken_0x23cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFA8u;
        // 0x23cfac: 0x8c442228  lw          $a0, 0x2228($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfa8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFB0u;
label_23cfb0:
    // 0x23cfb0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cfb4: 0x8c432248  lw          $v1, 0x2248($v0)
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8776)));
    // 0x23cfb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23CFB8u;
    {
        const bool branch_taken_0x23cfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFB8u;
        // 0x23cfbc: 0x8c44224c  lw          $a0, 0x224C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfb8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFC0u;
label_23cfc0:
    // 0x23cfc0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cfc4: 0x8c432230  lw          $v1, 0x2230($v0)
    ctx->pc = 0x23cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8752)));
    // 0x23cfc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23CFC8u;
    {
        const bool branch_taken_0x23cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFC8u;
        // 0x23cfcc: 0x8c442234  lw          $a0, 0x2234($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfc8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFD0u;
label_23cfd0:
    // 0x23cfd0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cfd4: 0x8c432254  lw          $v1, 0x2254($v0)
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8788)));
    // 0x23cfd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23CFD8u;
    {
        const bool branch_taken_0x23cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFD8u;
        // 0x23cfdc: 0x8c442258  lw          $a0, 0x2258($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfd8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFE0u;
label_23cfe0:
    // 0x23cfe0: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23cfe4: 0x8c43223c  lw          $v1, 0x223C($v0)
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8764)));
    // 0x23cfe8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23CFE8u;
    {
        const bool branch_taken_0x23cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFE8u;
        // 0x23cfec: 0x8c442240  lw          $a0, 0x2240($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfe8) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23CFF0u;
label_23cff0:
    // 0x23cff0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23CFF0u;
    SET_GPR_U32(ctx, 31, 0x23CFF8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23CFF0u, 0x23CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFF8u;
label_23cff8:
    // 0x23cff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23cffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CFFCu;
    {
        const bool branch_taken_0x23cffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFFCu;
        // 0x23d000: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cffc) {
            ctx->pc = 0x23D010u;
            goto label_23d010;
        }
    }
    ctx->pc = 0x23D004u;
    // 0x23d004: 0x8c431d68  lw          $v1, 0x1D68($v0)
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7528)));
    // 0x23d008: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23D008u;
    {
        const bool branch_taken_0x23d008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D008u;
        // 0x23d00c: 0x8c441d6c  lw          $a0, 0x1D6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d008) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23D010u;
label_23d010:
    // 0x23d010: 0x8c431d70  lw          $v1, 0x1D70($v0)
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7536)));
    // 0x23d014: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23D014u;
    {
        const bool branch_taken_0x23d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D014u;
        // 0x23d018: 0x8c441d74  lw          $a0, 0x1D74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d014) {
            ctx->pc = 0x23D028u;
            goto label_23d028;
        }
    }
    ctx->pc = 0x23D01Cu;
label_23d01c:
    // 0x23d01c: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d020: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x23d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x23d024: 0x8c442d3c  lw          $a0, 0x2D3C($v0)
    ctx->pc = 0x23d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
label_23d028:
    // 0x23d028: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d02c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x23D02Cu;
    {
        const bool branch_taken_0x23d02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D02Cu;
        // 0x23d030: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d02c) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23D034u;
label_23d034:
    // 0x23d034: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23D034u;
    SET_GPR_U32(ctx, 31, 0x23D03Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23D034u, 0x23D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D03Cu;
label_23d03c:
    // 0x23d03c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x23d03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d040: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D040u;
    {
        const bool branch_taken_0x23d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D040u;
        // 0x23d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d040) {
            ctx->pc = 0x23D050u;
            goto label_23d050;
        }
    }
    ctx->pc = 0x23D048u;
    // 0x23d048: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23D048u;
    {
        const bool branch_taken_0x23d048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d048) {
            ctx->pc = 0x23D04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D048u;
            // 0x23d04c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0A8u;
            goto label_23d0a8;
        }
    }
    ctx->pc = 0x23D050u;
label_23d050:
    // 0x23d050: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d054: 0x8e670748  lw          $a3, 0x748($s3)
    ctx->pc = 0x23d054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1864)));
    // 0x23d058: 0x8c433d54  lw          $v1, 0x3D54($v0)
    ctx->pc = 0x23d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15700)));
    // 0x23d05c: 0x8c443d58  lw          $a0, 0x3D58($v0)
    ctx->pc = 0x23d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15704)));
    // 0x23d060: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d064: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D064u;
    {
        const bool branch_taken_0x23d064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D064u;
        // 0x23d068: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d064) {
            ctx->pc = 0x23D078u;
            goto label_23d078;
        }
    }
    ctx->pc = 0x23D06Cu;
    // 0x23d06c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d070: 0xc0a049e  jal         func_281278
    ctx->pc = 0x23D070u;
    SET_GPR_U32(ctx, 31, 0x23D078u);
    ctx->pc = 0x23D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D070u;
    // 0x23d074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281278u, 0x23D070u, 0x23D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D078u;
label_23d078:
    // 0x23d078: 0x8e64074c  lw          $a0, 0x74C($s3)
    ctx->pc = 0x23d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1868)));
    // 0x23d07c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D07Cu;
    {
        const bool branch_taken_0x23d07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d07c) {
            ctx->pc = 0x23D080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D07Cu;
            // 0x23d080: 0x8e640750  lw          $a0, 0x750($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D090u;
            goto label_23d090;
        }
    }
    ctx->pc = 0x23D084u;
    // 0x23d084: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23D084u;
    SET_GPR_U32(ctx, 31, 0x23D08Cu);
    ctx->pc = 0x23D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D084u;
    // 0x23d088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23D084u, 0x23D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D08Cu;
label_23d08c:
    // 0x23d08c: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x23d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_23d090:
    // 0x23d090: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23D090u;
    {
        const bool branch_taken_0x23d090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d090) {
            ctx->pc = 0x23D094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D090u;
            // 0x23d094: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23D098u;
    // 0x23d098: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23D098u;
    SET_GPR_U32(ctx, 31, 0x23D0A0u);
    ctx->pc = 0x23D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D098u;
    // 0x23d09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23D098u, 0x23D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0A0u;
label_23d0a0:
    // 0x23d0a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23D0A0u;
    {
        const bool branch_taken_0x23d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0A0u;
        // 0x23d0a4: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0a0) {
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23D0A8u;
label_23d0a8:
    // 0x23d0a8: 0x8e670748  lw          $a3, 0x748($s3)
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1864)));
    // 0x23d0ac: 0x8c433d5c  lw          $v1, 0x3D5C($v0)
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15708)));
    // 0x23d0b0: 0x8c443d60  lw          $a0, 0x3D60($v0)
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15712)));
    // 0x23d0b4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d0b8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D0B8u;
    {
        const bool branch_taken_0x23d0b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0B8u;
        // 0x23d0bc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0b8) {
            ctx->pc = 0x23D0CCu;
            goto label_23d0cc;
        }
    }
    ctx->pc = 0x23D0C0u;
    // 0x23d0c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0c4: 0xc0a049e  jal         func_281278
    ctx->pc = 0x23D0C4u;
    SET_GPR_U32(ctx, 31, 0x23D0CCu);
    ctx->pc = 0x23D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0C4u;
    // 0x23d0c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281278u, 0x23D0C4u, 0x23D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0CCu;
label_23d0cc:
    // 0x23d0cc: 0x8e64074c  lw          $a0, 0x74C($s3)
    ctx->pc = 0x23d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1868)));
    // 0x23d0d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D0D0u;
    {
        const bool branch_taken_0x23d0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0d0) {
            ctx->pc = 0x23D0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D0D0u;
            // 0x23d0d4: 0x8e640750  lw          $a0, 0x750($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0E4u;
            goto label_23d0e4;
        }
    }
    ctx->pc = 0x23D0D8u;
    // 0x23d0d8: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23D0D8u;
    SET_GPR_U32(ctx, 31, 0x23D0E0u);
    ctx->pc = 0x23D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0D8u;
    // 0x23d0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23D0D8u, 0x23D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0E0u;
label_23d0e0:
    // 0x23d0e0: 0x8e640750  lw          $a0, 0x750($s3)
    ctx->pc = 0x23d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1872)));
label_23d0e4:
    // 0x23d0e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D0E4u;
    {
        const bool branch_taken_0x23d0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0e4) {
            ctx->pc = 0x23D0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D0E4u;
            // 0x23d0e8: 0x8e6206ec  lw          $v0, 0x6EC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0F8u;
            goto label_23d0f8;
        }
    }
    ctx->pc = 0x23D0ECu;
    // 0x23d0ec: 0xc0a0c62  jal         func_283188
    ctx->pc = 0x23D0ECu;
    SET_GPR_U32(ctx, 31, 0x23D0F4u);
    ctx->pc = 0x23D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D0ECu;
    // 0x23d0f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283188u, 0x23D0ECu, 0x23D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0F4u;
label_23d0f4:
    // 0x23d0f4: 0x8e6206ec  lw          $v0, 0x6EC($s3)
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1772)));
label_23d0f8:
    // 0x23d0f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D0F8u;
    {
        const bool branch_taken_0x23d0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0f8) {
            ctx->pc = 0x23D114u;
            goto label_23d114;
        }
    }
    ctx->pc = 0x23D100u;
    // 0x23d100: 0x8e620304  lw          $v0, 0x304($s3)
    ctx->pc = 0x23d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d104: 0x8c4303e4  lw          $v1, 0x3E4($v0)
    ctx->pc = 0x23d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 996)));
    // 0x23d108: 0x8c4403e8  lw          $a0, 0x3E8($v0)
    ctx->pc = 0x23d108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x23d10c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23d10cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d110: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23d110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23d114:
    // 0x23d114: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D114u;
    SET_GPR_U32(ctx, 31, 0x23D11Cu);
    ctx->pc = 0x23D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D114u;
    // 0x23d118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D114u, 0x23D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D11Cu;
label_23d11c:
    // 0x23d11c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d120: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d128: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d12c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d130: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23d134: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D134u;
    SET_GPR_U32(ctx, 31, 0x23D13Cu);
    ctx->pc = 0x23D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D134u;
    // 0x23d138: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D134u, 0x23D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D13Cu;
label_23d13c:
    // 0x23d13c: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23d13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23d140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d144: 0xae6305f0  sw          $v1, 0x5F0($s3)
    ctx->pc = 0x23d144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 3));
    // 0x23d148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d14c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23d14cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d150:
    // 0x23d150: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x23d154: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x23d154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x23d158: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D158u;
    {
        const bool branch_taken_0x23d158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D158u;
        // 0x23d15c: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d158) {
            ctx->pc = 0x23D170u;
            goto label_23d170;
        }
    }
    ctx->pc = 0x23D160u;
    // 0x23d160: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23D160u;
    {
        const bool branch_taken_0x23d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D160u;
        // 0x23d164: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d160) {
            ctx->pc = 0x23D198u;
            goto label_23d198;
        }
    }
    ctx->pc = 0x23D168u;
    // 0x23d168: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D168u;
    {
        const bool branch_taken_0x23d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d168) {
            ctx->pc = 0x23D198u;
            goto label_23d198;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23D170u;
    SET_GPR_U32(ctx, 31, 0x23D178u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23D170u, 0x23D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D178u;
label_23d178:
    // 0x23d178: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d17c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d180: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x23d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x23d184: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23d188: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23d188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d18c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23d190: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23D190u;
    SET_GPR_U32(ctx, 31, 0x23D198u);
    ctx->pc = 0x23D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D190u;
    // 0x23d194: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23D190u, 0x23D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D198u;
label_23d198:
    // 0x23d198: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23D198u;
    SET_GPR_U32(ctx, 31, 0x23D1A0u);
    ctx->pc = 0x23D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D198u;
    // 0x23d19c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D198u, 0x23D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1A0u;
label_23d1a0:
    // 0x23d1a0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x23D1A0u;
    {
        const bool branch_taken_0x23d1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1a0) {
            ctx->pc = 0x23D2B0u;
            goto label_23d2b0;
        }
    }
    ctx->pc = 0x23D1A8u;
    // 0x23d1a8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23D1A8u;
    SET_GPR_U32(ctx, 31, 0x23D1B0u);
    ctx->pc = 0x23D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1A8u;
    // 0x23d1ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23D1A8u, 0x23D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1B0u;
label_23d1b0:
    // 0x23d1b0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x23D1B0u;
    {
        const bool branch_taken_0x23d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1b0) {
            ctx->pc = 0x23D2B0u;
            goto label_23d2b0;
        }
    }
    ctx->pc = 0x23D1B8u;
label_23d1b8:
    // 0x23d1b8: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23d1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d1bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D1BCu;
    SET_GPR_U32(ctx, 31, 0x23D1C4u);
    ctx->pc = 0x23D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1BCu;
    // 0x23d1c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D1BCu, 0x23D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1C4u;
label_23d1c4:
    // 0x23d1c4: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d1d0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d1d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d1d4: 0x8c652f24  lw          $a1, 0x2F24($v1)
    ctx->pc = 0x23d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12068)));
    // 0x23d1d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23d1dc: 0x8c662f28  lw          $a2, 0x2F28($v1)
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12072)));
    // 0x23d1e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23d1e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23d1e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D1E8u;
    SET_GPR_U32(ctx, 31, 0x23D1F0u);
    ctx->pc = 0x23D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1E8u;
    // 0x23d1ec: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D1E8u, 0x23D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1F0u;
label_23d1f0:
    // 0x23d1f0: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23d1f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D1F4u;
    {
        const bool branch_taken_0x23d1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1f4) {
            ctx->pc = 0x23D1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1F4u;
            // 0x23d1f8: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D208u;
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D1FCu;
    // 0x23d1fc: 0xc074176  jal         func_1D05D8
    ctx->pc = 0x23D1FCu;
    SET_GPR_U32(ctx, 31, 0x23D204u);
    ctx->pc = 0x1D05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05D8u, 0x23D1FCu, 0x23D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D204u;
label_23d204:
    // 0x23d204: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23d204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23d208:
    // 0x23d208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d20c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23D20Cu;
    {
        const bool branch_taken_0x23d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D20Cu;
        // 0x23d210: 0xae6305f4  sw          $v1, 0x5F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d20c) {
            ctx->pc = 0x23D264u;
            goto label_23d264;
        }
    }
    ctx->pc = 0x23D214u;
label_23d214:
    // 0x23d214: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23d214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d218: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D218u;
    SET_GPR_U32(ctx, 31, 0x23D220u);
    ctx->pc = 0x23D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D218u;
    // 0x23d21c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D218u, 0x23D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D220u;
label_23d220:
    // 0x23d220: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d228: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d22c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d22cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d230: 0x8c652f9c  lw          $a1, 0x2F9C($v1)
    ctx->pc = 0x23d230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12188)));
    // 0x23d234: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23d234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d238: 0x8c662fa0  lw          $a2, 0x2FA0($v1)
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12192)));
    // 0x23d23c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23d23cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d240: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23d244: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D244u;
    SET_GPR_U32(ctx, 31, 0x23D24Cu);
    ctx->pc = 0x23D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D244u;
    // 0x23d248: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D244u, 0x23D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D24Cu;
label_23d24c:
    // 0x23d24c: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23d250: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D250u;
    {
        const bool branch_taken_0x23d250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d250) {
            ctx->pc = 0x23D254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D250u;
            // 0x23d254: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D264u;
            goto label_23d264;
        }
    }
    ctx->pc = 0x23D258u;
    // 0x23d258: 0xc07418e  jal         func_1D0638
    ctx->pc = 0x23D258u;
    SET_GPR_U32(ctx, 31, 0x23D260u);
    ctx->pc = 0x1D0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0638u, 0x23D258u, 0x23D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D260u;
label_23d260:
    // 0x23d260: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23d260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23d264:
    // 0x23d264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d268: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23d268u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d26c:
    // 0x23d26c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23D26Cu;
    SET_GPR_U32(ctx, 31, 0x23D274u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23D26Cu, 0x23D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D274u;
label_23d274:
    // 0x23d274: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d27c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x23d280: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23d284: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23d284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d288: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23d28c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23D28Cu;
    SET_GPR_U32(ctx, 31, 0x23D294u);
    ctx->pc = 0x23D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D28Cu;
    // 0x23d290: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23D28Cu, 0x23D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D294u;
label_23d294:
    // 0x23d294: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23D294u;
    SET_GPR_U32(ctx, 31, 0x23D29Cu);
    ctx->pc = 0x23D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D294u;
    // 0x23d298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D294u, 0x23D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D29Cu;
label_23d29c:
    // 0x23d29c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D29Cu;
    {
        const bool branch_taken_0x23d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d29c) {
            ctx->pc = 0x23D2B0u;
            goto label_23d2b0;
        }
    }
    ctx->pc = 0x23D2A4u;
    // 0x23d2a4: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23d2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x23d2a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d2ac: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23d2acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d2b0:
    // 0x23d2b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d2b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d2b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23D2BCu;
    SET_GPR_U32(ctx, 31, 0x23D2C4u);
    ctx->pc = 0x23D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2BCu;
    // 0x23d2c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D2BCu, 0x23D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2C4u;
label_23d2c4:
    // 0x23d2c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d2c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d2c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23D2C8u;
    SET_GPR_U32(ctx, 31, 0x23D2D0u);
    ctx->pc = 0x23D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2C8u;
    // 0x23d2cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D2C8u, 0x23D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2D0u;
label_23d2d0:
    // 0x23d2d0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x23D2D0u;
    {
        const bool branch_taken_0x23d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D0u;
        // 0x23d2d4: 0x966203ac  lhu         $v0, 0x3AC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2d0) {
            ctx->pc = 0x23D3C8u;
            goto label_23d3c8;
        }
    }
    ctx->pc = 0x23D2D8u;
label_23d2d8:
    // 0x23d2d8: 0xa2601864  sb          $zero, 0x1864($s3)
    ctx->pc = 0x23d2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d2dc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23D2DCu;
    SET_GPR_U32(ctx, 31, 0x23D2E4u);
    ctx->pc = 0x23D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2DCu;
    // 0x23d2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23D2DCu, 0x23D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2E4u;
label_23d2e4:
    // 0x23d2e4: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x23d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x23d2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d2f0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23d2f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d2f4: 0x8c652f2c  lw          $a1, 0x2F2C($v1)
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12076)));
    // 0x23d2f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d2fc: 0x8c662f30  lw          $a2, 0x2F30($v1)
    ctx->pc = 0x23d2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12080)));
    // 0x23d300: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23d300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d304: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23d308: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23D308u;
    SET_GPR_U32(ctx, 31, 0x23D310u);
    ctx->pc = 0x23D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D308u;
    // 0x23d30c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23D308u, 0x23D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D310u;
label_23d310:
    // 0x23d310: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23d314: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D314u;
    {
        const bool branch_taken_0x23d314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d314) {
            ctx->pc = 0x23D318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D314u;
            // 0x23d318: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D328u;
            goto label_23d328;
        }
    }
    ctx->pc = 0x23D31Cu;
    // 0x23d31c: 0xc07417e  jal         func_1D05F8
    ctx->pc = 0x23D31Cu;
    SET_GPR_U32(ctx, 31, 0x23D324u);
    ctx->pc = 0x1D05F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05F8u, 0x23D31Cu, 0x23D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D324u;
label_23d324:
    // 0x23d324: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x23d324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_23d328:
    // 0x23d328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d32c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x23d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d330:
    // 0x23d330: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23D330u;
    SET_GPR_U32(ctx, 31, 0x23D338u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23D330u, 0x23D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D338u;
label_23d338:
    // 0x23d338: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x23d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d33c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d340: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x23d340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x23d344: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23d348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23d348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d34c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23d350: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23D350u;
    SET_GPR_U32(ctx, 31, 0x23D358u);
    ctx->pc = 0x23D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D350u;
    // 0x23d354: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23D350u, 0x23D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D358u;
label_23d358:
    // 0x23d358: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23D358u;
    SET_GPR_U32(ctx, 31, 0x23D360u);
    ctx->pc = 0x23D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D358u;
    // 0x23d35c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D358u, 0x23D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D360u;
label_23d360:
    // 0x23d360: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D360u;
    {
        const bool branch_taken_0x23d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D360u;
        // 0x23d364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d360) {
            ctx->pc = 0x23D3A8u;
            goto label_23d3a8;
        }
    }
    ctx->pc = 0x23D368u;
    // 0x23d368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d36c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d36cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d370: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23D370u;
    SET_GPR_U32(ctx, 31, 0x23D378u);
    ctx->pc = 0x23D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D370u;
    // 0x23d374: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D370u, 0x23D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D378u;
label_23d378:
    // 0x23d378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d37c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23D37Cu;
    SET_GPR_U32(ctx, 31, 0x23D384u);
    ctx->pc = 0x23D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D37Cu;
    // 0x23d380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D37Cu, 0x23D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D384u;
label_23d384:
    // 0x23d384: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23D384u;
    SET_GPR_U32(ctx, 31, 0x23D38Cu);
    ctx->pc = 0x23D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D384u;
    // 0x23d388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23D384u, 0x23D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D38Cu;
label_23d38c:
    // 0x23d38c: 0x8e640708  lw          $a0, 0x708($s3)
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
    // 0x23d390: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23D390u;
    {
        const bool branch_taken_0x23d390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D390u;
        // 0x23d394: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d390) {
            ctx->pc = 0x23D3F0u;
            goto label_23d3f0;
        }
    }
    ctx->pc = 0x23D398u;
    // 0x23d398: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23D398u;
    SET_GPR_U32(ctx, 31, 0x23D3A0u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23D398u, 0x23D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3A0u;
label_23d3a0:
    // 0x23d3a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23D3A0u;
    {
        const bool branch_taken_0x23d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3A0u;
        // 0x23d3a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3a0) {
            ctx->pc = 0x23D3F0u;
            goto label_23d3f0;
        }
    }
    ctx->pc = 0x23D3A8u;
label_23d3a8:
    // 0x23d3a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23d3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d3ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d3b0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23D3B0u;
    SET_GPR_U32(ctx, 31, 0x23D3B8u);
    ctx->pc = 0x23D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3B0u;
    // 0x23d3b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D3B0u, 0x23D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3B8u;
label_23d3b8:
    // 0x23d3b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d3b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d3bc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23D3BCu;
    SET_GPR_U32(ctx, 31, 0x23D3C4u);
    ctx->pc = 0x23D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3BCu;
    // 0x23d3c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D3BCu, 0x23D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3C4u;
label_23d3c4:
    // 0x23d3c4: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x23d3c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
label_23d3c8:
    // 0x23d3c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23d3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23d3cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D3CCu;
    {
        const bool branch_taken_0x23d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3CCu;
        // 0x23d3d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3cc) {
            ctx->pc = 0x23D3F0u;
            goto label_23d3f0;
        }
    }
    ctx->pc = 0x23D3D4u;
    // 0x23d3d4: 0x8e6205f0  lw          $v0, 0x5F0($s3)
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1520)));
    // 0x23d3d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D3D8u;
    {
        const bool branch_taken_0x23d3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3D8u;
        // 0x23d3dc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3d8) {
            ctx->pc = 0x23D3F4u;
            goto label_23d3f4;
        }
    }
    ctx->pc = 0x23D3E0u;
    // 0x23d3e0: 0xae6005f0  sw          $zero, 0x5F0($s3)
    ctx->pc = 0x23d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 0));
    // 0x23d3e4: 0xc09d138  jal         func_2744E0
    ctx->pc = 0x23D3E4u;
    SET_GPR_U32(ctx, 31, 0x23D3ECu);
    ctx->pc = 0x23D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3E4u;
    // 0x23d3e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E0u, 0x23D3E4u, 0x23D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3ECu;
label_23d3ec:
    // 0x23d3ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23d3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23d3f0:
    // 0x23d3f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23d3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d3f4:
    // 0x23d3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23d3f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d400: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d404: 0x3e00008  jr          $ra
    ctx->pc = 0x23D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D404u;
        // 0x23d408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D40Cu;
    // 0x23d40c: 0x0  nop
    ctx->pc = 0x23d40cu;
    // NOP
    ctx->pc = 0x23d410u;
}
