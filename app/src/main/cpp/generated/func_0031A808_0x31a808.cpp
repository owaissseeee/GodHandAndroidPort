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

// Function: func_0031A808
// Address: 0x31a808 - 0x31af40
void func_0031A808_0x31a808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A808_0x31a808");
#endif

    switch (ctx->pc) {
        case 0x31a898u: goto label_31a898;
        case 0x31a8d8u: goto label_31a8d8;
        case 0x31a8f4u: goto label_31a8f4;
        case 0x31a938u: goto label_31a938;
        case 0x31a98cu: goto label_31a98c;
        case 0x31a9b8u: goto label_31a9b8;
        case 0x31a9dcu: goto label_31a9dc;
        case 0x31aa24u: goto label_31aa24;
        case 0x31aa40u: goto label_31aa40;
        case 0x31aa8cu: goto label_31aa8c;
        case 0x31aab8u: goto label_31aab8;
        case 0x31aac8u: goto label_31aac8;
        case 0x31aaf0u: goto label_31aaf0;
        case 0x31ab3cu: goto label_31ab3c;
        case 0x31abb0u: goto label_31abb0;
        case 0x31abc0u: goto label_31abc0;
        case 0x31abccu: goto label_31abcc;
        case 0x31ac0cu: goto label_31ac0c;
        case 0x31ac2cu: goto label_31ac2c;
        case 0x31ac70u: goto label_31ac70;
        case 0x31acc4u: goto label_31acc4;
        case 0x31acf0u: goto label_31acf0;
        case 0x31ad14u: goto label_31ad14;
        case 0x31ad5cu: goto label_31ad5c;
        case 0x31ad78u: goto label_31ad78;
        case 0x31adc4u: goto label_31adc4;
        case 0x31adf0u: goto label_31adf0;
        case 0x31ae00u: goto label_31ae00;
        case 0x31ae28u: goto label_31ae28;
        case 0x31ae74u: goto label_31ae74;
        case 0x31aed0u: goto label_31aed0;
        case 0x31af0cu: goto label_31af0c;
        case 0x31af20u: goto label_31af20;
        case 0x31af28u: goto label_31af28;
        default: break;
    }

    ctx->pc = 0x31a808u;

    // 0x31a808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31a80c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31a810: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31a814: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x31a814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a818: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31a81c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x31a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x31a820: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31a824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a828: 0x8c43056c  lw          $v1, 0x56C($v0)
    ctx->pc = 0x31a828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x31a82c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31A82Cu;
    {
        const bool branch_taken_0x31a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A82Cu;
        // 0x31a830: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a82c) {
            ctx->pc = 0x31A868u;
            goto label_31a868;
        }
    }
    ctx->pc = 0x31A834u;
    // 0x31a834: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x31a834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x31a838: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x31a838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31a83c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x31a83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x31a840: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x31a840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x31a844: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x31a844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31a848: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x31a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x31a84c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31a850: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x31a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31a854: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x31a854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x31a858: 0xfce53d38  sd          $a1, 0x3D38($a3)
    ctx->pc = 0x31a858u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 15672), GPR_U64(ctx, 5));
    // 0x31a85c: 0xfcc33d40  sd          $v1, 0x3D40($a2)
    ctx->pc = 0x31a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 15680), GPR_U64(ctx, 3));
    // 0x31a860: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31A860u;
    {
        const bool branch_taken_0x31a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A860u;
        // 0x31a864: 0xfc823d48  sd          $v0, 0x3D48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 15688), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a860) {
            ctx->pc = 0x31A888u;
            goto label_31a888;
        }
    }
    ctx->pc = 0x31A868u;
label_31a868:
    // 0x31a868: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x31a868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31a86c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x31a870: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31a874: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x31a874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x31a878: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x31a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31a87c: 0xfc833d38  sd          $v1, 0x3D38($a0)
    ctx->pc = 0x31a87cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C3D38u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C3D38u, _value); } while (0);
    // 0x31a880: 0xfc463d48  sd          $a2, 0x3D48($v0)
    ctx->pc = 0x31a880u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C3D48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C3D48u, _value); } while (0);
    // 0x31a884: 0xfca63d40  sd          $a2, 0x3D40($a1)
    ctx->pc = 0x31a884u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C3D40u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3C3D40u, _value); } while (0);
label_31a888:
    // 0x31a888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a88c: 0x251274a0  addiu       $s2, $t0, 0x74A0
    ctx->pc = 0x31a88cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 29856));
    // 0x31a890: 0xc0e5f66  jal         func_397D98
    ctx->pc = 0x31A890u;
    SET_GPR_U32(ctx, 31, 0x31A898u);
    ctx->pc = 0x31A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A890u;
    // 0x31a894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D98u, 0x31A890u, 0x31A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A898u;
label_31a898:
    // 0x31a898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a89c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31a8a0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A8A0u;
    {
        const bool branch_taken_0x31a8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A0u;
        // 0x31a8a4: 0xae240140  sw          $a0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8a0) {
            ctx->pc = 0x31A8B4u;
            goto label_31a8b4;
        }
    }
    ctx->pc = 0x31A8A8u;
    // 0x31a8a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a8ac: 0x148200a8  bne         $a0, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x31A8ACu;
    {
        const bool branch_taken_0x31a8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8ACu;
        // 0x31a8b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8ac) {
            ctx->pc = 0x31AB50u;
            goto label_31ab50;
        }
    }
    ctx->pc = 0x31A8B4u;
label_31a8b4:
    // 0x31a8b4: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31a8b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31a8bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31A8BCu;
    {
        const bool branch_taken_0x31a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8BCu;
        // 0x31a8c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8bc) {
            ctx->pc = 0x31A8FCu;
            goto label_31a8fc;
        }
    }
    ctx->pc = 0x31A8C4u;
    // 0x31a8c4: 0x9630014a  lhu         $s0, 0x14A($s1)
    ctx->pc = 0x31a8c4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 330)));
    // 0x31a8c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a8d0: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31A8D0u;
    SET_GPR_U32(ctx, 31, 0x31A8D8u);
    ctx->pc = 0x31A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8D0u;
    // 0x31a8d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31A8D0u, 0x31A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8D8u;
label_31a8d8:
    // 0x31a8d8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A8D8u;
    {
        const bool branch_taken_0x31a8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8D8u;
        // 0x31a8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8d8) {
            ctx->pc = 0x31A8E8u;
            goto label_31a8e8;
        }
    }
    ctx->pc = 0x31A8E0u;
    // 0x31a8e0: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x31a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
    // 0x31a8e4: 0xa6200148  sh          $zero, 0x148($s1)
    ctx->pc = 0x31a8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
label_31a8e8:
    // 0x31a8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8ec: 0xc0e5f48  jal         func_397D20
    ctx->pc = 0x31A8ECu;
    SET_GPR_U32(ctx, 31, 0x31A8F4u);
    ctx->pc = 0x31A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8ECu;
    // 0x31a8f0: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D20u, 0x31A8ECu, 0x31A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8F4u;
label_31a8f4:
    // 0x31a8f4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x31A8F4u;
    {
        const bool branch_taken_0x31a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8F4u;
        // 0x31a8f8: 0x8e220154  lw          $v0, 0x154($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8f4) {
            ctx->pc = 0x31AB70u;
            goto label_31ab70;
        }
    }
    ctx->pc = 0x31A8FCu;
label_31a8fc:
    // 0x31a8fc: 0x96230148  lhu         $v1, 0x148($s1)
    ctx->pc = 0x31a8fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x31a900: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x31a900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31a904: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x31A904u;
    {
        const bool branch_taken_0x31a904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A904u;
        // 0x31a908: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a904) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A90Cu;
    // 0x31a90c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31a910: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x31a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x31a914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a91c: 0x800008  jr          $a0
    ctx->pc = 0x31A91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31A924u: goto label_31a924;
            case 0x31A978u: goto label_31a978;
            case 0x31A9A4u: goto label_31a9a4;
            case 0x31A9D0u: goto label_31a9d0;
            case 0x31AA14u: goto label_31aa14;
            case 0x31AA34u: goto label_31aa34;
            case 0x31AA78u: goto label_31aa78;
            case 0x31AAACu: goto label_31aaac;
            case 0x31AAE4u: goto label_31aae4;
            case 0x31AB1Cu: goto label_31ab1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A91Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A924u;
label_31a924:
    // 0x31a924: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a92c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a930: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31A930u;
    SET_GPR_U32(ctx, 31, 0x31A938u);
    ctx->pc = 0x31A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A930u;
    // 0x31a934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31A930u, 0x31A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A938u;
label_31a938:
    // 0x31a938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a93c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a940: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A940u;
    {
        const bool branch_taken_0x31a940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A940u;
        // 0x31a944: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a940) {
            ctx->pc = 0x31A950u;
            goto label_31a950;
        }
    }
    ctx->pc = 0x31A948u;
    // 0x31a948: 0x1482007f  bne         $a0, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x31A948u;
    {
        const bool branch_taken_0x31a948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A948u;
        // 0x31a94c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a948) {
            ctx->pc = 0x31AB48u;
            goto label_31ab48;
        }
    }
    ctx->pc = 0x31A950u;
label_31a950:
    // 0x31a950: 0x8e250154  lw          $a1, 0x154($s1)
    ctx->pc = 0x31a950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31a954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a958: 0xa6220148  sh          $v0, 0x148($s1)
    ctx->pc = 0x31a958u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a95c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31a960: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x31a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x31a964: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x31A964u;
    {
        const bool branch_taken_0x31a964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A964u;
        // 0x31a968: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a964) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A96Cu;
    // 0x31a96c: 0x34a20006  ori         $v0, $a1, 0x6
    ctx->pc = 0x31a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x31a970: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x31A970u;
    {
        const bool branch_taken_0x31a970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A970u;
        // 0x31a974: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a970) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A978u;
label_31a978:
    // 0x31a978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a97c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a984: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31A984u;
    SET_GPR_U32(ctx, 31, 0x31A98Cu);
    ctx->pc = 0x31A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A984u;
    // 0x31a988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31A984u, 0x31A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A98Cu;
label_31a98c:
    // 0x31a98c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a990: 0x5443006c  bnel        $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x31A990u;
    {
        const bool branch_taken_0x31a990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31a990) {
            ctx->pc = 0x31A994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A990u;
            // 0x31a994: 0xa6230148  sh          $v1, 0x148($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A998u;
    // 0x31a998: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31a99c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31A99Cu;
    {
        const bool branch_taken_0x31a99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A99Cu;
        // 0x31a9a0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a99c) {
            ctx->pc = 0x31AAA0u;
            goto label_31aaa0;
        }
    }
    ctx->pc = 0x31A9A4u;
label_31a9a4:
    // 0x31a9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31a9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a9b0: 0xc0e601c  jal         func_398070
    ctx->pc = 0x31A9B0u;
    SET_GPR_U32(ctx, 31, 0x31A9B8u);
    ctx->pc = 0x31A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9B0u;
    // 0x31a9b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398070u, 0x31A9B0u, 0x31A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9B8u;
label_31a9b8:
    // 0x31a9b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a9bc: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x31A9BCu;
    {
        const bool branch_taken_0x31a9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9BCu;
        // 0x31a9c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9bc) {
            ctx->pc = 0x31AB48u;
            goto label_31ab48;
        }
    }
    ctx->pc = 0x31A9C4u;
    // 0x31a9c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a9c8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x31A9C8u;
    {
        const bool branch_taken_0x31a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9C8u;
        // 0x31a9cc: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9c8) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A9D0u;
label_31a9d0:
    // 0x31a9d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9d4: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31A9D4u;
    SET_GPR_U32(ctx, 31, 0x31A9DCu);
    ctx->pc = 0x31A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9D4u;
    // 0x31a9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31A9D4u, 0x31A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9DCu;
label_31a9dc:
    // 0x31a9dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31a9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A9E0u;
    {
        const bool branch_taken_0x31a9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9E0u;
        // 0x31a9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9e0) {
            ctx->pc = 0x31A9FCu;
            goto label_31a9fc;
        }
    }
    ctx->pc = 0x31A9E8u;
    // 0x31a9e8: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x31A9E8u;
    {
        const bool branch_taken_0x31a9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9E8u;
        // 0x31a9ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9e8) {
            ctx->pc = 0x31AB48u;
            goto label_31ab48;
        }
    }
    ctx->pc = 0x31A9F0u;
    // 0x31a9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a9f4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x31A9F4u;
    {
        const bool branch_taken_0x31a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9F4u;
        // 0x31a9f8: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9f4) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31A9FCu;
label_31a9fc:
    // 0x31a9fc: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31aa00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31aa04: 0xa6230148  sh          $v1, 0x148($s1)
    ctx->pc = 0x31aa04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x31aa08: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x31aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x31aa0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31AA0Cu;
    {
        const bool branch_taken_0x31aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA0Cu;
        // 0x31aa10: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa0c) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA14u;
label_31aa14:
    // 0x31aa14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31aa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa1c: 0xc0e607c  jal         func_3981F0
    ctx->pc = 0x31AA1Cu;
    SET_GPR_U32(ctx, 31, 0x31AA24u);
    ctx->pc = 0x31AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA1Cu;
    // 0x31aa20: 0x26260158  addiu       $a2, $s1, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981F0u, 0x31AA1Cu, 0x31AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA24u;
label_31aa24:
    // 0x31aa24: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x31AA24u;
    {
        const bool branch_taken_0x31aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA24u;
        // 0x31aa28: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa24) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA2Cu;
    // 0x31aa2c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x31AA2Cu;
    {
        const bool branch_taken_0x31aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA2Cu;
        // 0x31aa30: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa2c) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA34u;
label_31aa34:
    // 0x31aa34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa38: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31AA38u;
    SET_GPR_U32(ctx, 31, 0x31AA40u);
    ctx->pc = 0x31AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA38u;
    // 0x31aa3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31AA38u, 0x31AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA40u;
label_31aa40:
    // 0x31aa40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31aa40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AA44u;
    {
        const bool branch_taken_0x31aa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA44u;
        // 0x31aa48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa44) {
            ctx->pc = 0x31AA60u;
            goto label_31aa60;
        }
    }
    ctx->pc = 0x31AA4Cu;
    // 0x31aa4c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x31AA4Cu;
    {
        const bool branch_taken_0x31aa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA4Cu;
        // 0x31aa50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa4c) {
            ctx->pc = 0x31AB48u;
            goto label_31ab48;
        }
    }
    ctx->pc = 0x31AA54u;
    // 0x31aa54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31aa58: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x31AA58u;
    {
        const bool branch_taken_0x31aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA58u;
        // 0x31aa5c: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa58) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA60u;
label_31aa60:
    // 0x31aa60: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31aa64: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31aa68: 0xa6230148  sh          $v1, 0x148($s1)
    ctx->pc = 0x31aa68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x31aa6c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x31aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x31aa70: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31AA70u;
    {
        const bool branch_taken_0x31aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA70u;
        // 0x31aa74: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa70) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA78u;
label_31aa78:
    // 0x31aa78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aa84: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31AA84u;
    SET_GPR_U32(ctx, 31, 0x31AA8Cu);
    ctx->pc = 0x31AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA84u;
    // 0x31aa88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31AA84u, 0x31AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA8Cu;
label_31aa8c:
    // 0x31aa8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31aa90: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x31AA90u;
    {
        const bool branch_taken_0x31aa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31aa90) {
            ctx->pc = 0x31AA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA90u;
            // 0x31aa94: 0xa6230148  sh          $v1, 0x148($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AA98u;
    // 0x31aa98: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31aa9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31aa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_31aaa0:
    // 0x31aaa0: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x31aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x31aaa4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31AAA4u;
    {
        const bool branch_taken_0x31aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAA4u;
        // 0x31aaa8: 0xa6230148  sh          $v1, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aaa4) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AAACu;
label_31aaac:
    // 0x31aaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aab0: 0xc0e60de  jal         func_398378
    ctx->pc = 0x31AAB0u;
    SET_GPR_U32(ctx, 31, 0x31AAB8u);
    ctx->pc = 0x31AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAB0u;
    // 0x31aab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398378u, 0x31AAB0u, 0x31AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAB8u;
label_31aab8:
    // 0x31aab8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31AAB8u;
    {
        const bool branch_taken_0x31aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAB8u;
        // 0x31aabc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aab8) {
            ctx->pc = 0x31AB10u;
            goto label_31ab10;
        }
    }
    ctx->pc = 0x31AAC0u;
    // 0x31aac0: 0xc0e60fe  jal         func_3983F8
    ctx->pc = 0x31AAC0u;
    SET_GPR_U32(ctx, 31, 0x31AAC8u);
    ctx->pc = 0x31AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAC0u;
    // 0x31aac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3983F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3983F8u, 0x31AAC0u, 0x31AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAC8u;
label_31aac8:
    // 0x31aac8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31AAC8u;
    {
        const bool branch_taken_0x31aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAC8u;
        // 0x31aacc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aac8) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AAD0u;
    // 0x31aad0: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31aad4: 0xa6230148  sh          $v1, 0x148($s1)
    ctx->pc = 0x31aad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x31aad8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x31aad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x31aadc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31AADCu;
    {
        const bool branch_taken_0x31aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AADCu;
        // 0x31aae0: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aadc) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AAE4u;
label_31aae4:
    // 0x31aae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aae8: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31AAE8u;
    SET_GPR_U32(ctx, 31, 0x31AAF0u);
    ctx->pc = 0x31AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AAE8u;
    // 0x31aaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31AAE8u, 0x31AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AAF0u;
label_31aaf0:
    // 0x31aaf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31aaf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aaf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AAF4u;
    {
        const bool branch_taken_0x31aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAF4u;
        // 0x31aaf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aaf4) {
            ctx->pc = 0x31AB10u;
            goto label_31ab10;
        }
    }
    ctx->pc = 0x31AAFCu;
    // 0x31aafc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31AAFCu;
    {
        const bool branch_taken_0x31aafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAFCu;
        // 0x31ab00: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aafc) {
            ctx->pc = 0x31AB48u;
            goto label_31ab48;
        }
    }
    ctx->pc = 0x31AB04u;
    // 0x31ab04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31ab08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31AB08u;
    {
        const bool branch_taken_0x31ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB08u;
        // 0x31ab0c: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab08) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AB10u;
label_31ab10:
    // 0x31ab10: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x31ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x31ab14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31AB14u;
    {
        const bool branch_taken_0x31ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB14u;
        // 0x31ab18: 0xa6220148  sh          $v0, 0x148($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab14) {
            ctx->pc = 0x31AB44u;
            goto label_31ab44;
        }
    }
    ctx->pc = 0x31AB1Cu;
label_31ab1c:
    // 0x31ab1c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x31ab20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ab24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ab2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31ab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31ab30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ab30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab34: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31AB34u;
    SET_GPR_U32(ctx, 31, 0x31AB3Cu);
    ctx->pc = 0x31AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB34u;
    // 0x31ab38: 0xae220154  sw          $v0, 0x154($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31AB34u, 0x31AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB3Cu;
label_31ab3c:
    // 0x31ab3c: 0xa622014a  sh          $v0, 0x14A($s1)
    ctx->pc = 0x31ab3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x31ab40: 0xa6200148  sh          $zero, 0x148($s1)
    ctx->pc = 0x31ab40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
label_31ab44:
    // 0x31ab44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31ab48:
    // 0x31ab48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31AB48u;
    {
        const bool branch_taken_0x31ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB48u;
        // 0x31ab4c: 0xa6220102  sh          $v0, 0x102($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab48) {
            ctx->pc = 0x31AB6Cu;
            goto label_31ab6c;
        }
    }
    ctx->pc = 0x31AB50u;
label_31ab50:
    // 0x31ab50: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x31ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x31ab54: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x31ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x31ab58: 0xa6230102  sh          $v1, 0x102($s1)
    ctx->pc = 0x31ab58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ab5c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AB5Cu;
    {
        const bool branch_taken_0x31ab5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB5Cu;
        // 0x31ab60: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab5c) {
            ctx->pc = 0x31AB6Cu;
            goto label_31ab6c;
        }
    }
    ctx->pc = 0x31AB64u;
    // 0x31ab64: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x31ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
    // 0x31ab68: 0xa6200148  sh          $zero, 0x148($s1)
    ctx->pc = 0x31ab68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 328), (uint16_t)GPR_U32(ctx, 0));
label_31ab6c:
    // 0x31ab6c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x31ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_31ab70:
    // 0x31ab70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x31ab74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AB74u;
    {
        const bool branch_taken_0x31ab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ab74) {
            ctx->pc = 0x31AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AB74u;
            // 0x31ab78: 0x96220102  lhu         $v0, 0x102($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 258)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AB8Cu;
            goto label_31ab8c;
        }
    }
    ctx->pc = 0x31AB7Cu;
    // 0x31ab7c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x31ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x31ab80: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x31ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x31ab84: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x31ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x31ab88: 0x96220102  lhu         $v0, 0x102($s1)
    ctx->pc = 0x31ab88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 258)));
label_31ab8c:
    // 0x31ab8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab90: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x31ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x31ab94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab98: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31ab98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31ab9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31aba0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31aba0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31aba4: 0xa6220102  sh          $v0, 0x102($s1)
    ctx->pc = 0x31aba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x31aba8: 0xc0c6d58  jal         func_31B560
    ctx->pc = 0x31ABA8u;
    SET_GPR_U32(ctx, 31, 0x31ABB0u);
    ctx->pc = 0x31ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ABA8u;
    // 0x31abac: 0xae230104  sw          $v1, 0x104($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B560u, 0x31ABA8u, 0x31ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ABB0u;
label_31abb0:
    // 0x31abb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31abb4: 0x26450178  addiu       $a1, $s2, 0x178
    ctx->pc = 0x31abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 376));
    // 0x31abb8: 0xc0c6bf8  jal         func_31AFE0
    ctx->pc = 0x31ABB8u;
    SET_GPR_U32(ctx, 31, 0x31ABC0u);
    ctx->pc = 0x31ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ABB8u;
    // 0x31abbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFE0u, 0x31ABB8u, 0x31ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ABC0u;
label_31abc0:
    // 0x31abc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31abc4: 0xc0e5f66  jal         func_397D98
    ctx->pc = 0x31ABC4u;
    SET_GPR_U32(ctx, 31, 0x31ABCCu);
    ctx->pc = 0x31ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ABC4u;
    // 0x31abc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D98u, 0x31ABC4u, 0x31ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ABCCu;
label_31abcc:
    // 0x31abcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31abd0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31abd4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ABD4u;
    {
        const bool branch_taken_0x31abd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABD4u;
        // 0x31abd8: 0xae240144  sw          $a0, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abd4) {
            ctx->pc = 0x31ABE8u;
            goto label_31abe8;
        }
    }
    ctx->pc = 0x31ABDCu;
    // 0x31abdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31abe0: 0x148200aa  bne         $a0, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x31ABE0u;
    {
        const bool branch_taken_0x31abe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABE0u;
        // 0x31abe4: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abe0) {
            ctx->pc = 0x31AE8Cu;
            goto label_31ae8c;
        }
    }
    ctx->pc = 0x31ABE8u;
label_31abe8:
    // 0x31abe8: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31abec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31abf0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31ABF0u;
    {
        const bool branch_taken_0x31abf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABF0u;
        // 0x31abf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abf0) {
            ctx->pc = 0x31AC34u;
            goto label_31ac34;
        }
    }
    ctx->pc = 0x31ABF8u;
    // 0x31abf8: 0x963004a2  lhu         $s0, 0x4A2($s1)
    ctx->pc = 0x31abf8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1186)));
    // 0x31abfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac04: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31AC04u;
    SET_GPR_U32(ctx, 31, 0x31AC0Cu);
    ctx->pc = 0x31AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC04u;
    // 0x31ac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31AC04u, 0x31AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC0Cu;
label_31ac0c:
    // 0x31ac0c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AC0Cu;
    {
        const bool branch_taken_0x31ac0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC0Cu;
        // 0x31ac10: 0x26300480  addiu       $s0, $s1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac0c) {
            ctx->pc = 0x31AC1Cu;
            goto label_31ac1c;
        }
    }
    ctx->pc = 0x31AC14u;
    // 0x31ac14: 0xae2004ac  sw          $zero, 0x4AC($s1)
    ctx->pc = 0x31ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 0));
    // 0x31ac18: 0xa62004a0  sh          $zero, 0x4A0($s1)
    ctx->pc = 0x31ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 0));
label_31ac1c:
    // 0x31ac1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31ac20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac24: 0xc0e5f48  jal         func_397D20
    ctx->pc = 0x31AC24u;
    SET_GPR_U32(ctx, 31, 0x31AC2Cu);
    ctx->pc = 0x31AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC24u;
    // 0x31ac28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D20u, 0x31AC24u, 0x31AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC2Cu;
label_31ac2c:
    // 0x31ac2c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x31AC2Cu;
    {
        const bool branch_taken_0x31ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC2Cu;
        // 0x31ac30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac2c) {
            ctx->pc = 0x31AEACu;
            goto label_31aeac;
        }
    }
    ctx->pc = 0x31AC34u;
label_31ac34:
    // 0x31ac34: 0x962304a0  lhu         $v1, 0x4A0($s1)
    ctx->pc = 0x31ac34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1184)));
    // 0x31ac38: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x31ac38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31ac3c: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x31AC3Cu;
    {
        const bool branch_taken_0x31ac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC3Cu;
        // 0x31ac40: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac3c) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AC44u;
    // 0x31ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31ac48: 0x24420df0  addiu       $v0, $v0, 0xDF0
    ctx->pc = 0x31ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3568));
    // 0x31ac4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31ac50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ac54: 0x800008  jr          $a0
    ctx->pc = 0x31AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31AC5Cu: goto label_31ac5c;
            case 0x31ACB0u: goto label_31acb0;
            case 0x31ACDCu: goto label_31acdc;
            case 0x31AD08u: goto label_31ad08;
            case 0x31AD4Cu: goto label_31ad4c;
            case 0x31AD6Cu: goto label_31ad6c;
            case 0x31ADB0u: goto label_31adb0;
            case 0x31ADE4u: goto label_31ade4;
            case 0x31AE1Cu: goto label_31ae1c;
            case 0x31AE54u: goto label_31ae54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AC54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31AC5Cu;
label_31ac5c:
    // 0x31ac5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ac60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ac64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac68: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31AC68u;
    SET_GPR_U32(ctx, 31, 0x31AC70u);
    ctx->pc = 0x31AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC68u;
    // 0x31ac6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31AC68u, 0x31AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC70u;
label_31ac70:
    // 0x31ac70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ac78: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AC78u;
    {
        const bool branch_taken_0x31ac78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC78u;
        // 0x31ac7c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac78) {
            ctx->pc = 0x31AC88u;
            goto label_31ac88;
        }
    }
    ctx->pc = 0x31AC80u;
    // 0x31ac80: 0x1482007f  bne         $a0, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x31AC80u;
    {
        const bool branch_taken_0x31ac80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC80u;
        // 0x31ac84: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac80) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31AC88u;
label_31ac88:
    // 0x31ac88: 0x8e2504ac  lw          $a1, 0x4AC($s1)
    ctx->pc = 0x31ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31ac8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac90: 0xa62204a0  sh          $v0, 0x4A0($s1)
    ctx->pc = 0x31ac90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
    // 0x31ac94: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31ac98: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x31ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x31ac9c: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x31AC9Cu;
    {
        const bool branch_taken_0x31ac9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x31ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AC9Cu;
        // 0x31aca0: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac9c) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ACA4u;
    // 0x31aca4: 0x34a20006  ori         $v0, $a1, 0x6
    ctx->pc = 0x31aca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x31aca8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x31ACA8u;
    {
        const bool branch_taken_0x31aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACA8u;
        // 0x31acac: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aca8) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ACB0u;
label_31acb0:
    // 0x31acb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31acb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31acb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31acbc: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31ACBCu;
    SET_GPR_U32(ctx, 31, 0x31ACC4u);
    ctx->pc = 0x31ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACBCu;
    // 0x31acc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31ACBCu, 0x31ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACC4u;
label_31acc4:
    // 0x31acc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31acc8: 0x5443006c  bnel        $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x31ACC8u;
    {
        const bool branch_taken_0x31acc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31acc8) {
            ctx->pc = 0x31ACCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ACC8u;
            // 0x31accc: 0xa62304a0  sh          $v1, 0x4A0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ACD0u;
    // 0x31acd0: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31acd4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31ACD4u;
    {
        const bool branch_taken_0x31acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACD4u;
        // 0x31acd8: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acd4) {
            ctx->pc = 0x31ADD8u;
            goto label_31add8;
        }
    }
    ctx->pc = 0x31ACDCu;
label_31acdc:
    // 0x31acdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ace0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ace0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ace4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ace8: 0xc0e601c  jal         func_398070
    ctx->pc = 0x31ACE8u;
    SET_GPR_U32(ctx, 31, 0x31ACF0u);
    ctx->pc = 0x31ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACE8u;
    // 0x31acec: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398070u, 0x31ACE8u, 0x31ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACF0u;
label_31acf0:
    // 0x31acf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31acf4: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x31ACF4u;
    {
        const bool branch_taken_0x31acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACF4u;
        // 0x31acf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31acf4) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31ACFCu;
    // 0x31acfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ad00: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x31AD00u;
    {
        const bool branch_taken_0x31ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD00u;
        // 0x31ad04: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad00) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD08u;
label_31ad08:
    // 0x31ad08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad0c: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31AD0Cu;
    SET_GPR_U32(ctx, 31, 0x31AD14u);
    ctx->pc = 0x31AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD0Cu;
    // 0x31ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31AD0Cu, 0x31AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD14u;
label_31ad14:
    // 0x31ad14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31ad14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AD18u;
    {
        const bool branch_taken_0x31ad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD18u;
        // 0x31ad1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad18) {
            ctx->pc = 0x31AD34u;
            goto label_31ad34;
        }
    }
    ctx->pc = 0x31AD20u;
    // 0x31ad20: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x31AD20u;
    {
        const bool branch_taken_0x31ad20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD20u;
        // 0x31ad24: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad20) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31AD28u;
    // 0x31ad28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ad2c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x31AD2Cu;
    {
        const bool branch_taken_0x31ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD2Cu;
        // 0x31ad30: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad2c) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD34u;
label_31ad34:
    // 0x31ad34: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31ad38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ad3c: 0xa62304a0  sh          $v1, 0x4A0($s1)
    ctx->pc = 0x31ad3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ad40: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x31ad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x31ad44: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x31AD44u;
    {
        const bool branch_taken_0x31ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD44u;
        // 0x31ad48: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad44) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD4Cu;
label_31ad4c:
    // 0x31ad4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad54: 0xc0e607c  jal         func_3981F0
    ctx->pc = 0x31AD54u;
    SET_GPR_U32(ctx, 31, 0x31AD5Cu);
    ctx->pc = 0x31AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD54u;
    // 0x31ad58: 0x262604b0  addiu       $a2, $s1, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981F0u, 0x31AD54u, 0x31AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD5Cu;
label_31ad5c:
    // 0x31ad5c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x31AD5Cu;
    {
        const bool branch_taken_0x31ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD5Cu;
        // 0x31ad60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad5c) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD64u;
    // 0x31ad64: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x31AD64u;
    {
        const bool branch_taken_0x31ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD64u;
        // 0x31ad68: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad64) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD6Cu;
label_31ad6c:
    // 0x31ad6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad70: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31AD70u;
    SET_GPR_U32(ctx, 31, 0x31AD78u);
    ctx->pc = 0x31AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD70u;
    // 0x31ad74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31AD70u, 0x31AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD78u;
label_31ad78:
    // 0x31ad78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31ad78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AD7Cu;
    {
        const bool branch_taken_0x31ad7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD7Cu;
        // 0x31ad80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad7c) {
            ctx->pc = 0x31AD98u;
            goto label_31ad98;
        }
    }
    ctx->pc = 0x31AD84u;
    // 0x31ad84: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x31AD84u;
    {
        const bool branch_taken_0x31ad84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD84u;
        // 0x31ad88: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad84) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31AD8Cu;
    // 0x31ad8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ad90: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x31AD90u;
    {
        const bool branch_taken_0x31ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD90u;
        // 0x31ad94: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad90) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AD98u;
label_31ad98:
    // 0x31ad98: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31ad9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31ada0: 0xa62304a0  sh          $v1, 0x4A0($s1)
    ctx->pc = 0x31ada0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ada4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x31ada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x31ada8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31ADA8u;
    {
        const bool branch_taken_0x31ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA8u;
        // 0x31adac: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ada8) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ADB0u;
label_31adb0:
    // 0x31adb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31adb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31adb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31adbc: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31ADBCu;
    SET_GPR_U32(ctx, 31, 0x31ADC4u);
    ctx->pc = 0x31ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADBCu;
    // 0x31adc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31ADBCu, 0x31ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADC4u;
label_31adc4:
    // 0x31adc4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31adc8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x31ADC8u;
    {
        const bool branch_taken_0x31adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31adc8) {
            ctx->pc = 0x31ADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31ADC8u;
            // 0x31adcc: 0xa62304a0  sh          $v1, 0x4A0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ADD0u;
    // 0x31add0: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31add4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31add4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_31add8:
    // 0x31add8: 0xae2204ac  sw          $v0, 0x4AC($s1)
    ctx->pc = 0x31add8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
    // 0x31addc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31ADDCu;
    {
        const bool branch_taken_0x31addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADDCu;
        // 0x31ade0: 0xa62304a0  sh          $v1, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31addc) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31ADE4u;
label_31ade4:
    // 0x31ade4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ade8: 0xc0e60de  jal         func_398378
    ctx->pc = 0x31ADE8u;
    SET_GPR_U32(ctx, 31, 0x31ADF0u);
    ctx->pc = 0x31ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADE8u;
    // 0x31adec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398378u, 0x31ADE8u, 0x31ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADF0u;
label_31adf0:
    // 0x31adf0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31ADF0u;
    {
        const bool branch_taken_0x31adf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADF0u;
        // 0x31adf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adf0) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31ADF8u;
    // 0x31adf8: 0xc0e60fe  jal         func_3983F8
    ctx->pc = 0x31ADF8u;
    SET_GPR_U32(ctx, 31, 0x31AE00u);
    ctx->pc = 0x31ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADF8u;
    // 0x31adfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3983F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3983F8u, 0x31ADF8u, 0x31AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE00u;
label_31ae00:
    // 0x31ae00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31AE00u;
    {
        const bool branch_taken_0x31ae00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE00u;
        // 0x31ae04: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae00) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AE08u;
    // 0x31ae08: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31ae0c: 0xa62304a0  sh          $v1, 0x4A0($s1)
    ctx->pc = 0x31ae0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ae10: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x31ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x31ae14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31AE14u;
    {
        const bool branch_taken_0x31ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE14u;
        // 0x31ae18: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae14) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AE1Cu;
label_31ae1c:
    // 0x31ae1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ae20: 0xc0e5fb4  jal         func_397ED0
    ctx->pc = 0x31AE20u;
    SET_GPR_U32(ctx, 31, 0x31AE28u);
    ctx->pc = 0x31AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE20u;
    // 0x31ae24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397ED0u, 0x31AE20u, 0x31AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE28u;
label_31ae28:
    // 0x31ae28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31ae28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AE2Cu;
    {
        const bool branch_taken_0x31ae2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE2Cu;
        // 0x31ae30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae2c) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31AE34u;
    // 0x31ae34: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31AE34u;
    {
        const bool branch_taken_0x31ae34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE34u;
        // 0x31ae38: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae34) {
            ctx->pc = 0x31AE80u;
            goto label_31ae80;
        }
    }
    ctx->pc = 0x31AE3Cu;
    // 0x31ae3c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31ae40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31AE40u;
    {
        const bool branch_taken_0x31ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE40u;
        // 0x31ae44: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae40) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AE48u;
label_31ae48:
    // 0x31ae48: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x31ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x31ae4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31AE4Cu;
    {
        const bool branch_taken_0x31ae4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE4Cu;
        // 0x31ae50: 0xa62204a0  sh          $v0, 0x4A0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae4c) {
            ctx->pc = 0x31AE7Cu;
            goto label_31ae7c;
        }
    }
    ctx->pc = 0x31AE54u;
label_31ae54:
    // 0x31ae54: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31ae58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ae5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ae64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31ae68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ae68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae6c: 0xc0e5fce  jal         func_397F38
    ctx->pc = 0x31AE6Cu;
    SET_GPR_U32(ctx, 31, 0x31AE74u);
    ctx->pc = 0x31AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE6Cu;
    // 0x31ae70: 0xae2204ac  sw          $v0, 0x4AC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397F38u, 0x31AE6Cu, 0x31AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE74u;
label_31ae74:
    // 0x31ae74: 0xa62204a2  sh          $v0, 0x4A2($s1)
    ctx->pc = 0x31ae74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1186), (uint16_t)GPR_U32(ctx, 2));
    // 0x31ae78: 0xa62004a0  sh          $zero, 0x4A0($s1)
    ctx->pc = 0x31ae78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 0));
label_31ae7c:
    // 0x31ae7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31ae80:
    // 0x31ae80: 0x26260480  addiu       $a2, $s1, 0x480
    ctx->pc = 0x31ae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x31ae84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31AE84u;
    {
        const bool branch_taken_0x31ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE84u;
        // 0x31ae88: 0xa6220482  sh          $v0, 0x482($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1154), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae84) {
            ctx->pc = 0x31AEACu;
            goto label_31aeac;
        }
    }
    ctx->pc = 0x31AE8Cu;
label_31ae8c:
    // 0x31ae8c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x31ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x31ae90: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x31ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x31ae94: 0xa6230482  sh          $v1, 0x482($s1)
    ctx->pc = 0x31ae94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1154), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ae98: 0xae220484  sw          $v0, 0x484($s1)
    ctx->pc = 0x31ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1156), GPR_U32(ctx, 2));
    // 0x31ae9c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AE9Cu;
    {
        const bool branch_taken_0x31ae9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE9Cu;
        // 0x31aea0: 0x26260480  addiu       $a2, $s1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae9c) {
            ctx->pc = 0x31AEACu;
            goto label_31aeac;
        }
    }
    ctx->pc = 0x31AEA4u;
    // 0x31aea4: 0xae2004ac  sw          $zero, 0x4AC($s1)
    ctx->pc = 0x31aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1196), GPR_U32(ctx, 0));
    // 0x31aea8: 0xa62004a0  sh          $zero, 0x4A0($s1)
    ctx->pc = 0x31aea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1184), (uint16_t)GPR_U32(ctx, 0));
label_31aeac:
    // 0x31aeac: 0x8e2204ac  lw          $v0, 0x4AC($s1)
    ctx->pc = 0x31aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1196)));
    // 0x31aeb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x31aeb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AEB4u;
    {
        const bool branch_taken_0x31aeb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEB4u;
        // 0x31aeb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aeb4) {
            ctx->pc = 0x31AEC8u;
            goto label_31aec8;
        }
    }
    ctx->pc = 0x31AEBCu;
    // 0x31aebc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x31aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x31aec0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x31aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x31aec4: 0xae220484  sw          $v0, 0x484($s1)
    ctx->pc = 0x31aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1156), GPR_U32(ctx, 2));
label_31aec8:
    // 0x31aec8: 0xc0e5f48  jal         func_397D20
    ctx->pc = 0x31AEC8u;
    SET_GPR_U32(ctx, 31, 0x31AED0u);
    ctx->pc = 0x31AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEC8u;
    // 0x31aecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D20u, 0x31AEC8u, 0x31AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AED0u;
label_31aed0:
    // 0x31aed0: 0x96240482  lhu         $a0, 0x482($s1)
    ctx->pc = 0x31aed0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1154)));
    // 0x31aed4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x31aed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x31aed8: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x31aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x31aedc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x31aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x31aee0: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x31aee0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x31aee4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31aee4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31aee8: 0xa6240482  sh          $a0, 0x482($s1)
    ctx->pc = 0x31aee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1154), (uint16_t)GPR_U32(ctx, 4));
    // 0x31aeec: 0xae230484  sw          $v1, 0x484($s1)
    ctx->pc = 0x31aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1156), GPR_U32(ctx, 3));
    // 0x31aef0: 0x8cc27a78  lw          $v0, 0x7A78($a2)
    ctx->pc = 0x31aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31352)));
    // 0x31aef4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x31aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x31aef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AEF8u;
    {
        const bool branch_taken_0x31aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEF8u;
        // 0x31aefc: 0x2645007c  addiu       $a1, $s2, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aef8) {
            ctx->pc = 0x31AF14u;
            goto label_31af14;
        }
    }
    ctx->pc = 0x31AF00u;
    // 0x31af00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af04: 0xc0c6d58  jal         func_31B560
    ctx->pc = 0x31AF04u;
    SET_GPR_U32(ctx, 31, 0x31AF0Cu);
    ctx->pc = 0x31AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF04u;
    // 0x31af08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B560u, 0x31AF04u, 0x31AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF0Cu;
label_31af0c:
    // 0x31af0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31AF0Cu;
    {
        const bool branch_taken_0x31af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af0c) {
            ctx->pc = 0x31AF20u;
            goto label_31af20;
        }
    }
    ctx->pc = 0x31AF14u;
label_31af14:
    // 0x31af14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af18: 0xc0c6d58  jal         func_31B560
    ctx->pc = 0x31AF18u;
    SET_GPR_U32(ctx, 31, 0x31AF20u);
    ctx->pc = 0x31AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF18u;
    // 0x31af1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B560u, 0x31AF18u, 0x31AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF20u;
label_31af20:
    // 0x31af20: 0xc0c6ee0  jal         func_31BB80
    ctx->pc = 0x31AF20u;
    SET_GPR_U32(ctx, 31, 0x31AF28u);
    ctx->pc = 0x31AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF20u;
    // 0x31af24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB80u, 0x31AF20u, 0x31AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF28u;
label_31af28:
    // 0x31af28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31af28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31af2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31af2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31af30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31af30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31af34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31af38: 0x3e00008  jr          $ra
    ctx->pc = 0x31AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF38u;
        // 0x31af3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF40u;
}
