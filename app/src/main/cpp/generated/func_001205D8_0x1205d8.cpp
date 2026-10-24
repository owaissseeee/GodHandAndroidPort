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

// Function: func_001205D8
// Address: 0x1205d8 - 0x1209a0
void func_001205D8_0x1205d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001205D8_0x1205d8");
#endif

    switch (ctx->pc) {
        case 0x120624u: goto label_120624;
        case 0x120630u: goto label_120630;
        case 0x120660u: goto label_120660;
        case 0x120668u: goto label_120668;
        case 0x1206b4u: goto label_1206b4;
        case 0x1206c8u: goto label_1206c8;
        case 0x1206ecu: goto label_1206ec;
        case 0x120700u: goto label_120700;
        case 0x120708u: goto label_120708;
        case 0x120734u: goto label_120734;
        case 0x120748u: goto label_120748;
        case 0x120754u: goto label_120754;
        case 0x120798u: goto label_120798;
        case 0x1207a4u: goto label_1207a4;
        case 0x1207f4u: goto label_1207f4;
        case 0x120814u: goto label_120814;
        case 0x120824u: goto label_120824;
        case 0x12083cu: goto label_12083c;
        case 0x120878u: goto label_120878;
        case 0x120888u: goto label_120888;
        case 0x12089cu: goto label_12089c;
        case 0x1208a8u: goto label_1208a8;
        case 0x1208b4u: goto label_1208b4;
        case 0x1208d4u: goto label_1208d4;
        case 0x1208dcu: goto label_1208dc;
        case 0x120904u: goto label_120904;
        case 0x120910u: goto label_120910;
        case 0x120928u: goto label_120928;
        case 0x12093cu: goto label_12093c;
        case 0x120950u: goto label_120950;
        case 0x12097cu: goto label_12097c;
        case 0x120988u: goto label_120988;
        default: break;
    }

    ctx->pc = 0x1205d8u;

    // 0x1205d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1205d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1205dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1205dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1205e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1205e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1205e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1205e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1205e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1205ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1205ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1205f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1205f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1205f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1205f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1205f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1205fc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1205fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x120600: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x120604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12060c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x120610: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x120610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x120614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x120614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x120618: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x12061c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x12061Cu;
    SET_GPR_U32(ctx, 31, 0x120624u);
    ctx->pc = 0x120620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12061Cu;
    // 0x120620: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x12061Cu, 0x120624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120624u;
label_120624:
    // 0x120624: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x120624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x120628: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x120628u;
    SET_GPR_U32(ctx, 31, 0x120630u);
    ctx->pc = 0x12062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120628u;
    // 0x12062c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x120628u, 0x120630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120630u;
label_120630:
    // 0x120630: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x120630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x120634: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x120634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x120638: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x120638u;
    {
        const bool branch_taken_0x120638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120638u;
        // 0x12063c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120638) {
            ctx->pc = 0x120988u;
            goto label_120988;
        }
    }
    ctx->pc = 0x120640u;
    // 0x120640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x120644: 0x2442c710  addiu       $v0, $v0, -0x38F0
    ctx->pc = 0x120644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952720));
    // 0x120648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x120648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12064c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120650: 0x800008  jr          $a0
    ctx->pc = 0x120650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120658u: goto label_120658;
            case 0x1206F8u: goto label_1206f8;
            case 0x120864u: goto label_120864;
            case 0x1208C0u: goto label_1208c0;
            case 0x120918u: goto label_120918;
            case 0x120948u: goto label_120948;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120650u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x120658u;
label_120658:
    // 0x120658: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x120658u;
    SET_GPR_U32(ctx, 31, 0x120660u);
    ctx->pc = 0x12065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120658u;
    // 0x12065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x120658u, 0x120660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120660u;
label_120660:
    // 0x120660: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x120660u;
    SET_GPR_U32(ctx, 31, 0x120668u);
    ctx->pc = 0x120664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120660u;
    // 0x120664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x120660u, 0x120668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120668u;
label_120668:
    // 0x120668: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12066c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12066cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120670: 0x3c01be09  lui         $at, 0xBE09
    ctx->pc = 0x120670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48649 << 16));
    // 0x120674: 0x3421d495  ori         $at, $at, 0xD495
    ctx->pc = 0x120674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54421);
    // 0x120678: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12067c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120680: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x120680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120688: 0x3c013f43  lui         $at, 0x3F43
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16195 << 16));
    // 0x12068c: 0x34212618  ori         $at, $at, 0x2618
    ctx->pc = 0x12068cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9752);
    // 0x120690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12069c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12069cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1206a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1206a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1206a4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1206a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1206a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1206a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1206ac: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1206ACu;
    SET_GPR_U32(ctx, 31, 0x1206B4u);
    ctx->pc = 0x1206B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206ACu;
    // 0x1206b0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1206ACu, 0x1206B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206B4u;
label_1206b4:
    // 0x1206b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1206b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1206b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1206b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206bc: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1206bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1206c0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1206C0u;
    SET_GPR_U32(ctx, 31, 0x1206C8u);
    ctx->pc = 0x1206C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206C0u;
    // 0x1206c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1206C0u, 0x1206C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206C8u;
label_1206c8:
    // 0x1206c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1206c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1206cc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1206d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1206d4: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x1206d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1206d8: 0xae2315b4  sw          $v1, 0x15B4($s1)
    ctx->pc = 0x1206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
    // 0x1206dc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1206dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1206e0: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1206e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1206e4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1206E4u;
    SET_GPR_U32(ctx, 31, 0x1206ECu);
    ctx->pc = 0x1206E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206E4u;
    // 0x1206e8: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1206E4u, 0x1206ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206ECu;
label_1206ec:
    // 0x1206ec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1206ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1206f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1206f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1206f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1206f8:
    // 0x1206f8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1206F8u;
    SET_GPR_U32(ctx, 31, 0x120700u);
    ctx->pc = 0x1206FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206F8u;
    // 0x1206fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1206F8u, 0x120700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120700u;
label_120700:
    // 0x120700: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120700u;
    SET_GPR_U32(ctx, 31, 0x120708u);
    ctx->pc = 0x120704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120700u;
    // 0x120704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120700u, 0x120708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120708u;
label_120708:
    // 0x120708: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120708u;
    {
        const bool branch_taken_0x120708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120708u;
        // 0x12070c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120708) {
            ctx->pc = 0x120734u;
            goto label_120734;
        }
    }
    ctx->pc = 0x120710u;
    // 0x120710: 0x8623054a  lh          $v1, 0x54A($s1)
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x120714: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120714u;
    {
        const bool branch_taken_0x120714 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x120718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120714u;
        // 0x120718: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120714) {
            ctx->pc = 0x120724u;
            goto label_120724;
        }
    }
    ctx->pc = 0x12071Cu;
    // 0x12071c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120720: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x120720u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_120724:
    // 0x120724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12072c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12072Cu;
    SET_GPR_U32(ctx, 31, 0x120734u);
    ctx->pc = 0x120730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12072Cu;
    // 0x120730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12072Cu, 0x120734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120734u;
label_120734:
    // 0x120734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120738: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12073c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120740: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x120740u;
    SET_GPR_U32(ctx, 31, 0x120748u);
    ctx->pc = 0x120744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120740u;
    // 0x120744: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x120740u, 0x120748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120748u;
label_120748:
    // 0x120748: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x120748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12074c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x12074Cu;
    SET_GPR_U32(ctx, 31, 0x120754u);
    ctx->pc = 0x120750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12074Cu;
    // 0x120750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x12074Cu, 0x120754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120754u;
label_120754:
    // 0x120754: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x120754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x120758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12075c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12075Cu;
    {
        const bool branch_taken_0x12075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12075Cu;
        // 0x120760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12075c) {
            ctx->pc = 0x1207ACu;
            goto label_1207ac;
        }
    }
    ctx->pc = 0x120764u;
    // 0x120764: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x120768: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x120768u;
    {
        const bool branch_taken_0x120768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120768u;
        // 0x12076c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120768) {
            ctx->pc = 0x1207ACu;
            goto label_1207ac;
        }
    }
    ctx->pc = 0x120770u;
    // 0x120770: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x120770u;
    {
        const bool branch_taken_0x120770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120770u;
        // 0x120774: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120770) {
            ctx->pc = 0x120798u;
            goto label_120798;
        }
    }
    ctx->pc = 0x120778u;
    // 0x120778: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x120778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x12077c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12077cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120780: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x120780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120788: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12078c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12078cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x120790: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x120790u;
    SET_GPR_U32(ctx, 31, 0x120798u);
    ctx->pc = 0x120794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120790u;
    // 0x120794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x120790u, 0x120798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120798u;
label_120798:
    // 0x120798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12079c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12079Cu;
    SET_GPR_U32(ctx, 31, 0x1207A4u);
    ctx->pc = 0x1207A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12079Cu;
    // 0x1207a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12079Cu, 0x1207A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207A4u;
label_1207a4:
    // 0x1207a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1207A4u;
    {
        const bool branch_taken_0x1207a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A4u;
        // 0x1207a8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a4) {
            ctx->pc = 0x1207B4u;
            goto label_1207b4;
        }
    }
    ctx->pc = 0x1207ACu;
label_1207ac:
    // 0x1207ac: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x1207acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x1207b0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1207b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_1207b4:
    // 0x1207b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1207b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1207b8: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1207B8u;
    {
        const bool branch_taken_0x1207b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1207b8) {
            ctx->pc = 0x1207BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207B8u;
            // 0x1207bc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120840u;
            goto label_120840;
        }
    }
    ctx->pc = 0x1207C0u;
    // 0x1207c0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1207c4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1207C4u;
    {
        const bool branch_taken_0x1207c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1207c4) {
            ctx->pc = 0x1207C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207C4u;
            // 0x1207c8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120840u;
            goto label_120840;
        }
    }
    ctx->pc = 0x1207CCu;
    // 0x1207cc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1207CCu;
    {
        const bool branch_taken_0x1207cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207CCu;
        // 0x1207d0: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207cc) {
            ctx->pc = 0x1207F4u;
            goto label_1207f4;
        }
    }
    ctx->pc = 0x1207D4u;
    // 0x1207d4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1207d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1207d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1207d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1207dc: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x1207dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1207e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1207e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1207e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1207e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1207e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1207e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1207ec: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1207ECu;
    SET_GPR_U32(ctx, 31, 0x1207F4u);
    ctx->pc = 0x1207F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1207ECu;
    // 0x1207f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1207ECu, 0x1207F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207F4u;
label_1207f4:
    // 0x1207f4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x1207f8: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1207F8u;
    {
        const bool branch_taken_0x1207f8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1207f8) {
            ctx->pc = 0x1207FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207F8u;
            // 0x1207fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120834u;
            goto label_120834;
        }
    }
    ctx->pc = 0x120800u;
    // 0x120800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120804: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x120808: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x120808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x12080c: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x12080Cu;
    SET_GPR_U32(ctx, 31, 0x120814u);
    ctx->pc = 0x120810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12080Cu;
    // 0x120810: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x12080Cu, 0x120814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120814u;
label_120814:
    // 0x120814: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x120814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x120818: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x12081c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x12081Cu;
    SET_GPR_U32(ctx, 31, 0x120824u);
    ctx->pc = 0x120820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12081Cu;
    // 0x120820: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x12081Cu, 0x120824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120824u;
label_120824:
    // 0x120824: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x120824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x120828: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x120828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x12082c: 0xa6220434  sh          $v0, 0x434($s1)
    ctx->pc = 0x12082cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x120830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120834:
    // 0x120834: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x120834u;
    SET_GPR_U32(ctx, 31, 0x12083Cu);
    ctx->pc = 0x120838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120834u;
    // 0x120838: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x120834u, 0x12083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12083Cu;
label_12083c:
    // 0x12083c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x12083cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_120840:
    // 0x120840: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x120840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x120844: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x120844u;
    {
        const bool branch_taken_0x120844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120844u;
        // 0x120848: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120844) {
            ctx->pc = 0x12098Cu;
            goto label_12098c;
        }
    }
    ctx->pc = 0x12084Cu;
    // 0x12084c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x12084cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x120850: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x120850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x120854: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x120854u;
    {
        const bool branch_taken_0x120854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120854u;
        // 0x120858: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120854) {
            ctx->pc = 0x12098Cu;
            goto label_12098c;
        }
    }
    ctx->pc = 0x12085Cu;
    // 0x12085c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12085Cu;
    {
        const bool branch_taken_0x12085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12085Cu;
        // 0x120860: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12085c) {
            ctx->pc = 0x12098Cu;
            goto label_12098c;
        }
    }
    ctx->pc = 0x120864u;
label_120864:
    // 0x120864: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x120864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12086c: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x120870: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120870u;
    SET_GPR_U32(ctx, 31, 0x120878u);
    ctx->pc = 0x120874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120870u;
    // 0x120874: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120870u, 0x120878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120878u;
label_120878:
    // 0x120878: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x120878u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x12087c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120880: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x120880u;
    SET_GPR_U32(ctx, 31, 0x120888u);
    ctx->pc = 0x120884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120880u;
    // 0x120884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x120880u, 0x120888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120888u;
label_120888:
    // 0x120888: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x12088c: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x120890: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x120894: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x120894u;
    SET_GPR_U32(ctx, 31, 0x12089Cu);
    ctx->pc = 0x120898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120894u;
    // 0x120898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x120894u, 0x12089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12089Cu;
label_12089c:
    // 0x12089c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x12089cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1208a0: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x1208A0u;
    SET_GPR_U32(ctx, 31, 0x1208A8u);
    ctx->pc = 0x1208A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208A0u;
    // 0x1208a4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x1208A0u, 0x1208A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208A8u;
label_1208a8:
    // 0x1208a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1208a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208ac: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1208ACu;
    SET_GPR_U32(ctx, 31, 0x1208B4u);
    ctx->pc = 0x1208B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208ACu;
    // 0x1208b0: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1208ACu, 0x1208B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208B4u;
label_1208b4:
    // 0x1208b4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1208b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1208b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1208bc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1208bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1208c0:
    // 0x1208c0: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x1208c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x1208c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1208c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208c8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1208c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1208cc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1208CCu;
    SET_GPR_U32(ctx, 31, 0x1208D4u);
    ctx->pc = 0x1208D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208CCu;
    // 0x1208d0: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1208CCu, 0x1208D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208D4u;
label_1208d4:
    // 0x1208d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1208D4u;
    SET_GPR_U32(ctx, 31, 0x1208DCu);
    ctx->pc = 0x1208D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208D4u;
    // 0x1208d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1208D4u, 0x1208DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208DCu;
label_1208dc:
    // 0x1208dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1208DCu;
    {
        const bool branch_taken_0x1208dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208DCu;
        // 0x1208e0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208dc) {
            ctx->pc = 0x1208F0u;
            goto label_1208f0;
        }
    }
    ctx->pc = 0x1208E4u;
    // 0x1208e4: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x1208e8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1208ec: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x1208ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_1208f0:
    // 0x1208f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1208f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1208f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1208f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1208f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1208f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1208FCu;
    SET_GPR_U32(ctx, 31, 0x120904u);
    ctx->pc = 0x120900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208FCu;
    // 0x120900: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1208FCu, 0x120904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120904u;
label_120904:
    // 0x120904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120908: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x120908u;
    SET_GPR_U32(ctx, 31, 0x120910u);
    ctx->pc = 0x12090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120908u;
    // 0x12090c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x120908u, 0x120910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120910u;
label_120910:
    // 0x120910: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x120910u;
    {
        const bool branch_taken_0x120910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120910u;
        // 0x120914: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120910) {
            ctx->pc = 0x12098Cu;
            goto label_12098c;
        }
    }
    ctx->pc = 0x120918u;
label_120918:
    // 0x120918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12091c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120920: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x120920u;
    SET_GPR_U32(ctx, 31, 0x120928u);
    ctx->pc = 0x120924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120920u;
    // 0x120924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x120920u, 0x120928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120928u;
label_120928:
    // 0x120928: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x120928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120930: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x120930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x120934: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x120934u;
    SET_GPR_U32(ctx, 31, 0x12093Cu);
    ctx->pc = 0x120938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120934u;
    // 0x120938: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x120934u, 0x12093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12093Cu;
label_12093c:
    // 0x12093c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x12093cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x120940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120944: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x120944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_120948:
    // 0x120948: 0xc055f06  jal         func_157C18
    ctx->pc = 0x120948u;
    SET_GPR_U32(ctx, 31, 0x120950u);
    ctx->pc = 0x12094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120948u;
    // 0x12094c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x120948u, 0x120950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120950u;
label_120950:
    // 0x120950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120950u;
    {
        const bool branch_taken_0x120950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120950) {
            ctx->pc = 0x120968u;
            goto label_120968;
        }
    }
    ctx->pc = 0x120958u;
    // 0x120958: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x120958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12095c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x12095cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x120960: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x120960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x120964: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x120964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_120968:
    // 0x120968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12096c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12096cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120974: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x120974u;
    SET_GPR_U32(ctx, 31, 0x12097Cu);
    ctx->pc = 0x120978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120974u;
    // 0x120978: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x120974u, 0x12097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12097Cu;
label_12097c:
    // 0x12097c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120980: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x120980u;
    SET_GPR_U32(ctx, 31, 0x120988u);
    ctx->pc = 0x120984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120980u;
    // 0x120984: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x120980u, 0x120988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120988u;
label_120988:
    // 0x120988: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x120988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12098c:
    // 0x12098c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12098cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120994: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x120994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120998: 0x3e00008  jr          $ra
    ctx->pc = 0x120998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120998u;
        // 0x12099c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1209A0u;
}
