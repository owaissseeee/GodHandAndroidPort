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

// Function: func_003353F8
// Address: 0x3353f8 - 0x335500
void func_003353F8_0x3353f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003353F8_0x3353f8");
#endif

    switch (ctx->pc) {
        case 0x3353f8u: goto label_3353f8;
        case 0x3353fcu: goto label_3353fc;
        case 0x335400u: goto label_335400;
        case 0x335404u: goto label_335404;
        case 0x335408u: goto label_335408;
        case 0x33540cu: goto label_33540c;
        case 0x335410u: goto label_335410;
        case 0x335414u: goto label_335414;
        case 0x335418u: goto label_335418;
        case 0x33541cu: goto label_33541c;
        case 0x335420u: goto label_335420;
        case 0x335424u: goto label_335424;
        case 0x335428u: goto label_335428;
        case 0x33542cu: goto label_33542c;
        case 0x335430u: goto label_335430;
        case 0x335434u: goto label_335434;
        case 0x335438u: goto label_335438;
        case 0x33543cu: goto label_33543c;
        case 0x335440u: goto label_335440;
        case 0x335444u: goto label_335444;
        case 0x335448u: goto label_335448;
        case 0x33544cu: goto label_33544c;
        case 0x335450u: goto label_335450;
        case 0x335454u: goto label_335454;
        case 0x335458u: goto label_335458;
        case 0x33545cu: goto label_33545c;
        case 0x335460u: goto label_335460;
        case 0x335464u: goto label_335464;
        case 0x335468u: goto label_335468;
        case 0x33546cu: goto label_33546c;
        case 0x335470u: goto label_335470;
        case 0x335474u: goto label_335474;
        case 0x335478u: goto label_335478;
        case 0x33547cu: goto label_33547c;
        case 0x335480u: goto label_335480;
        case 0x335484u: goto label_335484;
        case 0x335488u: goto label_335488;
        case 0x33548cu: goto label_33548c;
        case 0x335490u: goto label_335490;
        case 0x335494u: goto label_335494;
        case 0x335498u: goto label_335498;
        case 0x33549cu: goto label_33549c;
        case 0x3354a0u: goto label_3354a0;
        case 0x3354a4u: goto label_3354a4;
        case 0x3354a8u: goto label_3354a8;
        case 0x3354acu: goto label_3354ac;
        case 0x3354b0u: goto label_3354b0;
        case 0x3354b4u: goto label_3354b4;
        case 0x3354b8u: goto label_3354b8;
        case 0x3354bcu: goto label_3354bc;
        case 0x3354c0u: goto label_3354c0;
        case 0x3354c4u: goto label_3354c4;
        case 0x3354c8u: goto label_3354c8;
        case 0x3354ccu: goto label_3354cc;
        case 0x3354d0u: goto label_3354d0;
        case 0x3354d4u: goto label_3354d4;
        case 0x3354d8u: goto label_3354d8;
        case 0x3354dcu: goto label_3354dc;
        case 0x3354e0u: goto label_3354e0;
        case 0x3354e4u: goto label_3354e4;
        case 0x3354e8u: goto label_3354e8;
        case 0x3354ecu: goto label_3354ec;
        case 0x3354f0u: goto label_3354f0;
        case 0x3354f4u: goto label_3354f4;
        case 0x3354f8u: goto label_3354f8;
        case 0x3354fcu: goto label_3354fc;
        default: break;
    }

    ctx->pc = 0x3353f8u;

label_3353f8:
    // 0x3353f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3353f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3353fc:
    // 0x3353fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3353fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_335400:
    // 0x335400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335404:
    // 0x335404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x335404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_335408:
    // 0x335408: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x335408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_33540c:
    // 0x33540c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_335410:
    if (ctx->pc == 0x335410u) {
        ctx->pc = 0x335410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33540Cu;
        // 0x335410: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335414u;
        goto label_335414;
    }
    ctx->pc = 0x33540Cu;
    {
        const bool branch_taken_0x33540c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x335410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33540Cu;
        // 0x335410: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33540c) {
            ctx->pc = 0x335428u;
            goto label_335428;
        }
    }
    ctx->pc = 0x335414u;
label_335414:
    // 0x335414: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_335418:
    // 0x335418: 0xc0cd750  jal         func_335D40
label_33541c:
    if (ctx->pc == 0x33541Cu) {
        ctx->pc = 0x33541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335418u;
        // 0x33541c: 0x24844bb8  addiu       $a0, $a0, 0x4BB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335420u;
        goto label_335420;
    }
    ctx->pc = 0x335418u;
    SET_GPR_U32(ctx, 31, 0x335420u);
    ctx->pc = 0x33541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335418u;
    // 0x33541c: 0x24844bb8  addiu       $a0, $a0, 0x4BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335418u, 0x335420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335420u;
label_335420:
    // 0x335420: 0x10000031  b           . + 4 + (0x31 << 2)
label_335424:
    if (ctx->pc == 0x335424u) {
        ctx->pc = 0x335424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335420u;
        // 0x335424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335428u;
        goto label_335428;
    }
    ctx->pc = 0x335420u;
    {
        const bool branch_taken_0x335420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335420u;
        // 0x335424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335420) {
            ctx->pc = 0x3354E8u;
            goto label_3354e8;
        }
    }
    ctx->pc = 0x335428u;
label_335428:
    // 0x335428: 0xc0cd73a  jal         func_335CE8
label_33542c:
    if (ctx->pc == 0x33542Cu) {
        ctx->pc = 0x33542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335428u;
        // 0x33542c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335430u;
        goto label_335430;
    }
    ctx->pc = 0x335428u;
    SET_GPR_U32(ctx, 31, 0x335430u);
    ctx->pc = 0x33542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335428u;
    // 0x33542c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE8u, 0x335428u, 0x335430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335430u;
label_335430:
    // 0x335430: 0xc0cd4d8  jal         func_335360
label_335434:
    if (ctx->pc == 0x335434u) {
        ctx->pc = 0x335438u;
        goto label_335438;
    }
    ctx->pc = 0x335430u;
    SET_GPR_U32(ctx, 31, 0x335438u);
    ctx->pc = 0x335360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335360u, 0x335430u, 0x335438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335438u;
label_335438:
    // 0x335438: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x335438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33543c:
    // 0x33543c: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_335440:
    if (ctx->pc == 0x335440u) {
        ctx->pc = 0x335440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33543Cu;
        // 0x335440: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335444u;
        goto label_335444;
    }
    ctx->pc = 0x33543Cu;
    {
        const bool branch_taken_0x33543c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x33543c) {
            ctx->pc = 0x335440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33543Cu;
            // 0x335440: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335458u;
            goto label_335458;
        }
    }
    ctx->pc = 0x335444u;
label_335444:
    // 0x335444: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_335448:
    // 0x335448: 0xc0cd750  jal         func_335D40
label_33544c:
    if (ctx->pc == 0x33544Cu) {
        ctx->pc = 0x33544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335448u;
        // 0x33544c: 0x24844be8  addiu       $a0, $a0, 0x4BE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335450u;
        goto label_335450;
    }
    ctx->pc = 0x335448u;
    SET_GPR_U32(ctx, 31, 0x335450u);
    ctx->pc = 0x33544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335448u;
    // 0x33544c: 0x24844be8  addiu       $a0, $a0, 0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335448u, 0x335450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335450u;
label_335450:
    // 0x335450: 0x10000022  b           . + 4 + (0x22 << 2)
label_335454:
    if (ctx->pc == 0x335454u) {
        ctx->pc = 0x335458u;
        goto label_335458;
    }
    ctx->pc = 0x335450u;
    {
        const bool branch_taken_0x335450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335450) {
            ctx->pc = 0x3354DCu;
            goto label_3354dc;
        }
    }
    ctx->pc = 0x335458u;
label_335458:
    // 0x335458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33545c:
    // 0x33545c: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x33545cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_335460:
    // 0x335460: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x335460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_335464:
    // 0x335464: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x335464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_335468:
    // 0x335468: 0x40f809  jalr        $v0
label_33546c:
    if (ctx->pc == 0x33546Cu) {
        ctx->pc = 0x33546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335468u;
        // 0x33546c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335470u;
        goto label_335470;
    }
    ctx->pc = 0x335468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x335470u);
        ctx->pc = 0x33546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335468u;
        // 0x33546c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335468u, 0x335470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335470u;
label_335470:
    // 0x335470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x335470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_335474:
    // 0x335474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x335474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_335478:
    // 0x335478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33547c:
    // 0x33547c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_335480:
    // 0x335480: 0x40f809  jalr        $v0
label_335484:
    if (ctx->pc == 0x335484u) {
        ctx->pc = 0x335484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335480u;
        // 0x335484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335488u;
        goto label_335488;
    }
    ctx->pc = 0x335480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x335488u);
        ctx->pc = 0x335484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335480u;
        // 0x335484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335480u, 0x335488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335488u;
label_335488:
    // 0x335488: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x335488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33548c:
    // 0x33548c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33548cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_335490:
    // 0x335490: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x335490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_335494:
    // 0x335494: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x335494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_335498:
    // 0x335498: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x335498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_33549c:
    // 0x33549c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x33549cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3354a0:
    // 0x3354a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3354a4:
    if (ctx->pc == 0x3354A4u) {
        ctx->pc = 0x3354A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354A0u;
        // 0x3354a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3354A8u;
        goto label_3354a8;
    }
    ctx->pc = 0x3354A0u;
    {
        const bool branch_taken_0x3354a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354a0) {
            ctx->pc = 0x3354A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3354A0u;
            // 0x3354a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3354A8u;
            goto label_3354a8;
        }
    }
    ctx->pc = 0x3354A8u;
label_3354a8:
    // 0x3354a8: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x3354a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_3354ac:
    // 0x3354ac: 0x1012  mflo        $v0
    ctx->pc = 0x3354acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3354b0:
    // 0x3354b0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3354b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3354b4:
    // 0x3354b4: 0x0  nop
    ctx->pc = 0x3354b4u;
    // NOP
label_3354b8:
    // 0x3354b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3354b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3354bc:
    // 0x3354bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3354bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3354c0:
    // 0x3354c0: 0x0  nop
    ctx->pc = 0x3354c0u;
    // NOP
label_3354c4:
    // 0x3354c4: 0x0  nop
    ctx->pc = 0x3354c4u;
    // NOP
label_3354c8:
    // 0x3354c8: 0x0  nop
    ctx->pc = 0x3354c8u;
    // NOP
label_3354cc:
    // 0x3354cc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_3354d0:
    if (ctx->pc == 0x3354D0u) {
        ctx->pc = 0x3354D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354CCu;
        // 0x3354d0: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3354D4u;
        goto label_3354d4;
    }
    ctx->pc = 0x3354CCu;
    {
        const bool branch_taken_0x3354cc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3354D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354CCu;
        // 0x3354d0: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354cc) {
            ctx->pc = 0x3354B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3354b8;
        }
    }
    ctx->pc = 0x3354D4u;
label_3354d4:
    // 0x3354d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3354d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3354d8:
    // 0x3354d8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3354d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_3354dc:
    // 0x3354dc: 0xc0cd740  jal         func_335D00
label_3354e0:
    if (ctx->pc == 0x3354E0u) {
        ctx->pc = 0x3354E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354DCu;
        // 0x3354e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3354E4u;
        goto label_3354e4;
    }
    ctx->pc = 0x3354DCu;
    SET_GPR_U32(ctx, 31, 0x3354E4u);
    ctx->pc = 0x3354E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354DCu;
    // 0x3354e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D00u, 0x3354DCu, 0x3354E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354E4u;
label_3354e4:
    // 0x3354e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3354e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3354e8:
    // 0x3354e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3354e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3354ec:
    // 0x3354ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3354ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3354f0:
    // 0x3354f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3354f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3354f4:
    // 0x3354f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3354f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3354f8:
    // 0x3354f8: 0x3e00008  jr          $ra
label_3354fc:
    if (ctx->pc == 0x3354FCu) {
        ctx->pc = 0x3354FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354F8u;
        // 0x3354fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335500u;
        goto label_fallthrough_0x3354f8;
    }
    ctx->pc = 0x3354F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3354FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354F8u;
        // 0x3354fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3354F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3354f8:
    ctx->pc = 0x335500u;
}
