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

// Function: func_0011A2C0
// Address: 0x11a2c0 - 0x11a530
void func_0011A2C0_0x11a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011A2C0_0x11a2c0");
#endif

    switch (ctx->pc) {
        case 0x11a320u: goto label_11a320;
        case 0x11a328u: goto label_11a328;
        case 0x11a334u: goto label_11a334;
        case 0x11a34cu: goto label_11a34c;
        case 0x11a378u: goto label_11a378;
        case 0x11a39cu: goto label_11a39c;
        case 0x11a3a4u: goto label_11a3a4;
        case 0x11a3e4u: goto label_11a3e4;
        case 0x11a3f8u: goto label_11a3f8;
        case 0x11a408u: goto label_11a408;
        case 0x11a424u: goto label_11a424;
        case 0x11a440u: goto label_11a440;
        case 0x11a458u: goto label_11a458;
        case 0x11a46cu: goto label_11a46c;
        case 0x11a474u: goto label_11a474;
        case 0x11a488u: goto label_11a488;
        case 0x11a4acu: goto label_11a4ac;
        case 0x11a4b8u: goto label_11a4b8;
        case 0x11a4c0u: goto label_11a4c0;
        case 0x11a4ccu: goto label_11a4cc;
        case 0x11a4e0u: goto label_11a4e0;
        case 0x11a50cu: goto label_11a50c;
        default: break;
    }

    ctx->pc = 0x11a2c0u;

    // 0x11a2c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a2c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11a2c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11a2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11a2d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11a2d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x11a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x11a2dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11a2e4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11a2e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2f0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11a2f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11a2f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11a2f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11a2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11a2fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a300: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x11a300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a304: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11a308: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x11a30c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11a30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11a310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a314: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x11a314u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11a318: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11A318u;
    SET_GPR_U32(ctx, 31, 0x11A320u);
    ctx->pc = 0x11A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A318u;
    // 0x11a31c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11A318u, 0x11A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A320u;
label_11a320:
    // 0x11a320: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11A320u;
    SET_GPR_U32(ctx, 31, 0x11A328u);
    ctx->pc = 0x11A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A320u;
    // 0x11a324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11A320u, 0x11A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A328u;
label_11a328:
    // 0x11a328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a32c: 0xc0a480c  jal         func_292030
    ctx->pc = 0x11A32Cu;
    SET_GPR_U32(ctx, 31, 0x11A334u);
    ctx->pc = 0x11A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A32Cu;
    // 0x11a330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x11A32Cu, 0x11A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A334u;
label_11a334:
    // 0x11a334: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11a338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a340: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x11a344: 0xc042cba  jal         func_10B2E8
    ctx->pc = 0x11A344u;
    SET_GPR_U32(ctx, 31, 0x11A34Cu);
    ctx->pc = 0x11A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A344u;
    // 0x11a348: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x11A344u, 0x11A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A34Cu;
label_11a34c:
    // 0x11a34c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11A34Cu;
    {
        const bool branch_taken_0x11a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A34Cu;
        // 0x11a350: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a34c) {
            ctx->pc = 0x11A378u;
            goto label_11a378;
        }
    }
    ctx->pc = 0x11A354u;
    // 0x11a354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a358: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11a35c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x11a360: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a368: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11a368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a36c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11a36cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a370: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11A370u;
    SET_GPR_U32(ctx, 31, 0x11A378u);
    ctx->pc = 0x11A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A370u;
    // 0x11a374: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11A370u, 0x11A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A378u;
label_11a378:
    // 0x11a378: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11a378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11a37c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A37Cu;
    {
        const bool branch_taken_0x11a37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A37Cu;
        // 0x11a380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a37c) {
            ctx->pc = 0x11A394u;
            goto label_11a394;
        }
    }
    ctx->pc = 0x11A384u;
    // 0x11a384: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x11A384u;
    {
        const bool branch_taken_0x11a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a384) {
            ctx->pc = 0x11A464u;
            goto label_11a464;
        }
    }
    ctx->pc = 0x11A38Cu;
    // 0x11a38c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x11A38Cu;
    {
        const bool branch_taken_0x11a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a38c) {
            ctx->pc = 0x11A4B8u;
            goto label_11a4b8;
        }
    }
    ctx->pc = 0x11A394u;
label_11a394:
    // 0x11a394: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11A394u;
    SET_GPR_U32(ctx, 31, 0x11A39Cu);
    ctx->pc = 0x11A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A394u;
    // 0x11a398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11A394u, 0x11A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A39Cu;
label_11a39c:
    // 0x11a39c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11A39Cu;
    SET_GPR_U32(ctx, 31, 0x11A3A4u);
    ctx->pc = 0x11A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A39Cu;
    // 0x11a3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11A39Cu, 0x11A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3A4u;
label_11a3a4:
    // 0x11a3a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11a3a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11a3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3ac: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x11a3b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x11a3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x11a3b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11a3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a3b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11a3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x11a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a3c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a3cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3d0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11a3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11a3d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a3d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a3d8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x11a3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11a3dc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11A3DCu;
    SET_GPR_U32(ctx, 31, 0x11A3E4u);
    ctx->pc = 0x11A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3DCu;
    // 0x11a3e0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11A3DCu, 0x11A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3E4u;
label_11a3e4:
    // 0x11a3e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a3e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a3e8: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x11a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11a3ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11a3ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11a3f0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11A3F0u;
    SET_GPR_U32(ctx, 31, 0x11A3F8u);
    ctx->pc = 0x11A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3F0u;
    // 0x11a3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11A3F0u, 0x11A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3F8u;
label_11a3f8:
    // 0x11a3f8: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x11a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x11a3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a400: 0xc049396  jal         func_124E58
    ctx->pc = 0x11A400u;
    SET_GPR_U32(ctx, 31, 0x11A408u);
    ctx->pc = 0x11A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A400u;
    // 0x11a404: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11A400u, 0x11A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a40c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11a410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a414: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11a414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11a418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a41c: 0xc042902  jal         func_10A408
    ctx->pc = 0x11A41Cu;
    SET_GPR_U32(ctx, 31, 0x11A424u);
    ctx->pc = 0x11A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A41Cu;
    // 0x11a420: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11A41Cu, 0x11A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A424u;
label_11a424:
    // 0x11a424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a428: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11a42c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a430: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11a434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a438: 0xc042908  jal         func_10A420
    ctx->pc = 0x11A438u;
    SET_GPR_U32(ctx, 31, 0x11A440u);
    ctx->pc = 0x11A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A438u;
    // 0x11a43c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11A438u, 0x11A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A440u;
label_11a440:
    // 0x11a440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a444: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11a448: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x11a448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a44c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11a450: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11A450u;
    SET_GPR_U32(ctx, 31, 0x11A458u);
    ctx->pc = 0x11A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A450u;
    // 0x11a454: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11A450u, 0x11A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A458u;
label_11a458:
    // 0x11a458: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11a458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11a45c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a460: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11a460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11a464:
    // 0x11a464: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11A464u;
    SET_GPR_U32(ctx, 31, 0x11A46Cu);
    ctx->pc = 0x11A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A464u;
    // 0x11a468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11A464u, 0x11A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A46Cu;
label_11a46c:
    // 0x11a46c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11A46Cu;
    SET_GPR_U32(ctx, 31, 0x11A474u);
    ctx->pc = 0x11A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A46Cu;
    // 0x11a470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11A46Cu, 0x11A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A474u;
label_11a474:
    // 0x11a474: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A474u;
    {
        const bool branch_taken_0x11a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A474u;
        // 0x11a478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a474) {
            ctx->pc = 0x11A498u;
            goto label_11a498;
        }
    }
    ctx->pc = 0x11A47Cu;
    // 0x11a47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a480: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A480u;
    SET_GPR_U32(ctx, 31, 0x11A488u);
    ctx->pc = 0x11A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A480u;
    // 0x11a484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A480u, 0x11A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A488u;
label_11a488:
    // 0x11a488: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11a488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a48c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11a48cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a490: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11a490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a494: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11a494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11a498:
    // 0x11a498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a49c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11a49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11a4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11A4A4u;
    SET_GPR_U32(ctx, 31, 0x11A4ACu);
    ctx->pc = 0x11A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4A4u;
    // 0x11a4a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11A4A4u, 0x11A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4ACu;
label_11a4ac:
    // 0x11a4ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a4acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a4b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11A4B0u;
    SET_GPR_U32(ctx, 31, 0x11A4B8u);
    ctx->pc = 0x11A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4B0u;
    // 0x11a4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11A4B0u, 0x11A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4B8u;
label_11a4b8:
    // 0x11a4b8: 0xc04290e  jal         func_10A438
    ctx->pc = 0x11A4B8u;
    SET_GPR_U32(ctx, 31, 0x11A4C0u);
    ctx->pc = 0x11A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4B8u;
    // 0x11a4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x11A4B8u, 0x11A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4C0u;
label_11a4c0:
    // 0x11a4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4c4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11A4C4u;
    SET_GPR_U32(ctx, 31, 0x11A4CCu);
    ctx->pc = 0x11A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4C4u;
    // 0x11a4c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11A4C4u, 0x11A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4CCu;
label_11a4cc:
    // 0x11a4cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A4CCu;
    {
        const bool branch_taken_0x11a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4CCu;
        // 0x11a4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4cc) {
            ctx->pc = 0x11A4E8u;
            goto label_11a4e8;
        }
    }
    ctx->pc = 0x11A4D4u;
    // 0x11a4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4d8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11A4D8u;
    SET_GPR_U32(ctx, 31, 0x11A4E0u);
    ctx->pc = 0x11A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4D8u;
    // 0x11a4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11A4D8u, 0x11A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4E0u;
label_11a4e0:
    // 0x11a4e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11A4E0u;
    {
        const bool branch_taken_0x11a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E0u;
        // 0x11a4e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4e0) {
            ctx->pc = 0x11A510u;
            goto label_11a510;
        }
    }
    ctx->pc = 0x11A4E8u;
label_11a4e8:
    // 0x11a4e8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11a4e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11a4ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x11a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x11a4f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A4F0u;
    {
        const bool branch_taken_0x11a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4F0u;
        // 0x11a4f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4f0) {
            ctx->pc = 0x11A510u;
            goto label_11a510;
        }
    }
    ctx->pc = 0x11A4F8u;
    // 0x11a4f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11a4fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11a4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11a500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11a500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a504: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x11A504u;
    SET_GPR_U32(ctx, 31, 0x11A50Cu);
    ctx->pc = 0x11A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A504u;
    // 0x11a508: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x11A504u, 0x11A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11a50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11a510:
    // 0x11a510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11a510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x11a518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a51c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a520: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a524: 0x3e00008  jr          $ra
    ctx->pc = 0x11A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A524u;
        // 0x11a528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A52Cu;
    // 0x11a52c: 0x0  nop
    ctx->pc = 0x11a52cu;
    // NOP
    ctx->pc = 0x11a530u;
}
