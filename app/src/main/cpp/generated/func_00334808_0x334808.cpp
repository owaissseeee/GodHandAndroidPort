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

// Function: func_00334808
// Address: 0x334808 - 0x334998
void func_00334808_0x334808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334808_0x334808");
#endif

    switch (ctx->pc) {
        case 0x33486cu: goto label_33486c;
        case 0x334880u: goto label_334880;
        case 0x3348b8u: goto label_3348b8;
        case 0x3348fcu: goto label_3348fc;
        case 0x334914u: goto label_334914;
        case 0x334934u: goto label_334934;
        case 0x33493cu: goto label_33493c;
        case 0x334954u: goto label_334954;
        default: break;
    }

    ctx->pc = 0x334808u;

    // 0x334808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33480c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334814: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334818: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x334818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33481c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x334820: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x334820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x334828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33482c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x334830: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334830u;
    {
        const bool branch_taken_0x334830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x334834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334830u;
        // 0x334834: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334830) {
            ctx->pc = 0x334848u;
            goto label_334848;
        }
    }
    ctx->pc = 0x334838u;
    // 0x334838: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33483c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33483Cu;
    {
        const bool branch_taken_0x33483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33483Cu;
        // 0x334840: 0x24a54960  addiu       $a1, $a1, 0x4960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33483c) {
            ctx->pc = 0x334864u;
            goto label_334864;
        }
    }
    ctx->pc = 0x334844u;
    // 0x334844: 0x0  nop
    ctx->pc = 0x334844u;
    // NOP
label_334848:
    // 0x334848: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x334848u;
    {
        const bool branch_taken_0x334848 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x33484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334848u;
        // 0x33484c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334848) {
            ctx->pc = 0x334858u;
            goto label_334858;
        }
    }
    ctx->pc = 0x334850u;
    // 0x334850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334850u;
    {
        const bool branch_taken_0x334850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334850u;
        // 0x334854: 0x24a54978  addiu       $a1, $a1, 0x4978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334850) {
            ctx->pc = 0x334864u;
            goto label_334864;
        }
    }
    ctx->pc = 0x334858u;
label_334858:
    // 0x334858: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x334858u;
    {
        const bool branch_taken_0x334858 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x33485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334858u;
        // 0x33485c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334858) {
            ctx->pc = 0x334878u;
            goto label_334878;
        }
    }
    ctx->pc = 0x334860u;
    // 0x334860: 0x24a54998  addiu       $a1, $a1, 0x4998
    ctx->pc = 0x334860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18840));
label_334864:
    // 0x334864: 0xc0cd002  jal         func_334008
    ctx->pc = 0x334864u;
    SET_GPR_U32(ctx, 31, 0x33486Cu);
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x334864u, 0x33486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33486Cu;
label_33486c:
    // 0x33486c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x33486Cu;
    {
        const bool branch_taken_0x33486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33486Cu;
        // 0x334870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33486c) {
            ctx->pc = 0x334974u;
            goto label_334974;
        }
    }
    ctx->pc = 0x334874u;
    // 0x334874: 0x0  nop
    ctx->pc = 0x334874u;
    // NOP
label_334878:
    // 0x334878: 0xc0cd00e  jal         func_334038
    ctx->pc = 0x334878u;
    SET_GPR_U32(ctx, 31, 0x334880u);
    ctx->pc = 0x33487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334878u;
    // 0x33487c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334038u, 0x334878u, 0x334880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334880u;
label_334880:
    // 0x334880: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x334880u;
    {
        const bool branch_taken_0x334880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x334880) {
            ctx->pc = 0x334884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334880u;
            // 0x334884: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334890u;
            goto label_334890;
        }
    }
    ctx->pc = 0x334888u;
    // 0x334888: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x334888u;
    {
        const bool branch_taken_0x334888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334888u;
        // 0x33488c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334888) {
            ctx->pc = 0x334974u;
            goto label_334974;
        }
    }
    ctx->pc = 0x334890u;
label_334890:
    // 0x334890: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x334890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334894: 0x10750037  beq         $v1, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x334894u;
    {
        const bool branch_taken_0x334894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x334898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334894u;
        // 0x334898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334894) {
            ctx->pc = 0x334974u;
            goto label_334974;
        }
    }
    ctx->pc = 0x33489Cu;
    // 0x33489c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33489Cu;
    {
        const bool branch_taken_0x33489c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x33489c) {
            ctx->pc = 0x3348B0u;
            goto label_3348b0;
        }
    }
    ctx->pc = 0x3348A4u;
    // 0x3348a4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3348A4u;
    {
        const bool branch_taken_0x3348a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348A4u;
        // 0x3348a8: 0xa2340002  sb          $s4, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348a4) {
            ctx->pc = 0x334974u;
            goto label_334974;
        }
    }
    ctx->pc = 0x3348ACu;
    // 0x3348ac: 0x0  nop
    ctx->pc = 0x3348acu;
    // NOP
label_3348b0:
    // 0x3348b0: 0xc0cc3fa  jal         func_330FE8
    ctx->pc = 0x3348B0u;
    SET_GPR_U32(ctx, 31, 0x3348B8u);
    ctx->pc = 0x330FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330FE8u, 0x3348B0u, 0x3348B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348B8u;
label_3348b8:
    // 0x3348b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3348b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348bc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3348BCu;
    {
        const bool branch_taken_0x3348bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348BCu;
        // 0x3348c0: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348bc) {
            ctx->pc = 0x334974u;
            goto label_334974;
        }
    }
    ctx->pc = 0x3348C4u;
    // 0x3348c4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3348c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3348c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3348c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3348ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3348d0: 0x1282c0  sll         $s0, $s2, 11
    ctx->pc = 0x3348d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x3348d4: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x3348d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3348d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3348d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3348dc: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x3348dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x3348e0: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x3348e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3348e4: 0xf0302b  sltu        $a2, $a3, $s0
    ctx->pc = 0x3348e4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3348e8: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x3348e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3348ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3348ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348f0: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x3348f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x3348f4: 0xc0cd024  jal         func_334090
    ctx->pc = 0x3348F4u;
    SET_GPR_U32(ctx, 31, 0x3348FCu);
    ctx->pc = 0x3348F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3348F4u;
    // 0x3348f8: 0xe6800b  movn        $s0, $a3, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334090u, 0x3348F4u, 0x3348FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348FCu;
label_3348fc:
    // 0x3348fc: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3348fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x334900: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x334900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x334904: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x334904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334908: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x334908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x33490c: 0xc0cc480  jal         func_331200
    ctx->pc = 0x33490Cu;
    SET_GPR_U32(ctx, 31, 0x334914u);
    ctx->pc = 0x334910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33490Cu;
    // 0x334910: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331200u, 0x33490Cu, 0x334914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334914u;
label_334914:
    // 0x334914: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x334914u;
    {
        const bool branch_taken_0x334914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334914u;
        // 0x334918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334914) {
            ctx->pc = 0x334978u;
            goto label_334978;
        }
    }
    ctx->pc = 0x33491Cu;
    // 0x33491c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x334920: 0x8c50a390  lw          $s0, -0x5C70($v0)
    ctx->pc = 0x334920u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3DA390u));
    // 0x334924: 0x56140010  bnel        $s0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x334924u;
    {
        const bool branch_taken_0x334924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x334924) {
            ctx->pc = 0x334928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334924u;
            // 0x334928: 0xa2350002  sb          $s5, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334968u;
            goto label_334968;
        }
    }
    ctx->pc = 0x33492Cu;
    // 0x33492c: 0xc0cc6fc  jal         func_331BF0
    ctx->pc = 0x33492Cu;
    SET_GPR_U32(ctx, 31, 0x334934u);
    ctx->pc = 0x331BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BF0u, 0x33492Cu, 0x334934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334934u;
label_334934:
    // 0x334934: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x334934u;
    SET_GPR_U32(ctx, 31, 0x33493Cu);
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x334934u, 0x33493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33493Cu;
label_33493c:
    // 0x33493c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x334940: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x334940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x334944: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x334944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x334948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33494c: 0xc0cc41c  jal         func_331070
    ctx->pc = 0x33494Cu;
    SET_GPR_U32(ctx, 31, 0x334954u);
    ctx->pc = 0x334950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33494Cu;
    // 0x334950: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331070u, 0x33494Cu, 0x334954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334954u;
label_334954:
    // 0x334954: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x334954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x334958: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x334958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x33495c: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x33495cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x334960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x334960u;
    {
        const bool branch_taken_0x334960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334960u;
        // 0x334964: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334960) {
            ctx->pc = 0x334970u;
            goto label_334970;
        }
    }
    ctx->pc = 0x334968u;
label_334968:
    // 0x334968: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x334968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x33496c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x33496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_334970:
    // 0x334970: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x334970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_334974:
    // 0x334974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334978:
    // 0x334978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33497c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33497cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334984: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x334984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334988: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x334988u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33498c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334990: 0x3e00008  jr          $ra
    ctx->pc = 0x334990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334990u;
        // 0x334994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334998u;
}
