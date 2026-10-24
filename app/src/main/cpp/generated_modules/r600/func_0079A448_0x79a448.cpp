#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079A448
// Address: 0x79a448 - 0x79a708
void func_0079A448_0x79a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A448_0x79a448");
#endif

    switch (ctx->pc) {
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a508u: goto label_79a508;
        case 0x79a510u: goto label_79a510;
        case 0x79a534u: goto label_79a534;
        case 0x79a550u: goto label_79a550;
        case 0x79a558u: goto label_79a558;
        case 0x79a560u: goto label_79a560;
        case 0x79a568u: goto label_79a568;
        case 0x79a570u: goto label_79a570;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a600u: goto label_79a600;
        case 0x79a610u: goto label_79a610;
        case 0x79a620u: goto label_79a620;
        case 0x79a630u: goto label_79a630;
        case 0x79a640u: goto label_79a640;
        case 0x79a65cu: goto label_79a65c;
        case 0x79a664u: goto label_79a664;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a6c8u: goto label_79a6c8;
        case 0x79a6e4u: goto label_79a6e4;
        default: break;
    }

    ctx->pc = 0x79a448u;

    // 0x79a448: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79a44c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a450: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79a450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79a454: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a458: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a45c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79a460: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x79a464: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x79a464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x79a468: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a46c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a470: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79a474: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x79a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x79a478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a47c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79a480: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x79a484: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x79a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x79a488: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79a488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a48c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x79a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x79a490: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x79a490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a494: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
    // 0x79a498: 0xa3a60018  sb          $a2, 0x18($sp)
    ctx->pc = 0x79a498u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a49c: 0xa3a70020  sb          $a3, 0x20($sp)
    ctx->pc = 0x79a49cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 7));
    // 0x79a4a0: 0xa3a80028  sb          $t0, 0x28($sp)
    ctx->pc = 0x79a4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 8));
    // 0x79a4a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79a4a8: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x79a4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a4ac: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A4ACu;
    SET_GPR_U32(ctx, 31, 0x79A4B4u);
    ctx->pc = 0x79A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4ACu;
    // 0x79a4b0: 0xa3a30010  sb          $v1, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A4ACu, 0x79A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B4u;
label_79a4b4:
    // 0x79a4b4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a4b8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A4B8u;
    SET_GPR_U32(ctx, 31, 0x79A4C0u);
    ctx->pc = 0x79A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B8u;
    // 0x79a4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A4B8u, 0x79A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C0u;
label_79a4c0:
    // 0x79a4c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a4c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a4c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a4cc: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x79a4d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a4d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a4d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a4d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4dc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A4DCu;
    SET_GPR_U32(ctx, 31, 0x79A4E4u);
    ctx->pc = 0x79A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4DCu;
    // 0x79a4e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A4DCu, 0x79A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E4u;
label_79a4e4:
    // 0x79a4e4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a4e8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79a4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4ec: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x79a4ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_79a4f0:
    // 0x79a4f0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x79a4f4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A4F4u;
    SET_GPR_U32(ctx, 31, 0x79A4FCu);
    ctx->pc = 0x79A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F4u;
    // 0x79a4f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A4F4u, 0x79A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4FCu;
label_79a4fc:
    // 0x79a4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a500: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A500u;
    SET_GPR_U32(ctx, 31, 0x79A508u);
    ctx->pc = 0x79A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A500u;
    // 0x79a504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A500u, 0x79A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A508u;
label_79a508:
    // 0x79a508: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79A508u;
    SET_GPR_U32(ctx, 31, 0x79A510u);
    ctx->pc = 0x79A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A508u;
    // 0x79a50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A508u, 0x79A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a514: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a518: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a524: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a52c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A52Cu;
    SET_GPR_U32(ctx, 31, 0x79A534u);
    ctx->pc = 0x79A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A52Cu;
    // 0x79a530: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A52Cu, 0x79A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A534u;
label_79a534:
    // 0x79a534: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x79a534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a538: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x79A538u;
    {
        const bool branch_taken_0x79a538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a538) {
            ctx->pc = 0x79A53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A538u;
            // 0x79a53c: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4f0;
        }
    }
    ctx->pc = 0x79A540u;
    // 0x79a540: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a544: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a548: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A548u;
    SET_GPR_U32(ctx, 31, 0x79A550u);
    ctx->pc = 0x79A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A548u;
    // 0x79a54c: 0x24a5b7e0  addiu       $a1, $a1, -0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A548u, 0x79A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A550u;
label_79a550:
    // 0x79a550: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A550u;
    SET_GPR_U32(ctx, 31, 0x79A558u);
    ctx->pc = 0x79A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A550u;
    // 0x79a554: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A558u;
    SET_GPR_U32(ctx, 31, 0x79A560u);
    ctx->pc = 0x79A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A558u;
    // 0x79a55c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A558u, 0x79A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a564: 0x0  nop
    ctx->pc = 0x79a564u;
    // NOP
label_79a568:
    // 0x79a568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a56c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x79a56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a570:
    // 0x79a570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a574: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A574u;
    SET_GPR_U32(ctx, 31, 0x79A57Cu);
    ctx->pc = 0x79A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A574u;
    // 0x79a578: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A574u, 0x79A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A57Cu;
label_79a57c:
    // 0x79a57c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x79a580: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a584: 0x2e240006  sltiu       $a0, $s1, 0x6
    ctx->pc = 0x79a584u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a588: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A588u;
    {
        const bool branch_taken_0x79a588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A588u;
        // 0x79a58c: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a588) {
            ctx->pc = 0x79A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A590u;
    // 0x79a590: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x79a590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a594: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A594u;
    {
        const bool branch_taken_0x79a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A594u;
        // 0x79a598: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a594) {
            ctx->pc = 0x79A5B0u;
            goto label_79a5b0;
        }
    }
    ctx->pc = 0x79A59Cu;
    // 0x79a59c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a5a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x79A5A8u;
    {
        const bool branch_taken_0x79a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A8u;
        // 0x79a5ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a8) {
            ctx->pc = 0x79A568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a568;
        }
    }
    ctx->pc = 0x79A5B0u;
label_79a5b0:
    // 0x79a5b0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x79a5b4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a5b8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x79a5bc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x79a5c0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79a5c4: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x79a5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a5c8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a5cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5d0: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x79a5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a5d4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79a5d8: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79A5D8u;
    SET_GPR_U32(ctx, 31, 0x79A5E0u);
    ctx->pc = 0x79A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D8u;
    // 0x79a5dc: 0xa3a60018  sb          $a2, 0x18($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79A5D8u, 0x79A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5E0u;
label_79a5e0:
    // 0x79a5e0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a5e4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A5E4u;
    SET_GPR_U32(ctx, 31, 0x79A5ECu);
    ctx->pc = 0x79A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5E4u;
    // 0x79a5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A5E4u, 0x79A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5ECu;
label_79a5ec:
    // 0x79a5ec: 0x8e02b900  lw          $v0, -0x4700($s0)
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
label_79a5f0:
    // 0x79a5f0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x79a5f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a5f8: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79A5F8u;
    SET_GPR_U32(ctx, 31, 0x79A600u);
    ctx->pc = 0x79A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5F8u;
    // 0x79a5fc: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79A5F8u, 0x79A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A600u;
label_79a600:
    // 0x79a600: 0x8e03b900  lw          $v1, -0x4700($s0)
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
    // 0x79a604: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x79a608: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79A608u;
    SET_GPR_U32(ctx, 31, 0x79A610u);
    ctx->pc = 0x79A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A608u;
    // 0x79a60c: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79A608u, 0x79A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A610u;
label_79a610:
    // 0x79a610: 0x8e03b900  lw          $v1, -0x4700($s0)
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
    // 0x79a614: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x79a618: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79A618u;
    SET_GPR_U32(ctx, 31, 0x79A620u);
    ctx->pc = 0x79A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A618u;
    // 0x79a61c: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79A618u, 0x79A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A620u;
label_79a620:
    // 0x79a620: 0x8e03b900  lw          $v1, -0x4700($s0)
    ctx->pc = 0x79a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
    // 0x79a624: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79a628: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79A628u;
    SET_GPR_U32(ctx, 31, 0x79A630u);
    ctx->pc = 0x79A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A628u;
    // 0x79a62c: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79A628u, 0x79A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A630u;
label_79a630:
    // 0x79a630: 0x8e03b900  lw          $v1, -0x4700($s0)
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
    // 0x79a634: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a638: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x79A638u;
    SET_GPR_U32(ctx, 31, 0x79A640u);
    ctx->pc = 0x79A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A638u;
    // 0x79a63c: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F20u, 0x79A638u, 0x79A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x79a640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a644: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A644u;
    {
        const bool branch_taken_0x79a644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A644u;
        // 0x79a648: 0x8e02b900  lw          $v0, -0x4700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a644) {
            ctx->pc = 0x79A5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5f0;
        }
    }
    ctx->pc = 0x79A64Cu;
    // 0x79a64c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a650: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a654: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A654u;
    SET_GPR_U32(ctx, 31, 0x79A65Cu);
    ctx->pc = 0x79A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A654u;
    // 0x79a658: 0x24a5b7e8  addiu       $a1, $a1, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A654u, 0x79A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A65Cu;
label_79a65c:
    // 0x79a65c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A65Cu;
    SET_GPR_U32(ctx, 31, 0x79A664u);
    ctx->pc = 0x79A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A65Cu;
    // 0x79a660: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A65Cu, 0x79A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A664u;
label_79a664:
    // 0x79a664: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A664u;
    SET_GPR_U32(ctx, 31, 0x79A66Cu);
    ctx->pc = 0x79A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A664u;
    // 0x79a668: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A664u, 0x79A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a670: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x79a670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a674: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a678: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79a67c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x79a67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x79a680: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x79a684: 0x240a001b  addiu       $t2, $zero, 0x1B
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x79a688: 0x240b001c  addiu       $t3, $zero, 0x1C
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x79a68c: 0x240c001d  addiu       $t4, $zero, 0x1D
    ctx->pc = 0x79a68cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x79a690: 0x240d001e  addiu       $t5, $zero, 0x1E
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79a694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a698: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79a698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a69c: 0xa3a30038  sb          $v1, 0x38($sp)
    ctx->pc = 0x79a69cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a6a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a6a4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x79a6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a6a8: 0xa3a70048  sb          $a3, 0x48($sp)
    ctx->pc = 0x79a6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 7));
    // 0x79a6ac: 0xa3a80050  sb          $t0, 0x50($sp)
    ctx->pc = 0x79a6acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 8));
    // 0x79a6b0: 0xa3a90058  sb          $t1, 0x58($sp)
    ctx->pc = 0x79a6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 9));
    // 0x79a6b4: 0xa3aa0060  sb          $t2, 0x60($sp)
    ctx->pc = 0x79a6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 10));
    // 0x79a6b8: 0xa3ab0068  sb          $t3, 0x68($sp)
    ctx->pc = 0x79a6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x79a6bc: 0xa3ac0070  sb          $t4, 0x70($sp)
    ctx->pc = 0x79a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 12));
    // 0x79a6c0: 0xc1e6b56  jal         func_79AD58
    ctx->pc = 0x79A6C0u;
    SET_GPR_U32(ctx, 31, 0x79A6C8u);
    ctx->pc = 0x79A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C0u;
    // 0x79a6c4: 0xa3ad0078  sb          $t5, 0x78($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD58u, 0x79A6C0u, 0x79A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C8u;
label_79a6c8:
    // 0x79a6c8: 0x8ea27a8c  lw          $v0, 0x7A8C($s5)
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
    // 0x79a6cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79a6d0: 0x8e652f84  lw          $a1, 0x2F84($s3)
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a6d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a6d8: 0xaea27a8c  sw          $v0, 0x7A8C($s5)
    ctx->pc = 0x79a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 2));
    // 0x79a6dc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6DCu;
    SET_GPR_U32(ctx, 31, 0x79A6E4u);
    ctx->pc = 0x79A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6DCu;
    // 0x79a6e0: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6DCu, 0x79A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E4u;
label_79a6e4:
    // 0x79a6e4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a6e8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a6ec: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79a6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a6f0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79a6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a6f4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x79a6f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a6f8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79a6f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a6fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a700: 0x3e00008  jr          $ra
    ctx->pc = 0x79A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A700u;
        // 0x79a704: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A708u;
}
} // namespace gh_r600
