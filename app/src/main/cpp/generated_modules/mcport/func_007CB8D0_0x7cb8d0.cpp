#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CB8D0
// Address: 0x7cb8d0 - 0x7cba18
void func_007CB8D0_0x7cb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CB8D0_0x7cb8d0");
#endif

    switch (ctx->pc) {
        case 0x7cb8d0u: goto label_7cb8d0;
        case 0x7cb8d4u: goto label_7cb8d4;
        case 0x7cb8d8u: goto label_7cb8d8;
        case 0x7cb8dcu: goto label_7cb8dc;
        case 0x7cb8e0u: goto label_7cb8e0;
        case 0x7cb8e4u: goto label_7cb8e4;
        case 0x7cb8e8u: goto label_7cb8e8;
        case 0x7cb8ecu: goto label_7cb8ec;
        case 0x7cb8f0u: goto label_7cb8f0;
        case 0x7cb8f4u: goto label_7cb8f4;
        case 0x7cb8f8u: goto label_7cb8f8;
        case 0x7cb8fcu: goto label_7cb8fc;
        case 0x7cb900u: goto label_7cb900;
        case 0x7cb904u: goto label_7cb904;
        case 0x7cb908u: goto label_7cb908;
        case 0x7cb90cu: goto label_7cb90c;
        case 0x7cb910u: goto label_7cb910;
        case 0x7cb914u: goto label_7cb914;
        case 0x7cb918u: goto label_7cb918;
        case 0x7cb91cu: goto label_7cb91c;
        case 0x7cb920u: goto label_7cb920;
        case 0x7cb924u: goto label_7cb924;
        case 0x7cb928u: goto label_7cb928;
        case 0x7cb92cu: goto label_7cb92c;
        case 0x7cb930u: goto label_7cb930;
        case 0x7cb934u: goto label_7cb934;
        case 0x7cb938u: goto label_7cb938;
        case 0x7cb93cu: goto label_7cb93c;
        case 0x7cb940u: goto label_7cb940;
        case 0x7cb944u: goto label_7cb944;
        case 0x7cb948u: goto label_7cb948;
        case 0x7cb94cu: goto label_7cb94c;
        case 0x7cb950u: goto label_7cb950;
        case 0x7cb954u: goto label_7cb954;
        case 0x7cb958u: goto label_7cb958;
        case 0x7cb95cu: goto label_7cb95c;
        case 0x7cb960u: goto label_7cb960;
        case 0x7cb964u: goto label_7cb964;
        case 0x7cb968u: goto label_7cb968;
        case 0x7cb96cu: goto label_7cb96c;
        case 0x7cb970u: goto label_7cb970;
        case 0x7cb974u: goto label_7cb974;
        case 0x7cb978u: goto label_7cb978;
        case 0x7cb97cu: goto label_7cb97c;
        case 0x7cb980u: goto label_7cb980;
        case 0x7cb984u: goto label_7cb984;
        case 0x7cb988u: goto label_7cb988;
        case 0x7cb98cu: goto label_7cb98c;
        case 0x7cb990u: goto label_7cb990;
        case 0x7cb994u: goto label_7cb994;
        case 0x7cb998u: goto label_7cb998;
        case 0x7cb99cu: goto label_7cb99c;
        case 0x7cb9a0u: goto label_7cb9a0;
        case 0x7cb9a4u: goto label_7cb9a4;
        case 0x7cb9a8u: goto label_7cb9a8;
        case 0x7cb9acu: goto label_7cb9ac;
        case 0x7cb9b0u: goto label_7cb9b0;
        case 0x7cb9b4u: goto label_7cb9b4;
        case 0x7cb9b8u: goto label_7cb9b8;
        case 0x7cb9bcu: goto label_7cb9bc;
        case 0x7cb9c0u: goto label_7cb9c0;
        case 0x7cb9c4u: goto label_7cb9c4;
        case 0x7cb9c8u: goto label_7cb9c8;
        case 0x7cb9ccu: goto label_7cb9cc;
        case 0x7cb9d0u: goto label_7cb9d0;
        case 0x7cb9d4u: goto label_7cb9d4;
        case 0x7cb9d8u: goto label_7cb9d8;
        case 0x7cb9dcu: goto label_7cb9dc;
        case 0x7cb9e0u: goto label_7cb9e0;
        case 0x7cb9e4u: goto label_7cb9e4;
        case 0x7cb9e8u: goto label_7cb9e8;
        case 0x7cb9ecu: goto label_7cb9ec;
        case 0x7cb9f0u: goto label_7cb9f0;
        case 0x7cb9f4u: goto label_7cb9f4;
        case 0x7cb9f8u: goto label_7cb9f8;
        case 0x7cb9fcu: goto label_7cb9fc;
        case 0x7cba00u: goto label_7cba00;
        case 0x7cba04u: goto label_7cba04;
        case 0x7cba08u: goto label_7cba08;
        case 0x7cba0cu: goto label_7cba0c;
        case 0x7cba10u: goto label_7cba10;
        case 0x7cba14u: goto label_7cba14;
        default: break;
    }

    ctx->pc = 0x7cb8d0u;

label_7cb8d0:
    // 0x7cb8d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7cb8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_7cb8d4:
    // 0x7cb8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7cb8d8:
    // 0x7cb8d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x7cb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_7cb8dc:
    // 0x7cb8dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x7cb8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_7cb8e0:
    // 0x7cb8e0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x7cb8e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_7cb8e4:
    // 0x7cb8e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x7cb8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_7cb8e8:
    // 0x7cb8e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x7cb8e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_7cb8ec:
    // 0x7cb8ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7cb8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_7cb8f0:
    // 0x7cb8f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x7cb8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7cb8f4:
    // 0x7cb8f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7cb8f8:
    // 0x7cb8f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7cb8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cb8fc:
    // 0x7cb8fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7cb8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_7cb900:
    // 0x7cb900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7cb900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7cb904:
    // 0x7cb904: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_7cb908:
    // 0x7cb908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7cb90c:
    // 0x7cb90c: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_7cb910:
    if (ctx->pc == 0x7CB910u) {
        ctx->pc = 0x7CB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB90Cu;
        // 0x7cb910: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB914u;
        goto label_7cb914;
    }
    ctx->pc = 0x7CB90Cu;
    {
        const bool branch_taken_0x7cb90c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB90Cu;
        // 0x7cb910: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb90c) {
            ctx->pc = 0x7CB9E8u;
            goto label_7cb9e8;
        }
    }
    ctx->pc = 0x7CB914u;
label_7cb914:
    // 0x7cb914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7cb914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cb918:
    // 0x7cb918: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_7cb91c:
    if (ctx->pc == 0x7CB91Cu) {
        ctx->pc = 0x7CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB918u;
        // 0x7cb91c: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB920u;
        goto label_7cb920;
    }
    ctx->pc = 0x7CB918u;
    {
        const bool branch_taken_0x7cb918 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB918u;
        // 0x7cb91c: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb918) {
            ctx->pc = 0x7CB94Cu;
            goto label_7cb94c;
        }
    }
    ctx->pc = 0x7CB920u;
label_7cb920:
    // 0x7cb920: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x7cb920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_7cb924:
    // 0x7cb924: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x7cb924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7cb928:
    // 0x7cb928: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x7cb928u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_7cb92c:
    // 0x7cb92c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x7cb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_7cb930:
    // 0x7cb930: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x7cb930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7cb934:
    // 0x7cb934: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x7cb934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_7cb938:
    // 0x7cb938: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x7cb938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_7cb93c:
    // 0x7cb93c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7cb940:
    // 0x7cb940: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x7cb940u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_7cb944:
    // 0x7cb944: 0x10000002  b           . + 4 + (0x2 << 2)
label_7cb948:
    if (ctx->pc == 0x7CB948u) {
        ctx->pc = 0x7CB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB944u;
        // 0x7cb948: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB94Cu;
        goto label_7cb94c;
    }
    ctx->pc = 0x7CB944u;
    {
        const bool branch_taken_0x7cb944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB944u;
        // 0x7cb948: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb944) {
            ctx->pc = 0x7CB950u;
            goto label_7cb950;
        }
    }
    ctx->pc = 0x7CB94Cu;
label_7cb94c:
    // 0x7cb94c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7cb94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7cb950:
    // 0x7cb950: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x7cb950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_7cb954:
    // 0x7cb954: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_7cb958:
    // 0x7cb958: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x7cb958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_7cb95c:
    // 0x7cb95c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7cb95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_7cb960:
    // 0x7cb960: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7cb960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_7cb964:
    // 0x7cb964: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_7cb968:
    if (ctx->pc == 0x7CB968u) {
        ctx->pc = 0x7CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB964u;
        // 0x7cb968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB96Cu;
        goto label_7cb96c;
    }
    ctx->pc = 0x7CB964u;
    {
        const bool branch_taken_0x7cb964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB964u;
        // 0x7cb968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb964) {
            ctx->pc = 0x7CB9E8u;
            goto label_7cb9e8;
        }
    }
    ctx->pc = 0x7CB96Cu;
label_7cb96c:
    // 0x7cb96c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x7cb96cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_7cb970:
    // 0x7cb970: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x7cb970u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_7cb974:
    // 0x7cb974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cb974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7cb978:
    // 0x7cb978: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x7cb978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7cb97c:
    // 0x7cb97c: 0x0  nop
    ctx->pc = 0x7cb97cu;
    // NOP
label_7cb980:
    // 0x7cb980: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_7cb984:
    if (ctx->pc == 0x7CB984u) {
        ctx->pc = 0x7CB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB980u;
        // 0x7cb984: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB988u;
        goto label_7cb988;
    }
    ctx->pc = 0x7CB980u;
    {
        const bool branch_taken_0x7cb980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cb980) {
            ctx->pc = 0x7CB984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB980u;
            // 0x7cb984: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB9DCu;
            goto label_7cb9dc;
        }
    }
    ctx->pc = 0x7CB988u;
label_7cb988:
    // 0x7cb988: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7cb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7cb98c:
    // 0x7cb98c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x7cb98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7cb990:
    // 0x7cb990: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_7cb994:
    if (ctx->pc == 0x7CB994u) {
        ctx->pc = 0x7CB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB990u;
        // 0x7cb994: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB998u;
        goto label_7cb998;
    }
    ctx->pc = 0x7CB990u;
    {
        const bool branch_taken_0x7cb990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb990) {
            ctx->pc = 0x7CB994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB990u;
            // 0x7cb994: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB9DCu;
            goto label_7cb9dc;
        }
    }
    ctx->pc = 0x7CB998u;
label_7cb998:
    // 0x7cb998: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x7cb998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_7cb99c:
    // 0x7cb99c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_7cb9a0:
    if (ctx->pc == 0x7CB9A0u) {
        ctx->pc = 0x7CB9A4u;
        goto label_7cb9a4;
    }
    ctx->pc = 0x7CB99Cu;
    {
        const bool branch_taken_0x7cb99c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb99c) {
            ctx->pc = 0x7CB9D0u;
            goto label_7cb9d0;
        }
    }
    ctx->pc = 0x7CB9A4u;
label_7cb9a4:
    // 0x7cb9a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x7cb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_7cb9a8:
    // 0x7cb9a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_7cb9ac:
    if (ctx->pc == 0x7CB9ACu) {
        ctx->pc = 0x7CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9A8u;
        // 0x7cb9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9B0u;
        goto label_7cb9b0;
    }
    ctx->pc = 0x7CB9A8u;
    {
        const bool branch_taken_0x7cb9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9A8u;
        // 0x7cb9ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb9a8) {
            ctx->pc = 0x7CB9D8u;
            goto label_7cb9d8;
        }
    }
    ctx->pc = 0x7CB9B0u;
label_7cb9b0:
    // 0x7cb9b0: 0x40f809  jalr        $v0
label_7cb9b4:
    if (ctx->pc == 0x7CB9B4u) {
        ctx->pc = 0x7CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9B0u;
        // 0x7cb9b4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9B8u;
        goto label_7cb9b8;
    }
    ctx->pc = 0x7CB9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB9B8u);
        ctx->pc = 0x7CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9B0u;
        // 0x7cb9b4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB9B0u, 0x7CB9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB9B8u;
label_7cb9b8:
    // 0x7cb9b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_7cb9bc:
    if (ctx->pc == 0x7CB9BCu) {
        ctx->pc = 0x7CB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9B8u;
        // 0x7cb9bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9C0u;
        goto label_7cb9c0;
    }
    ctx->pc = 0x7CB9B8u;
    {
        const bool branch_taken_0x7cb9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb9b8) {
            ctx->pc = 0x7CB9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB9B8u;
            // 0x7cb9bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB9DCu;
            goto label_7cb9dc;
        }
    }
    ctx->pc = 0x7CB9C0u;
label_7cb9c0:
    // 0x7cb9c0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_7cb9c4:
    if (ctx->pc == 0x7CB9C4u) {
        ctx->pc = 0x7CB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9C0u;
        // 0x7cb9c4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9C8u;
        goto label_7cb9c8;
    }
    ctx->pc = 0x7CB9C0u;
    {
        const bool branch_taken_0x7cb9c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb9c0) {
            ctx->pc = 0x7CB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB9C0u;
            // 0x7cb9c4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB9C8u;
            goto label_7cb9c8;
        }
    }
    ctx->pc = 0x7CB9C8u;
label_7cb9c8:
    // 0x7cb9c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_7cb9cc:
    if (ctx->pc == 0x7CB9CCu) {
        ctx->pc = 0x7CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9C8u;
        // 0x7cb9cc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9D0u;
        goto label_7cb9d0;
    }
    ctx->pc = 0x7CB9C8u;
    {
        const bool branch_taken_0x7cb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9C8u;
        // 0x7cb9cc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb9c8) {
            ctx->pc = 0x7CB9E8u;
            goto label_7cb9e8;
        }
    }
    ctx->pc = 0x7CB9D0u;
label_7cb9d0:
    // 0x7cb9d0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_7cb9d4:
    if (ctx->pc == 0x7CB9D4u) {
        ctx->pc = 0x7CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9D0u;
        // 0x7cb9d4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9D8u;
        goto label_7cb9d8;
    }
    ctx->pc = 0x7CB9D0u;
    {
        const bool branch_taken_0x7cb9d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cb9d0) {
            ctx->pc = 0x7CB9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CB9D0u;
            // 0x7cb9d4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CB9D8u;
            goto label_7cb9d8;
        }
    }
    ctx->pc = 0x7CB9D8u;
label_7cb9d8:
    // 0x7cb9d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x7cb9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_7cb9dc:
    // 0x7cb9dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7cb9e0:
    // 0x7cb9e0: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
label_7cb9e4:
    if (ctx->pc == 0x7CB9E4u) {
        ctx->pc = 0x7CB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9E0u;
        // 0x7cb9e4: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB9E8u;
        goto label_7cb9e8;
    }
    ctx->pc = 0x7CB9E0u;
    {
        const bool branch_taken_0x7cb9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7CB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB9E0u;
        // 0x7cb9e4: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb9e0) {
            ctx->pc = 0x7CB980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cb980;
        }
    }
    ctx->pc = 0x7CB9E8u;
label_7cb9e8:
    // 0x7cb9e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x7cb9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7cb9ec:
    // 0x7cb9ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7cb9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_7cb9f0:
    // 0x7cb9f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x7cb9f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_7cb9f4:
    // 0x7cb9f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x7cb9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_7cb9f8:
    // 0x7cb9f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x7cb9f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7cb9fc:
    // 0x7cb9fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7cb9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7cba00:
    // 0x7cba00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cba00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7cba04:
    // 0x7cba04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cba04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7cba08:
    // 0x7cba08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cba08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cba0c:
    // 0x7cba0c: 0x3e00008  jr          $ra
label_7cba10:
    if (ctx->pc == 0x7CBA10u) {
        ctx->pc = 0x7CBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA0Cu;
        // 0x7cba10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CBA14u;
        goto label_7cba14;
    }
    ctx->pc = 0x7CBA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBA0Cu;
        // 0x7cba10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CBA14u;
label_7cba14:
    // 0x7cba14: 0x0  nop
    ctx->pc = 0x7cba14u;
    // NOP
    ctx->pc = 0x7cba18u;
}
} // namespace gh_mcport
