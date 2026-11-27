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

// Function: func_001D79D8
// Address: 0x1d79d8 - 0x1d7dc0
void func_001D79D8_0x1d79d8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D79D8_0x1d79d8");
#endif

    if (__builtin_expect(ctx->pc != 0x1d79d8u, 0)) {
        switch (ctx->pc) {
            case 0x1d7a18u: goto label_1d7a18;
            case 0x1d7a24u: goto label_1d7a24;
            case 0x1d7a64u: goto label_1d7a64;
            case 0x1d7a70u: goto label_1d7a70;
            case 0x1d7a94u: goto label_1d7a94;
            case 0x1d7ac0u: goto label_1d7ac0;
            case 0x1d7accu: goto label_1d7acc;
            case 0x1d7af0u: goto label_1d7af0;
            case 0x1d7b20u: goto label_1d7b20;
            case 0x1d7b28u: goto label_1d7b28;
            case 0x1d7b60u: goto label_1d7b60;
            case 0x1d7b80u: goto label_1d7b80;
            case 0x1d7b8cu: goto label_1d7b8c;
            case 0x1d7b98u: goto label_1d7b98;
            case 0x1d7ba4u: goto label_1d7ba4;
            case 0x1d7bb0u: goto label_1d7bb0;
            case 0x1d7bdcu: goto label_1d7bdc;
            case 0x1d7c10u: goto label_1d7c10;
            case 0x1d7c28u: goto label_1d7c28;
            case 0x1d7c40u: goto label_1d7c40;
            case 0x1d7c4cu: goto label_1d7c4c;
            case 0x1d7c60u: goto label_1d7c60;
            case 0x1d7c6cu: goto label_1d7c6c;
            case 0x1d7c9cu: goto label_1d7c9c;
            case 0x1d7cc0u: goto label_1d7cc0;
            case 0x1d7ce4u: goto label_1d7ce4;
            case 0x1d7d08u: goto label_1d7d08;
            case 0x1d7d2cu: goto label_1d7d2c;
            case 0x1d7d4cu: goto label_1d7d4c;
            case 0x1d7d64u: goto label_1d7d64;
            case 0x1d7d88u: goto label_1d7d88;
            case 0x1d7da4u: goto label_1d7da4;
            default: break;
        }
    }


    // 0x1d79d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d79dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d79dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d79e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d79e4: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d79ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d79ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d79f0: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d79f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d79f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D79F4u;
    {
        const bool branch_taken_0x1d79f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F4u;
        // 0x1d79f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79f4) {
            ctx->pc = 0x1D7A0Cu;
            goto label_1d7a0c;
        }
    }
    // 0x1d79fc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D79FCu;
    {
        const bool branch_taken_0x1d79fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79FCu;
        // 0x1d7a00: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79fc) {
            ctx->pc = 0x1D7A34u;
            goto label_1d7a34;
        }
    }
    // 0x1d7a04: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A04u;
        // 0x1d7a08: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7CA0u;
            goto label_1d7ca0;
        }
    }
label_1d7a0c:
    // 0x1d7a0c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a10: 0xc077610  jal         func_1DD840
    SET_GPR_U32(ctx, 31, 0x1D7A18u);
    ctx->pc = 0x1D7A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A10u;
    // 0x1d7a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD840_0x1dd840, 0x1dd840u, 0x1d7a18u)) {
        return;
    }
label_1d7a18:
    // 0x1d7a18: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a1c: 0xc0776ee  jal         func_1DDBB8
    SET_GPR_U32(ctx, 31, 0x1D7A24u);
    ctx->pc = 0x1D7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A1Cu;
    // 0x1d7a20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField348_1DDBB8_0x1ddbb8, 0x1ddbb8u, 0x1d7a24u)) {
        return;
    }
label_1d7a24:
    // 0x1d7a24: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d7a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d7a28: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7a2c: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d7a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7a30: 0x3c030074  lui         $v1, 0x74
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d7a34:
    // 0x1d7a34: 0x3402cc00  ori         $v0, $zero, 0xCC00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d7a38: 0x21638  dsll        $v0, $v0, 24
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d7a3c: 0x3442c000  ori         $v0, $v0, 0xC000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d7a40: 0x21338  dsll        $v0, $v0, 12
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d7a44: 0x246374a0  addiu       $v1, $v1, 0x74A0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d7a48: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d7a48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d7a4c: 0x821024  and         $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7a50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7A50u;
    {
        const bool branch_taken_0x1d7a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a50) {
            ctx->pc = 0x1D7A9Cu;
            goto label_1d7a9c;
        }
    }
    // 0x1d7a58: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a5c: 0xc077610  jal         func_1DD840
    SET_GPR_U32(ctx, 31, 0x1D7A64u);
    ctx->pc = 0x1D7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A5Cu;
    // 0x1d7a60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD840_0x1dd840, 0x1dd840u, 0x1d7a64u)) {
        return;
    }
label_1d7a64:
    // 0x1d7a64: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a68: 0xc0776ee  jal         func_1DDBB8
    SET_GPR_U32(ctx, 31, 0x1D7A70u);
    ctx->pc = 0x1D7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A68u;
    // 0x1d7a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField348_1DDBB8_0x1ddbb8, 0x1ddbb8u, 0x1d7a70u)) {
        return;
    }
label_1d7a70:
    // 0x1d7a70: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7a74: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7a7c: 0x2406015f  addiu       $a2, $zero, 0x15F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d7a80: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7a84: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7a88: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a8c: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D7A94u);
    ctx->pc = 0x1D7A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A8Cu;
    // 0x1d7a90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d7a94u)) {
        return;
    }
label_1d7a94:
    // 0x1d7a94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7A94u;
    {
        const bool branch_taken_0x1d7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A94u;
        // 0x1d7a98: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a94) {
            ctx->pc = 0x1D7AF4u;
            goto label_1d7af4;
        }
    }
label_1d7a9c:
    // 0x1d7a9c: 0x3402cc00  ori         $v0, $zero, 0xCC00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d7aa0: 0x21638  dsll        $v0, $v0, 24
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d7aa4: 0x3442c000  ori         $v0, $v0, 0xC000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d7aa8: 0x212b8  dsll        $v0, $v0, 10
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d7aac: 0x821024  and         $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7ab0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7AB0u;
    {
        const bool branch_taken_0x1d7ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AB0u;
        // 0x1d7ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ab0) {
            ctx->pc = 0x1D7B00u;
            goto label_1d7b00;
        }
    }
    // 0x1d7ab8: 0xc077610  jal         func_1DD840
    SET_GPR_U32(ctx, 31, 0x1D7AC0u);
    ctx->pc = 0x1D7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AB8u;
    // 0x1d7abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD840_0x1dd840, 0x1dd840u, 0x1d7ac0u)) {
        return;
    }
label_1d7ac0:
    // 0x1d7ac0: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ac4: 0xc0776ee  jal         func_1DDBB8
    SET_GPR_U32(ctx, 31, 0x1D7ACCu);
    ctx->pc = 0x1D7AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AC4u;
    // 0x1d7ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField348_1DDBB8_0x1ddbb8, 0x1ddbb8u, 0x1d7accu)) {
        return;
    }
label_1d7acc:
    // 0x1d7acc: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7ad0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ad4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7ad8: 0x2406015f  addiu       $a2, $zero, 0x15F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d7adc: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ae0: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7ae4: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ae8: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D7AF0u);
    ctx->pc = 0x1D7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AE8u;
    // 0x1d7aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d7af0u)) {
        return;
    }
label_1d7af0:
    // 0x1d7af0: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7af4:
    // 0x1d7af4: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7af8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1D7AF8u;
    {
        const bool branch_taken_0x1d7af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AF8u;
        // 0x1d7afc: 0xa2233024  sb          $v1, 0x3024($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7af8) {
            ctx->pc = 0x1D7C9Cu;
            goto label_1d7c9c;
        }
    }
label_1d7b00:
    // 0x1d7b00: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d7b00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d7b04: 0x3c021000  lui         $v0, 0x1000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d7b08: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7b0c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D7B0Cu;
    {
        const bool branch_taken_0x1d7b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B0Cu;
        // 0x1d7b10: 0x3c120060  lui         $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b0c) {
            ctx->pc = 0x1D7BE4u;
            goto label_1d7be4;
        }
    }
    // 0x1d7b14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D7B14u;
    {
        const bool branch_taken_0x1d7b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B14u;
        // 0x1d7b18: 0x8e223034  lw          $v0, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b14) {
            ctx->pc = 0x1D7B44u;
            goto label_1d7b44;
        }
    }
    // 0x1d7b1c: 0x0  nop
    // NOP
label_1d7b20:
    // 0x1d7b20: 0xc07ea1c  jal         func_1FA870
    SET_GPR_U32(ctx, 31, 0x1D7B28u);
    ctx->pc = 0x1D7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B20u;
    // 0x1d7b24: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_subGold_0x1fa870, 0x1fa870u, 0x1d7b28u)) {
        return;
    }
label_1d7b28:
    // 0x1d7b28: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7b2c: 0x8e233020  lw          $v1, 0x3020($s1)
    ctx->pc = 0x1d7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
    // 0x1d7b30: 0x24420064  addiu       $v0, $v0, 0x64
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d7b34: 0x34630008  ori         $v1, $v1, 0x8
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1d7b38: 0xae223034  sw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    // 0x1d7b3c: 0xae233020  sw          $v1, 0x3020($s1)
    ctx->pc = 0x1d7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 3));
    // 0x1d7b40: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
label_1d7b44:
    // 0x1d7b44: 0x8e233030  lw          $v1, 0x3030($s1)
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12336)));
    // 0x1d7b48: 0x43102a  slt         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7b4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B4Cu;
    {
        const bool branch_taken_0x1d7b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B4Cu;
        // 0x1d7b50: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b4c) {
            ctx->pc = 0x1D7B6Cu;
            goto label_1d7b6c;
        }
    }
    // 0x1d7b54: 0x24509b70  addiu       $s0, $v0, -0x6490
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1d7b58: 0xc07e9c4  jal         func_1FA710
    SET_GPR_U32(ctx, 31, 0x1D7B60u);
    ctx->pc = 0x1D7B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B58u;
    // 0x1d7b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGold_0x1fa710, 0x1fa710u, 0x1d7b60u)) {
        return;
    }
label_1d7b60:
    // 0x1d7b60: 0x28420064  slti        $v0, $v0, 0x64
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1d7b64: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7B64u;
    {
        const bool branch_taken_0x1d7b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B64u;
        // 0x1d7b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b64) {
            ctx->pc = 0x1D7B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7b20;
        }
    }
label_1d7b6c:
    // 0x1d7b6c: 0x8e253034  lw          $a1, 0x3034($s1)
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7b70: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7B70u;
    {
        const bool branch_taken_0x1d7b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B70u;
        // 0x1d7b74: 0x2644ee00  addiu       $a0, $s2, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b70) {
            ctx->pc = 0x1D7BC0u;
            goto label_1d7bc0;
        }
    }
    // 0x1d7b78: 0xc077486  jal         func_1DD218
    SET_GPR_U32(ctx, 31, 0x1D7B80u);
    ctx->pc = 0x1D7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B78u;
    // 0x1d7b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetNumber_1DD218_0x1dd218, 0x1dd218u, 0x1d7b80u)) {
        return;
    }
label_1d7b80:
    // 0x1d7b80: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b84: 0xc077610  jal         func_1DD840
    SET_GPR_U32(ctx, 31, 0x1D7B8Cu);
    ctx->pc = 0x1D7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B84u;
    // 0x1d7b88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD840_0x1dd840, 0x1dd840u, 0x1d7b8cu)) {
        return;
    }
label_1d7b8c:
    // 0x1d7b8c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b90: 0xc0776ee  jal         func_1DDBB8
    SET_GPR_U32(ctx, 31, 0x1D7B98u);
    ctx->pc = 0x1D7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B90u;
    // 0x1d7b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField348_1DDBB8_0x1ddbb8, 0x1ddbb8u, 0x1d7b98u)) {
        return;
    }
label_1d7b98:
    // 0x1d7b98: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b9c: 0xc0775dc  jal         func_1DD770
    SET_GPR_U32(ctx, 31, 0x1D7BA4u);
    ctx->pc = 0x1D7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B9Cu;
    // 0x1d7ba0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD770_0x1dd770, 0x1dd770u, 0x1d7ba4u)) {
        return;
    }
label_1d7ba4:
    // 0x1d7ba4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ba8: 0xc077568  jal         func_1DD5A0
    SET_GPR_U32(ctx, 31, 0x1D7BB0u);
    ctx->pc = 0x1D7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BA8u;
    // 0x1d7bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD5A0_0x1dd5a0, 0x1dd5a0u, 0x1d7bb0u)) {
        return;
    }
label_1d7bb0:
    // 0x1d7bb0: 0x24020003  addiu       $v0, $zero, 0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7bb4: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7bb8: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7bbc: 0x2644ee00  addiu       $a0, $s2, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
label_1d7bc0:
    // 0x1d7bc0: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bc4: 0x2406015e  addiu       $a2, $zero, 0x15E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d7bc8: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7bcc: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7bd0: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bd4: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D7BDCu);
    ctx->pc = 0x1D7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BD4u;
    // 0x1d7bd8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d7bdcu)) {
        return;
    }
label_1d7bdc:
    // 0x1d7bdc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D7BDCu;
    {
        const bool branch_taken_0x1d7bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BDCu;
        // 0x1d7be0: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7bdc) {
            ctx->pc = 0x1D7CA0u;
            goto label_1d7ca0;
        }
    }
label_1d7be4:
    // 0x1d7be4: 0x3c022000  lui         $v0, 0x2000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d7be8: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7bec: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D7BECu;
    {
        const bool branch_taken_0x1d7bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bec) {
            ctx->pc = 0x1D7BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7BECu;
            // 0x1d7bf0: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7CA0u;
            goto label_1d7ca0;
        }
    }
    // 0x1d7bf4: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7bf8: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D7BF8u;
    {
        const bool branch_taken_0x1d7bf8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BF8u;
        // 0x1d7bfc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7bf8) {
            ctx->pc = 0x1D7C54u;
            goto label_1d7c54;
        }
    }
    // 0x1d7c00: 0x24050064  addiu       $a1, $zero, 0x64
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d7c04: 0x24849b70  addiu       $a0, $a0, -0x6490
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d7c08: 0xc07e9d4  jal         func_1FA750
    SET_GPR_U32(ctx, 31, 0x1D7C10u);
    ctx->pc = 0x1D7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C08u;
    // 0x1d7c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_addGold_0x1fa750, 0x1fa750u, 0x1d7c10u)) {
        return;
    }
label_1d7c10:
    // 0x1d7c10: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7c14: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c18: 0x2442ff9c  addiu       $v0, $v0, -0x64
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d7c1c: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c20: 0xc077486  jal         func_1DD218
    SET_GPR_U32(ctx, 31, 0x1D7C28u);
    ctx->pc = 0x1D7C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C20u;
    // 0x1d7c24: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetNumber_1DD218_0x1dd218, 0x1dd218u, 0x1d7c28u)) {
        return;
    }
label_1d7c28:
    // 0x1d7c28: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7c2c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7C2Cu;
    {
        const bool branch_taken_0x1d7c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C2Cu;
        // 0x1d7c30: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c2c) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    // 0x1d7c34: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c38: 0xc077644  jal         func_1DD910
    SET_GPR_U32(ctx, 31, 0x1D7C40u);
    ctx->pc = 0x1D7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C38u;
    // 0x1d7c3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD910_0x1dd910, 0x1dd910u, 0x1d7c40u)) {
        return;
    }
label_1d7c40:
    // 0x1d7c40: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c44: 0xc077568  jal         func_1DD5A0
    SET_GPR_U32(ctx, 31, 0x1D7C4Cu);
    ctx->pc = 0x1D7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C44u;
    // 0x1d7c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD5A0_0x1dd5a0, 0x1dd5a0u, 0x1d7c4cu)) {
        return;
    }
label_1d7c4c:
    // 0x1d7c4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D7C4Cu;
    {
        const bool branch_taken_0x1d7c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C4Cu;
        // 0x1d7c50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c4c) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
label_1d7c54:
    // 0x1d7c54: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c58: 0xc077610  jal         func_1DD840
    SET_GPR_U32(ctx, 31, 0x1D7C60u);
    ctx->pc = 0x1D7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C58u;
    // 0x1d7c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001DD840_0x1dd840, 0x1dd840u, 0x1d7c60u)) {
        return;
    }
label_1d7c60:
    // 0x1d7c60: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c64: 0xc0776ee  jal         func_1DDBB8
    SET_GPR_U32(ctx, 31, 0x1D7C6Cu);
    ctx->pc = 0x1D7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C64u;
    // 0x1d7c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetBlendField348_1DDBB8_0x1ddbb8, 0x1ddbb8u, 0x1d7c6cu)) {
        return;
    }
label_1d7c6c:
    // 0x1d7c6c: 0x24020004  addiu       $v0, $zero, 0x4
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7c70: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7c74: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7c78: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d7c7c:
    // 0x1d7c7c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c80: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7c84: 0x24060161  addiu       $a2, $zero, 0x161
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d7c88: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7c8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7c90: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c94: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x1D7C9Cu);
    ctx->pc = 0x1D7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C94u;
    // 0x1d7c98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2cb8a0u, 0x1d7c9cu)) {
        return;
    }
label_1d7c9c:
    // 0x1d7c9c: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
label_1d7ca0:
    // 0x1d7ca0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CA0u;
    {
        const bool branch_taken_0x1d7ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA0u;
        // 0x1d7ca4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ca0) {
            ctx->pc = 0x1D7CB0u;
            goto label_1d7cb0;
        }
    }
    // 0x1d7ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7CA8u;
    {
        const bool branch_taken_0x1d7ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA8u;
        // 0x1d7cac: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ca8) {
            ctx->pc = 0x1D7CB4u;
            goto label_1d7cb4;
        }
    }
label_1d7cb0:
    // 0x1d7cb0: 0x24060032  addiu       $a2, $zero, 0x32
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d7cb4:
    // 0x1d7cb4: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cb8: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7CC0u);
    ctx->pc = 0x1D7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB8u;
    // 0x1d7cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7cc0u)) {
        return;
    }
label_1d7cc0:
    // 0x1d7cc0: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7cc4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CC4u;
    {
        const bool branch_taken_0x1d7cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CC4u;
        // 0x1d7cc8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cc4) {
            ctx->pc = 0x1D7CD4u;
            goto label_1d7cd4;
        }
    }
    // 0x1d7ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7CCCu;
    {
        const bool branch_taken_0x1d7ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CCCu;
        // 0x1d7cd0: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ccc) {
            ctx->pc = 0x1D7CD8u;
            goto label_1d7cd8;
        }
    }
label_1d7cd4:
    // 0x1d7cd4: 0x24060014  addiu       $a2, $zero, 0x14
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d7cd8:
    // 0x1d7cd8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cdc: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7CE4u);
    ctx->pc = 0x1D7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CDCu;
    // 0x1d7ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7ce4u)) {
        return;
    }
label_1d7ce4:
    // 0x1d7ce4: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7ce8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CE8u;
    {
        const bool branch_taken_0x1d7ce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CE8u;
        // 0x1d7cec: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ce8) {
            ctx->pc = 0x1D7CF8u;
            goto label_1d7cf8;
        }
    }
    // 0x1d7cf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7CF0u;
    {
        const bool branch_taken_0x1d7cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CF0u;
        // 0x1d7cf4: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cf0) {
            ctx->pc = 0x1D7CFCu;
            goto label_1d7cfc;
        }
    }
label_1d7cf8:
    // 0x1d7cf8: 0x2406000f  addiu       $a2, $zero, 0xF
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d7cfc:
    // 0x1d7cfc: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d00: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7D08u);
    ctx->pc = 0x1D7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D00u;
    // 0x1d7d04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7d08u)) {
        return;
    }
label_1d7d08:
    // 0x1d7d08: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7d0c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7D0Cu;
    {
        const bool branch_taken_0x1d7d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D0Cu;
        // 0x1d7d10: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d0c) {
            ctx->pc = 0x1D7D1Cu;
            goto label_1d7d1c;
        }
    }
    // 0x1d7d14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7D14u;
    {
        const bool branch_taken_0x1d7d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D14u;
        // 0x1d7d18: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d14) {
            ctx->pc = 0x1D7D20u;
            goto label_1d7d20;
        }
    }
label_1d7d1c:
    // 0x1d7d1c: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d7d20:
    // 0x1d7d20: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d24: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7D2Cu);
    ctx->pc = 0x1D7D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D24u;
    // 0x1d7d28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7d2cu)) {
        return;
    }
label_1d7d2c:
    // 0x1d7d2c: 0x24100008  addiu       $s0, $zero, 0x8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7d30: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7d34: 0x24030008  addiu       $v1, $zero, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7d38: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d3c: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7d40: 0x230c0  sll         $a2, $v0, 3
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d7d44: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7D4Cu);
    ctx->pc = 0x1D7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D44u;
    // 0x1d7d48: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7d4cu)) {
        return;
    }
label_1d7d4c:
    // 0x1d7d4c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7d50: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d54: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7d58: 0x230c0  sll         $a2, $v0, 3
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d7d5c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7D64u);
    ctx->pc = 0x1D7D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D5Cu;
    // 0x1d7d60: 0x202300a  movz        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7d64u)) {
        return;
    }
label_1d7d64:
    // 0x1d7d64: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7d68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7D68u;
    {
        const bool branch_taken_0x1d7d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d68) {
            ctx->pc = 0x1D7D78u;
            goto label_1d7d78;
        }
    }
    // 0x1d7d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7D70u;
    {
        const bool branch_taken_0x1d7d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D70u;
        // 0x1d7d74: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d70) {
            ctx->pc = 0x1D7D7Cu;
            goto label_1d7d7c;
        }
    }
label_1d7d78:
    // 0x1d7d78: 0x24060003  addiu       $a2, $zero, 0x3
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7d7c:
    // 0x1d7d7c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d80: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7D88u);
    ctx->pc = 0x1D7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D80u;
    // 0x1d7d84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7d88u)) {
        return;
    }
label_1d7d88:
    // 0x1d7d88: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7d8c: 0x24030002  addiu       $v1, $zero, 0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7d90: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d94: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d7d98: 0x23040  sll         $a2, $v0, 1
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d7d9c: 0xc077592  jal         func_1DD648
    SET_GPR_U32(ctx, 31, 0x1D7DA4u);
    ctx->pc = 0x1D7DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D9Cu;
    // 0x1d7da0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetCustomIDNumberIndexed_1DD648_0x1dd648, 0x1dd648u, 0x1d7da4u)) {
        return;
    }
label_1d7da4:
    // 0x1d7da4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d7da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7da8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7dac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d7dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DB4u;
        // 0x1d7db8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1d7dbc: 0x0  nop
    // NOP
    ctx->pc = 0x1d7dc0u;
}