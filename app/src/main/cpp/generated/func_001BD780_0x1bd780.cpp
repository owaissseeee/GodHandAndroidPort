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

// Function: func_001BD780
// Address: 0x1bd780 - 0x1bd8c8
void func_001BD780_0x1bd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD780_0x1bd780");
#endif

    switch (ctx->pc) {
        case 0x1bd808u: goto label_1bd808;
        case 0x1bd850u: goto label_1bd850;
        case 0x1bd874u: goto label_1bd874;
        case 0x1bd890u: goto label_1bd890;
        default: break;
    }

    ctx->pc = 0x1bd780u;

    // 0x1bd780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bd784: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bd788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bd788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bd78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd790: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1bd790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1bd794: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD794u;
    {
        const bool branch_taken_0x1bd794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD794u;
        // 0x1bd798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd794) {
            ctx->pc = 0x1BD7ACu;
            goto label_1bd7ac;
        }
    }
    ctx->pc = 0x1BD79Cu;
    // 0x1bd79c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BD79Cu;
    {
        const bool branch_taken_0x1bd79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd79c) {
            ctx->pc = 0x1BD888u;
            goto label_1bd888;
        }
    }
    ctx->pc = 0x1BD7A4u;
    // 0x1bd7a4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1BD7A4u;
    {
        const bool branch_taken_0x1bd7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7A4u;
        // 0x1bd7a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7a4) {
            ctx->pc = 0x1BD8B8u;
            goto label_1bd8b8;
        }
    }
    ctx->pc = 0x1BD7ACu;
label_1bd7ac:
    // 0x1bd7ac: 0x92030774  lbu         $v1, 0x774($s0)
    ctx->pc = 0x1bd7acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1908)));
    // 0x1bd7b0: 0x50620041  beql        $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1BD7B0u;
    {
        const bool branch_taken_0x1bd7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd7b0) {
            ctx->pc = 0x1BD7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD7B0u;
            // 0x1bd7b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD8B8u;
            goto label_1bd8b8;
        }
    }
    ctx->pc = 0x1BD7B8u;
    // 0x1bd7b8: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x1bd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
    // 0x1bd7bc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BD7BCu;
    {
        const bool branch_taken_0x1bd7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7bc) {
            ctx->pc = 0x1BD7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD7BCu;
            // 0x1bd7c0: 0xc60d0770  lwc1        $f13, 0x770($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD810u;
            goto label_1bd810;
        }
    }
    ctx->pc = 0x1BD7C4u;
    // 0x1bd7c4: 0xc6000770  lwc1        $f0, 0x770($s0)
    ctx->pc = 0x1bd7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd7c8: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1bd7cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bd7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bd7d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd7d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd7d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd7d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bd7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd7e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd7e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bd7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bd7ec: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bd7f0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1bd7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bd7f4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1bd7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd7f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bd7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bd7fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1bd7fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1bd800: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1BD800u;
    SET_GPR_U32(ctx, 31, 0x1BD808u);
    ctx->pc = 0x1BD804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD800u;
    // 0x1bd804: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1BD800u, 0x1BD808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD808u;
label_1bd808:
    // 0x1bd808: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BD808u;
    {
        const bool branch_taken_0x1bd808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD808u;
        // 0x1bd80c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd808) {
            ctx->pc = 0x1BD854u;
            goto label_1bd854;
        }
    }
    ctx->pc = 0x1BD810u;
label_1bd810:
    // 0x1bd810: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1bd814: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bd814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bd818: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd824: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1bd824u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x1bd828: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1bd828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1bd82c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bd82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bd830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd834: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd838: 0xc7ae0000  lwc1        $f14, 0x0($sp)
    ctx->pc = 0x1bd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bd83c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bd83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd840: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1bd840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1bd844: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1bd844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1bd848: 0xc071ada  jal         func_1C6B68
    ctx->pc = 0x1BD848u;
    SET_GPR_U32(ctx, 31, 0x1BD850u);
    ctx->pc = 0x1BD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD848u;
    // 0x1bd84c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B68u, 0x1BD848u, 0x1BD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD850u;
label_1bd850:
    // 0x1bd850: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1bd854:
    // 0x1bd854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bd854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd858: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bd85c: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1bd860: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd864: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1bd864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd868: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bd868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd86c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1BD86Cu;
    SET_GPR_U32(ctx, 31, 0x1BD874u);
    ctx->pc = 0x1BD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD86Cu;
    // 0x1bd870: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1BD86Cu, 0x1BD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD874u;
label_1bd874:
    // 0x1bd874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd878: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bd878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd87c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1bd87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd880: 0xa2030775  sb          $v1, 0x775($s0)
    ctx->pc = 0x1bd880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1909), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd884: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bd884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bd888:
    // 0x1bd888: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1BD888u;
    SET_GPR_U32(ctx, 31, 0x1BD890u);
    ctx->pc = 0x1BD88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD888u;
    // 0x1bd88c: 0x26040610  addiu       $a0, $s0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1BD888u, 0x1BD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD890u;
label_1bd890:
    // 0x1bd890: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD890u;
    {
        const bool branch_taken_0x1bd890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd890) {
            ctx->pc = 0x1BD894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD890u;
            // 0x1bd894: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD8B8u;
            goto label_1bd8b8;
        }
    }
    ctx->pc = 0x1BD898u;
    // 0x1bd898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd89c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bd89cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd8a0: 0xa2020774  sb          $v0, 0x774($s0)
    ctx->pc = 0x1bd8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1908), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd8a4: 0xa2000775  sb          $zero, 0x775($s0)
    ctx->pc = 0x1bd8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1909), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd8a8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bd8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd8ac: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bd8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd8b0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bd8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd8b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd8b8:
    // 0x1bd8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bd8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8BCu;
        // 0x1bd8c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD8C4u;
    // 0x1bd8c4: 0x0  nop
    ctx->pc = 0x1bd8c4u;
    // NOP
    ctx->pc = 0x1bd8c8u;
}
