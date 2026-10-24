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

// Function: func_003823E0
// Address: 0x3823e0 - 0x382520
void func_003823E0_0x3823e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003823E0_0x3823e0");
#endif

    switch (ctx->pc) {
        case 0x382450u: goto label_382450;
        case 0x382478u: goto label_382478;
        case 0x3824a8u: goto label_3824a8;
        case 0x3824b8u: goto label_3824b8;
        case 0x3824d0u: goto label_3824d0;
        case 0x3824dcu: goto label_3824dc;
        case 0x3824f0u: goto label_3824f0;
        default: break;
    }

    ctx->pc = 0x3823e0u;

    // 0x3823e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3823e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3823e4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3823e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3823e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3823e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3823ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3823ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3823f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3823f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3823f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3823f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3823f8: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x3823f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3823fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3823fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x382400: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x382400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x382404: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x382404u;
    {
        const bool branch_taken_0x382404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x382408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382404u;
        // 0x382408: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382404) {
            ctx->pc = 0x382424u;
            goto label_382424;
        }
    }
    ctx->pc = 0x38240Cu;
    // 0x38240c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x38240cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382410: 0x26110022  addiu       $s1, $s0, 0x22
    ctx->pc = 0x382410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
    // 0x382414: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x382414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382418: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38241c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38241Cu;
    {
        const bool branch_taken_0x38241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38241Cu;
        // 0x382420: 0x24420022  addiu       $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38241c) {
            ctx->pc = 0x382438u;
            goto label_382438;
        }
    }
    ctx->pc = 0x382424u;
label_382424:
    // 0x382424: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382428: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x382428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x38242c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38242cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382430: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382434: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x382434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_382438:
    // 0x382438: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x382438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38243c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x38243cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382440: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x382440u;
    {
        const bool branch_taken_0x382440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382440u;
        // 0x382444: 0x26230002  addiu       $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382440) {
            ctx->pc = 0x382470u;
            goto label_382470;
        }
    }
    ctx->pc = 0x382448u;
    // 0x382448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38244c: 0x0  nop
    ctx->pc = 0x38244cu;
    // NOP
label_382450:
    // 0x382450: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x382450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382454: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x382454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x382458: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x382458u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x38245c: 0x0  nop
    ctx->pc = 0x38245cu;
    // NOP
    // 0x382460: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x382460u;
    {
        const bool branch_taken_0x382460 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x382464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382460u;
        // 0x382464: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382460) {
            ctx->pc = 0x382450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382450;
        }
    }
    ctx->pc = 0x382468u;
    // 0x382468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x382468u;
    {
        const bool branch_taken_0x382468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382468u;
        // 0x38246c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382468) {
            ctx->pc = 0x38248Cu;
            goto label_38248c;
        }
    }
    ctx->pc = 0x382470u;
label_382470:
    // 0x382470: 0xc0e0948  jal         func_382520
    ctx->pc = 0x382470u;
    SET_GPR_U32(ctx, 31, 0x382478u);
    ctx->pc = 0x382474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382470u;
    // 0x382474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382520u, 0x382470u, 0x382478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382478u;
label_382478:
    // 0x382478: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x382478u;
    {
        const bool branch_taken_0x382478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382478) {
            ctx->pc = 0x38247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382478u;
            // 0x38247c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38248Cu;
            goto label_38248c;
        }
    }
    ctx->pc = 0x382480u;
    // 0x382480: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x382480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x382484: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x382484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x382488: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x382488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_38248c:
    // 0x38248c: 0x5080001d  beql        $a0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x38248Cu;
    {
        const bool branch_taken_0x38248c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38248c) {
            ctx->pc = 0x382490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38248Cu;
            // 0x382490: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382504u;
            goto label_382504;
        }
    }
    ctx->pc = 0x382494u;
    // 0x382494: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382498: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x382498u;
    {
        const bool branch_taken_0x382498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382498u;
        // 0x38249c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382498) {
            ctx->pc = 0x3824C0u;
            goto label_3824c0;
        }
    }
    ctx->pc = 0x3824A0u;
    // 0x3824a0: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x3824A0u;
    SET_GPR_U32(ctx, 31, 0x3824A8u);
    ctx->pc = 0x3824A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824A0u;
    // 0x3824a4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x3824A0u, 0x3824A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824A8u;
label_3824a8:
    // 0x3824a8: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x3824a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3824ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3824acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3824b0: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x3824B0u;
    SET_GPR_U32(ctx, 31, 0x3824B8u);
    ctx->pc = 0x3824B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824B0u;
    // 0x3824b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x3824B0u, 0x3824B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824B8u;
label_3824b8:
    // 0x3824b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3824B8u;
    {
        const bool branch_taken_0x3824b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3824BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B8u;
        // 0x3824bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824b8) {
            ctx->pc = 0x382504u;
            goto label_382504;
        }
    }
    ctx->pc = 0x3824C0u;
label_3824c0:
    // 0x3824c0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3824c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3824c4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3824C4u;
    {
        const bool branch_taken_0x3824c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3824C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824C4u;
        // 0x3824c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824c4) {
            ctx->pc = 0x382500u;
            goto label_382500;
        }
    }
    ctx->pc = 0x3824CCu;
    // 0x3824cc: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3824ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3824d0:
    // 0x3824d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3824d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3824d4: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x3824D4u;
    SET_GPR_U32(ctx, 31, 0x3824DCu);
    ctx->pc = 0x3824D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824D4u;
    // 0x3824d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x3824D4u, 0x3824DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824DCu;
label_3824dc:
    // 0x3824dc: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x3824dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3824e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3824e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3824e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3824e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3824e8: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x3824E8u;
    SET_GPR_U32(ctx, 31, 0x3824F0u);
    ctx->pc = 0x3824ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824E8u;
    // 0x3824ec: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x3824E8u, 0x3824F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824F0u;
label_3824f0:
    // 0x3824f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3824f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3824f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3824f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3824f8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3824F8u;
    {
        const bool branch_taken_0x3824f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3824f8) {
            ctx->pc = 0x3824FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3824F8u;
            // 0x3824fc: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3824D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3824d0;
        }
    }
    ctx->pc = 0x382500u;
label_382500:
    // 0x382500: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x382500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_382504:
    // 0x382504: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x382504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382508: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x382508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38250c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38250cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382510: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x382510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382518: 0x3e00008  jr          $ra
    ctx->pc = 0x382518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382518u;
        // 0x38251c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382520u;
}
