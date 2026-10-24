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

// Function: func_00165EB8
// Address: 0x165eb8 - 0x1661a0
void func_00165EB8_0x165eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00165EB8_0x165eb8");
#endif

    switch (ctx->pc) {
        case 0x165f18u: goto label_165f18;
        case 0x165f78u: goto label_165f78;
        case 0x165fe8u: goto label_165fe8;
        case 0x166050u: goto label_166050;
        case 0x1660e8u: goto label_1660e8;
        case 0x166180u: goto label_166180;
        default: break;
    }

    ctx->pc = 0x165eb8u;

    // 0x165eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165ebc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x165ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x165ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165ec4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x165ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x165ec8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x165ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x165ecc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x165eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x165ed0: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x165ed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
    // 0x165ed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x165ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x165ed8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165ee0: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x165ee4: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x165ee4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x165ee8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x165ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x165eec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x165EECu;
    {
        const bool branch_taken_0x165eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165EECu;
        // 0x165ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165eec) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165EF4u;
    // 0x165ef4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x165ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165efc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x165efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x165f00: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x165f04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x165f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f10: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x165F10u;
    SET_GPR_U32(ctx, 31, 0x165F18u);
    ctx->pc = 0x165F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F10u;
    // 0x165f14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x165F10u, 0x165F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F18u;
label_165f18:
    // 0x165f18: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x165f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x165f1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x165f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x165f20: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x165f24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F24u;
    {
        const bool branch_taken_0x165f24 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x165F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F24u;
        // 0x165f28: 0xa203005a  sb          $v1, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f24) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165F2Cu;
    // 0x165f2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x165f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165f30: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x165f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
label_165f34:
    // 0x165f34: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x165f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x165f38: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x165f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x165f3c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x165f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x165f40: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x165f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x165f44: 0x422b8  dsll        $a0, $a0, 10
    ctx->pc = 0x165f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 10);
    // 0x165f48: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x165f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x165f4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x165f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x165f50: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x165F50u;
    {
        const bool branch_taken_0x165f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F50u;
        // 0x165f54: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f50) {
            ctx->pc = 0x165F9Cu;
            goto label_165f9c;
        }
    }
    ctx->pc = 0x165F58u;
    // 0x165f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f5c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x165f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x165f60: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x165f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x165f64: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165f6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f70: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x165F70u;
    SET_GPR_U32(ctx, 31, 0x165F78u);
    ctx->pc = 0x165F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F70u;
    // 0x165f74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x165F70u, 0x165F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F78u;
label_165f78:
    // 0x165f78: 0x9203005a  lbu         $v1, 0x5A($s0)
    ctx->pc = 0x165f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x165f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165f80: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x165f84: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x165f88: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x165f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x165f8c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x165F8Cu;
    {
        const bool branch_taken_0x165f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F8Cu;
        // 0x165f90: 0xa203005a  sb          $v1, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f8c) {
            ctx->pc = 0x165F98u;
            goto label_165f98;
        }
    }
    ctx->pc = 0x165F94u;
    // 0x165f94: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x165f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
label_165f98:
    // 0x165f98: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x165f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
label_165f9c:
    // 0x165f9c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x165f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x165fa0: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x165fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x165fa4: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x165fa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x165fa8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x165fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x165fac: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x165FACu;
    {
        const bool branch_taken_0x165fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165fac) {
            ctx->pc = 0x166004u;
            goto label_166004;
        }
    }
    ctx->pc = 0x165FB4u;
    // 0x165fb4: 0x920202a2  lbu         $v0, 0x2A2($s0)
    ctx->pc = 0x165fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 674)));
    // 0x165fb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165fbc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x165FBCu;
    {
        const bool branch_taken_0x165fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165fbc) {
            ctx->pc = 0x165FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165FBCu;
            // 0x165fc0: 0x262274a0  addiu       $v0, $s1, 0x74A0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166004u;
            goto label_166004;
        }
    }
    ctx->pc = 0x165FC4u;
    // 0x165fc4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x165fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fcc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x165fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x165fd0: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x165fd4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165fd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165fdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fe0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x165FE0u;
    SET_GPR_U32(ctx, 31, 0x165FE8u);
    ctx->pc = 0x165FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FE0u;
    // 0x165fe4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x165FE0u, 0x165FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FE8u;
label_165fe8:
    // 0x165fe8: 0x920302a2  lbu         $v1, 0x2A2($s0)
    ctx->pc = 0x165fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 674)));
    // 0x165fec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x165fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x165ff0: 0x920202a0  lbu         $v0, 0x2A0($s0)
    ctx->pc = 0x165ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x165ff4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x165ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x165ff8: 0xa20402a3  sb          $a0, 0x2A3($s0)
    ctx->pc = 0x165ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 675), (uint8_t)GPR_U32(ctx, 4));
    // 0x165ffc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165FFCu;
    {
        const bool branch_taken_0x165ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ffc) {
            ctx->pc = 0x166068u;
            goto label_166068;
        }
    }
    ctx->pc = 0x166004u;
label_166004:
    // 0x166004: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x166004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x166008: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x166008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x16600c: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x16600cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x166010: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x166014: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x166014u;
    {
        const bool branch_taken_0x166014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166014) {
            ctx->pc = 0x166018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166014u;
            // 0x166018: 0x820402a0  lb          $a0, 0x2A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166074u;
            goto label_166074;
        }
    }
    ctx->pc = 0x16601Cu;
    // 0x16601c: 0x920202a2  lbu         $v0, 0x2A2($s0)
    ctx->pc = 0x16601cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 674)));
    // 0x166020: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166024: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x166024u;
    {
        const bool branch_taken_0x166024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166024) {
            ctx->pc = 0x166028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166024u;
            // 0x166028: 0x820402a0  lb          $a0, 0x2A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166074u;
            goto label_166074;
        }
    }
    ctx->pc = 0x16602Cu;
    // 0x16602c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16602cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x166030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166034: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166038: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x166038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x16603c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166040: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166048: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166048u;
    SET_GPR_U32(ctx, 31, 0x166050u);
    ctx->pc = 0x16604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166048u;
    // 0x16604c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166048u, 0x166050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166050u;
label_166050:
    // 0x166050: 0x920302a2  lbu         $v1, 0x2A2($s0)
    ctx->pc = 0x166050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 674)));
    // 0x166054: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x166054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x166058: 0x920202a0  lbu         $v0, 0x2A0($s0)
    ctx->pc = 0x166058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x16605c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x16605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x166060: 0xa20402a3  sb          $a0, 0x2A3($s0)
    ctx->pc = 0x166060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 675), (uint8_t)GPR_U32(ctx, 4));
    // 0x166064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_166068:
    // 0x166068: 0xa20302a2  sb          $v1, 0x2A2($s0)
    ctx->pc = 0x166068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 674), (uint8_t)GPR_U32(ctx, 3));
    // 0x16606c: 0xa20202a0  sb          $v0, 0x2A0($s0)
    ctx->pc = 0x16606cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 672), (uint8_t)GPR_U32(ctx, 2));
    // 0x166070: 0x820402a0  lb          $a0, 0x2A0($s0)
    ctx->pc = 0x166070u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
label_166074:
    // 0x166074: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166074u;
    {
        const bool branch_taken_0x166074 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x166078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166074u;
        // 0x166078: 0x920502a0  lbu         $a1, 0x2A0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166074) {
            ctx->pc = 0x166084u;
            goto label_166084;
        }
    }
    ctx->pc = 0x16607Cu;
    // 0x16607c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16607Cu;
    {
        const bool branch_taken_0x16607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16607Cu;
        // 0x166080: 0x920302a4  lbu         $v1, 0x2A4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16607c) {
            ctx->pc = 0x166098u;
            goto label_166098;
        }
    }
    ctx->pc = 0x166084u;
label_166084:
    // 0x166084: 0x820202a4  lb          $v0, 0x2A4($s0)
    ctx->pc = 0x166084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x166088: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x166088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16608c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16608Cu;
    {
        const bool branch_taken_0x16608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16608Cu;
        // 0x166090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16608c) {
            ctx->pc = 0x166098u;
            goto label_166098;
        }
    }
    ctx->pc = 0x166094u;
    // 0x166094: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x166094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_166098:
    // 0x166098: 0xa20302a0  sb          $v1, 0x2A0($s0)
    ctx->pc = 0x166098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 672), (uint8_t)GPR_U32(ctx, 3));
    // 0x16609c: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x1660a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1660a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1660a4: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1660a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1660a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1660a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1660ac: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1660ACu;
    {
        const bool branch_taken_0x1660ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660ACu;
        // 0x1660b0: 0x3c042020  lui         $a0, 0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660ac) {
            ctx->pc = 0x166150u;
            goto label_166150;
        }
    }
    ctx->pc = 0x1660B4u;
    // 0x1660b4: 0x920202a2  lbu         $v0, 0x2A2($s0)
    ctx->pc = 0x1660b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 674)));
    // 0x1660b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1660b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1660bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1660bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1660c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1660C0u;
    {
        const bool branch_taken_0x1660c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C0u;
        // 0x1660c4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660c0) {
            ctx->pc = 0x166148u;
            goto label_166148;
        }
    }
    ctx->pc = 0x1660C8u;
    // 0x1660c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1660c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1660ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1660d0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1660d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1660d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1660dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1660dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660e0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1660E0u;
    SET_GPR_U32(ctx, 31, 0x1660E8u);
    ctx->pc = 0x1660E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1660E0u;
    // 0x1660e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1660E0u, 0x1660E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660E8u;
label_1660e8:
    // 0x1660e8: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x1660e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1660ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1660f0: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1660F0u;
    {
        const bool branch_taken_0x1660f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1660F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660F0u;
        // 0x1660f4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660f0) {
            ctx->pc = 0x166130u;
            goto label_166130;
        }
    }
    ctx->pc = 0x1660F8u;
    // 0x1660f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1660F8u;
    {
        const bool branch_taken_0x1660f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660F8u;
        // 0x1660fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660f8) {
            ctx->pc = 0x166110u;
            goto label_166110;
        }
    }
    ctx->pc = 0x166100u;
    // 0x166100: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x166100u;
    {
        const bool branch_taken_0x166100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166100u;
        // 0x166104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166100) {
            ctx->pc = 0x166128u;
            goto label_166128;
        }
    }
    ctx->pc = 0x166108u;
    // 0x166108: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166108u;
    {
        const bool branch_taken_0x166108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166108u;
        // 0x16610c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166108) {
            ctx->pc = 0x166148u;
            goto label_166148;
        }
    }
    ctx->pc = 0x166110u;
label_166110:
    // 0x166110: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166110u;
    {
        const bool branch_taken_0x166110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166110u;
        // 0x166114: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166110) {
            ctx->pc = 0x166138u;
            goto label_166138;
        }
    }
    ctx->pc = 0x166118u;
    // 0x166118: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166118u;
    {
        const bool branch_taken_0x166118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166118u;
        // 0x16611c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166118) {
            ctx->pc = 0x166140u;
            goto label_166140;
        }
    }
    ctx->pc = 0x166120u;
    // 0x166120: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x166120u;
    {
        const bool branch_taken_0x166120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166120u;
        // 0x166124: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166120) {
            ctx->pc = 0x166148u;
            goto label_166148;
        }
    }
    ctx->pc = 0x166128u;
label_166128:
    // 0x166128: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x166128u;
    {
        const bool branch_taken_0x166128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166128u;
        // 0x16612c: 0xae040060  sw          $a0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166128) {
            ctx->pc = 0x166148u;
            goto label_166148;
        }
    }
    ctx->pc = 0x166130u;
label_166130:
    // 0x166130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166130u;
    {
        const bool branch_taken_0x166130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166130u;
        // 0x166134: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166130) {
            ctx->pc = 0x166144u;
            goto label_166144;
        }
    }
    ctx->pc = 0x166138u;
label_166138:
    // 0x166138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166138u;
    {
        const bool branch_taken_0x166138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166138u;
        // 0x16613c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166138) {
            ctx->pc = 0x166148u;
            goto label_166148;
        }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_166144:
    // 0x166144: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x166144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_166148:
    // 0x166148: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x166148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x16614c: 0x3c042020  lui         $a0, 0x2020
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8224 << 16));
label_166150:
    // 0x166150: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x166150u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x166154: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x166154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x166158: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x166158u;
    {
        const bool branch_taken_0x166158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166158u;
        // 0x16615c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166158) {
            ctx->pc = 0x166188u;
            goto label_166188;
        }
    }
    ctx->pc = 0x166160u;
    // 0x166160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166164: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x166164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x166168: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x166168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x16616c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166170: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166174: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166178: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x166178u;
    SET_GPR_U32(ctx, 31, 0x166180u);
    ctx->pc = 0x16617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166178u;
    // 0x16617c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x166178u, 0x166180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166180u;
label_166180:
    // 0x166180: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166184: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x166184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_166188:
    // 0x166188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x166188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16618c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16618cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166194: 0x3e00008  jr          $ra
    ctx->pc = 0x166194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166194u;
        // 0x166198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x0  nop
    ctx->pc = 0x16619cu;
    // NOP
    ctx->pc = 0x1661a0u;
}
