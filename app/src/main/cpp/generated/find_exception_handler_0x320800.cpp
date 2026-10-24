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

// Function: find_exception_handler
// Address: 0x320800 - 0x320948
void find_exception_handler_0x320800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("find_exception_handler_0x320800");
#endif

    switch (ctx->pc) {
        case 0x320800u: goto label_320800;
        case 0x320804u: goto label_320804;
        case 0x320808u: goto label_320808;
        case 0x32080cu: goto label_32080c;
        case 0x320810u: goto label_320810;
        case 0x320814u: goto label_320814;
        case 0x320818u: goto label_320818;
        case 0x32081cu: goto label_32081c;
        case 0x320820u: goto label_320820;
        case 0x320824u: goto label_320824;
        case 0x320828u: goto label_320828;
        case 0x32082cu: goto label_32082c;
        case 0x320830u: goto label_320830;
        case 0x320834u: goto label_320834;
        case 0x320838u: goto label_320838;
        case 0x32083cu: goto label_32083c;
        case 0x320840u: goto label_320840;
        case 0x320844u: goto label_320844;
        case 0x320848u: goto label_320848;
        case 0x32084cu: goto label_32084c;
        case 0x320850u: goto label_320850;
        case 0x320854u: goto label_320854;
        case 0x320858u: goto label_320858;
        case 0x32085cu: goto label_32085c;
        case 0x320860u: goto label_320860;
        case 0x320864u: goto label_320864;
        case 0x320868u: goto label_320868;
        case 0x32086cu: goto label_32086c;
        case 0x320870u: goto label_320870;
        case 0x320874u: goto label_320874;
        case 0x320878u: goto label_320878;
        case 0x32087cu: goto label_32087c;
        case 0x320880u: goto label_320880;
        case 0x320884u: goto label_320884;
        case 0x320888u: goto label_320888;
        case 0x32088cu: goto label_32088c;
        case 0x320890u: goto label_320890;
        case 0x320894u: goto label_320894;
        case 0x320898u: goto label_320898;
        case 0x32089cu: goto label_32089c;
        case 0x3208a0u: goto label_3208a0;
        case 0x3208a4u: goto label_3208a4;
        case 0x3208a8u: goto label_3208a8;
        case 0x3208acu: goto label_3208ac;
        case 0x3208b0u: goto label_3208b0;
        case 0x3208b4u: goto label_3208b4;
        case 0x3208b8u: goto label_3208b8;
        case 0x3208bcu: goto label_3208bc;
        case 0x3208c0u: goto label_3208c0;
        case 0x3208c4u: goto label_3208c4;
        case 0x3208c8u: goto label_3208c8;
        case 0x3208ccu: goto label_3208cc;
        case 0x3208d0u: goto label_3208d0;
        case 0x3208d4u: goto label_3208d4;
        case 0x3208d8u: goto label_3208d8;
        case 0x3208dcu: goto label_3208dc;
        case 0x3208e0u: goto label_3208e0;
        case 0x3208e4u: goto label_3208e4;
        case 0x3208e8u: goto label_3208e8;
        case 0x3208ecu: goto label_3208ec;
        case 0x3208f0u: goto label_3208f0;
        case 0x3208f4u: goto label_3208f4;
        case 0x3208f8u: goto label_3208f8;
        case 0x3208fcu: goto label_3208fc;
        case 0x320900u: goto label_320900;
        case 0x320904u: goto label_320904;
        case 0x320908u: goto label_320908;
        case 0x32090cu: goto label_32090c;
        case 0x320910u: goto label_320910;
        case 0x320914u: goto label_320914;
        case 0x320918u: goto label_320918;
        case 0x32091cu: goto label_32091c;
        case 0x320920u: goto label_320920;
        case 0x320924u: goto label_320924;
        case 0x320928u: goto label_320928;
        case 0x32092cu: goto label_32092c;
        case 0x320930u: goto label_320930;
        case 0x320934u: goto label_320934;
        case 0x320938u: goto label_320938;
        case 0x32093cu: goto label_32093c;
        case 0x320940u: goto label_320940;
        case 0x320944u: goto label_320944;
        default: break;
    }

    ctx->pc = 0x320800u;

label_320800:
    // 0x320800: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x320800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_320804:
    // 0x320804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320808:
    // 0x320808: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x320808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_32080c:
    // 0x32080c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x32080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_320810:
    // 0x320810: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x320810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_320814:
    // 0x320814: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x320814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_320818:
    // 0x320818: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x320818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32081c:
    // 0x32081c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x32081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_320820:
    // 0x320820: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x320820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320824:
    // 0x320824: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x320824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_320828:
    // 0x320828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x320828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32082c:
    // 0x32082c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x32082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_320830:
    // 0x320830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x320830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320834:
    // 0x320834: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x320834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_320838:
    // 0x320838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32083c:
    // 0x32083c: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_320840:
    if (ctx->pc == 0x320840u) {
        ctx->pc = 0x320840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32083Cu;
        // 0x320840: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320844u;
        goto label_320844;
    }
    ctx->pc = 0x32083Cu;
    {
        const bool branch_taken_0x32083c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x320840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32083Cu;
        // 0x320840: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32083c) {
            ctx->pc = 0x320918u;
            goto label_320918;
        }
    }
    ctx->pc = 0x320844u;
label_320844:
    // 0x320844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320848:
    // 0x320848: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_32084c:
    if (ctx->pc == 0x32084Cu) {
        ctx->pc = 0x32084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320848u;
        // 0x32084c: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320850u;
        goto label_320850;
    }
    ctx->pc = 0x320848u;
    {
        const bool branch_taken_0x320848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x32084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320848u;
        // 0x32084c: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320848) {
            ctx->pc = 0x32087Cu;
            goto label_32087c;
        }
    }
    ctx->pc = 0x320850u;
label_320850:
    // 0x320850: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_320854:
    // 0x320854: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x320854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_320858:
    // 0x320858: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x320858u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_32085c:
    // 0x32085c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x32085cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_320860:
    // 0x320860: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x320860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_320864:
    // 0x320864: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_320868:
    // 0x320868: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x320868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_32086c:
    // 0x32086c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_320870:
    // 0x320870: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320870u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_320874:
    // 0x320874: 0x10000002  b           . + 4 + (0x2 << 2)
label_320878:
    if (ctx->pc == 0x320878u) {
        ctx->pc = 0x320878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320874u;
        // 0x320878: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32087Cu;
        goto label_32087c;
    }
    ctx->pc = 0x320874u;
    {
        const bool branch_taken_0x320874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320874u;
        // 0x320878: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320874) {
            ctx->pc = 0x320880u;
            goto label_320880;
        }
    }
    ctx->pc = 0x32087Cu;
label_32087c:
    // 0x32087c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32087cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_320880:
    // 0x320880: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_320884:
    // 0x320884: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_320888:
    // 0x320888: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_32088c:
    // 0x32088c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x32088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_320890:
    // 0x320890: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x320890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_320894:
    // 0x320894: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_320898:
    if (ctx->pc == 0x320898u) {
        ctx->pc = 0x320898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320894u;
        // 0x320898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32089Cu;
        goto label_32089c;
    }
    ctx->pc = 0x320894u;
    {
        const bool branch_taken_0x320894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x320898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320894u;
        // 0x320898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320894) {
            ctx->pc = 0x320918u;
            goto label_320918;
        }
    }
    ctx->pc = 0x32089Cu;
label_32089c:
    // 0x32089c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x32089cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_3208a0:
    // 0x3208a0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3208a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_3208a4:
    // 0x3208a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3208a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3208a8:
    // 0x3208a8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3208a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3208ac:
    // 0x3208ac: 0x0  nop
    ctx->pc = 0x3208acu;
    // NOP
label_3208b0:
    // 0x3208b0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3208b4:
    if (ctx->pc == 0x3208B4u) {
        ctx->pc = 0x3208B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208B0u;
        // 0x3208b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208B8u;
        goto label_3208b8;
    }
    ctx->pc = 0x3208B0u;
    {
        const bool branch_taken_0x3208b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3208b0) {
            ctx->pc = 0x3208B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3208B0u;
            // 0x3208b4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32090Cu;
            goto label_32090c;
        }
    }
    ctx->pc = 0x3208B8u;
label_3208b8:
    // 0x3208b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3208bc:
    // 0x3208bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3208bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3208c0:
    // 0x3208c0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_3208c4:
    if (ctx->pc == 0x3208C4u) {
        ctx->pc = 0x3208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208C0u;
        // 0x3208c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208C8u;
        goto label_3208c8;
    }
    ctx->pc = 0x3208C0u;
    {
        const bool branch_taken_0x3208c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208c0) {
            ctx->pc = 0x3208C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3208C0u;
            // 0x3208c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32090Cu;
            goto label_32090c;
        }
    }
    ctx->pc = 0x3208C8u;
label_3208c8:
    // 0x3208c8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3208c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3208cc:
    // 0x3208cc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3208d0:
    if (ctx->pc == 0x3208D0u) {
        ctx->pc = 0x3208D4u;
        goto label_3208d4;
    }
    ctx->pc = 0x3208CCu;
    {
        const bool branch_taken_0x3208cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208cc) {
            ctx->pc = 0x320900u;
            goto label_320900;
        }
    }
    ctx->pc = 0x3208D4u;
label_3208d4:
    // 0x3208d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3208d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3208d8:
    // 0x3208d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3208dc:
    if (ctx->pc == 0x3208DCu) {
        ctx->pc = 0x3208DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208D8u;
        // 0x3208dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208E0u;
        goto label_3208e0;
    }
    ctx->pc = 0x3208D8u;
    {
        const bool branch_taken_0x3208d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208D8u;
        // 0x3208dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208d8) {
            ctx->pc = 0x320908u;
            goto label_320908;
        }
    }
    ctx->pc = 0x3208E0u;
label_3208e0:
    // 0x3208e0: 0x40f809  jalr        $v0
label_3208e4:
    if (ctx->pc == 0x3208E4u) {
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208E8u;
        goto label_3208e8;
    }
    ctx->pc = 0x3208E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3208E8u);
        ctx->pc = 0x3208E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E0u;
        // 0x3208e4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208E0u, 0x3208E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3208E8u;
label_3208e8:
    // 0x3208e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3208ec:
    if (ctx->pc == 0x3208ECu) {
        ctx->pc = 0x3208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208E8u;
        // 0x3208ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208F0u;
        goto label_3208f0;
    }
    ctx->pc = 0x3208E8u;
    {
        const bool branch_taken_0x3208e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208e8) {
            ctx->pc = 0x3208ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3208E8u;
            // 0x3208ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32090Cu;
            goto label_32090c;
        }
    }
    ctx->pc = 0x3208F0u;
label_3208f0:
    // 0x3208f0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_3208f4:
    if (ctx->pc == 0x3208F4u) {
        ctx->pc = 0x3208F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208F0u;
        // 0x3208f4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3208F8u;
        goto label_3208f8;
    }
    ctx->pc = 0x3208F0u;
    {
        const bool branch_taken_0x3208f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208f0) {
            ctx->pc = 0x3208F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3208F0u;
            // 0x3208f4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3208F8u;
            goto label_3208f8;
        }
    }
    ctx->pc = 0x3208F8u;
label_3208f8:
    // 0x3208f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3208fc:
    if (ctx->pc == 0x3208FCu) {
        ctx->pc = 0x3208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208F8u;
        // 0x3208fc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320900u;
        goto label_320900;
    }
    ctx->pc = 0x3208F8u;
    {
        const bool branch_taken_0x3208f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3208FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208F8u;
        // 0x3208fc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208f8) {
            ctx->pc = 0x320918u;
            goto label_320918;
        }
    }
    ctx->pc = 0x320900u;
label_320900:
    // 0x320900: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_320904:
    if (ctx->pc == 0x320904u) {
        ctx->pc = 0x320904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320900u;
        // 0x320904: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320908u;
        goto label_320908;
    }
    ctx->pc = 0x320900u;
    {
        const bool branch_taken_0x320900 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x320900) {
            ctx->pc = 0x320904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320900u;
            // 0x320904: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320908u;
            goto label_320908;
        }
    }
    ctx->pc = 0x320908u;
label_320908:
    // 0x320908: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x320908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_32090c:
    // 0x32090c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_320910:
    // 0x320910: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
label_320914:
    if (ctx->pc == 0x320914u) {
        ctx->pc = 0x320914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320910u;
        // 0x320914: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320918u;
        goto label_320918;
    }
    ctx->pc = 0x320910u;
    {
        const bool branch_taken_0x320910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x320914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320910u;
        // 0x320914: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320910) {
            ctx->pc = 0x3208B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3208b0;
        }
    }
    ctx->pc = 0x320918u;
label_320918:
    // 0x320918: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32091c:
    // 0x32091c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x32091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_320920:
    // 0x320920: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x320920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_320924:
    // 0x320924: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x320924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_320928:
    // 0x320928: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x320928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32092c:
    // 0x32092c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x32092cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_320930:
    // 0x320930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x320930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_320934:
    // 0x320934: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x320934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_320938:
    // 0x320938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32093c:
    // 0x32093c: 0x3e00008  jr          $ra
label_320940:
    if (ctx->pc == 0x320940u) {
        ctx->pc = 0x320940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32093Cu;
        // 0x320940: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320944u;
        goto label_320944;
    }
    ctx->pc = 0x32093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32093Cu;
        // 0x320940: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320944u;
label_320944:
    // 0x320944: 0x0  nop
    ctx->pc = 0x320944u;
    // NOP
    ctx->pc = 0x320948u;
}
