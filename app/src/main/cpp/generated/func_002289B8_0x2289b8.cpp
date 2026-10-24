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

// Function: func_002289B8
// Address: 0x2289b8 - 0x228e18
void func_002289B8_0x2289b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002289B8_0x2289b8");
#endif

    switch (ctx->pc) {
        case 0x2289f8u: goto label_2289f8;
        case 0x228a40u: goto label_228a40;
        case 0x228a60u: goto label_228a60;
        case 0x228a84u: goto label_228a84;
        case 0x228abcu: goto label_228abc;
        case 0x228accu: goto label_228acc;
        case 0x228b70u: goto label_228b70;
        case 0x228b90u: goto label_228b90;
        case 0x228b98u: goto label_228b98;
        case 0x228ba8u: goto label_228ba8;
        case 0x228bbcu: goto label_228bbc;
        case 0x228bc8u: goto label_228bc8;
        case 0x228becu: goto label_228bec;
        case 0x228c00u: goto label_228c00;
        case 0x228c2cu: goto label_228c2c;
        case 0x228c4cu: goto label_228c4c;
        case 0x228c70u: goto label_228c70;
        case 0x228ca4u: goto label_228ca4;
        case 0x228cb0u: goto label_228cb0;
        case 0x228d50u: goto label_228d50;
        case 0x228d70u: goto label_228d70;
        case 0x228d78u: goto label_228d78;
        case 0x228d88u: goto label_228d88;
        case 0x228d9cu: goto label_228d9c;
        case 0x228da8u: goto label_228da8;
        case 0x228dbcu: goto label_228dbc;
        default: break;
    }

    ctx->pc = 0x2289b8u;

    // 0x2289b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2289b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2289bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2289bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2289c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2289c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2289c4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2289c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2289c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2289c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2289ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2289d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2289d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2289d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2289d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2289d8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2289d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2289dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2289dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2289e0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2289e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2289e4: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x2289e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x2289e8: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x2289e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2289ec: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2289ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x2289f0: 0xc098a84  jal         func_262A10
    ctx->pc = 0x2289F0u;
    SET_GPR_U32(ctx, 31, 0x2289F8u);
    ctx->pc = 0x2289F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2289F0u;
    // 0x2289f4: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x2289F0u, 0x2289F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289F8u;
label_2289f8:
    // 0x2289f8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2289f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2289fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228a00: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x228A00u;
    {
        const bool branch_taken_0x228a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A00u;
        // 0x228a04: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a00) {
            ctx->pc = 0x228B5Cu;
            goto label_228b5c;
        }
    }
    ctx->pc = 0x228A08u;
    // 0x228a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228A08u;
    {
        const bool branch_taken_0x228a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A08u;
        // 0x228a0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a08) {
            ctx->pc = 0x228A20u;
            goto label_228a20;
        }
    }
    ctx->pc = 0x228A10u;
    // 0x228a10: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x228A10u;
    {
        const bool branch_taken_0x228a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a10) {
            ctx->pc = 0x228A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A10u;
            // 0x228a14: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228A38u;
            goto label_228a38;
        }
    }
    ctx->pc = 0x228A18u;
    // 0x228a18: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x228A18u;
    {
        const bool branch_taken_0x228a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A18u;
        // 0x228a1c: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a18) {
            ctx->pc = 0x228DACu;
            goto label_228dac;
        }
    }
    ctx->pc = 0x228A20u;
label_228a20:
    // 0x228a20: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x228A20u;
    {
        const bool branch_taken_0x228a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A20u;
        // 0x228a24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a20) {
            ctx->pc = 0x228C1Cu;
            goto label_228c1c;
        }
    }
    ctx->pc = 0x228A28u;
    // 0x228a28: 0x506200c5  beql        $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x228A28u;
    {
        const bool branch_taken_0x228a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228a28) {
            ctx->pc = 0x228A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A28u;
            // 0x228a2c: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228D40u;
            goto label_228d40;
        }
    }
    ctx->pc = 0x228A30u;
    // 0x228a30: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x228A30u;
    {
        const bool branch_taken_0x228a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A30u;
        // 0x228a34: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a30) {
            ctx->pc = 0x228DACu;
            goto label_228dac;
        }
    }
    ctx->pc = 0x228A38u;
label_228a38:
    // 0x228a38: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228A38u;
    SET_GPR_U32(ctx, 31, 0x228A40u);
    ctx->pc = 0x228A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228A38u;
    // 0x228a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228A38u, 0x228A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A40u;
label_228a40:
    // 0x228a40: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x228a40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228a44: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x228a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x228a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a50: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228a54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228a58: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x228A58u;
    SET_GPR_U32(ctx, 31, 0x228A60u);
    ctx->pc = 0x228A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228A58u;
    // 0x228a5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x228A58u, 0x228A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A60u;
label_228a60:
    // 0x228a60: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228a64: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x228a68: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x228a6c: 0x8c6515f8  lw          $a1, 0x15F8($v1)
    ctx->pc = 0x228a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5624)));
    // 0x228a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a74: 0x8c6215fc  lw          $v0, 0x15FC($v1)
    ctx->pc = 0x228a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5628)));
    // 0x228a78: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228a7c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228A7Cu;
    SET_GPR_U32(ctx, 31, 0x228A84u);
    ctx->pc = 0x228A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228A7Cu;
    // 0x228a80: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228A7Cu, 0x228A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A84u;
label_228a84:
    // 0x228a84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x228a88: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228A88u;
    {
        const bool branch_taken_0x228a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228a88) {
            ctx->pc = 0x228A9Cu;
            goto label_228a9c;
        }
    }
    ctx->pc = 0x228A90u;
    // 0x228a90: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228a94: 0x8c621600  lw          $v0, 0x1600($v1)
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5632)));
    // 0x228a98: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228a9c:
    // 0x228a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228aa4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228aa8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x228aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ab0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x228ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228ab4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228AB4u;
    SET_GPR_U32(ctx, 31, 0x228ABCu);
    ctx->pc = 0x228AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228AB4u;
    // 0x228ab8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228AB4u, 0x228ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228ABCu;
label_228abc:
    // 0x228abc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x228abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x228ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ac4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228AC4u;
    SET_GPR_U32(ctx, 31, 0x228ACCu);
    ctx->pc = 0x228AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228AC4u;
    // 0x228ac8: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228AC4u, 0x228ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228ACCu;
label_228acc:
    // 0x228acc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228ad0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x228ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x228ad4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228AD4u;
    {
        const bool branch_taken_0x228ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AD4u;
        // 0x228ad8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ad4) {
            ctx->pc = 0x228AF4u;
            goto label_228af4;
        }
    }
    ctx->pc = 0x228ADCu;
    // 0x228adc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228ae0: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x228ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x228ae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228ae8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228aec: 0x800008  jr          $a0
    ctx->pc = 0x228AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228AF4u: goto label_228af4;
            case 0x228B0Cu: goto label_228b0c;
            case 0x228B28u: goto label_228b28;
            case 0x228B4Cu: goto label_228b4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228AECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228AF4u;
label_228af4:
    // 0x228af4: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228af8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228afc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x228afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x228b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228b04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x228B04u;
    {
        const bool branch_taken_0x228b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B04u;
        // 0x228b08: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b04) {
            ctx->pc = 0x228B44u;
            goto label_228b44;
        }
    }
    ctx->pc = 0x228B0Cu;
label_228b0c:
    // 0x228b0c: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228b14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x228b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x228b18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x228b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x228b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228b20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228B20u;
    {
        const bool branch_taken_0x228b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B20u;
        // 0x228b24: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b20) {
            ctx->pc = 0x228B44u;
            goto label_228b44;
        }
    }
    ctx->pc = 0x228B28u;
label_228b28:
    // 0x228b28: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228b30: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x228b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x228b34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x228b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x228b38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228b3c: 0x0  nop
    ctx->pc = 0x228b3cu;
    // NOP
    // 0x228b40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_228b44:
    // 0x228b44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228b44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228b48: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x228b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_228b4c:
    // 0x228b4c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228b50: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x228b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x228b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228b58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x228b58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_228b5c:
    // 0x228b5c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x228b60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228B60u;
    {
        const bool branch_taken_0x228b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B60u;
        // 0x228b64: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b60) {
            ctx->pc = 0x228B90u;
            goto label_228b90;
        }
    }
    ctx->pc = 0x228B68u;
    // 0x228b68: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228B68u;
    SET_GPR_U32(ctx, 31, 0x228B70u);
    ctx->pc = 0x228B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228B68u;
    // 0x228b6c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228B68u, 0x228B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B70u;
label_228b70:
    // 0x228b70: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x228b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b78: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x228b7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x228b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228b80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228b84: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228b88: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x228B88u;
    SET_GPR_U32(ctx, 31, 0x228B90u);
    ctx->pc = 0x228B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228B88u;
    // 0x228b8c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x228B88u, 0x228B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B90u;
label_228b90:
    // 0x228b90: 0xc055f06  jal         func_157C18
    ctx->pc = 0x228B90u;
    SET_GPR_U32(ctx, 31, 0x228B98u);
    ctx->pc = 0x228B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228B90u;
    // 0x228b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x228B90u, 0x228B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B98u;
label_228b98:
    // 0x228b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228B98u;
    {
        const bool branch_taken_0x228b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228b98) {
            ctx->pc = 0x228BA8u;
            goto label_228ba8;
        }
    }
    ctx->pc = 0x228BA0u;
    // 0x228ba0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x228BA0u;
    SET_GPR_U32(ctx, 31, 0x228BA8u);
    ctx->pc = 0x228BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BA0u;
    // 0x228ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x228BA0u, 0x228BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BA8u;
label_228ba8:
    // 0x228ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228bac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x228bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bb4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x228BB4u;
    SET_GPR_U32(ctx, 31, 0x228BBCu);
    ctx->pc = 0x228BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BB4u;
    // 0x228bb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x228BB4u, 0x228BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BBCu;
label_228bbc:
    // 0x228bbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228bbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228bc0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x228BC0u;
    SET_GPR_U32(ctx, 31, 0x228BC8u);
    ctx->pc = 0x228BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BC0u;
    // 0x228bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x228BC0u, 0x228BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BC8u;
label_228bc8:
    // 0x228bc8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x228bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x228bcc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x228bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x228bd0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x228BD0u;
    {
        const bool branch_taken_0x228bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BD0u;
        // 0x228bd4: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bd0) {
            ctx->pc = 0x228DACu;
            goto label_228dac;
        }
    }
    ctx->pc = 0x228BD8u;
    // 0x228bd8: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x228BD8u;
    {
        const bool branch_taken_0x228bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228bd8) {
            ctx->pc = 0x228BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228BD8u;
            // 0x228bdc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DC0u;
            goto label_228dc0;
        }
    }
    ctx->pc = 0x228BE0u;
    // 0x228be0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x228be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x228be4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228BE4u;
    SET_GPR_U32(ctx, 31, 0x228BECu);
    ctx->pc = 0x228BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BE4u;
    // 0x228be8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228BE4u, 0x228BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BECu;
label_228bec:
    // 0x228bec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x228becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x228bf0: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x228BF0u;
    {
        const bool branch_taken_0x228bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228bf0) {
            ctx->pc = 0x228BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228BF0u;
            // 0x228bf4: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DACu;
            goto label_228dac;
        }
    }
    ctx->pc = 0x228BF8u;
    // 0x228bf8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x228BF8u;
    SET_GPR_U32(ctx, 31, 0x228C00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x228BF8u, 0x228C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C00u;
label_228c00:
    // 0x228c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228c04: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x228C04u;
    {
        const bool branch_taken_0x228c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c04) {
            ctx->pc = 0x228C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228C04u;
            // 0x228c08: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DACu;
            goto label_228dac;
        }
    }
    ctx->pc = 0x228C0Cu;
    // 0x228c0c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228c14: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x228C14u;
    {
        const bool branch_taken_0x228c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C14u;
        // 0x228c18: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c14) {
            ctx->pc = 0x228DA8u;
            goto label_228da8;
        }
    }
    ctx->pc = 0x228C1Cu;
label_228c1c:
    // 0x228c1c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x228c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x228c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c24: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228C24u;
    SET_GPR_U32(ctx, 31, 0x228C2Cu);
    ctx->pc = 0x228C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C24u;
    // 0x228c28: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228C24u, 0x228C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C2Cu;
label_228c2c:
    // 0x228c2c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x228c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c34: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x228c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x228c38: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x228c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228c3c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228c40: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x228c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228c44: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x228C44u;
    SET_GPR_U32(ctx, 31, 0x228C4Cu);
    ctx->pc = 0x228C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C44u;
    // 0x228c48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x228C44u, 0x228C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C4Cu;
label_228c4c:
    // 0x228c4c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228c50: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x228c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x228c54: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x228c58: 0x8c651604  lw          $a1, 0x1604($v1)
    ctx->pc = 0x228c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5636)));
    // 0x228c5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c60: 0x8c621608  lw          $v0, 0x1608($v1)
    ctx->pc = 0x228c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5640)));
    // 0x228c64: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228c68: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228C68u;
    SET_GPR_U32(ctx, 31, 0x228C70u);
    ctx->pc = 0x228C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C68u;
    // 0x228c6c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228C68u, 0x228C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C70u;
label_228c70:
    // 0x228c70: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x228C70u;
    {
        const bool branch_taken_0x228c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x228c70) {
            ctx->pc = 0x228C84u;
            goto label_228c84;
        }
    }
    ctx->pc = 0x228C78u;
    // 0x228c78: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228c7c: 0x8c62160c  lw          $v0, 0x160C($v1)
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5644)));
    // 0x228c80: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228c84:
    // 0x228c84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x228c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228c9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228C9Cu;
    SET_GPR_U32(ctx, 31, 0x228CA4u);
    ctx->pc = 0x228CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C9Cu;
    // 0x228ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228C9Cu, 0x228CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CA4u;
label_228ca4:
    // 0x228ca4: 0xae1505f0  sw          $s5, 0x5F0($s0)
    ctx->pc = 0x228ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 21));
    // 0x228ca8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228CA8u;
    SET_GPR_U32(ctx, 31, 0x228CB0u);
    ctx->pc = 0x228CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CA8u;
    // 0x228cac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228CA8u, 0x228CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CB0u;
label_228cb0:
    // 0x228cb0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228cb4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x228cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x228cb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228CB8u;
    {
        const bool branch_taken_0x228cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CB8u;
        // 0x228cbc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cb8) {
            ctx->pc = 0x228CD8u;
            goto label_228cd8;
        }
    }
    ctx->pc = 0x228CC0u;
    // 0x228cc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228cc4: 0x24428750  addiu       $v0, $v0, -0x78B0
    ctx->pc = 0x228cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
    // 0x228cc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228ccc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228cd0: 0x800008  jr          $a0
    ctx->pc = 0x228CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228CD8u: goto label_228cd8;
            case 0x228CF0u: goto label_228cf0;
            case 0x228D0Cu: goto label_228d0c;
            case 0x228D30u: goto label_228d30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228CD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228CD8u;
label_228cd8:
    // 0x228cd8: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228cdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228ce0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x228ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x228ce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228ce8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x228CE8u;
    {
        const bool branch_taken_0x228ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CE8u;
        // 0x228cec: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ce8) {
            ctx->pc = 0x228D28u;
            goto label_228d28;
        }
    }
    ctx->pc = 0x228CF0u;
label_228cf0:
    // 0x228cf0: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228cf8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x228cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x228cfc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x228cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x228d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228D04u;
    {
        const bool branch_taken_0x228d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D04u;
        // 0x228d08: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d04) {
            ctx->pc = 0x228D28u;
            goto label_228d28;
        }
    }
    ctx->pc = 0x228D0Cu;
label_228d0c:
    // 0x228d0c: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228d14: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x228d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x228d18: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x228d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x228d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228d20: 0x0  nop
    ctx->pc = 0x228d20u;
    // NOP
    // 0x228d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_228d28:
    // 0x228d28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228d2c: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x228d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_228d30:
    // 0x228d30: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228d38: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x228d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x228d3c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x228d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_228d40:
    // 0x228d40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228D40u;
    {
        const bool branch_taken_0x228d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D40u;
        // 0x228d44: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d40) {
            ctx->pc = 0x228D70u;
            goto label_228d70;
        }
    }
    ctx->pc = 0x228D48u;
    // 0x228d48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228D48u;
    SET_GPR_U32(ctx, 31, 0x228D50u);
    ctx->pc = 0x228D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D48u;
    // 0x228d4c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228D48u, 0x228D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D50u;
label_228d50:
    // 0x228d50: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x228d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d58: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x228d5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x228d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228d60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228d64: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228d68: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x228D68u;
    SET_GPR_U32(ctx, 31, 0x228D70u);
    ctx->pc = 0x228D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D68u;
    // 0x228d6c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x228D68u, 0x228D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D70u;
label_228d70:
    // 0x228d70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x228D70u;
    SET_GPR_U32(ctx, 31, 0x228D78u);
    ctx->pc = 0x228D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D70u;
    // 0x228d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x228D70u, 0x228D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D78u;
label_228d78:
    // 0x228d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228D78u;
    {
        const bool branch_taken_0x228d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d78) {
            ctx->pc = 0x228D88u;
            goto label_228d88;
        }
    }
    ctx->pc = 0x228D80u;
    // 0x228d80: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x228D80u;
    SET_GPR_U32(ctx, 31, 0x228D88u);
    ctx->pc = 0x228D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D80u;
    // 0x228d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x228D80u, 0x228D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D88u;
label_228d88:
    // 0x228d88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228d8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x228d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d94: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x228D94u;
    SET_GPR_U32(ctx, 31, 0x228D9Cu);
    ctx->pc = 0x228D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D94u;
    // 0x228d98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x228D94u, 0x228D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D9Cu;
label_228d9c:
    // 0x228d9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228d9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x228da0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x228DA0u;
    SET_GPR_U32(ctx, 31, 0x228DA8u);
    ctx->pc = 0x228DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228DA0u;
    // 0x228da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x228DA0u, 0x228DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DA8u;
label_228da8:
    // 0x228da8: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x228da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
label_228dac:
    // 0x228dac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228DACu;
    {
        const bool branch_taken_0x228dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228dac) {
            ctx->pc = 0x228DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228DACu;
            // 0x228db0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DC0u;
            goto label_228dc0;
        }
    }
    ctx->pc = 0x228DB4u;
    // 0x228db4: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x228DB4u;
    SET_GPR_U32(ctx, 31, 0x228DBCu);
    ctx->pc = 0x228DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228DB4u;
    // 0x228db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x228DB4u, 0x228DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DBCu;
label_228dbc:
    // 0x228dbc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x228dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_228dc0:
    // 0x228dc0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x228dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x228dc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228DC4u;
    {
        const bool branch_taken_0x228dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228DC4u;
        // 0x228dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228dc4) {
            ctx->pc = 0x228DD0u;
            goto label_228dd0;
        }
    }
    ctx->pc = 0x228DCCu;
    // 0x228dcc: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x228dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_228dd0:
    // 0x228dd0: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x228dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x228dd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x228DD4u;
    {
        const bool branch_taken_0x228dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228dd4) {
            ctx->pc = 0x228DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228DD4u;
            // 0x228dd8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228DF4u;
            goto label_228df4;
        }
    }
    ctx->pc = 0x228DDCu;
    // 0x228ddc: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x228de0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x228de4: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x228de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x228de8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x228de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x228dec: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x228decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x228df0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x228df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_228df4:
    // 0x228df4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x228df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228df8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x228df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228e00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x228e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x228e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228e0c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x228e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228e10: 0x3e00008  jr          $ra
    ctx->pc = 0x228E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E10u;
        // 0x228e14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228E18u;
}
