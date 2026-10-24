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

// Function: func_00119750
// Address: 0x119750 - 0x119bf0
void func_00119750_0x119750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00119750_0x119750");
#endif

    switch (ctx->pc) {
        case 0x1197a0u: goto label_1197a0;
        case 0x1197b0u: goto label_1197b0;
        case 0x1197bcu: goto label_1197bc;
        case 0x1197fcu: goto label_1197fc;
        case 0x119804u: goto label_119804;
        case 0x119850u: goto label_119850;
        case 0x119864u: goto label_119864;
        case 0x119874u: goto label_119874;
        case 0x119890u: goto label_119890;
        case 0x1198b4u: goto label_1198b4;
        case 0x1198bcu: goto label_1198bc;
        case 0x1198e4u: goto label_1198e4;
        case 0x11990cu: goto label_11990c;
        case 0x119ad4u: goto label_119ad4;
        case 0x119adcu: goto label_119adc;
        case 0x119ae4u: goto label_119ae4;
        case 0x119b10u: goto label_119b10;
        case 0x119b1cu: goto label_119b1c;
        case 0x119b38u: goto label_119b38;
        case 0x119b84u: goto label_119b84;
        case 0x119b8cu: goto label_119b8c;
        case 0x119ba0u: goto label_119ba0;
        case 0x119bc4u: goto label_119bc4;
        case 0x119bd0u: goto label_119bd0;
        default: break;
    }

    ctx->pc = 0x119750u;

    // 0x119750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119754: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x119754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x119758: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x119758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11975c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11975cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119760: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x119760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x119764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x119768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11976c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119770: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x119774: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x119774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x119778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11977c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x119780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119784: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x119788: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11978c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x119790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119794: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x119794u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x119798: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x119798u;
    SET_GPR_U32(ctx, 31, 0x1197A0u);
    ctx->pc = 0x11979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119798u;
    // 0x11979c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x119798u, 0x1197A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197A0u;
label_1197a0:
    // 0x1197a0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1197a4: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1197a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1197a8: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1197A8u;
    SET_GPR_U32(ctx, 31, 0x1197B0u);
    ctx->pc = 0x1197ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197A8u;
    // 0x1197ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1197A8u, 0x1197B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197B0u;
label_1197b0:
    // 0x1197b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1197b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197b4: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1197B4u;
    SET_GPR_U32(ctx, 31, 0x1197BCu);
    ctx->pc = 0x1197B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197B4u;
    // 0x1197b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1197B4u, 0x1197BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197BCu;
label_1197bc:
    // 0x1197bc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x1197c0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1197c4: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x1197c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1197c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1197c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1197cc: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x1197ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1197d0: 0x108000ff  beqz        $a0, . + 4 + (0xFF << 2)
    ctx->pc = 0x1197D0u;
    {
        const bool branch_taken_0x1197d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197D0u;
        // 0x1197d4: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197d0) {
            ctx->pc = 0x119BD0u;
            goto label_119bd0;
        }
    }
    ctx->pc = 0x1197D8u;
    // 0x1197d8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1197dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1197e0: 0x2442c4d0  addiu       $v0, $v0, -0x3B30
    ctx->pc = 0x1197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
    // 0x1197e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1197e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1197e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1197ec: 0x800008  jr          $a0
    ctx->pc = 0x1197ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1197F4u: goto label_1197f4;
            case 0x119888u: goto label_119888;
            case 0x1198D0u: goto label_1198d0;
            case 0x119904u: goto label_119904;
            case 0x119B24u: goto label_119b24;
            case 0x119B4Cu: goto label_119b4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1197ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1197F4u;
label_1197f4:
    // 0x1197f4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x1197F4u;
    SET_GPR_U32(ctx, 31, 0x1197FCu);
    ctx->pc = 0x1197F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197F4u;
    // 0x1197f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x1197F4u, 0x1197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197FCu;
label_1197fc:
    // 0x1197fc: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x1197FCu;
    SET_GPR_U32(ctx, 31, 0x119804u);
    ctx->pc = 0x119800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197FCu;
    // 0x119800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x1197FCu, 0x119804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119804u;
label_119804:
    // 0x119804: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x119804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x119808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x119808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11980c: 0x3c013c0b  lui         $at, 0x3C0B
    ctx->pc = 0x11980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15371 << 16));
    // 0x119810: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x119810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x119814: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119818: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x119818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11981c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119824: 0x3c014045  lui         $at, 0x4045
    ctx->pc = 0x119824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16453 << 16));
    // 0x119828: 0x34212bd4  ori         $at, $at, 0x2BD4
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11220);
    // 0x11982c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11982cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119830: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11983c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11983cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119840: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x119840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119844: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x119844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119848: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x119848u;
    SET_GPR_U32(ctx, 31, 0x119850u);
    ctx->pc = 0x11984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119848u;
    // 0x11984c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x119848u, 0x119850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119850u;
label_119850:
    // 0x119850: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119858: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x119858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x11985c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11985Cu;
    SET_GPR_U32(ctx, 31, 0x119864u);
    ctx->pc = 0x119860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11985Cu;
    // 0x119860: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11985Cu, 0x119864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119864u;
label_119864:
    // 0x119864: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x119864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x119868: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11986c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11986Cu;
    SET_GPR_U32(ctx, 31, 0x119874u);
    ctx->pc = 0x119870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11986Cu;
    // 0x119870: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11986Cu, 0x119874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119874u;
label_119874:
    // 0x119874: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11987c: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x11987cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x119880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119884: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119888:
    // 0x119888: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x119888u;
    SET_GPR_U32(ctx, 31, 0x119890u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x119888u, 0x119890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119890u;
label_119890:
    // 0x119890: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119890u;
    {
        const bool branch_taken_0x119890 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119890u;
        // 0x119894: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119890) {
            ctx->pc = 0x1198ACu;
            goto label_1198ac;
        }
    }
    ctx->pc = 0x119898u;
    // 0x119898: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x119898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11989c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11989cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1198a0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1198a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1198a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1198a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1198a8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1198a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1198ac:
    // 0x1198ac: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1198ACu;
    SET_GPR_U32(ctx, 31, 0x1198B4u);
    ctx->pc = 0x1198B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198ACu;
    // 0x1198b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1198ACu, 0x1198B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198B4u;
label_1198b4:
    // 0x1198b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1198B4u;
    SET_GPR_U32(ctx, 31, 0x1198BCu);
    ctx->pc = 0x1198B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198B4u;
    // 0x1198b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1198B4u, 0x1198BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198BCu;
label_1198bc:
    // 0x1198bc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1198BCu;
    {
        const bool branch_taken_0x1198bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1198bc) {
            ctx->pc = 0x119AFCu;
            goto label_119afc;
        }
    }
    ctx->pc = 0x1198C4u;
    // 0x1198c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1198c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1198c8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1198C8u;
    {
        const bool branch_taken_0x1198c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198C8u;
        // 0x1198cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198c8) {
            ctx->pc = 0x119AF8u;
            goto label_119af8;
        }
    }
    ctx->pc = 0x1198D0u;
label_1198d0:
    // 0x1198d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1198d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1198d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198d8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1198dc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1198DCu;
    SET_GPR_U32(ctx, 31, 0x1198E4u);
    ctx->pc = 0x1198E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198DCu;
    // 0x1198e0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1198DCu, 0x1198E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198E4u;
label_1198e4:
    // 0x1198e4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1198e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1198e8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1198ec: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x1198ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1198f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1198f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1198f4: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x1198f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x1198f8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1198f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1198fc: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x1198fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x119900: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x119900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_119904:
    // 0x119904: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x119904u;
    SET_GPR_U32(ctx, 31, 0x11990Cu);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x119904u, 0x11990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11990Cu;
label_11990c:
    // 0x11990c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11990Cu;
    {
        const bool branch_taken_0x11990c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11990Cu;
        // 0x119910: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11990c) {
            ctx->pc = 0x119928u;
            goto label_119928;
        }
    }
    ctx->pc = 0x119914u;
    // 0x119914: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x119914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119918: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x119918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11991c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11991cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119920: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119924: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x119924u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_119928:
    // 0x119928: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x119928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x11992c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11992Cu;
    {
        const bool branch_taken_0x11992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11992Cu;
        // 0x119930: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11992c) {
            ctx->pc = 0x11993Cu;
            goto label_11993c;
        }
    }
    ctx->pc = 0x119934u;
    // 0x119934: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x119934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119938: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x119938u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_11993c:
    // 0x11993c: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x119940: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119940u;
    {
        const bool branch_taken_0x119940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119940u;
        // 0x119944: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119940) {
            ctx->pc = 0x11994Cu;
            goto label_11994c;
        }
    }
    ctx->pc = 0x119948u;
    // 0x119948: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x119948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_11994c:
    // 0x11994c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x119950: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x119950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x119954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119958: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x119958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11995c: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x11995cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x119960: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x119960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x119964: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x119964u;
    {
        const bool branch_taken_0x119964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x119964) {
            ctx->pc = 0x119968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119964u;
            // 0x119968: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119A28u;
            goto label_119a28;
        }
    }
    ctx->pc = 0x11996Cu;
    // 0x11996c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x11996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119970: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x119970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x119974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119974u;
    {
        const bool branch_taken_0x119974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119974u;
        // 0x119978: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119974) {
            ctx->pc = 0x119994u;
            goto label_119994;
        }
    }
    ctx->pc = 0x11997Cu;
    // 0x11997c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119980: 0x2442c4f0  addiu       $v0, $v0, -0x3B10
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952176));
    // 0x119984: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119988: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11998c: 0x800008  jr          $a0
    ctx->pc = 0x11998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119994u: goto label_119994;
            case 0x11999Cu: goto label_11999c;
            case 0x1199A4u: goto label_1199a4;
            case 0x1199ACu: goto label_1199ac;
            case 0x1199B4u: goto label_1199b4;
            case 0x1199BCu: goto label_1199bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11998Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119994u;
label_119994:
    // 0x119994: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119994u;
    {
        const bool branch_taken_0x119994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119994u;
        // 0x119998: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119994) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x11999Cu;
label_11999c:
    // 0x11999c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11999Cu;
    {
        const bool branch_taken_0x11999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11999Cu;
        // 0x1199a0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11999c) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x1199A4u;
label_1199a4:
    // 0x1199a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1199A4u;
    {
        const bool branch_taken_0x1199a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A4u;
        // 0x1199a8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a4) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x1199ACu;
label_1199ac:
    // 0x1199ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1199ACu;
    {
        const bool branch_taken_0x1199ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199ac) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x1199B4u;
label_1199b4:
    // 0x1199b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199B4u;
        // 0x1199b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199C0u;
            goto label_1199c0;
        }
    }
    ctx->pc = 0x1199BCu;
label_1199bc:
    // 0x1199bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1199c0:
    // 0x1199c0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1199c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1199c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1199c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1199C8u;
    {
        const bool branch_taken_0x1199c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1199c8) {
            ctx->pc = 0x1199CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1199C8u;
            // 0x1199cc: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1199E0u;
            goto label_1199e0;
        }
    }
    ctx->pc = 0x1199D0u;
    // 0x1199d0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1199d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1199d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1199d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1199d8: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1199d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1199dc: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_1199e0:
    // 0x1199e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1199e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1199e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199E4u;
    {
        const bool branch_taken_0x1199e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199E4u;
        // 0x1199e8: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e4) {
            ctx->pc = 0x1199F8u;
            goto label_1199f8;
        }
    }
    ctx->pc = 0x1199ECu;
    // 0x1199ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1199ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1199f0: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1199f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1199f4: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1199f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_1199f8:
    // 0x1199f8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1199F8u;
    {
        const bool branch_taken_0x1199f8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1199f8) {
            ctx->pc = 0x1199FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1199F8u;
            // 0x1199fc: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119A00u;
            goto label_119a00;
        }
    }
    ctx->pc = 0x119A00u;
label_119a00:
    // 0x119a00: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119a04: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x119a08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119A08u;
    {
        const bool branch_taken_0x119a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A08u;
        // 0x119a0c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a08) {
            ctx->pc = 0x119A1Cu;
            goto label_119a1c;
        }
    }
    ctx->pc = 0x119A10u;
    // 0x119a10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x119a14: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119a18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_119a1c:
    // 0x119a1c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x119a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x119a20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119A20u;
    {
        const bool branch_taken_0x119a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A20u;
        // 0x119a24: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a20) {
            ctx->pc = 0x119A4Cu;
            goto label_119a4c;
        }
    }
    ctx->pc = 0x119A28u;
label_119a28:
    // 0x119a28: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119A28u;
    {
        const bool branch_taken_0x119a28 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x119a28) {
            ctx->pc = 0x119A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119A28u;
            // 0x119a2c: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119A50u;
            goto label_119a50;
        }
    }
    ctx->pc = 0x119A30u;
    // 0x119a30: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x119a34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x119a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x119a38: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x119a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x119a3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119a40: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119A40u;
    {
        const bool branch_taken_0x119a40 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x119A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A40u;
        // 0x119a44: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a40) {
            ctx->pc = 0x119A4Cu;
            goto label_119a4c;
        }
    }
    ctx->pc = 0x119A48u;
    // 0x119a48: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x119a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_119a4c:
    // 0x119a4c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_119a50:
    // 0x119a50: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x119a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x119a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119A54u;
    {
        const bool branch_taken_0x119a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A54u;
        // 0x119a58: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a54) {
            ctx->pc = 0x119A74u;
            goto label_119a74;
        }
    }
    ctx->pc = 0x119A5Cu;
    // 0x119a5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x119a60: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x119a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
    // 0x119a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119a68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119a6c: 0x800008  jr          $a0
    ctx->pc = 0x119A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119A74u: goto label_119a74;
            case 0x119A88u: goto label_119a88;
            case 0x119A98u: goto label_119a98;
            case 0x119AA8u: goto label_119aa8;
            case 0x119AB8u: goto label_119ab8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119A74u;
label_119a74:
    // 0x119a74: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x119a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x119a78: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x119a7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x119A80u;
    {
        const bool branch_taken_0x119a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A80u;
        // 0x119a84: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a80) {
            ctx->pc = 0x119AC8u;
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119A88u;
label_119a88:
    // 0x119a88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119a90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x119A90u;
    {
        const bool branch_taken_0x119a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A90u;
        // 0x119a94: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a90) {
            ctx->pc = 0x119AC8u;
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119A98u;
label_119a98:
    // 0x119a98: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x119a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x119a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119aa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119AA0u;
    {
        const bool branch_taken_0x119aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AA0u;
        // 0x119aa4: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119aa0) {
            ctx->pc = 0x119AC8u;
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119AA8u;
label_119aa8:
    // 0x119aa8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x119aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x119aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119ab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119AB0u;
    {
        const bool branch_taken_0x119ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB0u;
        // 0x119ab4: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ab0) {
            ctx->pc = 0x119AC8u;
            goto label_119ac8;
        }
    }
    ctx->pc = 0x119AB8u;
label_119ab8:
    // 0x119ab8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x119ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x119abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119ac0: 0x0  nop
    ctx->pc = 0x119ac0u;
    // NOP
    // 0x119ac4: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x119ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_119ac8:
    // 0x119ac8: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x119ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x119acc: 0xc0560a2  jal         func_158288
    ctx->pc = 0x119ACCu;
    SET_GPR_U32(ctx, 31, 0x119AD4u);
    ctx->pc = 0x119AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ACCu;
    // 0x119ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x119ACCu, 0x119AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AD4u;
label_119ad4:
    // 0x119ad4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119AD4u;
    SET_GPR_U32(ctx, 31, 0x119ADCu);
    ctx->pc = 0x119AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AD4u;
    // 0x119ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119AD4u, 0x119ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ADCu;
label_119adc:
    // 0x119adc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119ADCu;
    SET_GPR_U32(ctx, 31, 0x119AE4u);
    ctx->pc = 0x119AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119ADCu;
    // 0x119ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119ADCu, 0x119AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AE4u;
label_119ae4:
    // 0x119ae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119AE4u;
    {
        const bool branch_taken_0x119ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ae4) {
            ctx->pc = 0x119AFCu;
            goto label_119afc;
        }
    }
    ctx->pc = 0x119AECu;
    // 0x119aec: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x119aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x119af0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119AF0u;
    {
        const bool branch_taken_0x119af0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x119AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AF0u;
        // 0x119af4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119af0) {
            ctx->pc = 0x119AFCu;
            goto label_119afc;
        }
    }
    ctx->pc = 0x119AF8u;
label_119af8:
    // 0x119af8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119afc:
    // 0x119afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119b00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b08: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x119B08u;
    SET_GPR_U32(ctx, 31, 0x119B10u);
    ctx->pc = 0x119B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B08u;
    // 0x119b0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x119B08u, 0x119B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B10u;
label_119b10:
    // 0x119b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b14: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119B14u;
    SET_GPR_U32(ctx, 31, 0x119B1Cu);
    ctx->pc = 0x119B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B14u;
    // 0x119b18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119B14u, 0x119B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B1Cu;
label_119b1c:
    // 0x119b1c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x119B1Cu;
    {
        const bool branch_taken_0x119b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B1Cu;
        // 0x119b20: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b1c) {
            ctx->pc = 0x119BD4u;
            goto label_119bd4;
        }
    }
    ctx->pc = 0x119B24u;
label_119b24:
    // 0x119b24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b2c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x119b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x119b30: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119B30u;
    SET_GPR_U32(ctx, 31, 0x119B38u);
    ctx->pc = 0x119B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B30u;
    // 0x119b34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119B30u, 0x119B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B38u;
label_119b38:
    // 0x119b38: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119b3c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x119b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x119b40: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x119b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x119b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119b48: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119b48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_119b4c:
    // 0x119b4c: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x119b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x119b50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119B50u;
    {
        const bool branch_taken_0x119b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B50u;
        // 0x119b54: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b50) {
            ctx->pc = 0x119B7Cu;
            goto label_119b7c;
        }
    }
    ctx->pc = 0x119B58u;
    // 0x119b58: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x119B58u;
    {
        const bool branch_taken_0x119b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B58u;
        // 0x119b5c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b58) {
            ctx->pc = 0x119B7Cu;
            goto label_119b7c;
        }
    }
    ctx->pc = 0x119B60u;
    // 0x119b60: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x119b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119b64: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x119b64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x119b68: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x119b6c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x119b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119b70: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x119b70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119b74: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119b78: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x119b78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_119b7c:
    // 0x119b7c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119B7Cu;
    SET_GPR_U32(ctx, 31, 0x119B84u);
    ctx->pc = 0x119B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B7Cu;
    // 0x119b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119B7Cu, 0x119B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B84u;
label_119b84:
    // 0x119b84: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119B84u;
    SET_GPR_U32(ctx, 31, 0x119B8Cu);
    ctx->pc = 0x119B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B84u;
    // 0x119b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119B84u, 0x119B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B8Cu;
label_119b8c:
    // 0x119b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119B8Cu;
    {
        const bool branch_taken_0x119b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B8Cu;
        // 0x119b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b8c) {
            ctx->pc = 0x119BB0u;
            goto label_119bb0;
        }
    }
    ctx->pc = 0x119B94u;
    // 0x119b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b98: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x119B98u;
    SET_GPR_U32(ctx, 31, 0x119BA0u);
    ctx->pc = 0x119B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B98u;
    // 0x119b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x119B98u, 0x119BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BA0u;
label_119ba0:
    // 0x119ba0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x119ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x119ba4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x119ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x119ba8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x119ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x119bac: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x119bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_119bb0:
    // 0x119bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bbc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x119BBCu;
    SET_GPR_U32(ctx, 31, 0x119BC4u);
    ctx->pc = 0x119BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BBCu;
    // 0x119bc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x119BBCu, 0x119BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BC4u;
label_119bc4:
    // 0x119bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bc8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119BC8u;
    SET_GPR_U32(ctx, 31, 0x119BD0u);
    ctx->pc = 0x119BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BC8u;
    // 0x119bcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119BC8u, 0x119BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BD0u;
label_119bd0:
    // 0x119bd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x119bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_119bd4:
    // 0x119bd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x119bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119be0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x119be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119be4: 0x3e00008  jr          $ra
    ctx->pc = 0x119BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BE4u;
        // 0x119be8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119BECu;
    // 0x119bec: 0x0  nop
    ctx->pc = 0x119becu;
    // NOP
    ctx->pc = 0x119bf0u;
}
