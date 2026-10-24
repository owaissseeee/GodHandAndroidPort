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

// Function: func_001969D8
// Address: 0x1969d8 - 0x197188
void func_001969D8_0x1969d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001969D8_0x1969d8");
#endif

    switch (ctx->pc) {
        case 0x196a64u: goto label_196a64;
        case 0x196a80u: goto label_196a80;
        case 0x196a90u: goto label_196a90;
        case 0x196aa0u: goto label_196aa0;
        case 0x196af0u: goto label_196af0;
        case 0x196b24u: goto label_196b24;
        case 0x196b4cu: goto label_196b4c;
        case 0x196b60u: goto label_196b60;
        case 0x196b80u: goto label_196b80;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cd0u: goto label_196cd0;
        case 0x196cdcu: goto label_196cdc;
        case 0x196cf8u: goto label_196cf8;
        case 0x196e20u: goto label_196e20;
        case 0x196e2cu: goto label_196e2c;
        case 0x196e38u: goto label_196e38;
        case 0x196e48u: goto label_196e48;
        case 0x196e54u: goto label_196e54;
        case 0x196e60u: goto label_196e60;
        case 0x196e7cu: goto label_196e7c;
        case 0x196ea8u: goto label_196ea8;
        case 0x196ed0u: goto label_196ed0;
        case 0x196f04u: goto label_196f04;
        case 0x196f50u: goto label_196f50;
        case 0x196f88u: goto label_196f88;
        case 0x197000u: goto label_197000;
        case 0x197078u: goto label_197078;
        case 0x197094u: goto label_197094;
        case 0x1970e8u: goto label_1970e8;
        default: break;
    }

    ctx->pc = 0x1969d8u;

    // 0x1969d8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1969dc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1969dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1969e0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1969e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1969e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1969e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969e8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1969e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1969ec: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1969ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1969f0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1969f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1969f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1969f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1969f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1969f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1969fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1969fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x196a00: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x196a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x196a04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x196a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x196a08: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x196a08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x196a0c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x196a0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x196a10: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x196a10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x196a14: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x196a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x196a18: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x196a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x196a1c: 0x104001ca  beqz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x196A1Cu;
    {
        const bool branch_taken_0x196a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A1Cu;
        // 0x196a20: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a1c) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x196A24u;
    // 0x196a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196a28: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    // 0x196a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196a30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x196a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196a34: 0x800008  jr          $a0
    ctx->pc = 0x196A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196A3Cu: goto label_196a3c;
            case 0x196F14u: goto label_196f14;
            case 0x196F38u: goto label_196f38;
            case 0x1970ACu: goto label_1970ac;
            case 0x1970F0u: goto label_1970f0;
            case 0x197134u: goto label_197134;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x196A3Cu;
label_196a3c:
    // 0x196a3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x196a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x196a40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196a44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x196a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x196a48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196a4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x196a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a5c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x196A5Cu;
    SET_GPR_U32(ctx, 31, 0x196A64u);
    ctx->pc = 0x196A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A5Cu;
    // 0x196a60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x196A5Cu, 0x196A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A64u;
label_196a64:
    // 0x196a64: 0x824309da  lb          $v1, 0x9DA($s2)
    ctx->pc = 0x196a64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
    // 0x196a68: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x196A68u;
    {
        const bool branch_taken_0x196a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a68) {
            ctx->pc = 0x196A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196A68u;
            // 0x196a6c: 0x824509da  lb          $a1, 0x9DA($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196A84u;
            goto label_196a84;
        }
    }
    ctx->pc = 0x196A70u;
    // 0x196a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a78: 0xc065d28  jal         func_1974A0
    ctx->pc = 0x196A78u;
    SET_GPR_U32(ctx, 31, 0x196A80u);
    ctx->pc = 0x196A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A78u;
    // 0x196a7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1974A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1974A0u, 0x196A78u, 0x196A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A80u;
label_196a80:
    // 0x196a80: 0x824509da  lb          $a1, 0x9DA($s2)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
label_196a84:
    // 0x196a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a88: 0xc065d0c  jal         func_197430
    ctx->pc = 0x196A88u;
    SET_GPR_U32(ctx, 31, 0x196A90u);
    ctx->pc = 0x196A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A88u;
    // 0x196a8c: 0x265509d0  addiu       $s5, $s2, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197430u, 0x196A88u, 0x196A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A90u;
label_196a90:
    // 0x196a90: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x196a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a94: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x196a94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x196a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196aa0:
    // 0x196aa0: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x196aa4: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x196aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x196aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196aac: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x196ab0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x196ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x196ab4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x196ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196ab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x196abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x196ac0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x196ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x196ac4: 0x10c0fff6  beqz        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x196AC4u;
    {
        const bool branch_taken_0x196ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AC4u;
        // 0x196ac8: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ac4) {
            ctx->pc = 0x196AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196aa0;
        }
    }
    ctx->pc = 0x196ACCu;
    // 0x196acc: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x196ACCu;
    {
        const bool branch_taken_0x196acc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x196acc) {
            ctx->pc = 0x196AE0u;
            goto label_196ae0;
        }
    }
    ctx->pc = 0x196AD4u;
    // 0x196ad4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x196ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x196ad8: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x196AD8u;
    {
        const bool branch_taken_0x196ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AD8u;
        // 0x196adc: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ad8) {
            ctx->pc = 0x197140u;
            goto label_197140;
        }
    }
    ctx->pc = 0x196AE0u;
label_196ae0:
    // 0x196ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x196ae4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x196ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x196ae8: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x196AE8u;
    SET_GPR_U32(ctx, 31, 0x196AF0u);
    ctx->pc = 0x196AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AE8u;
    // 0x196aec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x196AE8u, 0x196AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AF0u;
label_196af0:
    // 0x196af0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x196af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x196af4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x196af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x196af8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x196af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x196afc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x196afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x196b00: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x196b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x196b04: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x196b08: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x196b08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x196b0c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x196b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x196b10: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x196b14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x196b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x196b18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x196b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x196b1c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x196B1Cu;
    SET_GPR_U32(ctx, 31, 0x196B24u);
    ctx->pc = 0x196B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B1Cu;
    // 0x196b20: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x196B1Cu, 0x196B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B24u;
label_196b24:
    // 0x196b24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x196b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196b28: 0x27d64ed0  addiu       $s6, $fp, 0x4ED0
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196b2c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x196b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x196b30: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x196b34: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x196b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x196b38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x196b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x196b3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196b44: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x196B44u;
    SET_GPR_U32(ctx, 31, 0x196B4Cu);
    ctx->pc = 0x196B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B44u;
    // 0x196b48: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x196B44u, 0x196B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B4Cu;
label_196b4c:
    // 0x196b4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x196b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x196b50: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x196b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196b54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196b58: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x196B58u;
    SET_GPR_U32(ctx, 31, 0x196B60u);
    ctx->pc = 0x196B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B58u;
    // 0x196b5c: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x196B58u, 0x196B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B60u;
label_196b60:
    // 0x196b60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x196b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x196b64: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x196b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196b68: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x196b6c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196b70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x196b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196b74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x196b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x196b78: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
    // 0x196b7c: 0x0  nop
    ctx->pc = 0x196b7cu;
    // NOP
label_196b80:
    // 0x196b80: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x196b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196b88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x196b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x196b8c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x196b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x196b90: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x196b94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196b98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x196b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x196b9c: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x196B9Cu;
    {
        const bool branch_taken_0x196b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196b9c) {
            ctx->pc = 0x196BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196B9Cu;
            // 0x196ba0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D00u;
            goto label_196d00;
        }
    }
    ctx->pc = 0x196BA4u;
    // 0x196ba4: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x196ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x196ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bac: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x196bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196bb0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x196bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x196bb4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196BB4u;
    {
        const bool branch_taken_0x196bb4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x196BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BB4u;
        // 0x196bb8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bb4) {
            ctx->pc = 0x196BC4u;
            goto label_196bc4;
        }
    }
    ctx->pc = 0x196BBCu;
    // 0x196bbc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x196bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196bc4:
    // 0x196bc4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196bc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196BC8u;
    {
        const bool branch_taken_0x196bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BC8u;
        // 0x196bcc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bc8) {
            ctx->pc = 0x196BE0u;
            goto label_196be0;
        }
    }
    ctx->pc = 0x196BD0u;
    // 0x196bd0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196BD8u;
    {
        const bool branch_taken_0x196bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BD8u;
        // 0x196bdc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bd8) {
            ctx->pc = 0x196BE4u;
            goto label_196be4;
        }
    }
    ctx->pc = 0x196BE0u;
label_196be0:
    // 0x196be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196be4:
    // 0x196be4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x196be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x196be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bec: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x196becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x196bf0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x196bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x196bf4: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x196bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x196bf8: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x196bfc: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x196bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196c00: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196C00u;
    {
        const bool branch_taken_0x196c00 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x196C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C00u;
        // 0x196c04: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c00) {
            ctx->pc = 0x196C10u;
            goto label_196c10;
        }
    }
    ctx->pc = 0x196C08u;
    // 0x196c08: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196c10:
    // 0x196c10: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196C14u;
    {
        const bool branch_taken_0x196c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C14u;
        // 0x196c18: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c14) {
            ctx->pc = 0x196C2Cu;
            goto label_196c2c;
        }
    }
    ctx->pc = 0x196C1Cu;
    // 0x196c1c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196c24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196C24u;
    {
        const bool branch_taken_0x196c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C24u;
        // 0x196c28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c24) {
            ctx->pc = 0x196C30u;
            goto label_196c30;
        }
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c30:
    // 0x196c30: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x196c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c38: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x196c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x196c3c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x196c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x196c40: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x196c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x196c44: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x196c48: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x196c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196c4c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196C4Cu;
    {
        const bool branch_taken_0x196c4c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x196C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C4Cu;
        // 0x196c50: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c4c) {
            ctx->pc = 0x196C5Cu;
            goto label_196c5c;
        }
    }
    ctx->pc = 0x196C54u;
    // 0x196c54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x196c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196c5c:
    // 0x196c5c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196C60u;
    {
        const bool branch_taken_0x196c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C60u;
        // 0x196c64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c60) {
            ctx->pc = 0x196C78u;
            goto label_196c78;
        }
    }
    ctx->pc = 0x196C68u;
    // 0x196c68: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196c70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196C70u;
    {
        const bool branch_taken_0x196c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C70u;
        // 0x196c74: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c70) {
            ctx->pc = 0x196C7Cu;
            goto label_196c7c;
        }
    }
    ctx->pc = 0x196C78u;
label_196c78:
    // 0x196c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c7c:
    // 0x196c7c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x196c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x196c80: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x196c84: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x196c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196c8c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x196c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x196c90: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x196c94: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x196C94u;
    SET_GPR_U32(ctx, 31, 0x196C9Cu);
    ctx->pc = 0x196C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C94u;
    // 0x196c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x196C94u, 0x196C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C9Cu;
label_196c9c:
    // 0x196c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ca0: 0xc05ce66  jal         func_173998
    ctx->pc = 0x196CA0u;
    SET_GPR_U32(ctx, 31, 0x196CA8u);
    ctx->pc = 0x196CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CA0u;
    // 0x196ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x196CA0u, 0x196CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CA8u;
label_196ca8:
    // 0x196ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cac: 0xc051f18  jal         func_147C60
    ctx->pc = 0x196CACu;
    SET_GPR_U32(ctx, 31, 0x196CB4u);
    ctx->pc = 0x196CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CACu;
    // 0x196cb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x196CACu, 0x196CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CB4u;
label_196cb4:
    // 0x196cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cbc: 0xc051f22  jal         func_147C88
    ctx->pc = 0x196CBCu;
    SET_GPR_U32(ctx, 31, 0x196CC4u);
    ctx->pc = 0x196CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CBCu;
    // 0x196cc0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x196CBCu, 0x196CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CC4u;
label_196cc4:
    // 0x196cc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cc8: 0xc05ce42  jal         func_173908
    ctx->pc = 0x196CC8u;
    SET_GPR_U32(ctx, 31, 0x196CD0u);
    ctx->pc = 0x196CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CC8u;
    // 0x196ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x196CC8u, 0x196CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CD0u;
label_196cd0:
    // 0x196cd0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x196cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x196cd4: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x196CD4u;
    SET_GPR_U32(ctx, 31, 0x196CDCu);
    ctx->pc = 0x196CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CD4u;
    // 0x196cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x196CD4u, 0x196CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CDCu;
label_196cdc:
    // 0x196cdc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x196cdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x196ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ce4: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x196ce4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x196ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x196ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cec: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x196cecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x196cf0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x196CF0u;
    SET_GPR_U32(ctx, 31, 0x196CF8u);
    ctx->pc = 0x196CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CF0u;
    // 0x196cf4: 0xe695000c  swc1        $f21, 0xC($s4) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x196CF0u, 0x196CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196CF8u;
label_196cf8:
    // 0x196cf8: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x196cf8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x196cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x196cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_196d00:
    // 0x196d00: 0x1260ff9f  beqz        $s3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x196D00u;
    {
        const bool branch_taken_0x196d00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D00u;
        // 0x196d04: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d00) {
            ctx->pc = 0x196B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196b80;
        }
    }
    ctx->pc = 0x196D08u;
    // 0x196d08: 0x27c24ed0  addiu       $v0, $fp, 0x4ED0
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196d0c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x196d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196d10: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x196d10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x196d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d18: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x196d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196D1Cu;
    {
        const bool branch_taken_0x196d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D1Cu;
        // 0x196d20: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d1c) {
            ctx->pc = 0x196D2Cu;
            goto label_196d2c;
        }
    }
    ctx->pc = 0x196D24u;
    // 0x196d24: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x196d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196d28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196d2c:
    // 0x196d2c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196D30u;
    {
        const bool branch_taken_0x196d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D30u;
        // 0x196d34: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d30) {
            ctx->pc = 0x196D48u;
            goto label_196d48;
        }
    }
    ctx->pc = 0x196D38u;
    // 0x196d38: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196d40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196D40u;
    {
        const bool branch_taken_0x196d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D40u;
        // 0x196d44: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d40) {
            ctx->pc = 0x196D4Cu;
            goto label_196d4c;
        }
    }
    ctx->pc = 0x196D48u;
label_196d48:
    // 0x196d48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d4c:
    // 0x196d4c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x196d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x196d50: 0x27c34ed0  addiu       $v1, $fp, 0x4ED0
    ctx->pc = 0x196d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196d54: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x196d54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x196d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d5c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x196d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x196d60: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x196d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x196d64: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x196d64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196d68: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x196d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196d6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196D6Cu;
    {
        const bool branch_taken_0x196d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D6Cu;
        // 0x196d70: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d6c) {
            ctx->pc = 0x196D7Cu;
            goto label_196d7c;
        }
    }
    ctx->pc = 0x196D74u;
    // 0x196d74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x196d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196d78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x196d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196d7c:
    // 0x196d7c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x196d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x196d80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196D80u;
    {
        const bool branch_taken_0x196d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D80u;
        // 0x196d84: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d80) {
            ctx->pc = 0x196D98u;
            goto label_196d98;
        }
    }
    ctx->pc = 0x196D88u;
    // 0x196d88: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196d90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196D90u;
    {
        const bool branch_taken_0x196d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D90u;
        // 0x196d94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d90) {
            ctx->pc = 0x196D9Cu;
            goto label_196d9c;
        }
    }
    ctx->pc = 0x196D98u;
label_196d98:
    // 0x196d98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196d9c:
    // 0x196d9c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x196da0: 0x27c34ed0  addiu       $v1, $fp, 0x4ED0
    ctx->pc = 0x196da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196da4: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x196da4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x196da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196dac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x196dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x196db0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x196db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x196db4: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x196db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196db8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x196db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196dbc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196DBCu;
    {
        const bool branch_taken_0x196dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DBCu;
        // 0x196dc0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dbc) {
            ctx->pc = 0x196DCCu;
            goto label_196dcc;
        }
    }
    ctx->pc = 0x196DC4u;
    // 0x196dc4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x196dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196dc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x196dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196dcc:
    // 0x196dcc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x196dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x196dd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196DD0u;
    {
        const bool branch_taken_0x196dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD0u;
        // 0x196dd4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dd0) {
            ctx->pc = 0x196DE8u;
            goto label_196de8;
        }
    }
    ctx->pc = 0x196DD8u;
    // 0x196dd8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196DE0u;
    {
        const bool branch_taken_0x196de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DE0u;
        // 0x196de4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196de0) {
            ctx->pc = 0x196DECu;
            goto label_196dec;
        }
    }
    ctx->pc = 0x196DE8u;
label_196de8:
    // 0x196de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196dec:
    // 0x196dec: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x196df0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x196df4: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x196df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x196df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x196df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x196dfc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x196dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x196e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e04: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x196e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x196e08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x196e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x196e0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x196e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x196e10: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x196e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x196e14: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x196e18: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x196E18u;
    SET_GPR_U32(ctx, 31, 0x196E20u);
    ctx->pc = 0x196E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E18u;
    // 0x196e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x196E18u, 0x196E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E20u;
label_196e20:
    // 0x196e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e24: 0xc05ce66  jal         func_173998
    ctx->pc = 0x196E24u;
    SET_GPR_U32(ctx, 31, 0x196E2Cu);
    ctx->pc = 0x196E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E24u;
    // 0x196e28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x196E24u, 0x196E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E2Cu;
label_196e2c:
    // 0x196e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e30: 0xc051f18  jal         func_147C60
    ctx->pc = 0x196E30u;
    SET_GPR_U32(ctx, 31, 0x196E38u);
    ctx->pc = 0x196E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E30u;
    // 0x196e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x196E30u, 0x196E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E38u;
label_196e38:
    // 0x196e38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e40: 0xc051f22  jal         func_147C88
    ctx->pc = 0x196E40u;
    SET_GPR_U32(ctx, 31, 0x196E48u);
    ctx->pc = 0x196E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E40u;
    // 0x196e44: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x196E40u, 0x196E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E48u;
label_196e48:
    // 0x196e48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x196e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e4c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x196E4Cu;
    SET_GPR_U32(ctx, 31, 0x196E54u);
    ctx->pc = 0x196E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E4Cu;
    // 0x196e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x196E4Cu, 0x196E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E54u;
label_196e54:
    // 0x196e54: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x196e58: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x196E58u;
    SET_GPR_U32(ctx, 31, 0x196E60u);
    ctx->pc = 0x196E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E58u;
    // 0x196e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x196E58u, 0x196E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E60u;
label_196e60:
    // 0x196e60: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x196e60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x196e64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x196e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e68: 0xe6f50004  swc1        $f21, 0x4($s7)
    ctx->pc = 0x196e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x196e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e70: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x196e70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x196e74: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x196E74u;
    SET_GPR_U32(ctx, 31, 0x196E7Cu);
    ctx->pc = 0x196E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E74u;
    // 0x196e78: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x196E74u, 0x196E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E7Cu;
label_196e7c:
    // 0x196e7c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x196e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x196e80: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x196e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x196e84: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x196E84u;
    {
        const bool branch_taken_0x196e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E84u;
        // 0x196e88: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e84) {
            ctx->pc = 0x196EACu;
            goto label_196eac;
        }
    }
    ctx->pc = 0x196E8Cu;
    // 0x196e8c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x196e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x196e90: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x196e94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x196e94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x196e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x196e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ea0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x196EA0u;
    SET_GPR_U32(ctx, 31, 0x196EA8u);
    ctx->pc = 0x196EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EA0u;
    // 0x196ea4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x196EA0u, 0x196EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EA8u;
label_196ea8:
    // 0x196ea8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_196eac:
    // 0x196eac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x196eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196eb0: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x196eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x196eb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x196eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196eb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x196eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ec0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ec4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196ec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ec8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x196EC8u;
    SET_GPR_U32(ctx, 31, 0x196ED0u);
    ctx->pc = 0x196ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EC8u;
    // 0x196ecc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x196EC8u, 0x196ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196ED0u;
label_196ed0:
    // 0x196ed0: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x196ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x196ed4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x196ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196ed8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x196ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x196edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x196edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196ee0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196ee4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x196ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x196ee8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x196ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x196eec: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x196eecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x196ef0: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x196ef4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196EF4u;
    {
        const bool branch_taken_0x196ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EF4u;
        // 0x196ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ef4) {
            ctx->pc = 0x196F08u;
            goto label_196f08;
        }
    }
    ctx->pc = 0x196EFCu;
    // 0x196efc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x196EFCu;
    SET_GPR_U32(ctx, 31, 0x196F04u);
    ctx->pc = 0x196F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EFCu;
    // 0x196f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x196EFCu, 0x196F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F04u;
label_196f04:
    // 0x196f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196f08:
    // 0x196f08: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x196f08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x196f0c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x196f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x196f10: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x196f10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_196f14:
    // 0x196f14: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x196f14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x196f18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x196f1c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x196f20: 0x1c600089  bgtz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x196F20u;
    {
        const bool branch_taken_0x196f20 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x196F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F20u;
        // 0x196f24: 0xa64209d4  sh          $v0, 0x9D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f20) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x196F28u;
    // 0x196f28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196f2c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x196f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x196f30: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x196F30u;
    {
        const bool branch_taken_0x196f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F30u;
        // 0x196f34: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f30) {
            ctx->pc = 0x197144u;
            goto label_197144;
        }
    }
    ctx->pc = 0x196F38u;
label_196f38:
    // 0x196f38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x196f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f3c: 0x265509d0  addiu       $s5, $s2, 0x9D0
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    // 0x196f40: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x196f40u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x196f44: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x196f44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x196f48: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x196f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x196f4c: 0x0  nop
    ctx->pc = 0x196f4cu;
    // NOP
label_196f50:
    // 0x196f50: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x196f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x196f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x196f58: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x196f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
    // 0x196f5c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x196f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x196f60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196f64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x196f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x196f68: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x196F68u;
    {
        const bool branch_taken_0x196f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196f68) {
            ctx->pc = 0x196F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196F68u;
            // 0x196f6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196F8Cu;
            goto label_196f8c;
        }
    }
    ctx->pc = 0x196F70u;
    // 0x196f70: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x196F70u;
    {
        const bool branch_taken_0x196f70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x196f70) {
            ctx->pc = 0x196F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196F70u;
            // 0x196f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196F8Cu;
            goto label_196f8c;
        }
    }
    ctx->pc = 0x196F78u;
    // 0x196f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f80: 0xc065d28  jal         func_1974A0
    ctx->pc = 0x196F80u;
    SET_GPR_U32(ctx, 31, 0x196F88u);
    ctx->pc = 0x196F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F80u;
    // 0x196f84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1974A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1974A0u, 0x196F80u, 0x196F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F88u;
label_196f88:
    // 0x196f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_196f8c:
    // 0x196f8c: 0x1200fff0  beqz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x196F8Cu;
    {
        const bool branch_taken_0x196f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F8Cu;
        // 0x196f90: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f8c) {
            ctx->pc = 0x196F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196f50;
        }
    }
    ctx->pc = 0x196F94u;
    // 0x196f94: 0x27c24ed0  addiu       $v0, $fp, 0x4ED0
    ctx->pc = 0x196f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196f98: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x196f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x196f9c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x196f9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x196fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fa4: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x196fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196FA8u;
    {
        const bool branch_taken_0x196fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FA8u;
        // 0x196fac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fa8) {
            ctx->pc = 0x196FB8u;
            goto label_196fb8;
        }
    }
    ctx->pc = 0x196FB0u;
    // 0x196fb0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x196fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x196fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196fb8:
    // 0x196fb8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x196fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x196fbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196FBCu;
    {
        const bool branch_taken_0x196fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FBCu;
        // 0x196fc0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fbc) {
            ctx->pc = 0x196FD4u;
            goto label_196fd4;
        }
    }
    ctx->pc = 0x196FC4u;
    // 0x196fc4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x196fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x196fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x196FCCu;
    {
        const bool branch_taken_0x196fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FCCu;
        // 0x196fd0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fcc) {
            ctx->pc = 0x196FD8u;
            goto label_196fd8;
        }
    }
    ctx->pc = 0x196FD4u;
label_196fd4:
    // 0x196fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196fd8:
    // 0x196fd8: 0x27c24ed0  addiu       $v0, $fp, 0x4ED0
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20176));
    // 0x196fdc: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x196fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x196fe0: 0x90500006  lbu         $s0, 0x6($v0)
    ctx->pc = 0x196fe0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x196fe4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196fe8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x196fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196fec: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x196FECu;
    {
        const bool branch_taken_0x196fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FECu;
        // 0x196ff0: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fec) {
            ctx->pc = 0x197084u;
            goto label_197084;
        }
    }
    ctx->pc = 0x196FF4u;
    // 0x196ff4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x196ff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ff8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ffc: 0x0  nop
    ctx->pc = 0x196ffcu;
    // NOP
label_197000:
    // 0x197000: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x197000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x197004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197008: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197008u;
    {
        const bool branch_taken_0x197008 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x19700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197008u;
        // 0x19700c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197008) {
            ctx->pc = 0x197014u;
            goto label_197014;
        }
    }
    ctx->pc = 0x197010u;
    // 0x197010: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x197010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_197014:
    // 0x197014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197018u;
    {
        const bool branch_taken_0x197018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197018u;
        // 0x19701c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197018) {
            ctx->pc = 0x197030u;
            goto label_197030;
        }
    }
    ctx->pc = 0x197020u;
    // 0x197020: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x197024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197028u;
    {
        const bool branch_taken_0x197028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197028u;
        // 0x19702c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197028) {
            ctx->pc = 0x197034u;
            goto label_197034;
        }
    }
    ctx->pc = 0x197030u;
label_197030:
    // 0x197030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197034:
    // 0x197034: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x197034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x197038: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19703c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197040: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197040u;
    {
        const bool branch_taken_0x197040 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x197044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197040u;
        // 0x197044: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197040) {
            ctx->pc = 0x19704Cu;
            goto label_19704c;
        }
    }
    ctx->pc = 0x197048u;
    // 0x197048: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x197048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19704c:
    // 0x19704c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x197050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197050u;
    {
        const bool branch_taken_0x197050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197050u;
        // 0x197054: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197050) {
            ctx->pc = 0x197068u;
            goto label_197068;
        }
    }
    ctx->pc = 0x197058u;
    // 0x197058: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x197058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x19705c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197060u;
    {
        const bool branch_taken_0x197060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197060u;
        // 0x197064: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197060) {
            ctx->pc = 0x19706Cu;
            goto label_19706c;
        }
    }
    ctx->pc = 0x197068u;
label_197068:
    // 0x197068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19706c:
    // 0x19706c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197070: 0xc051d52  jal         func_147548
    ctx->pc = 0x197070u;
    SET_GPR_U32(ctx, 31, 0x197078u);
    ctx->pc = 0x197074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197070u;
    // 0x197074: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x197070u, 0x197078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197078u;
label_197078:
    // 0x197078: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x197078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x19707c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x19707Cu;
    {
        const bool branch_taken_0x19707c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19707Cu;
        // 0x197080: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19707c) {
            ctx->pc = 0x197000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197000;
        }
    }
    ctx->pc = 0x197084u;
label_197084:
    // 0x197084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19708c: 0xc065d28  jal         func_1974A0
    ctx->pc = 0x19708Cu;
    SET_GPR_U32(ctx, 31, 0x197094u);
    ctx->pc = 0x197090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19708Cu;
    // 0x197090: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1974A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1974A0u, 0x19708Cu, 0x197094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197094u;
label_197094:
    // 0x197094: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x197098: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19709c: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x19709cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x1970a0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1970a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1970a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1970A4u;
    {
        const bool branch_taken_0x1970a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970A4u;
        // 0x1970a8: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970a4) {
            ctx->pc = 0x197144u;
            goto label_197144;
        }
    }
    ctx->pc = 0x1970ACu;
label_1970ac:
    // 0x1970ac: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x1970acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x1970b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1970b4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1970b8: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1970B8u;
    {
        const bool branch_taken_0x1970b8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1970BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970B8u;
        // 0x1970bc: 0xa64209d4  sh          $v0, 0x9D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970b8) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x1970C0u;
    // 0x1970c0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1970c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1970c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1970c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1970c8: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x1970c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x1970cc: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x1970ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x1970d0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1970d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1970d4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1970d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1970d8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1970D8u;
    {
        const bool branch_taken_0x1970d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970D8u;
        // 0x1970dc: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970d8) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x1970E0u;
    // 0x1970e0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1970E0u;
    SET_GPR_U32(ctx, 31, 0x1970E8u);
    ctx->pc = 0x1970E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970E0u;
    // 0x1970e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1970E0u, 0x1970E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970E8u;
label_1970e8:
    // 0x1970e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1970E8u;
    {
        const bool branch_taken_0x1970e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970E8u;
        // 0x1970ec: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970e8) {
            ctx->pc = 0x19714Cu;
            goto label_19714c;
        }
    }
    ctx->pc = 0x1970F0u;
label_1970f0:
    // 0x1970f0: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x1970f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x1970f4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1970f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1970f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1970fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1970fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197100: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x197104: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x197104u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x197108: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x19710c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19710cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197110: 0x0  nop
    ctx->pc = 0x197110u;
    // NOP
    // 0x197114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197118: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x197118u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x19711c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19711Cu;
    {
        const bool branch_taken_0x19711c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x197120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19711Cu;
        // 0x197120: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19711c) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x197124u;
    // 0x197124: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197128: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x197128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19712c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19712Cu;
    {
        const bool branch_taken_0x19712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19712Cu;
        // 0x197130: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19712c) {
            ctx->pc = 0x197144u;
            goto label_197144;
        }
    }
    ctx->pc = 0x197134u;
label_197134:
    // 0x197134: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197138: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x197138u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19713c: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x19713cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_197140:
    // 0x197140: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x197140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_197144:
    // 0x197144: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x197144u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_197148:
    // 0x197148: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x197148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19714c:
    // 0x19714c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x19714cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x197150: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x197150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x197154: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x197154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x197158: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x197158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19715c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x19715cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197160: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x197160u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197164: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x197164u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197168: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x197168u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19716c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197170: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x197170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x197174: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x197174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x197178: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x197178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19717c: 0x3e00008  jr          $ra
    ctx->pc = 0x19717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19717Cu;
        // 0x197180: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197184u;
    // 0x197184: 0x0  nop
    ctx->pc = 0x197184u;
    // NOP
    ctx->pc = 0x197188u;
}
