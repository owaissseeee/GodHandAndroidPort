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

// Function: func_00359848
// Address: 0x359848 - 0x3599b0
void func_00359848_0x359848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359848_0x359848");
#endif

    switch (ctx->pc) {
        case 0x359894u: goto label_359894;
        case 0x3598acu: goto label_3598ac;
        case 0x3598bcu: goto label_3598bc;
        case 0x3598fcu: goto label_3598fc;
        case 0x359910u: goto label_359910;
        case 0x359988u: goto label_359988;
        default: break;
    }

    ctx->pc = 0x359848u;

    // 0x359848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x359848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35984c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x359850: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x359850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x359854: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x359854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x359858: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x359858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35985c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x359860: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x359860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359864: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x359864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x359868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x359868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35986c: 0x8eb036b0  lw          $s0, 0x36B0($s5)
    ctx->pc = 0x35986cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14000)));
    // 0x359870: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x359870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359874: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x359874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x359878: 0x261408a0  addiu       $s4, $s0, 0x8A0
    ctx->pc = 0x359878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x35987c: 0x26110ad0  addiu       $s1, $s0, 0xAD0
    ctx->pc = 0x35987cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x359880: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x359880u;
    {
        const bool branch_taken_0x359880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359880u;
        // 0x359884: 0x26120d0c  addiu       $s2, $s0, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359880) {
            ctx->pc = 0x359988u;
            goto label_359988;
        }
    }
    ctx->pc = 0x359888u;
    // 0x359888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x359888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35988c: 0xc0d666c  jal         func_3599B0
    ctx->pc = 0x35988Cu;
    SET_GPR_U32(ctx, 31, 0x359894u);
    ctx->pc = 0x359890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35988Cu;
    // 0x359890: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3599B0u, 0x35988Cu, 0x359894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359894u;
label_359894:
    // 0x359894: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x359894u;
    {
        const bool branch_taken_0x359894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359894) {
            ctx->pc = 0x359898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359894u;
            // 0x359898: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35998Cu;
            goto label_35998c;
        }
    }
    ctx->pc = 0x35989Cu;
    // 0x35989c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3598a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3598a4: 0xc0d668c  jal         func_359A30
    ctx->pc = 0x3598A4u;
    SET_GPR_U32(ctx, 31, 0x3598ACu);
    ctx->pc = 0x3598A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598A4u;
    // 0x3598a8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359A30u, 0x3598A4u, 0x3598ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598ACu;
label_3598ac:
    // 0x3598ac: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x3598ACu;
    {
        const bool branch_taken_0x3598ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3598ac) {
            ctx->pc = 0x3598B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3598ACu;
            // 0x3598b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35998Cu;
            goto label_35998c;
        }
    }
    ctx->pc = 0x3598B4u;
    // 0x3598b4: 0xc0d66ac  jal         func_359AB0
    ctx->pc = 0x3598B4u;
    SET_GPR_U32(ctx, 31, 0x3598BCu);
    ctx->pc = 0x3598B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598B4u;
    // 0x3598b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359AB0u, 0x3598B4u, 0x3598BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598BCu;
label_3598bc:
    // 0x3598bc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3598BCu;
    {
        const bool branch_taken_0x3598bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3598C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598BCu;
        // 0x3598c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598bc) {
            ctx->pc = 0x359948u;
            goto label_359948;
        }
    }
    ctx->pc = 0x3598C4u;
    // 0x3598c4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3598c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3598c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3598c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3598cc: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3598CCu;
    {
        const bool branch_taken_0x3598cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3598cc) {
            ctx->pc = 0x3598D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3598CCu;
            // 0x3598d0: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35993Cu;
            goto label_35993c;
        }
    }
    ctx->pc = 0x3598D4u;
    // 0x3598d4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3598d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3598d8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3598D8u;
    {
        const bool branch_taken_0x3598d8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3598d8) {
            ctx->pc = 0x359908u;
            goto label_359908;
        }
    }
    ctx->pc = 0x3598E0u;
    // 0x3598e0: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x3598e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x3598e4: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3598E4u;
    {
        const bool branch_taken_0x3598e4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598E4u;
        // 0x3598e8: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598e4) {
            ctx->pc = 0x3598FCu;
            goto label_3598fc;
        }
    }
    ctx->pc = 0x3598ECu;
    // 0x3598ec: 0x58c00013  blezl       $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3598ECu;
    {
        const bool branch_taken_0x3598ec = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x3598ec) {
            ctx->pc = 0x3598F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3598ECu;
            // 0x3598f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35993Cu;
            goto label_35993c;
        }
    }
    ctx->pc = 0x3598F4u;
    // 0x3598f4: 0xc0db248  jal         func_36C920
    ctx->pc = 0x3598F4u;
    SET_GPR_U32(ctx, 31, 0x3598FCu);
    ctx->pc = 0x3598F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3598F4u;
    // 0x3598f8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x3598F4u, 0x3598FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3598FCu;
label_3598fc:
    // 0x3598fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3598FCu;
    {
        const bool branch_taken_0x3598fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598FCu;
        // 0x359900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598fc) {
            ctx->pc = 0x35993Cu;
            goto label_35993c;
        }
    }
    ctx->pc = 0x359904u;
    // 0x359904: 0x0  nop
    ctx->pc = 0x359904u;
    // NOP
label_359908:
    // 0x359908: 0xc0d36ba  jal         func_34DAE8
    ctx->pc = 0x359908u;
    SET_GPR_U32(ctx, 31, 0x359910u);
    ctx->pc = 0x35990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359908u;
    // 0x35990c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DAE8u, 0x359908u, 0x359910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359910u;
label_359910:
    // 0x359910: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x359910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x359914: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x359914u;
    {
        const bool branch_taken_0x359914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359914) {
            ctx->pc = 0x359918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359914u;
            // 0x359918: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35993Cu;
            goto label_35993c;
        }
    }
    ctx->pc = 0x35991Cu;
    // 0x35991c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x35991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x359920: 0x240307e2  addiu       $v1, $zero, 0x7E2
    ctx->pc = 0x359920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2018));
    // 0x359924: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x359924u;
    {
        const bool branch_taken_0x359924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x359924) {
            ctx->pc = 0x359928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359924u;
            // 0x359928: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35992Cu;
            goto label_35992c;
        }
    }
    ctx->pc = 0x35992Cu;
label_35992c:
    // 0x35992c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x35992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x359930: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x359930u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x359934: 0x1012  mflo        $v0
    ctx->pc = 0x359934u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x359938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x359938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35993c:
    // 0x35993c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35993Cu;
    {
        const bool branch_taken_0x35993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35993Cu;
        // 0x359940: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35993c) {
            ctx->pc = 0x359970u;
            goto label_359970;
        }
    }
    ctx->pc = 0x359944u;
    // 0x359944: 0x0  nop
    ctx->pc = 0x359944u;
    // NOP
label_359948:
    // 0x359948: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x359948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35994c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35994Cu;
    {
        const bool branch_taken_0x35994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35994Cu;
        // 0x359950: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35994c) {
            ctx->pc = 0x359960u;
            goto label_359960;
        }
    }
    ctx->pc = 0x359954u;
    // 0x359954: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x359954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x359958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x359958u;
    {
        const bool branch_taken_0x359958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359958u;
        // 0x35995c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359958) {
            ctx->pc = 0x359970u;
            goto label_359970;
        }
    }
    ctx->pc = 0x359960u;
label_359960:
    // 0x359960: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x359960u;
    {
        const bool branch_taken_0x359960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359960) {
            ctx->pc = 0x359964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359960u;
            // 0x359964: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35998Cu;
            goto label_35998c;
        }
    }
    ctx->pc = 0x359968u;
    // 0x359968: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x35996c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x35996cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_359970:
    // 0x359970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359974: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x359974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x359978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x359978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x35997c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359980: 0xc0d677c  jal         func_359DF0
    ctx->pc = 0x359980u;
    SET_GPR_U32(ctx, 31, 0x359988u);
    ctx->pc = 0x359984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359980u;
    // 0x359984: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DF0u, 0x359980u, 0x359988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359988u;
label_359988:
    // 0x359988: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x359988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35998c:
    // 0x35998c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35998cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359990: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x359990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359994: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x359994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359998: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x359998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35999c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x35999cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3599a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3599a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3599a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3599A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3599A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599A4u;
        // 0x3599a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3599A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3599ACu;
    // 0x3599ac: 0x0  nop
    ctx->pc = 0x3599acu;
    // NOP
    ctx->pc = 0x3599b0u;
}
