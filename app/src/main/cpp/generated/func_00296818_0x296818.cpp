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

// Function: func_00296818
// Address: 0x296818 - 0x296958
void func_00296818_0x296818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00296818_0x296818");
#endif

    switch (ctx->pc) {
        case 0x296838u: goto label_296838;
        case 0x296840u: goto label_296840;
        case 0x296894u: goto label_296894;
        case 0x2968d4u: goto label_2968d4;
        case 0x296900u: goto label_296900;
        case 0x29690cu: goto label_29690c;
        default: break;
    }

    ctx->pc = 0x296818u;

    // 0x296818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29681c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x296820: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x296820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x296824: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x296824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x296828: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x296828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29682c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296830: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x296830u;
    SET_GPR_U32(ctx, 31, 0x296838u);
    ctx->pc = 0x296834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296830u;
    // 0x296834: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x296830u, 0x296838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296838u;
label_296838:
    // 0x296838: 0xc04b106  jal         func_12C418
    ctx->pc = 0x296838u;
    SET_GPR_U32(ctx, 31, 0x296840u);
    ctx->pc = 0x29683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296838u;
    // 0x29683c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x296838u, 0x296840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296840u;
label_296840:
    // 0x296840: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x296844: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x296844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296848: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x296848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
    // 0x29684c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29684cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x586B34u));
    // 0x296850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296854: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x296854u;
    {
        const bool branch_taken_0x296854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296854u;
        // 0x296858: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296854) {
            ctx->pc = 0x29691Cu;
            goto label_29691c;
        }
    }
    ctx->pc = 0x29685Cu;
    // 0x29685c: 0x82430005  lb          $v1, 0x5($s2)
    ctx->pc = 0x29685cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x296860: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x296860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x296864: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x296864u;
    {
        const bool branch_taken_0x296864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296864u;
        // 0x296868: 0x92450005  lbu         $a1, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296864) {
            ctx->pc = 0x296934u;
            goto label_296934;
        }
    }
    ctx->pc = 0x29686Cu;
    // 0x29686c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x29686cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x296870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x296870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296874: 0x2442a8d0  addiu       $v0, $v0, -0x5730
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944976));
    // 0x296878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29687c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296880: 0x800008  jr          $a0
    ctx->pc = 0x296880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296888u: goto label_296888;
            case 0x2968A4u: goto label_2968a4;
            case 0x2968B8u: goto label_2968b8;
            case 0x2968C4u: goto label_2968c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296880u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296888u;
label_296888:
    // 0x296888: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x296888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x29688c: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x29688Cu;
    SET_GPR_U32(ctx, 31, 0x296894u);
    ctx->pc = 0x296890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29688Cu;
    // 0x296890: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x29688Cu, 0x296894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296894u;
label_296894:
    // 0x296894: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x296894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x296898: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29689c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29689Cu;
    {
        const bool branch_taken_0x29689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29689Cu;
        // 0x2968a0: 0xa2420005  sb          $v0, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29689c) {
            ctx->pc = 0x296934u;
            goto label_296934;
        }
    }
    ctx->pc = 0x2968A4u;
label_2968a4:
    // 0x2968a4: 0x24c36b30  addiu       $v1, $a2, 0x6B30
    ctx->pc = 0x2968a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 27440));
    // 0x2968a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2968ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2968acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2968b0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2968B0u;
    {
        const bool branch_taken_0x2968b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2968B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968B0u;
        // 0x2968b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968b0) {
            ctx->pc = 0x29691Cu;
            goto label_29691c;
        }
    }
    ctx->pc = 0x2968B8u;
label_2968b8:
    // 0x2968b8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2968b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2968bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2968BCu;
    {
        const bool branch_taken_0x2968bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968BCu;
        // 0x2968c0: 0xa2420005  sb          $v0, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968bc) {
            ctx->pc = 0x296934u;
            goto label_296934;
        }
    }
    ctx->pc = 0x2968C4u;
label_2968c4:
    // 0x2968c4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2968c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2968c8: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x2968c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x2968cc: 0xc07fbcc  jal         func_1FEF30
    ctx->pc = 0x2968CCu;
    SET_GPR_U32(ctx, 31, 0x2968D4u);
    ctx->pc = 0x2968D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968CCu;
    // 0x2968d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF30u, 0x2968CCu, 0x2968D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968D4u;
label_2968d4:
    // 0x2968d4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2968d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2968d8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2968D8u;
    {
        const bool branch_taken_0x2968d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968D8u;
        // 0x2968dc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968d8) {
            ctx->pc = 0x296918u;
            goto label_296918;
        }
    }
    ctx->pc = 0x2968E0u;
    // 0x2968e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2968e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2968e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2968e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2968e8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2968E8u;
    {
        const bool branch_taken_0x2968e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2968ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E8u;
        // 0x2968ec: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968e8) {
            ctx->pc = 0x296918u;
            goto label_296918;
        }
    }
    ctx->pc = 0x2968F0u;
    // 0x2968f0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2968f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2968f4: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x2968f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2968f8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2968f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2968fc: 0x0  nop
    ctx->pc = 0x2968fcu;
    // NOP
label_296900:
    // 0x296900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296904: 0xc07fc0a  jal         func_1FF028
    ctx->pc = 0x296904u;
    SET_GPR_U32(ctx, 31, 0x29690Cu);
    ctx->pc = 0x296908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296904u;
    // 0x296908: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF028u, 0x296904u, 0x29690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29690Cu;
label_29690c:
    // 0x29690c: 0x0  nop
    ctx->pc = 0x29690cu;
    // NOP
    // 0x296910: 0x1613fffb  bne         $s0, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x296910u;
    {
        const bool branch_taken_0x296910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x296914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296910u;
        // 0x296914: 0x2631ffa4  addiu       $s1, $s1, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296910) {
            ctx->pc = 0x296900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296900;
        }
    }
    ctx->pc = 0x296918u;
label_296918:
    // 0x296918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29691c:
    // 0x29691c: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x29691cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x296920: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x296920u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x296924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296928: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x296928u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x29692c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29692Cu;
    {
        const bool branch_taken_0x29692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29692Cu;
        // 0x296930: 0xa2400006  sb          $zero, 0x6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29692c) {
            ctx->pc = 0x296938u;
            goto label_296938;
        }
    }
    ctx->pc = 0x296934u;
label_296934:
    // 0x296934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296938:
    // 0x296938: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x296938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29693c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29693cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296944: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x296944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29694c: 0x3e00008  jr          $ra
    ctx->pc = 0x29694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29694Cu;
        // 0x296950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296954u;
    // 0x296954: 0x0  nop
    ctx->pc = 0x296954u;
    // NOP
    ctx->pc = 0x296958u;
}
