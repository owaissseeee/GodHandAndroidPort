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

// Function: func_00141678
// Address: 0x141678 - 0x141ac8
void func_00141678_0x141678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00141678_0x141678");
#endif

    switch (ctx->pc) {
        case 0x1416c4u: goto label_1416c4;
        case 0x1416d8u: goto label_1416d8;
        case 0x1416e4u: goto label_1416e4;
        case 0x141714u: goto label_141714;
        case 0x141744u: goto label_141744;
        case 0x141768u: goto label_141768;
        case 0x141780u: goto label_141780;
        case 0x141798u: goto label_141798;
        case 0x1417c4u: goto label_1417c4;
        case 0x1417e8u: goto label_1417e8;
        case 0x141800u: goto label_141800;
        case 0x141818u: goto label_141818;
        case 0x14182cu: goto label_14182c;
        case 0x141840u: goto label_141840;
        case 0x141848u: goto label_141848;
        case 0x141850u: goto label_141850;
        case 0x141858u: goto label_141858;
        case 0x14186cu: goto label_14186c;
        case 0x141878u: goto label_141878;
        case 0x141884u: goto label_141884;
        case 0x1418a4u: goto label_1418a4;
        case 0x1418acu: goto label_1418ac;
        case 0x1418b8u: goto label_1418b8;
        case 0x1418e0u: goto label_1418e0;
        case 0x1418fcu: goto label_1418fc;
        case 0x14191cu: goto label_14191c;
        case 0x141930u: goto label_141930;
        case 0x14193cu: goto label_14193c;
        case 0x141968u: goto label_141968;
        case 0x141980u: goto label_141980;
        case 0x141990u: goto label_141990;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419d8u: goto label_1419d8;
        case 0x1419f0u: goto label_1419f0;
        case 0x141a00u: goto label_141a00;
        case 0x141a20u: goto label_141a20;
        case 0x141a30u: goto label_141a30;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a58u: goto label_141a58;
        case 0x141a84u: goto label_141a84;
        default: break;
    }

    ctx->pc = 0x141678u;

    // 0x141678: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x141678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x14167c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x141680: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x141680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x141684: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x141688: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x141688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14168c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x14168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x141690: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x141690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x141694: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x141694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x141698: 0x26b00120  addiu       $s0, $s5, 0x120
    ctx->pc = 0x141698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x14169c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x14169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1416a0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1416a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1416a4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1416a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1416a8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1416ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1416acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1416b0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1416b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1416b4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1416b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1416b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1416b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1416bc: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1416BCu;
    SET_GPR_U32(ctx, 31, 0x1416C4u);
    ctx->pc = 0x1416C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416BCu;
    // 0x1416c0: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1416BCu, 0x1416C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416C4u;
label_1416c4:
    // 0x1416c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1416c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1416c8: 0x26a400d0  addiu       $a0, $s5, 0xD0
    ctx->pc = 0x1416c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1416cc: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x1416ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x1416d0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1416D0u;
    SET_GPR_U32(ctx, 31, 0x1416D8u);
    ctx->pc = 0x1416D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416D0u;
    // 0x1416d4: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1416D0u, 0x1416D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416D8u;
label_1416d8:
    // 0x1416d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1416d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416dc: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1416DCu;
    SET_GPR_U32(ctx, 31, 0x1416E4u);
    ctx->pc = 0x1416E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416DCu;
    // 0x1416e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1416DCu, 0x1416E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416E4u;
label_1416e4:
    // 0x1416e4: 0x0  nop
    ctx->pc = 0x1416e4u;
    // NOP
    // 0x1416e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1416E8u;
    {
        const bool branch_taken_0x1416e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1416ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416E8u;
        // 0x1416ec: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416e8) {
            ctx->pc = 0x1416D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1416d8;
        }
    }
    ctx->pc = 0x1416F0u;
    // 0x1416f0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1416f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1416f4: 0x26b003a0  addiu       $s0, $s5, 0x3A0
    ctx->pc = 0x1416f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 928));
    // 0x1416f8: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x1416f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x1416fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1416fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141700: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x141700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x141704: 0x26b10460  addiu       $s1, $s5, 0x460
    ctx->pc = 0x141704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1120));
    // 0x141708: 0x26b206e0  addiu       $s2, $s5, 0x6E0
    ctx->pc = 0x141708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1760));
    // 0x14170c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x14170Cu;
    SET_GPR_U32(ctx, 31, 0x141714u);
    ctx->pc = 0x141710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14170Cu;
    // 0x141710: 0x26b40cc0  addiu       $s4, $s5, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x14170Cu, 0x141714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141714u;
label_141714:
    // 0x141714: 0x26b60ea0  addiu       $s6, $s5, 0xEA0
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 3744));
    // 0x141718: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x141718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14171c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14171cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141720: 0x2442e0f0  addiu       $v0, $v0, -0x1F10
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959344));
    // 0x141724: 0x2463dcc8  addiu       $v1, $v1, -0x2338
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958280));
    // 0x141728: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x141728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x14172c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141730: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x141730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x141734: 0x26b00fa0  addiu       $s0, $s5, 0xFA0
    ctx->pc = 0x141734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4000));
    // 0x141738: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x141738u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14173c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x14173Cu;
    SET_GPR_U32(ctx, 31, 0x141744u);
    ctx->pc = 0x141740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14173Cu;
    // 0x141740: 0x26be1380  addiu       $fp, $s5, 0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x14173Cu, 0x141744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141744u;
label_141744:
    // 0x141744: 0x26b31470  addiu       $s3, $s5, 0x1470
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 5232));
    // 0x141748: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14174c: 0x26a40540  addiu       $a0, $s5, 0x540
    ctx->pc = 0x14174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1344));
    // 0x141750: 0x2442e620  addiu       $v0, $v0, -0x19E0
    ctx->pc = 0x141750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
    // 0x141754: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x141754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x141758: 0x26a21520  addiu       $v0, $s5, 0x1520
    ctx->pc = 0x141758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5408));
    // 0x14175c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141760: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141760u;
    SET_GPR_U32(ctx, 31, 0x141768u);
    ctx->pc = 0x141764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141760u;
    // 0x141764: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141760u, 0x141768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141768u;
label_141768:
    // 0x141768: 0x26a315c0  addiu       $v1, $s5, 0x15C0
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5568));
    // 0x14176c: 0x26a21650  addiu       $v0, $s5, 0x1650
    ctx->pc = 0x14176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5712));
    // 0x141770: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x141770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x141774: 0x26a405f0  addiu       $a0, $s5, 0x5F0
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1520));
    // 0x141778: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141778u;
    SET_GPR_U32(ctx, 31, 0x141780u);
    ctx->pc = 0x14177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141778u;
    // 0x14177c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141778u, 0x141780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141780u;
label_141780:
    // 0x141780: 0x26a31910  addiu       $v1, $s5, 0x1910
    ctx->pc = 0x141780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6416));
    // 0x141784: 0x26a219c0  addiu       $v0, $s5, 0x19C0
    ctx->pc = 0x141784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
    // 0x141788: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x141788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x14178c: 0x26a40670  addiu       $a0, $s5, 0x670
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1648));
    // 0x141790: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141790u;
    SET_GPR_U32(ctx, 31, 0x141798u);
    ctx->pc = 0x141794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141790u;
    // 0x141794: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141790u, 0x141798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141798u;
label_141798:
    // 0x141798: 0x26a31a20  addiu       $v1, $s5, 0x1A20
    ctx->pc = 0x141798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6688));
    // 0x14179c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x14179cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1417a0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1417a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1417a4: 0x2484dcc8  addiu       $a0, $a0, -0x2338
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958280));
    // 0x1417a8: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x1417a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
    // 0x1417ac: 0x26a31b90  addiu       $v1, $s5, 0x1B90
    ctx->pc = 0x1417acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 7056));
    // 0x1417b0: 0x26a21ae0  addiu       $v0, $s5, 0x1AE0
    ctx->pc = 0x1417b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6880));
    // 0x1417b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1417b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1417b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1417b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1417bc: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1417BCu;
    SET_GPR_U32(ctx, 31, 0x1417C4u);
    ctx->pc = 0x1417C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417BCu;
    // 0x1417c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1417BCu, 0x1417C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417C4u;
label_1417c4:
    // 0x1417c4: 0x26a41cb0  addiu       $a0, $s5, 0x1CB0
    ctx->pc = 0x1417c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 7344));
    // 0x1417c8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1417cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1417ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1417d0: 0x2442e6c8  addiu       $v0, $v0, -0x1938
    ctx->pc = 0x1417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960840));
    // 0x1417d4: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x1417d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x1417d8: 0x26a40b90  addiu       $a0, $s5, 0xB90
    ctx->pc = 0x1417d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2960));
    // 0x1417dc: 0x26a21d50  addiu       $v0, $s5, 0x1D50
    ctx->pc = 0x1417dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7504));
    // 0x1417e0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1417E0u;
    SET_GPR_U32(ctx, 31, 0x1417E8u);
    ctx->pc = 0x1417E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417E0u;
    // 0x1417e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1417E0u, 0x1417E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417E8u;
label_1417e8:
    // 0x1417e8: 0x26a31dc0  addiu       $v1, $s5, 0x1DC0
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 7616));
    // 0x1417ec: 0x26a21e90  addiu       $v0, $s5, 0x1E90
    ctx->pc = 0x1417ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7824));
    // 0x1417f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1417f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1417f4: 0x26a40be0  addiu       $a0, $s5, 0xBE0
    ctx->pc = 0x1417f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3040));
    // 0x1417f8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1417F8u;
    SET_GPR_U32(ctx, 31, 0x141800u);
    ctx->pc = 0x1417FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1417F8u;
    // 0x1417fc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1417F8u, 0x141800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141800u;
label_141800:
    // 0x141800: 0x26a31f50  addiu       $v1, $s5, 0x1F50
    ctx->pc = 0x141800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8016));
    // 0x141804: 0x26a22220  addiu       $v0, $s5, 0x2220
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8736));
    // 0x141808: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x141808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x14180c: 0x26a40c30  addiu       $a0, $s5, 0xC30
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
    // 0x141810: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141810u;
    SET_GPR_U32(ctx, 31, 0x141818u);
    ctx->pc = 0x141814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141810u;
    // 0x141814: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141810u, 0x141818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141818u;
label_141818:
    // 0x141818: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14181c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141820: 0x2463dcc8  addiu       $v1, $v1, -0x2338
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958280));
    // 0x141824: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141824u;
    SET_GPR_U32(ctx, 31, 0x14182Cu);
    ctx->pc = 0x141828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141824u;
    // 0x141828: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141824u, 0x14182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14182Cu;
label_14182c:
    // 0x14182c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141830: 0x26a40d60  addiu       $a0, $s5, 0xD60
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3424));
    // 0x141834: 0x2463de90  addiu       $v1, $v1, -0x2170
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958736));
    // 0x141838: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141838u;
    SET_GPR_U32(ctx, 31, 0x141840u);
    ctx->pc = 0x14183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141838u;
    // 0x14183c: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141838u, 0x141840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141840u;
label_141840:
    // 0x141840: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141840u;
    SET_GPR_U32(ctx, 31, 0x141848u);
    ctx->pc = 0x141844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141840u;
    // 0x141844: 0x26a40db0  addiu       $a0, $s5, 0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141840u, 0x141848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141848u;
label_141848:
    // 0x141848: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141848u;
    SET_GPR_U32(ctx, 31, 0x141850u);
    ctx->pc = 0x14184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141848u;
    // 0x14184c: 0x26a40e00  addiu       $a0, $s5, 0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141848u, 0x141850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141850u;
label_141850:
    // 0x141850: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141850u;
    SET_GPR_U32(ctx, 31, 0x141858u);
    ctx->pc = 0x141854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141850u;
    // 0x141854: 0x26a40e50  addiu       $a0, $s5, 0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141850u, 0x141858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141858u;
label_141858:
    // 0x141858: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x14185c: 0x2484dcc8  addiu       $a0, $a0, -0x2338
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958280));
    // 0x141860: 0xaec40080  sw          $a0, 0x80($s6)
    ctx->pc = 0x141860u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 4));
    // 0x141864: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141864u;
    SET_GPR_U32(ctx, 31, 0x14186Cu);
    ctx->pc = 0x141868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141864u;
    // 0x141868: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141864u, 0x14186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14186Cu;
label_14186c:
    // 0x14186c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141870: 0x2463e7f8  addiu       $v1, $v1, -0x1808
    ctx->pc = 0x141870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961144));
    // 0x141874: 0xaec30080  sw          $v1, 0x80($s6)
    ctx->pc = 0x141874u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 3));
label_141878:
    // 0x141878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14187c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x14187Cu;
    SET_GPR_U32(ctx, 31, 0x141884u);
    ctx->pc = 0x141880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14187Cu;
    // 0x141880: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x14187Cu, 0x141884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141884u;
label_141884:
    // 0x141884: 0x0  nop
    ctx->pc = 0x141884u;
    // NOP
    // 0x141888: 0x16f1fffb  bne         $s7, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x141888u;
    {
        const bool branch_taken_0x141888 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 17));
        ctx->pc = 0x14188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141888u;
        // 0x14188c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141888) {
            ctx->pc = 0x141878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141878;
        }
    }
    ctx->pc = 0x141890u;
    // 0x141890: 0xfac00290  sqc2        $vf0, 0x290($s6)
    ctx->pc = 0x141890u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141894: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x141894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x141898: 0x26c40430  addiu       $a0, $s6, 0x430
    ctx->pc = 0x141898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1072));
    // 0x14189c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x14189Cu;
    SET_GPR_U32(ctx, 31, 0x1418A4u);
    ctx->pc = 0x1418A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14189Cu;
    // 0x1418a0: 0x2450dcc8  addiu       $s0, $v0, -0x2338 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x14189Cu, 0x1418A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418A4u;
label_1418a4:
    // 0x1418a4: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1418A4u;
    SET_GPR_U32(ctx, 31, 0x1418ACu);
    ctx->pc = 0x1418A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418A4u;
    // 0x1418a8: 0x26c40480  addiu       $a0, $s6, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1418A4u, 0x1418ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418ACu;
label_1418ac:
    // 0x1418ac: 0xafd00080  sw          $s0, 0x80($fp)
    ctx->pc = 0x1418acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 16));
    // 0x1418b0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1418B0u;
    SET_GPR_U32(ctx, 31, 0x1418B8u);
    ctx->pc = 0x1418B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418B0u;
    // 0x1418b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1418B0u, 0x1418B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418B8u;
label_1418b8:
    // 0x1418b8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1418bc: 0x2463dc20  addiu       $v1, $v1, -0x23E0
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958112));
    // 0x1418c0: 0xafc30080  sw          $v1, 0x80($fp)
    ctx->pc = 0x1418c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 3));
    // 0x1418c4: 0xfaa01420  sqc2        $vf0, 0x1420($s5)
    ctx->pc = 0x1418c4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 5152), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1418c8: 0xae700080  sw          $s0, 0x80($s3)
    ctx->pc = 0x1418c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 16));
    // 0x1418cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1418ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418d0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1418d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1418d4: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1418d8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1418D8u;
    SET_GPR_U32(ctx, 31, 0x1418E0u);
    ctx->pc = 0x1418DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418D8u;
    // 0x1418dc: 0x8fb10030  lw          $s1, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1418D8u, 0x1418E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418E0u;
label_1418e0:
    // 0x1418e0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1418e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1418e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1418e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418e8: 0x2442dc80  addiu       $v0, $v0, -0x2380
    ctx->pc = 0x1418e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
    // 0x1418ec: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x1418ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x1418f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1418f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418f4: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1418F4u;
    SET_GPR_U32(ctx, 31, 0x1418FCu);
    ctx->pc = 0x1418F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418F4u;
    // 0x1418f8: 0xac700080  sw          $s0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1418F4u, 0x1418FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418FCu;
label_1418fc:
    // 0x1418fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1418fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141900: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141904: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x141904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x141908: 0x2463e138  addiu       $v1, $v1, -0x1EC8
    ctx->pc = 0x141908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959416));
    // 0x14190c: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x14190cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x141910: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x141914: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141914u;
    SET_GPR_U32(ctx, 31, 0x14191Cu);
    ctx->pc = 0x141918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141914u;
    // 0x141918: 0xac700080  sw          $s0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141914u, 0x14191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14191Cu;
label_14191c:
    // 0x14191c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14191cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141920: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x141920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x141924: 0x2463dfb0  addiu       $v1, $v1, -0x2050
    ctx->pc = 0x141924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
    // 0x141928: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x141928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x14192c: 0x0  nop
    ctx->pc = 0x14192cu;
    // NOP
label_141930:
    // 0x141930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141934: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141934u;
    SET_GPR_U32(ctx, 31, 0x14193Cu);
    ctx->pc = 0x141938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141934u;
    // 0x141938: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141934u, 0x14193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14193Cu;
label_14193c:
    // 0x14193c: 0x0  nop
    ctx->pc = 0x14193cu;
    // NOP
    // 0x141940: 0x1654fffb  bne         $s2, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x141940u;
    {
        const bool branch_taken_0x141940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x141944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141940u;
        // 0x141944: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141940) {
            ctx->pc = 0x141930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141930;
        }
    }
    ctx->pc = 0x141948u;
    // 0x141948: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14194c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x141950: 0x2450dcc8  addiu       $s0, $v0, -0x2338
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x141954: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x141954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141958: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x141958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
    // 0x14195c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x14195cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141960: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141960u;
    SET_GPR_U32(ctx, 31, 0x141968u);
    ctx->pc = 0x141964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141960u;
    // 0x141964: 0x8fb10024  lw          $s1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141960u, 0x141968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141968u;
label_141968:
    // 0x141968: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14196c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14196cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141970: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x141970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x141974: 0x2463e038  addiu       $v1, $v1, -0x1FC8
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959160));
    // 0x141978: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141978u;
    SET_GPR_U32(ctx, 31, 0x141980u);
    ctx->pc = 0x14197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141978u;
    // 0x14197c: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141978u, 0x141980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141980u;
label_141980:
    // 0x141980: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x141984: 0xac700080  sw          $s0, 0x80($v1)
    ctx->pc = 0x141984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    // 0x141988: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141988u;
    SET_GPR_U32(ctx, 31, 0x141990u);
    ctx->pc = 0x14198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141988u;
    // 0x14198c: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141988u, 0x141990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141990u;
label_141990:
    // 0x141990: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x141990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x141994: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x141998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14199c: 0x2463e9b8  addiu       $v1, $v1, -0x1648
    ctx->pc = 0x14199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961592));
    // 0x1419a0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1419a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x1419a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1419a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1419a8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1419A8u;
    SET_GPR_U32(ctx, 31, 0x1419B0u);
    ctx->pc = 0x1419ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419A8u;
    // 0x1419ac: 0xac700080  sw          $s0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1419A8u, 0x1419B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419B0u;
label_1419b0:
    // 0x1419b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1419b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1419b4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1419b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1419bc: 0x2463e668  addiu       $v1, $v1, -0x1998
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
    // 0x1419c0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1419C0u;
    SET_GPR_U32(ctx, 31, 0x1419C8u);
    ctx->pc = 0x1419C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419C0u;
    // 0x1419c4: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1419C0u, 0x1419C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419C8u;
label_1419c8:
    // 0x1419c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1419c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1419cc: 0xac700080  sw          $s0, 0x80($v1)
    ctx->pc = 0x1419ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    // 0x1419d0: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1419D0u;
    SET_GPR_U32(ctx, 31, 0x1419D8u);
    ctx->pc = 0x1419D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419D0u;
    // 0x1419d4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1419D0u, 0x1419D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419D8u;
label_1419d8:
    // 0x1419d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1419dc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1419dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1419e0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1419e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1419e4: 0x2463e8c0  addiu       $v1, $v1, -0x1740
    ctx->pc = 0x1419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
    // 0x1419e8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1419E8u;
    SET_GPR_U32(ctx, 31, 0x1419F0u);
    ctx->pc = 0x1419ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419E8u;
    // 0x1419ec: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1419E8u, 0x1419F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F0u;
label_1419f0:
    // 0x1419f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1419f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1419f4: 0xac700080  sw          $s0, 0x80($v1)
    ctx->pc = 0x1419f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    // 0x1419f8: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1419F8u;
    SET_GPR_U32(ctx, 31, 0x141A00u);
    ctx->pc = 0x1419FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419F8u;
    // 0x1419fc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1419F8u, 0x141A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A00u;
label_141a00:
    // 0x141a00: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141a04: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141a08: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x141a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x141a0c: 0x2463de48  addiu       $v1, $v1, -0x21B8
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958664));
    // 0x141a10: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x141a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x141a14: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x141a18: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141A18u;
    SET_GPR_U32(ctx, 31, 0x141A20u);
    ctx->pc = 0x141A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A18u;
    // 0x141a1c: 0xac700080  sw          $s0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141A18u, 0x141A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A20u;
label_141a20:
    // 0x141a20: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141a24: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x141a28: 0x2463e548  addiu       $v1, $v1, -0x1AB8
    ctx->pc = 0x141a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960456));
    // 0x141a2c: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x141a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_141a30:
    // 0x141a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a34: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141A34u;
    SET_GPR_U32(ctx, 31, 0x141A3Cu);
    ctx->pc = 0x141A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A34u;
    // 0x141a38: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141A34u, 0x141A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A3Cu;
label_141a3c:
    // 0x141a3c: 0x0  nop
    ctx->pc = 0x141a3cu;
    // NOP
    // 0x141a40: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x141A40u;
    {
        const bool branch_taken_0x141a40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x141A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A40u;
        // 0x141a44: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a40) {
            ctx->pc = 0x141A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141a30;
        }
    }
    ctx->pc = 0x141A48u;
    // 0x141a48: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x141a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x141a4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x141a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141a50: 0x24440270  addiu       $a0, $v0, 0x270
    ctx->pc = 0x141a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x141a54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_141a58:
    // 0x141a58: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x141a58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141a5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x141a60: 0x0  nop
    ctx->pc = 0x141a60u;
    // NOP
    // 0x141a64: 0x0  nop
    ctx->pc = 0x141a64u;
    // NOP
    // 0x141a68: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x141A68u;
    {
        const bool branch_taken_0x141a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x141A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A68u;
        // 0x141a6c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a68) {
            ctx->pc = 0x141A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141a58;
        }
    }
    ctx->pc = 0x141A70u;
    // 0x141a70: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x141a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x141a74: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141a78: 0x2462dcc8  addiu       $v0, $v1, -0x2338
    ctx->pc = 0x141a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958280));
    // 0x141a7c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x141A7Cu;
    SET_GPR_U32(ctx, 31, 0x141A84u);
    ctx->pc = 0x141A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A7Cu;
    // 0x141a80: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x141A7Cu, 0x141A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A84u;
label_141a84:
    // 0x141a84: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x141a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a88: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x141a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x141a8c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x141a90: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x141a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x141a94: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
    // 0x141a98: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x141a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x141a9c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x141a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x141aa0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x141aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x141aa4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x141aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x141aa8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x141aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x141aac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x141aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141ab0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x141ab0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x141ab4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x141ab4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x141ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141abc: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x141abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x141ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x141AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AC0u;
        // 0x141ac4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141AC8u;
}
