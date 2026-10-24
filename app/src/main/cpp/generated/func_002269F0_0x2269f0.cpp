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

// Function: func_002269F0
// Address: 0x2269f0 - 0x2274a0
void func_002269F0_0x2269f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002269F0_0x2269f0");
#endif

    switch (ctx->pc) {
        case 0x226a18u: goto label_226a18;
        case 0x226a58u: goto label_226a58;
        case 0x226b54u: goto label_226b54;
        case 0x226b8cu: goto label_226b8c;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226c84u: goto label_226c84;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cd0u: goto label_226cd0;
        case 0x226d2cu: goto label_226d2c;
        case 0x226d9cu: goto label_226d9c;
        case 0x226e88u: goto label_226e88;
        case 0x226eacu: goto label_226eac;
        case 0x226eccu: goto label_226ecc;
        case 0x226f04u: goto label_226f04;
        case 0x226f0cu: goto label_226f0c;
        case 0x226ff4u: goto label_226ff4;
        case 0x227018u: goto label_227018;
        case 0x227030u: goto label_227030;
        case 0x227048u: goto label_227048;
        case 0x22709cu: goto label_22709c;
        case 0x2270b0u: goto label_2270b0;
        case 0x2270c8u: goto label_2270c8;
        case 0x2270d8u: goto label_2270d8;
        case 0x2270e8u: goto label_2270e8;
        case 0x2270fcu: goto label_2270fc;
        case 0x227108u: goto label_227108;
        case 0x2271b0u: goto label_2271b0;
        case 0x2271ccu: goto label_2271cc;
        case 0x227230u: goto label_227230;
        case 0x2272ccu: goto label_2272cc;
        case 0x2272d8u: goto label_2272d8;
        case 0x2272f4u: goto label_2272f4;
        case 0x22732cu: goto label_22732c;
        case 0x22734cu: goto label_22734c;
        case 0x22735cu: goto label_22735c;
        case 0x227408u: goto label_227408;
        case 0x22743cu: goto label_22743c;
        case 0x22744cu: goto label_22744c;
        default: break;
    }

    ctx->pc = 0x2269f0u;

    // 0x2269f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2269f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2269f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2269f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2269f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2269f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2269fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x226a00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x226a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x226a04: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x226a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x226a08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x226a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x226a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226a10: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x226A10u;
    SET_GPR_U32(ctx, 31, 0x226A18u);
    ctx->pc = 0x226A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A10u;
    // 0x226a14: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x226A10u, 0x226A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A18u;
label_226a18:
    // 0x226a18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x226a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226a20: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226a24: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x226a24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226a28: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x226a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x226a2c: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x226a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x226a30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226A30u;
    {
        const bool branch_taken_0x226a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A30u;
        // 0x226a34: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a30) {
            ctx->pc = 0x226A4Cu;
            goto label_226a4c;
        }
    }
    ctx->pc = 0x226A38u;
    // 0x226a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226a3c: 0x5082015e  beql        $a0, $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x226A3Cu;
    {
        const bool branch_taken_0x226a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x226a3c) {
            ctx->pc = 0x226A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226A3Cu;
            // 0x226a40: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226FB8u;
            goto label_226fb8;
        }
    }
    ctx->pc = 0x226A44u;
    // 0x226a44: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x226A44u;
    {
        const bool branch_taken_0x226a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A44u;
        // 0x226a48: 0x922302f7  lbu         $v1, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a44) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x226A4Cu;
label_226a4c:
    // 0x226a4c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x226a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x226a50: 0xc09d91a  jal         func_276468
    ctx->pc = 0x226A50u;
    SET_GPR_U32(ctx, 31, 0x226A58u);
    ctx->pc = 0x226A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A50u;
    // 0x226a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x226A50u, 0x226A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A58u;
label_226a58:
    // 0x226a58: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x226a58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x226a5c: 0x8e300564  lw          $s0, 0x564($s1)
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x226a60: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x226a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x226a64: 0x12020054  beq         $s0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x226A64u;
    {
        const bool branch_taken_0x226a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x226A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A64u;
        // 0x226a68: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a64) {
            ctx->pc = 0x226BB8u;
            goto label_226bb8;
        }
    }
    ctx->pc = 0x226A6Cu;
    // 0x226a6c: 0x2a020253  slti        $v0, $s0, 0x253
    ctx->pc = 0x226a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)595) ? 1 : 0);
    // 0x226a70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226A70u;
    {
        const bool branch_taken_0x226a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A70u;
        // 0x226a74: 0x2a020220  slti        $v0, $s0, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a70) {
            ctx->pc = 0x226AA0u;
            goto label_226aa0;
        }
    }
    ctx->pc = 0x226A78u;
    // 0x226a78: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x226A78u;
    {
        const bool branch_taken_0x226a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a78) {
            ctx->pc = 0x226A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226A78u;
            // 0x226a7c: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226A80u;
    // 0x226a80: 0x2a020223  slti        $v0, $s0, 0x223
    ctx->pc = 0x226a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x226a84: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x226A84u;
    {
        const bool branch_taken_0x226a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a84) {
            ctx->pc = 0x226A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226A84u;
            // 0x226a88: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226A8Cu;
    // 0x226a8c: 0x2a020250  slti        $v0, $s0, 0x250
    ctx->pc = 0x226a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x226a90: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x226A90u;
    {
        const bool branch_taken_0x226a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226a90) {
            ctx->pc = 0x226A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226A90u;
            // 0x226a94: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226A98u;
    // 0x226a98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x226A98u;
    {
        const bool branch_taken_0x226a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A98u;
        // 0x226a9c: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a98) {
            ctx->pc = 0x226AE0u;
            goto label_226ae0;
        }
    }
    ctx->pc = 0x226AA0u;
label_226aa0:
    // 0x226aa0: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x226aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x226aa4: 0x120200d8  beq         $s0, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x226AA4u;
    {
        const bool branch_taken_0x226aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x226AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AA4u;
        // 0x226aa8: 0x2a020261  slti        $v0, $s0, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226aa4) {
            ctx->pc = 0x226E08u;
            goto label_226e08;
        }
    }
    ctx->pc = 0x226AACu;
    // 0x226aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226AACu;
    {
        const bool branch_taken_0x226aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AACu;
        // 0x226ab0: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226aac) {
            ctx->pc = 0x226AC4u;
            goto label_226ac4;
        }
    }
    ctx->pc = 0x226AB4u;
    // 0x226ab4: 0x5202006e  beql        $s0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x226AB4u;
    {
        const bool branch_taken_0x226ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x226ab4) {
            ctx->pc = 0x226AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226AB4u;
            // 0x226ab8: 0x9223186b  lbu         $v1, 0x186B($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6251)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226C70u;
            goto label_226c70;
        }
    }
    ctx->pc = 0x226ABCu;
    // 0x226abc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x226ABCu;
    {
        const bool branch_taken_0x226abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ABCu;
        // 0x226ac0: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226abc) {
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226AC4u;
label_226ac4:
    // 0x226ac4: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x226ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x226ac8: 0x120200d7  beq         $s0, $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x226AC8u;
    {
        const bool branch_taken_0x226ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x226ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AC8u;
        // 0x226acc: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ac8) {
            ctx->pc = 0x226E28u;
            goto label_226e28;
        }
    }
    ctx->pc = 0x226AD0u;
    // 0x226ad0: 0x12020094  beq         $s0, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x226AD0u;
    {
        const bool branch_taken_0x226ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x226ad0) {
            ctx->pc = 0x226D24u;
            goto label_226d24;
        }
    }
    ctx->pc = 0x226AD8u;
    // 0x226ad8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x226AD8u;
    {
        const bool branch_taken_0x226ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AD8u;
        // 0x226adc: 0x96220548  lhu         $v0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ad8) {
            ctx->pc = 0x226B10u;
            goto label_226b10;
        }
    }
    ctx->pc = 0x226AE0u;
label_226ae0:
    // 0x226ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226AE0u;
    {
        const bool branch_taken_0x226ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AE0u;
        // 0x226ae4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ae0) {
            ctx->pc = 0x226AF4u;
            goto label_226af4;
        }
    }
    ctx->pc = 0x226AE8u;
    // 0x226ae8: 0x8c4319a4  lw          $v1, 0x19A4($v0)
    ctx->pc = 0x226ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6564)));
    // 0x226aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226AECu;
    {
        const bool branch_taken_0x226aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AECu;
        // 0x226af0: 0x8c4419a8  lw          $a0, 0x19A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226aec) {
            ctx->pc = 0x226AFCu;
            goto label_226afc;
        }
    }
    ctx->pc = 0x226AF4u;
label_226af4:
    // 0x226af4: 0x8c4319c8  lw          $v1, 0x19C8($v0)
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6600)));
    // 0x226af8: 0x8c4419cc  lw          $a0, 0x19CC($v0)
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6604)));
label_226afc:
    // 0x226afc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226b00: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x226b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226b04: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x226b08: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x226B08u;
    {
        const bool branch_taken_0x226b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B08u;
        // 0x226b0c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b08) {
            ctx->pc = 0x226DF8u;
            goto label_226df8;
        }
    }
    ctx->pc = 0x226B10u;
label_226b10:
    // 0x226b10: 0x8624054a  lh          $a0, 0x54A($s1)
    ctx->pc = 0x226b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x226b14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x226b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x226b18: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x226b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x226b1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x226b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226b24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x226b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x226b28: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x226b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x226b2c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226B2Cu;
    {
        const bool branch_taken_0x226b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B2Cu;
        // 0x226b30: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b2c) {
            ctx->pc = 0x226B6Cu;
            goto label_226b6c;
        }
    }
    ctx->pc = 0x226B34u;
    // 0x226b34: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x226b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x226b38: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x226b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x226b3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x226b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b40: 0x8c651cdc  lw          $a1, 0x1CDC($v1)
    ctx->pc = 0x226b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7388)));
    // 0x226b44: 0x8c621ce0  lw          $v0, 0x1CE0($v1)
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7392)));
    // 0x226b48: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x226b4c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226B4Cu;
    SET_GPR_U32(ctx, 31, 0x226B54u);
    ctx->pc = 0x226B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B4Cu;
    // 0x226b50: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226B4Cu, 0x226B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B54u;
label_226b54:
    // 0x226b54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x226b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226b58: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x226B58u;
    {
        const bool branch_taken_0x226b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B58u;
        // 0x226b5c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b58) {
            ctx->pc = 0x226BA8u;
            goto label_226ba8;
        }
    }
    ctx->pc = 0x226B60u;
    // 0x226b60: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x226b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226b64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x226B64u;
    {
        const bool branch_taken_0x226b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B64u;
        // 0x226b68: 0x8c621ce4  lw          $v0, 0x1CE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b64) {
            ctx->pc = 0x226BA0u;
            goto label_226ba0;
        }
    }
    ctx->pc = 0x226B6Cu;
label_226b6c:
    // 0x226b6c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x226b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x226b70: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x226b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x226b74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x226b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b78: 0x8c651cd0  lw          $a1, 0x1CD0($v1)
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7376)));
    // 0x226b7c: 0x8c621cd4  lw          $v0, 0x1CD4($v1)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7380)));
    // 0x226b80: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x226b84: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x226b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226b90: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226B90u;
    {
        const bool branch_taken_0x226b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B90u;
        // 0x226b94: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b90) {
            ctx->pc = 0x226BA8u;
            goto label_226ba8;
        }
    }
    ctx->pc = 0x226B98u;
    // 0x226b98: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x226b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226b9c: 0x8c621cd8  lw          $v0, 0x1CD8($v1)
    ctx->pc = 0x226b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7384)));
label_226ba0:
    // 0x226ba0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x226ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226ba4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_226ba8:
    // 0x226ba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226bac: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x226bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x226bb0: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x226BB0u;
    {
        const bool branch_taken_0x226bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB0u;
        // 0x226bb4: 0xa22302f7  sb          $v1, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226bb0) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226BB8u;
label_226bb8:
    // 0x226bb8: 0xc04b14c  jal         func_12C530
    ctx->pc = 0x226BB8u;
    SET_GPR_U32(ctx, 31, 0x226BC0u);
    ctx->pc = 0x226BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BB8u;
    // 0x226bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x226BB8u, 0x226BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BC0u;
label_226bc0:
    // 0x226bc0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x226BC0u;
    {
        const bool branch_taken_0x226bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226bc0) {
            ctx->pc = 0x226BECu;
            goto label_226bec;
        }
    }
    ctx->pc = 0x226BC8u;
    // 0x226bc8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226BC8u;
    SET_GPR_U32(ctx, 31, 0x226BD0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226BC8u, 0x226BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BD0u;
label_226bd0:
    // 0x226bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226bd4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x226bd4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x226bd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226BD8u;
    {
        const bool branch_taken_0x226bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bd8) {
            ctx->pc = 0x226BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226BD8u;
            // 0x226bdc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x226BE0u;
            goto label_226be0;
        }
    }
    ctx->pc = 0x226BE0u;
label_226be0:
    // 0x226be0: 0x2010  mfhi        $a0
    ctx->pc = 0x226be0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x226be4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226BE4u;
    {
        const bool branch_taken_0x226be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BE4u;
        // 0x226be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226be4) {
            ctx->pc = 0x226BFCu;
            goto label_226bfc;
        }
    }
    ctx->pc = 0x226BECu;
label_226bec:
    // 0x226bec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226BECu;
    SET_GPR_U32(ctx, 31, 0x226BF4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226BECu, 0x226BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BF4u;
label_226bf4:
    // 0x226bf4: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x226bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226bfc:
    // 0x226bfc: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226BFCu;
    {
        const bool branch_taken_0x226bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x226bfc) {
            ctx->pc = 0x226C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226BFCu;
            // 0x226c00: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226C30u;
            goto label_226c30;
        }
    }
    ctx->pc = 0x226C04u;
    // 0x226c04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226C04u;
    {
        const bool branch_taken_0x226c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C04u;
        // 0x226c08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c04) {
            ctx->pc = 0x226C14u;
            goto label_226c14;
        }
    }
    ctx->pc = 0x226C0Cu;
    // 0x226c0c: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x226C0Cu;
    {
        const bool branch_taken_0x226c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x226c0c) {
            ctx->pc = 0x226C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226C0Cu;
            // 0x226c10: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226C48u;
            goto label_226c48;
        }
    }
    ctx->pc = 0x226C14u;
label_226c14:
    // 0x226c14: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226c18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x226c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226c1c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x226c20: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226c20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226c24: 0x8c43250c  lw          $v1, 0x250C($v0)
    ctx->pc = 0x226c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9484)));
    // 0x226c28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x226C28u;
    {
        const bool branch_taken_0x226c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C28u;
        // 0x226c2c: 0x8c442510  lw          $a0, 0x2510($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c28) {
            ctx->pc = 0x226C5Cu;
            goto label_226c5c;
        }
    }
    ctx->pc = 0x226C30u;
label_226c30:
    // 0x226c30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226c34: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x226c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x226c38: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226c3c: 0x8c432514  lw          $v1, 0x2514($v0)
    ctx->pc = 0x226c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9492)));
    // 0x226c40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x226C40u;
    {
        const bool branch_taken_0x226c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C40u;
        // 0x226c44: 0x8c442518  lw          $a0, 0x2518($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c40) {
            ctx->pc = 0x226C5Cu;
            goto label_226c5c;
        }
    }
    ctx->pc = 0x226C48u;
label_226c48:
    // 0x226c48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x226c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226c4c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x226c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226c50: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226c50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226c54: 0x8c4324fc  lw          $v1, 0x24FC($v0)
    ctx->pc = 0x226c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9468)));
    // 0x226c58: 0x8c442500  lw          $a0, 0x2500($v0)
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9472)));
label_226c5c:
    // 0x226c5c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226c60: 0xa22502f7  sb          $a1, 0x2F7($s1)
    ctx->pc = 0x226c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x226c64: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x226c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226c68: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x226C68u;
    {
        const bool branch_taken_0x226c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C68u;
        // 0x226c6c: 0xae2605f0  sw          $a2, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c68) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226C70u;
label_226c70:
    // 0x226c70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226c74: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226C74u;
    {
        const bool branch_taken_0x226c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226c74) {
            ctx->pc = 0x226CB4u;
            goto label_226cb4;
        }
    }
    ctx->pc = 0x226C7Cu;
    // 0x226c7c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226C7Cu;
    SET_GPR_U32(ctx, 31, 0x226C84u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226C7Cu, 0x226C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C84u;
label_226c84:
    // 0x226c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226c88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x226C88u;
    {
        const bool branch_taken_0x226c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c88) {
            ctx->pc = 0x226CB4u;
            goto label_226cb4;
        }
    }
    ctx->pc = 0x226C90u;
    // 0x226c90: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x226c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x226c94: 0x14500034  bne         $v0, $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x226C94u;
    {
        const bool branch_taken_0x226c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x226C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C94u;
        // 0x226c98: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c94) {
            ctx->pc = 0x226D68u;
            goto label_226d68;
        }
    }
    ctx->pc = 0x226C9Cu;
    // 0x226c9c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x226ca0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x226ca4: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226ca8: 0x8c43278c  lw          $v1, 0x278C($v0)
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10124)));
    // 0x226cac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x226CACu;
    {
        const bool branch_taken_0x226cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CACu;
        // 0x226cb0: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cac) {
            ctx->pc = 0x226D7Cu;
            goto label_226d7c;
        }
    }
    ctx->pc = 0x226CB4u;
label_226cb4:
    // 0x226cb4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226CB4u;
    SET_GPR_U32(ctx, 31, 0x226CBCu);
    ctx->pc = 0x226CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CB4u;
    // 0x226cb8: 0x3c140057  lui         $s4, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226CB4u, 0x226CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CBCu;
label_226cbc:
    // 0x226cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226cc0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x226CC0u;
    {
        const bool branch_taken_0x226cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226cc0) {
            ctx->pc = 0x226CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226CC0u;
            // 0x226cc4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226CDCu;
            goto label_226cdc;
        }
    }
    ctx->pc = 0x226CC8u;
    // 0x226cc8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226CC8u;
    SET_GPR_U32(ctx, 31, 0x226CD0u);
    ctx->pc = 0x226CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CC8u;
    // 0x226ccc: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226CC8u, 0x226CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CD0u;
label_226cd0:
    // 0x226cd0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x226cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x226cd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226CD4u;
    {
        const bool branch_taken_0x226cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CD4u;
        // 0x226cd8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cd4) {
            ctx->pc = 0x226CF8u;
            goto label_226cf8;
        }
    }
    ctx->pc = 0x226CDCu;
label_226cdc:
    // 0x226cdc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x226cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226ce0: 0x8c4328a8  lw          $v1, 0x28A8($v0)
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10408)));
    // 0x226ce4: 0x8c4428ac  lw          $a0, 0x28AC($v0)
    ctx->pc = 0x226ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10412)));
    // 0x226ce8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226cec: 0xa22502f7  sb          $a1, 0x2F7($s1)
    ctx->pc = 0x226cecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x226cf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x226CF0u;
    {
        const bool branch_taken_0x226cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CF0u;
        // 0x226cf4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cf0) {
            ctx->pc = 0x226D10u;
            goto label_226d10;
        }
    }
    ctx->pc = 0x226CF8u;
label_226cf8:
    // 0x226cf8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226cfc: 0x8c442910  lw          $a0, 0x2910($v0)
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10512)));
    // 0x226d00: 0x8c452914  lw          $a1, 0x2914($v0)
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10516)));
    // 0x226d04: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x226d04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x226d08: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226d0c: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_226d10:
    // 0x226d10: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x226d14: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x226d18: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x226d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x226d1c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x226D1Cu;
    {
        const bool branch_taken_0x226d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D1Cu;
        // 0x226d20: 0xae2305f4  sw          $v1, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d1c) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226D24u;
label_226d24:
    // 0x226d24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226D24u;
    SET_GPR_U32(ctx, 31, 0x226D2Cu);
    ctx->pc = 0x226D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D24u;
    // 0x226d28: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226D24u, 0x226D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D2Cu;
label_226d2c:
    // 0x226d2c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x226d2cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x226d30: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226D30u;
    {
        const bool branch_taken_0x226d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d30) {
            ctx->pc = 0x226D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226D30u;
            // 0x226d34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D38u;
            goto label_226d38;
        }
    }
    ctx->pc = 0x226D38u;
label_226d38:
    // 0x226d38: 0x1810  mfhi        $v1
    ctx->pc = 0x226d38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x226d3c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x226D3Cu;
    {
        const bool branch_taken_0x226d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D3Cu;
        // 0x226d40: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d3c) {
            ctx->pc = 0x226D94u;
            goto label_226d94;
        }
    }
    ctx->pc = 0x226D44u;
    // 0x226d44: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x226d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x226d48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226D48u;
    {
        const bool branch_taken_0x226d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D48u;
        // 0x226d4c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d48) {
            ctx->pc = 0x226D68u;
            goto label_226d68;
        }
    }
    ctx->pc = 0x226D50u;
    // 0x226d50: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x226d54: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x226d58: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226d58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226d5c: 0x8c43278c  lw          $v1, 0x278C($v0)
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10124)));
    // 0x226d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x226D60u;
    {
        const bool branch_taken_0x226d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D60u;
        // 0x226d64: 0x8c442790  lw          $a0, 0x2790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d60) {
            ctx->pc = 0x226D7Cu;
            goto label_226d7c;
        }
    }
    ctx->pc = 0x226D68u;
label_226d68:
    // 0x226d68: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x226d6c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x226d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x226d70: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226d74: 0x8c4329e0  lw          $v1, 0x29E0($v0)
    ctx->pc = 0x226d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10720)));
    // 0x226d78: 0x8c4429e4  lw          $a0, 0x29E4($v0)
    ctx->pc = 0x226d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10724)));
label_226d7c:
    // 0x226d7c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226d80: 0xae2505f4  sw          $a1, 0x5F4($s1)
    ctx->pc = 0x226d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 5));
    // 0x226d84: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x226d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226d88: 0xa22602f7  sb          $a2, 0x2F7($s1)
    ctx->pc = 0x226d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 6));
    // 0x226d8c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x226D8Cu;
    {
        const bool branch_taken_0x226d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D8Cu;
        // 0x226d90: 0xae2505f0  sw          $a1, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d8c) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226D94u;
label_226d94:
    // 0x226d94: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x226D94u;
    SET_GPR_U32(ctx, 31, 0x226D9Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x226D94u, 0x226D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D9Cu;
label_226d9c:
    // 0x226d9c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x226d9cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x226da0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226da4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226DA4u;
    {
        const bool branch_taken_0x226da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226da4) {
            ctx->pc = 0x226DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226DA4u;
            // 0x226da8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x226DACu;
            goto label_226dac;
        }
    }
    ctx->pc = 0x226DACu;
label_226dac:
    // 0x226dac: 0x1810  mfhi        $v1
    ctx->pc = 0x226dacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x226db0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x226DB0u;
    {
        const bool branch_taken_0x226db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DB0u;
        // 0x226db4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226db0) {
            ctx->pc = 0x226DD4u;
            goto label_226dd4;
        }
    }
    ctx->pc = 0x226DB8u;
    // 0x226db8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226dbc: 0x8c4328a8  lw          $v1, 0x28A8($v0)
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10408)));
    // 0x226dc0: 0x8c4428ac  lw          $a0, 0x28AC($v0)
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10412)));
    // 0x226dc4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226dc8: 0xa22502f7  sb          $a1, 0x2F7($s1)
    ctx->pc = 0x226dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x226dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226DCCu;
    {
        const bool branch_taken_0x226dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DCCu;
        // 0x226dd0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226dcc) {
            ctx->pc = 0x226DF0u;
            goto label_226df0;
        }
    }
    ctx->pc = 0x226DD4u;
label_226dd4:
    // 0x226dd4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226dd8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226ddc: 0x8c442910  lw          $a0, 0x2910($v0)
    ctx->pc = 0x226ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10512)));
    // 0x226de0: 0x8c452914  lw          $a1, 0x2914($v0)
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10516)));
    // 0x226de4: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x226de4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x226de8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226dec: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_226df0:
    // 0x226df0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x226df4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x226df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_226df8:
    // 0x226df8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x226df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x226dfc: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226dfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226e00: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x226E00u;
    {
        const bool branch_taken_0x226e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0xae2305f4  sw          $v1, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e00) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226E08u;
label_226e08:
    // 0x226e08: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226e0c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x226e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x226e10: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x226e14: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x226e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226e18: 0x8c4330c4  lw          $v1, 0x30C4($v0)
    ctx->pc = 0x226e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12484)));
    // 0x226e1c: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226e1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226e20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x226E20u;
    {
        const bool branch_taken_0x226e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E20u;
        // 0x226e24: 0x8c4430c8  lw          $a0, 0x30C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e20) {
            ctx->pc = 0x226E54u;
            goto label_226e54;
        }
    }
    ctx->pc = 0x226E28u;
label_226e28:
    // 0x226e28: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226e2c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x226e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x226e30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x226e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x226e34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x226E34u;
    {
        const bool branch_taken_0x226e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E34u;
        // 0x226e38: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e34) {
            ctx->pc = 0x226E6Cu;
            goto label_226e6c;
        }
    }
    ctx->pc = 0x226E3Cu;
    // 0x226e3c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x226e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226e40: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x226e44: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x226e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226e48: 0x8c4338e8  lw          $v1, 0x38E8($v0)
    ctx->pc = 0x226e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14568)));
    // 0x226e4c: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x226e50: 0x8c4438ec  lw          $a0, 0x38EC($v0)
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14572)));
label_226e54:
    // 0x226e54: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226e58: 0xae2505f0  sw          $a1, 0x5F0($s1)
    ctx->pc = 0x226e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
    // 0x226e5c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x226e60: 0xae2605f4  sw          $a2, 0x5F4($s1)
    ctx->pc = 0x226e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 6));
    // 0x226e64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x226E64u;
    {
        const bool branch_taken_0x226e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E64u;
        // 0x226e68: 0xa22702f7  sb          $a3, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e64) {
            ctx->pc = 0x226EE4u;
            goto label_226ee4;
        }
    }
    ctx->pc = 0x226E6Cu;
label_226e6c:
    // 0x226e6c: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x226e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x226e70: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x226e74: 0x24649b70  addiu       $a0, $v1, -0x6490
    ctx->pc = 0x226e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x226e78: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x226e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e7c: 0x8ca237e8  lw          $v0, 0x37E8($a1)
    ctx->pc = 0x226e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14312)));
    // 0x226e80: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226E80u;
    SET_GPR_U32(ctx, 31, 0x226E88u);
    ctx->pc = 0x226E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E80u;
    // 0x226e84: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226E80u, 0x226E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E88u;
label_226e88:
    // 0x226e88: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x226e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226e8c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x226E8Cu;
    {
        const bool branch_taken_0x226e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E8Cu;
        // 0x226e90: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e8c) {
            ctx->pc = 0x226EB4u;
            goto label_226eb4;
        }
    }
    ctx->pc = 0x226E94u;
    // 0x226e94: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x226e98: 0x8c6237f0  lw          $v0, 0x37F0($v1)
    ctx->pc = 0x226e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14320)));
    // 0x226e9c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x226E9Cu;
    {
        const bool branch_taken_0x226e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E9Cu;
        // 0x226ea0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e9c) {
            ctx->pc = 0x226ECCu;
            goto label_226ecc;
        }
    }
    ctx->pc = 0x226EA4u;
    // 0x226ea4: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x226EA4u;
    SET_GPR_U32(ctx, 31, 0x226EACu);
    ctx->pc = 0x226EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EA4u;
    // 0x226ea8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x226EA4u, 0x226EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226EACu;
    {
        const bool branch_taken_0x226eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EACu;
        // 0x226eb0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226eac) {
            ctx->pc = 0x226ED0u;
            goto label_226ed0;
        }
    }
    ctx->pc = 0x226EB4u;
label_226eb4:
    // 0x226eb4: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x226eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x226eb8: 0x8c6237ec  lw          $v0, 0x37EC($v1)
    ctx->pc = 0x226eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14316)));
    // 0x226ebc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226EBCu;
    {
        const bool branch_taken_0x226ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EBCu;
        // 0x226ec0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ebc) {
            ctx->pc = 0x226ECCu;
            goto label_226ecc;
        }
    }
    ctx->pc = 0x226EC4u;
    // 0x226ec4: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x226EC4u;
    SET_GPR_U32(ctx, 31, 0x226ECCu);
    ctx->pc = 0x226EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EC4u;
    // 0x226ec8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x226EC4u, 0x226ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ECCu;
label_226ecc:
    // 0x226ecc: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_226ed0:
    // 0x226ed0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x226ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x226ed4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x226ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226ed8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x226ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x226edc: 0xae2305f4  sw          $v1, 0x5F4($s1)
    ctx->pc = 0x226edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    // 0x226ee0: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x226ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
label_226ee4:
    // 0x226ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x226ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226ee8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ef0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x226ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ef8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x226ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226efc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x226EFCu;
    SET_GPR_U32(ctx, 31, 0x226F04u);
    ctx->pc = 0x226F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EFCu;
    // 0x226f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x226EFCu, 0x226F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F04u;
label_226f04:
    // 0x226f04: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x226F04u;
    SET_GPR_U32(ctx, 31, 0x226F0Cu);
    ctx->pc = 0x226F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F04u;
    // 0x226f08: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x226F04u, 0x226F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F0Cu;
label_226f0c:
    // 0x226f0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x226f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226f10: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x226f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x226f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226F14u;
    {
        const bool branch_taken_0x226f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F14u;
        // 0x226f18: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f14) {
            ctx->pc = 0x226F34u;
            goto label_226f34;
        }
    }
    ctx->pc = 0x226F1Cu;
    // 0x226f1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x226f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226f20: 0x244285f0  addiu       $v0, $v0, -0x7A10
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936048));
    // 0x226f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226f2c: 0x800008  jr          $a0
    ctx->pc = 0x226F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226F34u: goto label_226f34;
            case 0x226F4Cu: goto label_226f4c;
            case 0x226F68u: goto label_226f68;
            case 0x226F8Cu: goto label_226f8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x226F34u;
label_226f34:
    // 0x226f34: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226f38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226f3c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x226f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226f44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x226F44u;
    {
        const bool branch_taken_0x226f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F44u;
        // 0x226f48: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f44) {
            ctx->pc = 0x226F84u;
            goto label_226f84;
        }
    }
    ctx->pc = 0x226F4Cu;
label_226f4c:
    // 0x226f4c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226f54: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x226f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x226f58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x226f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226f60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226F60u;
    {
        const bool branch_taken_0x226f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F60u;
        // 0x226f64: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f60) {
            ctx->pc = 0x226F84u;
            goto label_226f84;
        }
    }
    ctx->pc = 0x226F68u;
label_226f68:
    // 0x226f68: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226f70: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x226f74: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x226f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x226f78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226f7c: 0x0  nop
    ctx->pc = 0x226f7cu;
    // NOP
    // 0x226f80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_226f84:
    // 0x226f84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x226f84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x226f88: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x226f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_226f8c:
    // 0x226f8c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x226f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f94: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x226f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226f9c: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x226f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x226fa0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x226fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x226fa4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x226fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x226fa8: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x226fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x226fac: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x226facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x226fb0: 0xa6200568  sh          $zero, 0x568($s1)
    ctx->pc = 0x226fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x226fb4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x226fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_226fb8:
    // 0x226fb8: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x226fbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226FBCu;
    {
        const bool branch_taken_0x226fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FBCu;
        // 0x226fc0: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fbc) {
            ctx->pc = 0x226FCCu;
            goto label_226fcc;
        }
    }
    ctx->pc = 0x226FC4u;
    // 0x226fc4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226FC4u;
    {
        const bool branch_taken_0x226fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226fc4) {
            ctx->pc = 0x226FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226FC4u;
            // 0x226fc8: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226FE0u;
            goto label_226fe0;
        }
    }
    ctx->pc = 0x226FCCu;
label_226fcc:
    // 0x226fcc: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x226fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226fd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x226fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x226fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x226fd8: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x226fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x226fdc: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_226fe0:
    // 0x226fe0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x226FE0u;
    {
        const bool branch_taken_0x226fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FE0u;
        // 0x226fe4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fe0) {
            ctx->pc = 0x22704Cu;
            goto label_22704c;
        }
    }
    ctx->pc = 0x226FE8u;
    // 0x226fe8: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x226fec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x226FECu;
    SET_GPR_U32(ctx, 31, 0x226FF4u);
    ctx->pc = 0x226FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FECu;
    // 0x226ff0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x226FECu, 0x226FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FF4u;
label_226ff4:
    // 0x226ff4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x226ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ffc: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x227000: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x227000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x227004: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x227004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x227008: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x227008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22700c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x22700cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x227010: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x227010u;
    SET_GPR_U32(ctx, 31, 0x227018u);
    ctx->pc = 0x227014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227010u;
    // 0x227014: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x227010u, 0x227018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227018u;
label_227018:
    // 0x227018: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x227018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22701c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22701cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x227020: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x227020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x227024: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x227024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x227028: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x227028u;
    SET_GPR_U32(ctx, 31, 0x227030u);
    ctx->pc = 0x22702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227028u;
    // 0x22702c: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x227028u, 0x227030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227030u;
label_227030:
    // 0x227030: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x227030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227034: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x227034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x227038: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x227038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22703c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22703cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x227040: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x227040u;
    SET_GPR_U32(ctx, 31, 0x227048u);
    ctx->pc = 0x227044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227040u;
    // 0x227044: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x227040u, 0x227048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227048u;
label_227048:
    // 0x227048: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x227048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_22704c:
    // 0x22704c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22704cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227054: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x227054u;
    {
        const bool branch_taken_0x227054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227054) {
            ctx->pc = 0x227058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227054u;
            // 0x227058: 0x8e2405f4  lw          $a0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227078u;
            goto label_227078;
        }
    }
    ctx->pc = 0x22705Cu;
    // 0x22705c: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x227060: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x227060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x227064: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227064u;
    {
        const bool branch_taken_0x227064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227064) {
            ctx->pc = 0x227068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227064u;
            // 0x227068: 0x8e2405f4  lw          $a0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227078u;
            goto label_227078;
        }
    }
    ctx->pc = 0x22706Cu;
    // 0x22706c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227070: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x227070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x227074: 0x8e2405f4  lw          $a0, 0x5F4($s1)
    ctx->pc = 0x227074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_227078:
    // 0x227078: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227078u;
    {
        const bool branch_taken_0x227078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227078u;
        // 0x22707c: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227078) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227080u;
    // 0x227080: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x227084: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x227084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x227088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x227088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22708c: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x22708cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x227090: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x227090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_227094:
    // 0x227094: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227094u;
    SET_GPR_U32(ctx, 31, 0x22709Cu);
    ctx->pc = 0x227098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227094u;
    // 0x227098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227094u, 0x22709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22709Cu;
label_22709c:
    // 0x22709c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22709Cu;
    {
        const bool branch_taken_0x22709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22709c) {
            ctx->pc = 0x2270E8u;
            goto label_2270e8;
        }
    }
    ctx->pc = 0x2270A4u;
    // 0x2270a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2270a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2270a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2270A8u;
    SET_GPR_U32(ctx, 31, 0x2270B0u);
    ctx->pc = 0x2270ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270A8u;
    // 0x2270ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2270A8u, 0x2270B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270B0u;
label_2270b0:
    // 0x2270b0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2270b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2270b4: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x2270b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2270B8u;
    {
        const bool branch_taken_0x2270b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2270b8) {
            ctx->pc = 0x2270E0u;
            goto label_2270e0;
        }
    }
    ctx->pc = 0x2270C0u;
    // 0x2270c0: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2270C0u;
    SET_GPR_U32(ctx, 31, 0x2270C8u);
    ctx->pc = 0x2270C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270C0u;
    // 0x2270c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2270C0u, 0x2270C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270C8u;
label_2270c8:
    // 0x2270c8: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2270C8u;
    {
        const bool branch_taken_0x2270c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2270CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C8u;
        // 0x2270cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270c8) {
            ctx->pc = 0x227480u;
            goto label_227480;
        }
    }
    ctx->pc = 0x2270D0u;
    // 0x2270d0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2270D0u;
    SET_GPR_U32(ctx, 31, 0x2270D8u);
    ctx->pc = 0x2270D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270D0u;
    // 0x2270d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2270D0u, 0x2270D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270D8u;
label_2270d8:
    // 0x2270d8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2270D8u;
    {
        const bool branch_taken_0x2270d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270D8u;
        // 0x2270dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270d8) {
            ctx->pc = 0x227480u;
            goto label_227480;
        }
    }
    ctx->pc = 0x2270E0u;
label_2270e0:
    // 0x2270e0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2270E0u;
    SET_GPR_U32(ctx, 31, 0x2270E8u);
    ctx->pc = 0x2270E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270E0u;
    // 0x2270e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2270E0u, 0x2270E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270E8u;
label_2270e8:
    // 0x2270e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2270ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2270ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2270f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2270f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2270F4u;
    SET_GPR_U32(ctx, 31, 0x2270FCu);
    ctx->pc = 0x2270F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270F4u;
    // 0x2270f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2270F4u, 0x2270FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270FCu;
label_2270fc:
    // 0x2270fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2270fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227100: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227100u;
    SET_GPR_U32(ctx, 31, 0x227108u);
    ctx->pc = 0x227104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227100u;
    // 0x227104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227100u, 0x227108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227108u;
label_227108:
    // 0x227108: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x227108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_22710c:
    // 0x22710c: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x22710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x227110: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227110u;
    {
        const bool branch_taken_0x227110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227110u;
        // 0x227114: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227110) {
            ctx->pc = 0x227130u;
            goto label_227130;
        }
    }
    ctx->pc = 0x227118u;
    // 0x227118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22711c: 0x24428610  addiu       $v0, $v0, -0x79F0
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936080));
    // 0x227120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227128: 0x800008  jr          $a0
    ctx->pc = 0x227128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227130u: goto label_227130;
            case 0x227158u: goto label_227158;
            case 0x227180u: goto label_227180;
            case 0x2271E0u: goto label_2271e0;
            case 0x227254u: goto label_227254;
            case 0x2272A0u: goto label_2272a0;
            case 0x227300u: goto label_227300;
            case 0x227364u: goto label_227364;
            case 0x22738Cu: goto label_22738c;
            case 0x2273B4u: goto label_2273b4;
            case 0x2273DCu: goto label_2273dc;
            case 0x227410u: goto label_227410;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227130u;
label_227130:
    // 0x227130: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227138: 0x504000c5  beql        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x227138u;
    {
        const bool branch_taken_0x227138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227138) {
            ctx->pc = 0x22713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227138u;
            // 0x22713c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227140u;
    // 0x227140: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x227144: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x227144u;
    {
        const bool branch_taken_0x227144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227144u;
        // 0x227148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227144) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x22714Cu;
    // 0x22714c: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x22714cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227150: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x227150u;
    {
        const bool branch_taken_0x227150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227150u;
        // 0x227154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227150) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x227158u;
label_227158:
    // 0x227158: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22715c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227160: 0x504000bb  beql        $v0, $zero, . + 4 + (0xBB << 2)
    ctx->pc = 0x227160u;
    {
        const bool branch_taken_0x227160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227160) {
            ctx->pc = 0x227164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227160u;
            // 0x227164: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227168u;
    // 0x227168: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x22716c: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x22716Cu;
    {
        const bool branch_taken_0x22716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22716Cu;
        // 0x227170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22716c) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x227174u;
    // 0x227174: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x227174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227178: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x227178u;
    {
        const bool branch_taken_0x227178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227178u;
        // 0x22717c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227178) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x227180u;
label_227180:
    // 0x227180: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x227180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227184: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x227184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x227188: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x227188u;
    {
        const bool branch_taken_0x227188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227188u;
        // 0x22718c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227188) {
            ctx->pc = 0x2271D8u;
            goto label_2271d8;
        }
    }
    ctx->pc = 0x227190u;
    // 0x227190: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x227194: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227194u;
    {
        const bool branch_taken_0x227194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227194u;
        // 0x227198: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227194) {
            ctx->pc = 0x2271D4u;
            goto label_2271d4;
        }
    }
    ctx->pc = 0x22719Cu;
    // 0x22719c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22719Cu;
    {
        const bool branch_taken_0x22719c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22719Cu;
        // 0x2271a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22719c) {
            ctx->pc = 0x2271B0u;
            goto label_2271b0;
        }
    }
    ctx->pc = 0x2271A4u;
    // 0x2271a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2271a8: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2271A8u;
    SET_GPR_U32(ctx, 31, 0x2271B0u);
    ctx->pc = 0x2271ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271A8u;
    // 0x2271ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2271A8u, 0x2271B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271B0u;
label_2271b0:
    // 0x2271b0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2271b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2271b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2271b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2271b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2271B8u;
    {
        const bool branch_taken_0x2271b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271b8) {
            ctx->pc = 0x2271CCu;
            goto label_2271cc;
        }
    }
    ctx->pc = 0x2271C0u;
    // 0x2271c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2271c4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2271C4u;
    SET_GPR_U32(ctx, 31, 0x2271CCu);
    ctx->pc = 0x2271C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271C4u;
    // 0x2271c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2271C4u, 0x2271CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271CCu;
label_2271cc:
    // 0x2271cc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2271CCu;
    {
        const bool branch_taken_0x2271cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271CCu;
        // 0x2271d0: 0xae2005f8  sw          $zero, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271cc) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2271D4u;
label_2271d4:
    // 0x2271d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2271d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2271d8:
    // 0x2271d8: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2271D8u;
    {
        const bool branch_taken_0x2271d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271D8u;
        // 0x2271dc: 0xae2205f8  sw          $v0, 0x5F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271d8) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2271E0u;
label_2271e0:
    // 0x2271e0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2271e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2271e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2271e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2271e8: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x2271E8u;
    {
        const bool branch_taken_0x2271e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271e8) {
            ctx->pc = 0x2271ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2271E8u;
            // 0x2271ec: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x2271F0u;
    // 0x2271f0: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x2271f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2271f4: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x2271f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2271f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2271f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2271fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2271fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x227200: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x227200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227204: 0x0  nop
    ctx->pc = 0x227204u;
    // NOP
    // 0x227208: 0x45000090  bc1f        . + 4 + (0x90 << 2)
    ctx->pc = 0x227208u;
    {
        const bool branch_taken_0x227208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227208u;
        // 0x22720c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227208) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x227210u;
    // 0x227210: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x227214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22721c: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x22721cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227220: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x227220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227224: 0x86260568  lh          $a2, 0x568($s1)
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x227228: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227228u;
    SET_GPR_U32(ctx, 31, 0x227230u);
    ctx->pc = 0x22722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227228u;
    // 0x22722c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227228u, 0x227230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227230u;
label_227230:
    // 0x227230: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x227230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x227234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227238: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22723c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x22723cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x227240: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x227240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x227244: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x227244u;
    {
        const bool branch_taken_0x227244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227244u;
        // 0x227248: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227244) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x22724Cu;
    // 0x22724c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x22724Cu;
    {
        const bool branch_taken_0x22724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22724Cu;
        // 0x227250: 0xa6200568  sh          $zero, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22724c) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x227254u;
label_227254:
    // 0x227254: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227258: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22725c: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x22725Cu;
    {
        const bool branch_taken_0x22725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22725c) {
            ctx->pc = 0x227260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22725Cu;
            // 0x227260: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227264u;
    // 0x227264: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x227264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227268: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x227268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22726c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22726cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x227270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x227274: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x227274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227278: 0x0  nop
    ctx->pc = 0x227278u;
    // NOP
    // 0x22727c: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x22727Cu;
    {
        const bool branch_taken_0x22727c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22727Cu;
        // 0x227280: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22727c) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x227284u;
    // 0x227284: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x227288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22728c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227290: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x227290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227294: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x227298: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x227298u;
    {
        const bool branch_taken_0x227298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227298u;
        // 0x22729c: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227298) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x2272A0u;
label_2272a0:
    // 0x2272a0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2272a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2272a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2272a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2272a8: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x2272A8u;
    {
        const bool branch_taken_0x2272a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2272a8) {
            ctx->pc = 0x2272ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2272A8u;
            // 0x2272ac: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x2272B0u;
    // 0x2272b0: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2272b4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2272B4u;
    {
        const bool branch_taken_0x2272b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272B4u;
        // 0x2272b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272b4) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2272BCu;
    // 0x2272bc: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2272bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2272c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2272c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2272c4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2272C4u;
    SET_GPR_U32(ctx, 31, 0x2272CCu);
    ctx->pc = 0x2272C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272C4u;
    // 0x2272c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2272C4u, 0x2272CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272CCu;
label_2272cc:
    // 0x2272cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2272d0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2272D0u;
    SET_GPR_U32(ctx, 31, 0x2272D8u);
    ctx->pc = 0x2272D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272D0u;
    // 0x2272d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2272D0u, 0x2272D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272D8u;
label_2272d8:
    // 0x2272d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2272dc: 0x5443005c  bnel        $v0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2272DCu;
    {
        const bool branch_taken_0x2272dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2272dc) {
            ctx->pc = 0x2272E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2272DCu;
            // 0x2272e0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x2272E4u;
    // 0x2272e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2272e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272e8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2272e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2272ec: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2272ECu;
    SET_GPR_U32(ctx, 31, 0x2272F4u);
    ctx->pc = 0x2272F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272ECu;
    // 0x2272f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2272ECu, 0x2272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F4u;
label_2272f4:
    // 0x2272f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2272f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2272F8u;
    {
        const bool branch_taken_0x2272f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F8u;
        // 0x2272fc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272f8) {
            ctx->pc = 0x227354u;
            goto label_227354;
        }
    }
    ctx->pc = 0x227300u;
label_227300:
    // 0x227300: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227308: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x227308u;
    {
        const bool branch_taken_0x227308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227308) {
            ctx->pc = 0x22730Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227308u;
            // 0x22730c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227310u;
    // 0x227310: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x227314: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x227314u;
    {
        const bool branch_taken_0x227314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227314u;
        // 0x227318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227314) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x22731Cu;
    // 0x22731c: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x22731cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227320: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x227320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227324: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227324u;
    SET_GPR_U32(ctx, 31, 0x22732Cu);
    ctx->pc = 0x227328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227324u;
    // 0x227328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227324u, 0x22732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22732Cu;
label_22732c:
    // 0x22732c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x227330: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x227334: 0x54620046  bnel        $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x227334u;
    {
        const bool branch_taken_0x227334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227334) {
            ctx->pc = 0x227338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227334u;
            // 0x227338: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x22733Cu;
    // 0x22733c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227340: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227344: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227344u;
    SET_GPR_U32(ctx, 31, 0x22734Cu);
    ctx->pc = 0x227348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227344u;
    // 0x227348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227344u, 0x22734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22734Cu;
label_22734c:
    // 0x22734c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227350: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x227350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_227354:
    // 0x227354: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227354u;
    SET_GPR_U32(ctx, 31, 0x22735Cu);
    ctx->pc = 0x227358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227354u;
    // 0x227358: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227354u, 0x22735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22735Cu;
label_22735c:
    // 0x22735c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22735Cu;
    {
        const bool branch_taken_0x22735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22735Cu;
        // 0x227360: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22735c) {
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227364u;
label_227364:
    // 0x227364: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22736c: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x22736Cu;
    {
        const bool branch_taken_0x22736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22736c) {
            ctx->pc = 0x227370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22736Cu;
            // 0x227370: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227374u;
    // 0x227374: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x227378: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x227378u;
    {
        const bool branch_taken_0x227378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227378u;
        // 0x22737c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227378) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x227380u;
    // 0x227380: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x227380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227384: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x227384u;
    {
        const bool branch_taken_0x227384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227384u;
        // 0x227388: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227384) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x22738Cu;
label_22738c:
    // 0x22738c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22738cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227390: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227394: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x227394u;
    {
        const bool branch_taken_0x227394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227394) {
            ctx->pc = 0x227398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227394u;
            // 0x227398: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x22739Cu;
    // 0x22739c: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2273a0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2273A0u;
    {
        const bool branch_taken_0x2273a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273A0u;
        // 0x2273a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273a0) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2273A8u;
    // 0x2273a8: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2273a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2273ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2273ACu;
    {
        const bool branch_taken_0x2273ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273ACu;
        // 0x2273b0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273ac) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x2273B4u;
label_2273b4:
    // 0x2273b4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2273b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2273b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2273b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2273bc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2273BCu;
    {
        const bool branch_taken_0x2273bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2273bc) {
            ctx->pc = 0x2273C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2273BCu;
            // 0x2273c0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x2273C4u;
    // 0x2273c4: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2273c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2273C8u;
    {
        const bool branch_taken_0x2273c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273C8u;
        // 0x2273cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273c8) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2273D0u;
    // 0x2273d0: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2273d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2273d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2273D4u;
    {
        const bool branch_taken_0x2273d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273D4u;
        // 0x2273d8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273d4) {
            ctx->pc = 0x227400u;
            goto label_227400;
        }
    }
    ctx->pc = 0x2273DCu;
label_2273dc:
    // 0x2273dc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2273dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2273e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2273e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2273e4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2273E4u;
    {
        const bool branch_taken_0x2273e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2273e4) {
            ctx->pc = 0x2273E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2273E4u;
            // 0x2273e8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x2273ECu;
    // 0x2273ec: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2273f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2273F0u;
    {
        const bool branch_taken_0x2273f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273F0u;
        // 0x2273f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273f0) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x2273F8u;
    // 0x2273f8: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2273f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2273fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_227400:
    // 0x227400: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227400u;
    SET_GPR_U32(ctx, 31, 0x227408u);
    ctx->pc = 0x227404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227400u;
    // 0x227404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227400u, 0x227408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227408u;
label_227408:
    // 0x227408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x227408u;
    {
        const bool branch_taken_0x227408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227408u;
        // 0x22740c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227408) {
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227410u;
label_227410:
    // 0x227410: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x227410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x227414: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227418: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x227418u;
    {
        const bool branch_taken_0x227418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227418) {
            ctx->pc = 0x22741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227418u;
            // 0x22741c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227450u;
            goto label_227450;
        }
    }
    ctx->pc = 0x227420u;
    // 0x227420: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x227424: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227424u;
    {
        const bool branch_taken_0x227424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227424u;
        // 0x227428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227424) {
            ctx->pc = 0x22744Cu;
            goto label_22744c;
        }
    }
    ctx->pc = 0x22742Cu;
    // 0x22742c: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x22742cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x227430: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x227434: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227434u;
    SET_GPR_U32(ctx, 31, 0x22743Cu);
    ctx->pc = 0x227438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227434u;
    // 0x227438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227434u, 0x22743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22743Cu;
label_22743c:
    // 0x22743c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227440: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x227444: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227444u;
    SET_GPR_U32(ctx, 31, 0x22744Cu);
    ctx->pc = 0x227448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227444u;
    // 0x227448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227444u, 0x22744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22744Cu;
label_22744c:
    // 0x22744c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_227450:
    // 0x227450: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x227450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x227454: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227454u;
    {
        const bool branch_taken_0x227454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227454u;
        // 0x227458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227454) {
            ctx->pc = 0x227460u;
            goto label_227460;
        }
    }
    ctx->pc = 0x22745Cu;
    // 0x22745c: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22745cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_227460:
    // 0x227460: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x227464: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227464u;
    {
        const bool branch_taken_0x227464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227464u;
        // 0x227468: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227464) {
            ctx->pc = 0x227480u;
            goto label_227480;
        }
    }
    ctx->pc = 0x22746Cu;
    // 0x22746c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x227470: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x227474: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x227474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x227478: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x227478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22747c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22747cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_227480:
    // 0x227480: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x227480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227484: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x227484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227488: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x227488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22748c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22748cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227494: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x227494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227498: 0x3e00008  jr          $ra
    ctx->pc = 0x227498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227498u;
        // 0x22749c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2274A0u;
}
