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

// Function: func_0024ABC0
// Address: 0x24abc0 - 0x24ae50
void func_0024ABC0_0x24abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024ABC0_0x24abc0");
#endif

    switch (ctx->pc) {
        case 0x24ac14u: goto label_24ac14;
        case 0x24ac40u: goto label_24ac40;
        case 0x24ac54u: goto label_24ac54;
        case 0x24ac68u: goto label_24ac68;
        case 0x24ac7cu: goto label_24ac7c;
        case 0x24ac8cu: goto label_24ac8c;
        case 0x24ad20u: goto label_24ad20;
        case 0x24ad34u: goto label_24ad34;
        case 0x24ad48u: goto label_24ad48;
        case 0x24adb0u: goto label_24adb0;
        case 0x24adbcu: goto label_24adbc;
        case 0x24ae00u: goto label_24ae00;
        case 0x24ae1cu: goto label_24ae1c;
        case 0x24ae38u: goto label_24ae38;
        default: break;
    }

    ctx->pc = 0x24abc0u;

    // 0x24abc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24abc4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x24abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x24abc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24abcc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x24abccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x24abd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24abd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24abd8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24abd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24abdc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24abe0: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x24abe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24abe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24abe8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24ABE8u;
    {
        const bool branch_taken_0x24abe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABE8u;
        // 0x24abec: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abe8) {
            ctx->pc = 0x24AC04u;
            goto label_24ac04;
        }
    }
    ctx->pc = 0x24ABF0u;
    // 0x24abf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24abf4: 0x50820045  beql        $a0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x24ABF4u;
    {
        const bool branch_taken_0x24abf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24abf4) {
            ctx->pc = 0x24ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ABF4u;
            // 0x24abf8: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AD0Cu;
            goto label_24ad0c;
        }
    }
    ctx->pc = 0x24ABFCu;
    // 0x24abfc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x24ABFCu;
    {
        const bool branch_taken_0x24abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABFCu;
        // 0x24ac00: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abfc) {
            ctx->pc = 0x24AE04u;
            goto label_24ae04;
        }
    }
    ctx->pc = 0x24AC04u;
label_24ac04:
    // 0x24ac04: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24ac04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ac08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ac0c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24AC0Cu;
    SET_GPR_U32(ctx, 31, 0x24AC14u);
    ctx->pc = 0x24AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC0Cu;
    // 0x24ac10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24AC0Cu, 0x24AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC14u;
label_24ac14:
    // 0x24ac14: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24ac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac1c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24ac1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24ac20: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24ac20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24ac24: 0x8c653d9c  lw          $a1, 0x3D9C($v1)
    ctx->pc = 0x24ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15772)));
    // 0x24ac28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24ac28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24ac2c: 0x8c663da0  lw          $a2, 0x3DA0($v1)
    ctx->pc = 0x24ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
    // 0x24ac30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24ac30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ac34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24ac38: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24AC38u;
    SET_GPR_U32(ctx, 31, 0x24AC40u);
    ctx->pc = 0x24AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC38u;
    // 0x24ac3c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24AC38u, 0x24AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC40u;
label_24ac40:
    // 0x24ac40: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24ac44: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AC44u;
    {
        const bool branch_taken_0x24ac44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac44) {
            ctx->pc = 0x24AC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC44u;
            // 0x24ac48: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC58u;
            goto label_24ac58;
        }
    }
    ctx->pc = 0x24AC4Cu;
    // 0x24ac4c: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x24AC4Cu;
    SET_GPR_U32(ctx, 31, 0x24AC54u);
    ctx->pc = 0x281350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281350u, 0x24AC4Cu, 0x24AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC54u;
label_24ac54:
    // 0x24ac54: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24ac58:
    // 0x24ac58: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AC58u;
    {
        const bool branch_taken_0x24ac58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac58) {
            ctx->pc = 0x24AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC58u;
            // 0x24ac5c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC6Cu;
            goto label_24ac6c;
        }
    }
    ctx->pc = 0x24AC60u;
    // 0x24ac60: 0xc0a0c96  jal         func_283258
    ctx->pc = 0x24AC60u;
    SET_GPR_U32(ctx, 31, 0x24AC68u);
    ctx->pc = 0x283258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283258u, 0x24AC60u, 0x24AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC68u;
label_24ac68:
    // 0x24ac68: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24ac6c:
    // 0x24ac6c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AC6Cu;
    {
        const bool branch_taken_0x24ac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ac6c) {
            ctx->pc = 0x24AC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AC6Cu;
            // 0x24ac70: 0xe6140600  swc1        $f20, 0x600($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AC80u;
            goto label_24ac80;
        }
    }
    ctx->pc = 0x24AC74u;
    // 0x24ac74: 0xc0a0c96  jal         func_283258
    ctx->pc = 0x24AC74u;
    SET_GPR_U32(ctx, 31, 0x24AC7Cu);
    ctx->pc = 0x283258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283258u, 0x24AC74u, 0x24AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC7Cu;
label_24ac7c:
    // 0x24ac7c: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x24ac7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_24ac80:
    // 0x24ac80: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24ac84: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24AC84u;
    SET_GPR_U32(ctx, 31, 0x24AC8Cu);
    ctx->pc = 0x24AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AC84u;
    // 0x24ac88: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24AC84u, 0x24AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AC8Cu;
label_24ac8c:
    // 0x24ac8c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ac90: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24ac90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24ac94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AC94u;
    {
        const bool branch_taken_0x24ac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC94u;
        // 0x24ac98: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ac94) {
            ctx->pc = 0x24ACB4u;
            goto label_24acb4;
        }
    }
    ctx->pc = 0x24AC9Cu;
    // 0x24ac9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24aca0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x24aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x24aca4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24aca8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24acac: 0x800008  jr          $a0
    ctx->pc = 0x24ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24ACB4u: goto label_24acb4;
            case 0x24ACBCu: goto label_24acbc;
            case 0x24ACCCu: goto label_24accc;
            case 0x24ACDCu: goto label_24acdc;
            case 0x24ACECu: goto label_24acec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ACACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24ACB4u;
label_24acb4:
    // 0x24acb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24ACB4u;
    {
        const bool branch_taken_0x24acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACB4u;
        // 0x24acb8: 0xae000600  sw          $zero, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acb4) {
            ctx->pc = 0x24ACFCu;
            goto label_24acfc;
        }
    }
    ctx->pc = 0x24ACBCu;
label_24acbc:
    // 0x24acbc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x24acbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24acc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24acc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24acc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24ACC4u;
    {
        const bool branch_taken_0x24acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACC4u;
        // 0x24acc8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acc4) {
            ctx->pc = 0x24ACFCu;
            goto label_24acfc;
        }
    }
    ctx->pc = 0x24ACCCu;
label_24accc:
    // 0x24accc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24acd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24acd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24acd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24ACD4u;
    {
        const bool branch_taken_0x24acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACD4u;
        // 0x24acd8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24acd4) {
            ctx->pc = 0x24ACFCu;
            goto label_24acfc;
        }
    }
    ctx->pc = 0x24ACDCu;
label_24acdc:
    // 0x24acdc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24acdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24ace0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ace0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ace4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24ACE4u;
    {
        const bool branch_taken_0x24ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACE4u;
        // 0x24ace8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ace4) {
            ctx->pc = 0x24ACFCu;
            goto label_24acfc;
        }
    }
    ctx->pc = 0x24ACECu;
label_24acec:
    // 0x24acec: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x24acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x24acf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24acf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24acf4: 0x0  nop
    ctx->pc = 0x24acf4u;
    // NOP
    // 0x24acf8: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24acf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_24acfc:
    // 0x24acfc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24acfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24ad00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24ad04: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24ad04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ad08: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_24ad0c:
    // 0x24ad0c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24ad10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24ad14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ad18: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24AD18u;
    SET_GPR_U32(ctx, 31, 0x24AD20u);
    ctx->pc = 0x24AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD18u;
    // 0x24ad1c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24AD18u, 0x24AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD20u;
label_24ad20:
    // 0x24ad20: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24AD20u;
    {
        const bool branch_taken_0x24ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad20) {
            ctx->pc = 0x24AD9Cu;
            goto label_24ad9c;
        }
    }
    ctx->pc = 0x24AD28u;
    // 0x24ad28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24ad2c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24AD2Cu;
    SET_GPR_U32(ctx, 31, 0x24AD34u);
    ctx->pc = 0x24AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AD2Cu;
    // 0x24ad30: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24AD2Cu, 0x24AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD34u;
label_24ad34:
    // 0x24ad34: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x24ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24ad38: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24AD38u;
    {
        const bool branch_taken_0x24ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD38u;
        // 0x24ad3c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad38) {
            ctx->pc = 0x24AD8Cu;
            goto label_24ad8c;
        }
    }
    ctx->pc = 0x24AD40u;
    // 0x24ad40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24AD40u;
    SET_GPR_U32(ctx, 31, 0x24AD48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24AD40u, 0x24AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AD48u;
label_24ad48:
    // 0x24ad48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ad4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24AD4Cu;
    {
        const bool branch_taken_0x24ad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD4Cu;
        // 0x24ad50: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad4c) {
            ctx->pc = 0x24AD8Cu;
            goto label_24ad8c;
        }
    }
    ctx->pc = 0x24AD54u;
    // 0x24ad54: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x24ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ad58: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x24ad58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x24ad5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ad5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ad60: 0x0  nop
    ctx->pc = 0x24ad60u;
    // NOP
    // 0x24ad64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24ad64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ad68: 0x0  nop
    ctx->pc = 0x24ad68u;
    // NOP
    // 0x24ad6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24AD6Cu;
    {
        const bool branch_taken_0x24ad6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD6Cu;
        // 0x24ad70: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad6c) {
            ctx->pc = 0x24AD88u;
            goto label_24ad88;
        }
    }
    ctx->pc = 0x24AD74u;
    // 0x24ad74: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ad78: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ad7c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ad80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x24AD80u;
    {
        const bool branch_taken_0x24ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD80u;
        // 0x24ad84: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad80) {
            ctx->pc = 0x24AE00u;
            goto label_24ae00;
        }
    }
    ctx->pc = 0x24AD88u;
label_24ad88:
    // 0x24ad88: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x24ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_24ad8c:
    // 0x24ad8c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24ad8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ad90: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ad94: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24ad94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ad98: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24ad98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24ad9c:
    // 0x24ad9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ad9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ada0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ada0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24ada4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ada8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24ADA8u;
    SET_GPR_U32(ctx, 31, 0x24ADB0u);
    ctx->pc = 0x24ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ADA8u;
    // 0x24adac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24ADA8u, 0x24ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADB0u;
label_24adb0:
    // 0x24adb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24adb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24adb4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24ADB4u;
    SET_GPR_U32(ctx, 31, 0x24ADBCu);
    ctx->pc = 0x24ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ADB4u;
    // 0x24adb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24ADB4u, 0x24ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADBCu;
label_24adbc:
    // 0x24adbc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24adbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24adc0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24adc4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x24ADC4u;
    {
        const bool branch_taken_0x24adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24adc4) {
            ctx->pc = 0x24ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24ADC4u;
            // 0x24adc8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE04u;
            goto label_24ae04;
        }
    }
    ctx->pc = 0x24ADCCu;
    // 0x24adcc: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24add0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24add0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24add4: 0x0  nop
    ctx->pc = 0x24add4u;
    // NOP
    // 0x24add8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24add8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24addc: 0x0  nop
    ctx->pc = 0x24addcu;
    // NOP
    // 0x24ade0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24ADE0u;
    {
        const bool branch_taken_0x24ade0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ade0) {
            ctx->pc = 0x24ADF8u;
            goto label_24adf8;
        }
    }
    ctx->pc = 0x24ADE8u;
    // 0x24ade8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24adec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24adecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24adf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24ADF0u;
    {
        const bool branch_taken_0x24adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADF0u;
        // 0x24adf4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24adf0) {
            ctx->pc = 0x24AE00u;
            goto label_24ae00;
        }
    }
    ctx->pc = 0x24ADF8u;
label_24adf8:
    // 0x24adf8: 0xc0b712e  jal         func_2DC4B8
    ctx->pc = 0x24ADF8u;
    SET_GPR_U32(ctx, 31, 0x24AE00u);
    ctx->pc = 0x24ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ADF8u;
    // 0x24adfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC4B8u, 0x24ADF8u, 0x24AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE00u;
label_24ae00:
    // 0x24ae00: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24ae00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24ae04:
    // 0x24ae04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ae08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AE08u;
    {
        const bool branch_taken_0x24ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE08u;
        // 0x24ae0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae08) {
            ctx->pc = 0x24AE1Cu;
            goto label_24ae1c;
        }
    }
    ctx->pc = 0x24AE10u;
    // 0x24ae10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ae14: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24AE14u;
    SET_GPR_U32(ctx, 31, 0x24AE1Cu);
    ctx->pc = 0x24AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE14u;
    // 0x24ae18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24AE14u, 0x24AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE1Cu;
label_24ae1c:
    // 0x24ae1c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24ae1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24ae20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24ae24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AE24u;
    {
        const bool branch_taken_0x24ae24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE24u;
        // 0x24ae28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae24) {
            ctx->pc = 0x24AE38u;
            goto label_24ae38;
        }
    }
    ctx->pc = 0x24AE2Cu;
    // 0x24ae2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ae30: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24AE30u;
    SET_GPR_U32(ctx, 31, 0x24AE38u);
    ctx->pc = 0x24AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE30u;
    // 0x24ae34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24AE30u, 0x24AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE38u;
label_24ae38:
    // 0x24ae38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ae38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ae3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ae3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ae40: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE44u;
        // 0x24ae48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE4Cu;
    // 0x24ae4c: 0x0  nop
    ctx->pc = 0x24ae4cu;
    // NOP
    ctx->pc = 0x24ae50u;
}
