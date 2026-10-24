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

// Function: func_00118158
// Address: 0x118158 - 0x118690
void func_00118158_0x118158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00118158_0x118158");
#endif

    switch (ctx->pc) {
        case 0x1181a8u: goto label_1181a8;
        case 0x1181b8u: goto label_1181b8;
        case 0x1181c4u: goto label_1181c4;
        case 0x118204u: goto label_118204;
        case 0x11820cu: goto label_11820c;
        case 0x11825cu: goto label_11825c;
        case 0x118270u: goto label_118270;
        case 0x118280u: goto label_118280;
        case 0x118294u: goto label_118294;
        case 0x1182b8u: goto label_1182b8;
        case 0x1182c0u: goto label_1182c0;
        case 0x1182e4u: goto label_1182e4;
        case 0x11830cu: goto label_11830c;
        case 0x1184e0u: goto label_1184e0;
        case 0x1184e8u: goto label_1184e8;
        case 0x1184f0u: goto label_1184f0;
        case 0x118528u: goto label_118528;
        case 0x118574u: goto label_118574;
        case 0x11857cu: goto label_11857c;
        case 0x118590u: goto label_118590;
        case 0x1185b4u: goto label_1185b4;
        case 0x1185c0u: goto label_1185c0;
        case 0x1185dcu: goto label_1185dc;
        case 0x118628u: goto label_118628;
        case 0x118630u: goto label_118630;
        case 0x118644u: goto label_118644;
        case 0x118668u: goto label_118668;
        case 0x118674u: goto label_118674;
        default: break;
    }

    ctx->pc = 0x118158u;

    // 0x118158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11815c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x118160: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x118160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x118164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x118168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11816c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118178: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x118178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11817c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11817cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x118180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118184: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x118184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x118188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11818c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x118190: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x118190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x118194: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x118194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x118198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11819c: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x11819cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x1181a0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1181A0u;
    SET_GPR_U32(ctx, 31, 0x1181A8u);
    ctx->pc = 0x1181A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181A0u;
    // 0x1181a4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1181A0u, 0x1181A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A8u;
label_1181a8:
    // 0x1181a8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1181a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1181ac: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1181acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1181b0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1181B0u;
    SET_GPR_U32(ctx, 31, 0x1181B8u);
    ctx->pc = 0x1181B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181B0u;
    // 0x1181b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1181B0u, 0x1181B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181B8u;
label_1181b8:
    // 0x1181b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1181b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181bc: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1181BCu;
    SET_GPR_U32(ctx, 31, 0x1181C4u);
    ctx->pc = 0x1181C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181BCu;
    // 0x1181c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1181BCu, 0x1181C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181C4u;
label_1181c4:
    // 0x1181c4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1181c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x1181c8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1181c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1181cc: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x1181ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1181d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1181d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1181d4: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x1181d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1181d8: 0x10800126  beqz        $a0, . + 4 + (0x126 << 2)
    ctx->pc = 0x1181D8u;
    {
        const bool branch_taken_0x1181d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181D8u;
        // 0x1181dc: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181d8) {
            ctx->pc = 0x118674u;
            goto label_118674;
        }
    }
    ctx->pc = 0x1181E0u;
    // 0x1181e0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1181e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1181e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1181e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1181e8: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1181ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1181ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1181f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1181f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1181f4: 0x800008  jr          $a0
    ctx->pc = 0x1181F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1181FCu: goto label_1181fc;
            case 0x11828Cu: goto label_11828c;
            case 0x1182D0u: goto label_1182d0;
            case 0x118304u: goto label_118304;
            case 0x118514u: goto label_118514;
            case 0x11853Cu: goto label_11853c;
            case 0x1185C8u: goto label_1185c8;
            case 0x1185F0u: goto label_1185f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1181F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1181FCu;
label_1181fc:
    // 0x1181fc: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x1181FCu;
    SET_GPR_U32(ctx, 31, 0x118204u);
    ctx->pc = 0x118200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181FCu;
    // 0x118200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x1181FCu, 0x118204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118204u;
label_118204:
    // 0x118204: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x118204u;
    SET_GPR_U32(ctx, 31, 0x11820Cu);
    ctx->pc = 0x118208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118204u;
    // 0x118208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x118204u, 0x11820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11820Cu;
label_11820c:
    // 0x11820c: 0x3c013ead  lui         $at, 0x3EAD
    ctx->pc = 0x11820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16045 << 16));
    // 0x118210: 0x3421288d  ori         $at, $at, 0x288D
    ctx->pc = 0x118210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10381);
    // 0x118214: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11821c: 0x3c01beae  lui         $at, 0xBEAE
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48814 << 16));
    // 0x118220: 0x34213bcd  ori         $at, $at, 0x3BCD
    ctx->pc = 0x118220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15309);
    // 0x118224: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118228: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11822c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118238: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x118238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11823c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11823cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x118240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118248: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x118248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11824c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11824cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118250: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x118250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x118254: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118254u;
    SET_GPR_U32(ctx, 31, 0x11825Cu);
    ctx->pc = 0x118258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118254u;
    // 0x118258: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118254u, 0x11825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11825Cu;
label_11825c:
    // 0x11825c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11825cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118264: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x118268: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118268u;
    SET_GPR_U32(ctx, 31, 0x118270u);
    ctx->pc = 0x11826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118268u;
    // 0x11826c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118268u, 0x118270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118270u;
label_118270:
    // 0x118270: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x118270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x118274: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x118274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x118278: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x118278u;
    SET_GPR_U32(ctx, 31, 0x118280u);
    ctx->pc = 0x11827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118278u;
    // 0x11827c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x118278u, 0x118280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118280u;
label_118280:
    // 0x118280: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118288: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11828c:
    // 0x11828c: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x11828Cu;
    SET_GPR_U32(ctx, 31, 0x118294u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x11828Cu, 0x118294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118294u;
label_118294:
    // 0x118294: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x118294u;
    {
        const bool branch_taken_0x118294 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118294u;
        // 0x118298: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118294) {
            ctx->pc = 0x1182B0u;
            goto label_1182b0;
        }
    }
    ctx->pc = 0x11829Cu;
    // 0x11829c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1182a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1182a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1182a4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1182a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1182a8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1182a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1182ac: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1182acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1182b0:
    // 0x1182b0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1182B0u;
    SET_GPR_U32(ctx, 31, 0x1182B8u);
    ctx->pc = 0x1182B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182B0u;
    // 0x1182b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1182B0u, 0x1182B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182B8u;
label_1182b8:
    // 0x1182b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1182B8u;
    SET_GPR_U32(ctx, 31, 0x1182C0u);
    ctx->pc = 0x1182BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182B8u;
    // 0x1182bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1182B8u, 0x1182C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182C0u;
label_1182c0:
    // 0x1182c0: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1182C0u;
    {
        const bool branch_taken_0x1182c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1182c0) {
            ctx->pc = 0x1185A0u;
            goto label_1185a0;
        }
    }
    ctx->pc = 0x1182C8u;
    // 0x1182c8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1182C8u;
    {
        const bool branch_taken_0x1182c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182C8u;
        // 0x1182cc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182c8) {
            ctx->pc = 0x118508u;
            goto label_118508;
        }
    }
    ctx->pc = 0x1182D0u;
label_1182d0:
    // 0x1182d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1182d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1182d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1182d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182d8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1182dc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1182DCu;
    SET_GPR_U32(ctx, 31, 0x1182E4u);
    ctx->pc = 0x1182E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182DCu;
    // 0x1182e0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1182DCu, 0x1182E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182E4u;
label_1182e4:
    // 0x1182e4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1182e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1182e8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1182e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1182ec: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x1182ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1182f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1182f4: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x1182f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x1182f8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x1182f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x1182fc: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x1182fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x118300: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x118300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_118304:
    // 0x118304: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x118304u;
    SET_GPR_U32(ctx, 31, 0x11830Cu);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x118304u, 0x11830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11830Cu;
label_11830c:
    // 0x11830c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11830Cu;
    {
        const bool branch_taken_0x11830c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11830Cu;
        // 0x118310: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11830c) {
            ctx->pc = 0x118328u;
            goto label_118328;
        }
    }
    ctx->pc = 0x118314u;
    // 0x118314: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x118314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118318: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11831c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11831cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118320: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x118320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x118324: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118324u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_118328:
    // 0x118328: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x118328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x11832c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11832Cu;
    {
        const bool branch_taken_0x11832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11832Cu;
        // 0x118330: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11832c) {
            ctx->pc = 0x11833Cu;
            goto label_11833c;
        }
    }
    ctx->pc = 0x118334u;
    // 0x118334: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x118334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118338: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x118338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_11833c:
    // 0x11833c: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x11833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x118340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x118340u;
    {
        const bool branch_taken_0x118340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118340u;
        // 0x118344: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118340) {
            ctx->pc = 0x11834Cu;
            goto label_11834c;
        }
    }
    ctx->pc = 0x118348u;
    // 0x118348: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x118348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_11834c:
    // 0x11834c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x118350: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x118354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118358: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x118358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11835c: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x118360: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x118364: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x118364u;
    {
        const bool branch_taken_0x118364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118364) {
            ctx->pc = 0x118368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118364u;
            // 0x118368: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118428u;
            goto label_118428;
        }
    }
    ctx->pc = 0x11836Cu;
    // 0x11836c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x11836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118370: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x118374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118374u;
    {
        const bool branch_taken_0x118374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118374u;
        // 0x118378: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118374) {
            ctx->pc = 0x118394u;
            goto label_118394;
        }
    }
    ctx->pc = 0x11837Cu;
    // 0x11837c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118380: 0x2442c370  addiu       $v0, $v0, -0x3C90
    ctx->pc = 0x118380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951792));
    // 0x118384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118388: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11838c: 0x800008  jr          $a0
    ctx->pc = 0x11838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118394u: goto label_118394;
            case 0x11839Cu: goto label_11839c;
            case 0x1183A4u: goto label_1183a4;
            case 0x1183ACu: goto label_1183ac;
            case 0x1183B4u: goto label_1183b4;
            case 0x1183BCu: goto label_1183bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11838Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118394u;
label_118394:
    // 0x118394: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118394u;
    {
        const bool branch_taken_0x118394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118394u;
        // 0x118398: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118394) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x11839Cu;
label_11839c:
    // 0x11839c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11839Cu;
    {
        const bool branch_taken_0x11839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11839Cu;
        // 0x1183a0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11839c) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x1183A4u;
label_1183a4:
    // 0x1183a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1183A4u;
    {
        const bool branch_taken_0x1183a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A4u;
        // 0x1183a8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183a4) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x1183ACu;
label_1183ac:
    // 0x1183ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1183ACu;
    {
        const bool branch_taken_0x1183ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183ACu;
        // 0x1183b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183ac) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x1183B4u;
label_1183b4:
    // 0x1183b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1183B4u;
    {
        const bool branch_taken_0x1183b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183B4u;
        // 0x1183b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183b4) {
            ctx->pc = 0x1183C0u;
            goto label_1183c0;
        }
    }
    ctx->pc = 0x1183BCu;
label_1183bc:
    // 0x1183bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1183bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1183c0:
    // 0x1183c0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1183c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1183c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1183c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1183C8u;
    {
        const bool branch_taken_0x1183c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1183c8) {
            ctx->pc = 0x1183CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1183C8u;
            // 0x1183cc: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1183E0u;
            goto label_1183e0;
        }
    }
    ctx->pc = 0x1183D0u;
    // 0x1183d0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1183d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1183d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1183d8: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1183d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1183dc: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_1183e0:
    // 0x1183e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1183e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1183e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1183E4u;
    {
        const bool branch_taken_0x1183e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183E4u;
        // 0x1183e8: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183e4) {
            ctx->pc = 0x1183F8u;
            goto label_1183f8;
        }
    }
    ctx->pc = 0x1183ECu;
    // 0x1183ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1183f0: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1183f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1183f4: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_1183f8:
    // 0x1183f8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1183F8u;
    {
        const bool branch_taken_0x1183f8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1183f8) {
            ctx->pc = 0x1183FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1183F8u;
            // 0x1183fc: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118400u;
            goto label_118400;
        }
    }
    ctx->pc = 0x118400u;
label_118400:
    // 0x118400: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118404: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x118404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x118408: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118408u;
    {
        const bool branch_taken_0x118408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118408u;
        // 0x11840c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118408) {
            ctx->pc = 0x11841Cu;
            goto label_11841c;
        }
    }
    ctx->pc = 0x118410u;
    // 0x118410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x118410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118414: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118418: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x118418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11841c:
    // 0x11841c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11841cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x118420: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118420u;
    {
        const bool branch_taken_0x118420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118420u;
        // 0x118424: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118420) {
            ctx->pc = 0x11844Cu;
            goto label_11844c;
        }
    }
    ctx->pc = 0x118428u;
label_118428:
    // 0x118428: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x118428u;
    {
        const bool branch_taken_0x118428 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x118428) {
            ctx->pc = 0x11842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118428u;
            // 0x11842c: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118450u;
            goto label_118450;
        }
    }
    ctx->pc = 0x118430u;
    // 0x118430: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118434: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x118434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x118438: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x118438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x11843c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118440: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x118440u;
    {
        const bool branch_taken_0x118440 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x118444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118440u;
        // 0x118444: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118440) {
            ctx->pc = 0x11844Cu;
            goto label_11844c;
        }
    }
    ctx->pc = 0x118448u;
    // 0x118448: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x118448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_11844c:
    // 0x11844c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x11844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_118450:
    // 0x118450: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x118450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x118454: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118454u;
    {
        const bool branch_taken_0x118454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118454u;
        // 0x118458: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118454) {
            ctx->pc = 0x118474u;
            goto label_118474;
        }
    }
    ctx->pc = 0x11845Cu;
    // 0x11845c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11845cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118460: 0x2442c390  addiu       $v0, $v0, -0x3C70
    ctx->pc = 0x118460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x118464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118468: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11846c: 0x800008  jr          $a0
    ctx->pc = 0x11846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118474u: goto label_118474;
            case 0x118488u: goto label_118488;
            case 0x118498u: goto label_118498;
            case 0x1184ACu: goto label_1184ac;
            case 0x1184C0u: goto label_1184c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11846Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118474u;
label_118474:
    // 0x118474: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x118474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x118478: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x118478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x11847c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11847cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118480: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x118480u;
    {
        const bool branch_taken_0x118480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118480u;
        // 0x118484: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118480) {
            ctx->pc = 0x1184D4u;
            goto label_1184d4;
        }
    }
    ctx->pc = 0x118488u;
label_118488:
    // 0x118488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11848c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11848cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118490: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118490u;
    {
        const bool branch_taken_0x118490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118490u;
        // 0x118494: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118490) {
            ctx->pc = 0x1184D4u;
            goto label_1184d4;
        }
    }
    ctx->pc = 0x118498u;
label_118498:
    // 0x118498: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x118498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x11849c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x11849cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1184a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1184a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1184a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1184A4u;
    {
        const bool branch_taken_0x1184a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A4u;
        // 0x1184a8: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184a4) {
            ctx->pc = 0x1184D4u;
            goto label_1184d4;
        }
    }
    ctx->pc = 0x1184ACu;
label_1184ac:
    // 0x1184ac: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1184b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1184b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1184b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1184b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1184b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1184B8u;
    {
        const bool branch_taken_0x1184b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184B8u;
        // 0x1184bc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184b8) {
            ctx->pc = 0x1184D4u;
            goto label_1184d4;
        }
    }
    ctx->pc = 0x1184C0u;
label_1184c0:
    // 0x1184c0: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1184c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1184c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1184c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1184c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1184cc: 0x0  nop
    ctx->pc = 0x1184ccu;
    // NOP
    // 0x1184d0: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1184d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_1184d4:
    // 0x1184d4: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x1184d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1184d8: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1184D8u;
    SET_GPR_U32(ctx, 31, 0x1184E0u);
    ctx->pc = 0x1184DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D8u;
    // 0x1184dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1184D8u, 0x1184E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184E0u;
label_1184e0:
    // 0x1184e0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1184E0u;
    SET_GPR_U32(ctx, 31, 0x1184E8u);
    ctx->pc = 0x1184E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184E0u;
    // 0x1184e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1184E0u, 0x1184E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184E8u;
label_1184e8:
    // 0x1184e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1184E8u;
    SET_GPR_U32(ctx, 31, 0x1184F0u);
    ctx->pc = 0x1184ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184E8u;
    // 0x1184ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1184E8u, 0x1184F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184F0u;
label_1184f0:
    // 0x1184f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1184F0u;
    {
        const bool branch_taken_0x1184f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1184f0) {
            ctx->pc = 0x1185A0u;
            goto label_1185a0;
        }
    }
    ctx->pc = 0x1184F8u;
    // 0x1184f8: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x1184f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x1184fc: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1184FCu;
    {
        const bool branch_taken_0x1184fc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1184fc) {
            ctx->pc = 0x1185A0u;
            goto label_1185a0;
        }
    }
    ctx->pc = 0x118504u;
    // 0x118504: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_118508:
    // 0x118508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11850c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11850Cu;
    {
        const bool branch_taken_0x11850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11850Cu;
        // 0x118510: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11850c) {
            ctx->pc = 0x1185A0u;
            goto label_1185a0;
        }
    }
    ctx->pc = 0x118514u;
label_118514:
    // 0x118514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x118514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11851c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x11851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x118520: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118520u;
    SET_GPR_U32(ctx, 31, 0x118528u);
    ctx->pc = 0x118524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118520u;
    // 0x118524: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118520u, 0x118528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118528u;
label_118528:
    // 0x118528: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11852c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x118530: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x118530u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x118534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118538: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11853c:
    // 0x11853c: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11853cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x118540: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118540u;
    {
        const bool branch_taken_0x118540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118540u;
        // 0x118544: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118540) {
            ctx->pc = 0x11856Cu;
            goto label_11856c;
        }
    }
    ctx->pc = 0x118548u;
    // 0x118548: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x118548u;
    {
        const bool branch_taken_0x118548 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118548u;
        // 0x11854c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118548) {
            ctx->pc = 0x11856Cu;
            goto label_11856c;
        }
    }
    ctx->pc = 0x118550u;
    // 0x118550: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118554: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x118554u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x118558: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11855c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11855cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118560: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x118560u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118564: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x118564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x118568: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x118568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11856c:
    // 0x11856c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11856Cu;
    SET_GPR_U32(ctx, 31, 0x118574u);
    ctx->pc = 0x118570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11856Cu;
    // 0x118570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11856Cu, 0x118574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118574u;
label_118574:
    // 0x118574: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118574u;
    SET_GPR_U32(ctx, 31, 0x11857Cu);
    ctx->pc = 0x118578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118574u;
    // 0x118578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118574u, 0x11857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11857Cu;
label_11857c:
    // 0x11857c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11857Cu;
    {
        const bool branch_taken_0x11857c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11857Cu;
        // 0x118580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11857c) {
            ctx->pc = 0x1185A0u;
            goto label_1185a0;
        }
    }
    ctx->pc = 0x118584u;
    // 0x118584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118588: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x118588u;
    SET_GPR_U32(ctx, 31, 0x118590u);
    ctx->pc = 0x11858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118588u;
    // 0x11858c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x118588u, 0x118590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118590u;
label_118590:
    // 0x118590: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x118590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x118594: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x118594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x118598: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x118598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11859c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11859cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1185a0:
    // 0x1185a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1185a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1185a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1185a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1185a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1185a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1185ACu;
    SET_GPR_U32(ctx, 31, 0x1185B4u);
    ctx->pc = 0x1185B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185ACu;
    // 0x1185b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1185ACu, 0x1185B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185B4u;
label_1185b4:
    // 0x1185b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1185b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1185B8u;
    SET_GPR_U32(ctx, 31, 0x1185C0u);
    ctx->pc = 0x1185BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185B8u;
    // 0x1185bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1185B8u, 0x1185C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185C0u;
label_1185c0:
    // 0x1185c0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1185C0u;
    {
        const bool branch_taken_0x1185c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185C0u;
        // 0x1185c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185c0) {
            ctx->pc = 0x118678u;
            goto label_118678;
        }
    }
    ctx->pc = 0x1185C8u;
label_1185c8:
    // 0x1185c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1185c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1185cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1185ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1185d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1185d4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1185D4u;
    SET_GPR_U32(ctx, 31, 0x1185DCu);
    ctx->pc = 0x1185D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185D4u;
    // 0x1185d8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1185D4u, 0x1185DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185DCu;
label_1185dc:
    // 0x1185dc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1185dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1185e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1185e4: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x1185e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1185e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1185e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1185ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1185ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1185f0:
    // 0x1185f0: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x1185f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x1185f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1185F4u;
    {
        const bool branch_taken_0x1185f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185F4u;
        // 0x1185f8: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185f4) {
            ctx->pc = 0x118620u;
            goto label_118620;
        }
    }
    ctx->pc = 0x1185FCu;
    // 0x1185fc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1185FCu;
    {
        const bool branch_taken_0x1185fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185FCu;
        // 0x118600: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185fc) {
            ctx->pc = 0x118620u;
            goto label_118620;
        }
    }
    ctx->pc = 0x118604u;
    // 0x118604: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x118604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118608: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x118608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11860c: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x11860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x118610: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x118610u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118614: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x118614u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118618: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x118618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11861c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11861cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_118620:
    // 0x118620: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x118620u;
    SET_GPR_U32(ctx, 31, 0x118628u);
    ctx->pc = 0x118624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118620u;
    // 0x118624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x118620u, 0x118628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118628u;
label_118628:
    // 0x118628: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118628u;
    SET_GPR_U32(ctx, 31, 0x118630u);
    ctx->pc = 0x11862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118628u;
    // 0x11862c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118628u, 0x118630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118630u;
label_118630:
    // 0x118630: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118630u;
    {
        const bool branch_taken_0x118630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118630u;
        // 0x118634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118630) {
            ctx->pc = 0x118654u;
            goto label_118654;
        }
    }
    ctx->pc = 0x118638u;
    // 0x118638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11863c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11863Cu;
    SET_GPR_U32(ctx, 31, 0x118644u);
    ctx->pc = 0x118640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11863Cu;
    // 0x118640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11863Cu, 0x118644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118644u;
label_118644:
    // 0x118644: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x118644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x118648: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x118648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11864c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11864cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x118650: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x118650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_118654:
    // 0x118654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118658: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11865c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118660: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x118660u;
    SET_GPR_U32(ctx, 31, 0x118668u);
    ctx->pc = 0x118664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118660u;
    // 0x118664: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x118660u, 0x118668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118668u;
label_118668:
    // 0x118668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11866c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11866Cu;
    SET_GPR_U32(ctx, 31, 0x118674u);
    ctx->pc = 0x118670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11866Cu;
    // 0x118670: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11866Cu, 0x118674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118674u;
label_118674:
    // 0x118674: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x118674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_118678:
    // 0x118678: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x118678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11867c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11867cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118684: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x118684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118688: 0x3e00008  jr          $ra
    ctx->pc = 0x118688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118688u;
        // 0x11868c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118690u;
}
