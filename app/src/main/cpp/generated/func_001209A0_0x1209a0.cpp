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

// Function: func_001209A0
// Address: 0x1209a0 - 0x120bc0
void func_001209A0_0x1209a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001209A0_0x1209a0");
#endif

    switch (ctx->pc) {
        case 0x1209ecu: goto label_1209ec;
        case 0x1209f8u: goto label_1209f8;
        case 0x120a1cu: goto label_120a1c;
        case 0x120a24u: goto label_120a24;
        case 0x120a4cu: goto label_120a4c;
        case 0x120a5cu: goto label_120a5c;
        case 0x120aacu: goto label_120aac;
        case 0x120ac0u: goto label_120ac0;
        case 0x120b14u: goto label_120b14;
        case 0x120b1cu: goto label_120b1c;
        case 0x120b50u: goto label_120b50;
        case 0x120b74u: goto label_120b74;
        case 0x120b80u: goto label_120b80;
        case 0x120ba4u: goto label_120ba4;
        default: break;
    }

    ctx->pc = 0x1209a0u;

    // 0x1209a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1209a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1209a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1209a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1209a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1209a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1209ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1209acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1209b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1209b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1209b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1209b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1209bc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1209bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1209c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1209c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1209c4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1209c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1209c8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1209cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1209ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1209d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1209d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209d4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1209d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1209d8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1209d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x1209dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1209dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1209e0: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x1209e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x1209e4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1209E4u;
    SET_GPR_U32(ctx, 31, 0x1209ECu);
    ctx->pc = 0x1209E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209E4u;
    // 0x1209e8: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1209E4u, 0x1209ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209ECu;
label_1209ec:
    // 0x1209ec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1209ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1209f0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1209F0u;
    SET_GPR_U32(ctx, 31, 0x1209F8u);
    ctx->pc = 0x1209F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209F0u;
    // 0x1209f4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1209F0u, 0x1209F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209F8u;
label_1209f8:
    // 0x1209f8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1209f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1209fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1209FCu;
    {
        const bool branch_taken_0x1209fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209FCu;
        // 0x120a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209fc) {
            ctx->pc = 0x120A14u;
            goto label_120a14;
        }
    }
    ctx->pc = 0x120A04u;
    // 0x120a04: 0x50620036  beql        $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x120A04u;
    {
        const bool branch_taken_0x120a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x120a04) {
            ctx->pc = 0x120A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120A04u;
            // 0x120a08: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120AE0u;
            goto label_120ae0;
        }
    }
    ctx->pc = 0x120A0Cu;
    // 0x120a0c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x120A0Cu;
    {
        const bool branch_taken_0x120a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A0Cu;
        // 0x120a10: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a0c) {
            ctx->pc = 0x120B84u;
            goto label_120b84;
        }
    }
    ctx->pc = 0x120A14u;
label_120a14:
    // 0x120a14: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x120A14u;
    SET_GPR_U32(ctx, 31, 0x120A1Cu);
    ctx->pc = 0x120A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A14u;
    // 0x120a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x120A14u, 0x120A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A1Cu;
label_120a1c:
    // 0x120a1c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x120A1Cu;
    SET_GPR_U32(ctx, 31, 0x120A24u);
    ctx->pc = 0x120A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A1Cu;
    // 0x120a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x120A1Cu, 0x120A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A24u;
label_120a24:
    // 0x120a24: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x120A24u;
    {
        const bool branch_taken_0x120a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120a24) {
            ctx->pc = 0x120A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120A24u;
            // 0x120a28: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120A50u;
            goto label_120a50;
        }
    }
    ctx->pc = 0x120A2Cu;
    // 0x120a2c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x120a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x120a30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120a34: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x120a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120a3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120a40: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x120a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x120a44: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x120A44u;
    SET_GPR_U32(ctx, 31, 0x120A4Cu);
    ctx->pc = 0x120A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A44u;
    // 0x120a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x120A44u, 0x120A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A4Cu;
label_120a4c:
    // 0x120a4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x120a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_120a50:
    // 0x120a50: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x120a54: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x120A54u;
    SET_GPR_U32(ctx, 31, 0x120A5Cu);
    ctx->pc = 0x120A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A54u;
    // 0x120a58: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x120A54u, 0x120A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A5Cu;
label_120a5c:
    // 0x120a5c: 0x3c013d81  lui         $at, 0x3D81
    ctx->pc = 0x120a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15745 << 16));
    // 0x120a60: 0x34213a93  ori         $at, $at, 0x3A93
    ctx->pc = 0x120a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14995);
    // 0x120a64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a6c: 0x3c013f8f  lui         $at, 0x3F8F
    ctx->pc = 0x120a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16271 << 16));
    // 0x120a70: 0x34218a09  ori         $at, $at, 0x8A09
    ctx->pc = 0x120a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35337);
    // 0x120a74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x120a8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x120a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x120a90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x120a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120a94: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a98: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x120a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x120a9c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x120a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120aa0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x120aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x120aa4: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x120AA4u;
    SET_GPR_U32(ctx, 31, 0x120AACu);
    ctx->pc = 0x120AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AA4u;
    // 0x120aa8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x120AA4u, 0x120AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AACu;
label_120aac:
    // 0x120aac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x120aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ab4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x120ab8: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120AB8u;
    SET_GPR_U32(ctx, 31, 0x120AC0u);
    ctx->pc = 0x120ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AB8u;
    // 0x120abc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120AB8u, 0x120AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AC0u;
label_120ac0:
    // 0x120ac0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x120ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x120ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120ac8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x120acc: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x120accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x120ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120ad4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x120ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x120ad8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x120ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x120adc: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x120adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_120ae0:
    // 0x120ae0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120AE0u;
    {
        const bool branch_taken_0x120ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE0u;
        // 0x120ae4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae0) {
            ctx->pc = 0x120B0Cu;
            goto label_120b0c;
        }
    }
    ctx->pc = 0x120AE8u;
    // 0x120ae8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x120AE8u;
    {
        const bool branch_taken_0x120ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE8u;
        // 0x120aec: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae8) {
            ctx->pc = 0x120B0Cu;
            goto label_120b0c;
        }
    }
    ctx->pc = 0x120AF0u;
    // 0x120af0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x120af4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x120af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x120af8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x120af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x120afc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120afcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120b00: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x120b00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120b04: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x120b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x120b08: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x120b08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_120b0c:
    // 0x120b0c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x120B0Cu;
    SET_GPR_U32(ctx, 31, 0x120B14u);
    ctx->pc = 0x120B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B0Cu;
    // 0x120b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x120B0Cu, 0x120B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B14u;
label_120b14:
    // 0x120b14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120B14u;
    SET_GPR_U32(ctx, 31, 0x120B1Cu);
    ctx->pc = 0x120B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B14u;
    // 0x120b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120B14u, 0x120B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B1Cu;
label_120b1c:
    // 0x120b1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x120B1Cu;
    {
        const bool branch_taken_0x120b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b1c) {
            ctx->pc = 0x120B60u;
            goto label_120b60;
        }
    }
    ctx->pc = 0x120B24u;
    // 0x120b24: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x120b24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x120b28: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120B28u;
    {
        const bool branch_taken_0x120b28 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x120b28) {
            ctx->pc = 0x120B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B28u;
            // 0x120b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B44u;
            goto label_120b44;
        }
    }
    ctx->pc = 0x120B30u;
    // 0x120b30: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x120b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x120b34: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x120b34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x120b38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x120b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x120b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x120B3Cu;
    {
        const bool branch_taken_0x120b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B3Cu;
        // 0x120b40: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b3c) {
            ctx->pc = 0x120B60u;
            goto label_120b60;
        }
    }
    ctx->pc = 0x120B44u;
label_120b44:
    // 0x120b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x120b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120b48: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x120B48u;
    SET_GPR_U32(ctx, 31, 0x120B50u);
    ctx->pc = 0x120B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B48u;
    // 0x120b4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x120B48u, 0x120B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B50u;
label_120b50:
    // 0x120b50: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x120b50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x120b54: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x120b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x120b58: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x120b58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x120b5c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x120b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_120b60:
    // 0x120b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120b64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x120B6Cu;
    SET_GPR_U32(ctx, 31, 0x120B74u);
    ctx->pc = 0x120B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B6Cu;
    // 0x120b70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x120B6Cu, 0x120B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B74u;
label_120b74:
    // 0x120b74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x120b78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x120B78u;
    SET_GPR_U32(ctx, 31, 0x120B80u);
    ctx->pc = 0x120B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B78u;
    // 0x120b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x120B78u, 0x120B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B80u;
label_120b80:
    // 0x120b80: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x120b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_120b84:
    // 0x120b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x120b88: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x120B88u;
    {
        const bool branch_taken_0x120b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b88) {
            ctx->pc = 0x120B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B88u;
            // 0x120b8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120BACu;
            goto label_120bac;
        }
    }
    ctx->pc = 0x120B90u;
    // 0x120b90: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x120b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x120b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120B94u;
    {
        const bool branch_taken_0x120b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B94u;
        // 0x120b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b94) {
            ctx->pc = 0x120BA8u;
            goto label_120ba8;
        }
    }
    ctx->pc = 0x120B9Cu;
    // 0x120b9c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x120B9Cu;
    SET_GPR_U32(ctx, 31, 0x120BA4u);
    ctx->pc = 0x120BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B9Cu;
    // 0x120ba0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x120B9Cu, 0x120BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120BA4u;
label_120ba4:
    // 0x120ba4: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x120ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
label_120ba8:
    // 0x120ba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x120ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_120bac:
    // 0x120bac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x120bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120bb4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x120bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x120BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB8u;
        // 0x120bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120BC0u;
}
