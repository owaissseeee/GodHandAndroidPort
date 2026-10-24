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

// Function: func_00161990
// Address: 0x161990 - 0x161b30
void func_00161990_0x161990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161990_0x161990");
#endif

    switch (ctx->pc) {
        case 0x1619f0u: goto label_1619f0;
        case 0x161a38u: goto label_161a38;
        case 0x161ad8u: goto label_161ad8;
        case 0x161b14u: goto label_161b14;
        case 0x161b1cu: goto label_161b1c;
        default: break;
    }

    ctx->pc = 0x161990u;

    // 0x161990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161994: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x161998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16199c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x16199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1619a0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1619a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1619a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1619a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1619a8: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x1619a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x1619ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1619acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1619b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1619b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1619b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1619b8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1619bc: 0xdc4501b0  ld          $a1, 0x1B0($v0)
    ctx->pc = 0x1619bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1619c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1619c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1619c4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1619C4u;
    {
        const bool branch_taken_0x1619c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C4u;
        // 0x1619c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619c4) {
            ctx->pc = 0x1619FCu;
            goto label_1619fc;
        }
    }
    ctx->pc = 0x1619CCu;
    // 0x1619cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1619d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1619d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1619d8: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1619d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1619dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1619e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1619e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1619e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1619e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619e8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1619E8u;
    SET_GPR_U32(ctx, 31, 0x1619F0u);
    ctx->pc = 0x1619ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619E8u;
    // 0x1619ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1619E8u, 0x1619F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619F0u;
label_1619f0:
    // 0x1619f0: 0x920300bc  lbu         $v1, 0xBC($s0)
    ctx->pc = 0x1619f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1619f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1619F4u;
    {
        const bool branch_taken_0x1619f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1619F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619F4u;
        // 0x1619f8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619f4) {
            ctx->pc = 0x161A40u;
            goto label_161a40;
        }
    }
    ctx->pc = 0x1619FCu;
label_1619fc:
    // 0x1619fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1619fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x161a00: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x161a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x161a04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x161a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x161a08: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x161a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x161a0c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x161a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x161a10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x161A10u;
    {
        const bool branch_taken_0x161a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A10u;
        // 0x161a14: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a10) {
            ctx->pc = 0x161A44u;
            goto label_161a44;
        }
    }
    ctx->pc = 0x161A18u;
    // 0x161a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x161a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x161a20: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x161a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x161a24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x161a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161a28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x161a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a30: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x161A30u;
    SET_GPR_U32(ctx, 31, 0x161A38u);
    ctx->pc = 0x161A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A30u;
    // 0x161a34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x161A30u, 0x161A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A38u;
label_161a38:
    // 0x161a38: 0x920300bc  lbu         $v1, 0xBC($s0)
    ctx->pc = 0x161a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x161a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_161a40:
    // 0x161a40: 0xa20300bc  sb          $v1, 0xBC($s0)
    ctx->pc = 0x161a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 3));
label_161a44:
    // 0x161a44: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x161a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x161a48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x161a4c: 0x8c437a28  lw          $v1, 0x7A28($v0)
    ctx->pc = 0x161a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A28u));
    // 0x161a50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161a54: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x161A54u;
    {
        const bool branch_taken_0x161a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a54) {
            ctx->pc = 0x161A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A54u;
            // 0x161a58: 0x820300bc  lb          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A88u;
            goto label_161a88;
        }
    }
    ctx->pc = 0x161A5Cu;
    // 0x161a5c: 0x820200bc  lb          $v0, 0xBC($s0)
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x161a60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161A60u;
    {
        const bool branch_taken_0x161a60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x161A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A60u;
        // 0x161a64: 0x920400bc  lbu         $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a60) {
            ctx->pc = 0x161A7Cu;
            goto label_161a7c;
        }
    }
    ctx->pc = 0x161A68u;
    // 0x161a68: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x161a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x161a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161A6Cu;
    {
        const bool branch_taken_0x161a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A6Cu;
        // 0x161a70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a6c) {
            ctx->pc = 0x161A80u;
            goto label_161a80;
        }
    }
    ctx->pc = 0x161A74u;
    // 0x161a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161A74u;
    {
        const bool branch_taken_0x161a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A74u;
        // 0x161a78: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a74) {
            ctx->pc = 0x161A80u;
            goto label_161a80;
        }
    }
    ctx->pc = 0x161A7Cu;
label_161a7c:
    // 0x161a7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_161a80:
    // 0x161a80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161A80u;
    {
        const bool branch_taken_0x161a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A80u;
        // 0x161a84: 0xa20300bc  sb          $v1, 0xBC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a80) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A88u;
label_161a88:
    // 0x161a88: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161A88u;
    {
        const bool branch_taken_0x161a88 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x161A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A88u;
        // 0x161a8c: 0x920200bc  lbu         $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a88) {
            ctx->pc = 0x161A98u;
            goto label_161a98;
        }
    }
    ctx->pc = 0x161A90u;
    // 0x161a90: 0x58600003  blezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x161A90u;
    {
        const bool branch_taken_0x161a90 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x161a90) {
            ctx->pc = 0x161A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161A90u;
            // 0x161a94: 0xa20200bc  sb          $v0, 0xBC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A98u;
label_161a98:
    // 0x161a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a9c: 0xa20200bc  sb          $v0, 0xBC($s0)
    ctx->pc = 0x161a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 2));
label_161aa0:
    // 0x161aa0: 0x262374a0  addiu       $v1, $s1, 0x74A0
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x161aa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x161aa8: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x161aac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161ab0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x161AB0u;
    {
        const bool branch_taken_0x161ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AB0u;
        // 0x161ab4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab0) {
            ctx->pc = 0x161AE4u;
            goto label_161ae4;
        }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161abc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x161ac0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x161ac4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x161ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161ac8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161acc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161accu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ad0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x161AD0u;
    SET_GPR_U32(ctx, 31, 0x161AD8u);
    ctx->pc = 0x161AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AD0u;
    // 0x161ad4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x161AD0u, 0x161AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161AD8u;
label_161ad8:
    // 0x161ad8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x161adc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161ADCu;
    {
        const bool branch_taken_0x161adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161ADCu;
        // 0x161ae0: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161adc) {
            ctx->pc = 0x161B1Cu;
            goto label_161b1c;
        }
    }
    ctx->pc = 0x161AE4u;
label_161ae4:
    // 0x161ae4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x161ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x161ae8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161aec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161AECu;
    {
        const bool branch_taken_0x161aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AECu;
        // 0x161af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161aec) {
            ctx->pc = 0x161B1Cu;
            goto label_161b1c;
        }
    }
    ctx->pc = 0x161AF4u;
    // 0x161af4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x161af8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x161afc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x161b00: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161b04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b0c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x161B0Cu;
    SET_GPR_U32(ctx, 31, 0x161B14u);
    ctx->pc = 0x161B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B0Cu;
    // 0x161b10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x161B0Cu, 0x161B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B14u;
label_161b14:
    // 0x161b14: 0xc0586cc  jal         func_161B30
    ctx->pc = 0x161B14u;
    SET_GPR_U32(ctx, 31, 0x161B1Cu);
    ctx->pc = 0x161B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161B14u;
    // 0x161b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161B30u, 0x161B14u, 0x161B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B1Cu;
label_161b1c:
    // 0x161b1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161b28: 0x3e00008  jr          $ra
    ctx->pc = 0x161B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B28u;
        // 0x161b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161B30u;
}
