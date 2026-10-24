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

// Function: func_00262750
// Address: 0x262750 - 0x262980
void func_00262750_0x262750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00262750_0x262750");
#endif

    switch (ctx->pc) {
        case 0x2627d0u: goto label_2627d0;
        case 0x262804u: goto label_262804;
        case 0x262838u: goto label_262838;
        case 0x262880u: goto label_262880;
        case 0x2628c8u: goto label_2628c8;
        case 0x262904u: goto label_262904;
        case 0x262910u: goto label_262910;
        case 0x262960u: goto label_262960;
        default: break;
    }

    ctx->pc = 0x262750u;

    // 0x262750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x262750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x262754: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x262754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x262758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x262758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26275c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26275cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262760: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x262760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x262764: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x262764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x262768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26276c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26276cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262770: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x262770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x262774: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x262778: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x262778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26277c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x262780: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x262780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x262784: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x262784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x262788: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262788u;
    {
        const bool branch_taken_0x262788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262788u;
        // 0x26278c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262788) {
            ctx->pc = 0x2627ACu;
            goto label_2627ac;
        }
    }
    ctx->pc = 0x262790u;
    // 0x262790: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x262794: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x262798: 0x244240e0  addiu       $v0, $v0, 0x40E0
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16608));
    // 0x26279c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2627a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2627a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2627a4: 0x800008  jr          $a0
    ctx->pc = 0x2627A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2627ACu: goto label_2627ac;
            case 0x2627E0u: goto label_2627e0;
            case 0x262814u: goto label_262814;
            case 0x26285Cu: goto label_26285c;
            case 0x2628A4u: goto label_2628a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2627A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2627ACu;
label_2627ac:
    // 0x2627ac: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x2627acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2627b0: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x2627b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2627b4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2627b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2627b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2627bc: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x2627bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2627c0: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x2627c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2627c4: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x2627c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x2627c8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2627C8u;
    SET_GPR_U32(ctx, 31, 0x2627D0u);
    ctx->pc = 0x2627CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627C8u;
    // 0x2627cc: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2627C8u, 0x2627D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627D0u;
label_2627d0:
    // 0x2627d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2627d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2627d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2627d8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2627D8u;
    {
        const bool branch_taken_0x2627d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D8u;
        // 0x2627dc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627d8) {
            ctx->pc = 0x26288Cu;
            goto label_26288c;
        }
    }
    ctx->pc = 0x2627E0u;
label_2627e0:
    // 0x2627e0: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x2627e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2627e4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2627e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2627e8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2627e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2627ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2627f0: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x2627f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2627f4: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2627f8: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x2627f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x2627fc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2627FCu;
    SET_GPR_U32(ctx, 31, 0x262804u);
    ctx->pc = 0x262800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627FCu;
    // 0x262800: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2627FCu, 0x262804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262804u;
label_262804:
    // 0x262804: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x262804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x262808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26280c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26280Cu;
    {
        const bool branch_taken_0x26280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26280Cu;
        // 0x262810: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26280c) {
            ctx->pc = 0x26288Cu;
            goto label_26288c;
        }
    }
    ctx->pc = 0x262814u;
label_262814:
    // 0x262814: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x262814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262818: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x26281c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26281cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262820: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262824: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x262824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x262828: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x262828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x26282c: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x26282cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x262830: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262830u;
    SET_GPR_U32(ctx, 31, 0x262838u);
    ctx->pc = 0x262834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262830u;
    // 0x262834: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262830u, 0x262838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262838u;
label_262838:
    // 0x262838: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26283c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26283cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x262840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x262840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x262844: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x262844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x262848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26284c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262854: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x262854u;
    {
        const bool branch_taken_0x262854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262854u;
        // 0x262858: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262854) {
            ctx->pc = 0x2628E4u;
            goto label_2628e4;
        }
    }
    ctx->pc = 0x26285Cu;
label_26285c:
    // 0x26285c: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x26285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262860: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x262860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x262864: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x262864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x262868: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26286c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x26286cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x262870: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x262870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262874: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x262874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x262878: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262878u;
    SET_GPR_U32(ctx, 31, 0x262880u);
    ctx->pc = 0x26287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262878u;
    // 0x26287c: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262878u, 0x262880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262880u;
label_262880:
    // 0x262880: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x262884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262888: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26288c:
    // 0x26288c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26288cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x262890: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x262890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x262894: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x262894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x262898: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x262898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26289c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26289Cu;
    {
        const bool branch_taken_0x26289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26289Cu;
        // 0x2628a0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26289c) {
            ctx->pc = 0x2628F8u;
            goto label_2628f8;
        }
    }
    ctx->pc = 0x2628A4u;
label_2628a4:
    // 0x2628a4: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x2628a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2628a8: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x2628a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2628ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2628acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2628b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2628b4: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x2628b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2628b8: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2628bc: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x2628bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x2628c0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2628C0u;
    SET_GPR_U32(ctx, 31, 0x2628C8u);
    ctx->pc = 0x2628C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628C0u;
    // 0x2628c4: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2628C0u, 0x2628C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628C8u;
label_2628c8:
    // 0x2628c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2628c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2628cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2628ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2628d0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2628d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2628d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2628d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2628d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2628dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2628dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2628e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2628e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2628e4:
    // 0x2628e4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2628e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2628e8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2628e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2628ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2628ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2628f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2628f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2628f4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2628f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2628f8:
    // 0x2628f8: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x2628f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x2628fc: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2628FCu;
    SET_GPR_U32(ctx, 31, 0x262904u);
    ctx->pc = 0x262900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628FCu;
    // 0x262900: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2628FCu, 0x262904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262904u;
label_262904:
    // 0x262904: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x262904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262908: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x262908u;
    SET_GPR_U32(ctx, 31, 0x262910u);
    ctx->pc = 0x26290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262908u;
    // 0x26290c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x262908u, 0x262910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262910u;
label_262910:
    // 0x262910: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x262910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x262914: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x262914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x262918: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x262918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x26291c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x262920: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x262920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262924: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x262924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262928: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x262928u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26292c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x262930: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262934: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x262934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262938: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x262938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26293c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x26293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262940: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x262940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x262944: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x262944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262948: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x262948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26294c: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x26294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262950: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x262950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x262954: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x262954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x262958: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x262958u;
    SET_GPR_U32(ctx, 31, 0x262960u);
    ctx->pc = 0x26295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262958u;
    // 0x26295c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x262958u, 0x262960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262960u;
label_262960:
    // 0x262960: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x262964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262968: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x262968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26296c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262970: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x262970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x262974: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x262974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x262978: 0x3e00008  jr          $ra
    ctx->pc = 0x262978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262978u;
        // 0x26297c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262980u;
}
