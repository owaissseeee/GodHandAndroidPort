#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079B438
// Address: 0x79b438 - 0x79b588
void func_0079B438_0x79b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B438_0x79b438");
#endif

    switch (ctx->pc) {
        case 0x79b488u: goto label_79b488;
        case 0x79b498u: goto label_79b498;
        case 0x79b4a4u: goto label_79b4a4;
        case 0x79b4b8u: goto label_79b4b8;
        case 0x79b4f8u: goto label_79b4f8;
        case 0x79b518u: goto label_79b518;
        case 0x79b530u: goto label_79b530;
        case 0x79b538u: goto label_79b538;
        case 0x79b550u: goto label_79b550;
        case 0x79b55cu: goto label_79b55c;
        default: break;
    }

    ctx->pc = 0x79b438u;

    // 0x79b438: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79b43c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b440: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79b444: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x79b448: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79b44c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79b450: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b454: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79b458: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79b45c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79b460: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79b464: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79b468: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b468u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b46c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b470: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79b470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79b474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B474u;
    {
        const bool branch_taken_0x79b474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B474u;
        // 0x79b478: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b474) {
            ctx->pc = 0x79B488u;
            goto label_79b488;
        }
    }
    ctx->pc = 0x79B47Cu;
    // 0x79b47c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79b480: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B480u;
    SET_GPR_U32(ctx, 31, 0x79B488u);
    ctx->pc = 0x79B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B480u;
    // 0x79b484: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B480u, 0x79B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B488u;
label_79b488:
    // 0x79b488: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79b488u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79b48c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79b48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B490u;
    {
        const bool branch_taken_0x79b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B490u;
        // 0x79b494: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b490) {
            ctx->pc = 0x79B4A4u;
            goto label_79b4a4;
        }
    }
    ctx->pc = 0x79B498u;
label_79b498:
    // 0x79b498: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b49c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B49Cu;
    SET_GPR_U32(ctx, 31, 0x79B4A4u);
    ctx->pc = 0x79B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B49Cu;
    // 0x79b4a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B49Cu, 0x79B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4A4u;
label_79b4a4:
    // 0x79b4a4: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79b4a8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79b4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4b0: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B4B0u;
    SET_GPR_U32(ctx, 31, 0x79B4B8u);
    ctx->pc = 0x79B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4B0u;
    // 0x79b4b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B4B0u, 0x79B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4B8u;
label_79b4b8:
    // 0x79b4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4bc: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B4BCu;
    {
        const bool branch_taken_0x79b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4BCu;
        // 0x79b4c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4bc) {
            ctx->pc = 0x79B498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b498;
        }
    }
    ctx->pc = 0x79B4C4u;
    // 0x79b4c4: 0x8ea48658  lw          $a0, -0x79A8($s5)
    ctx->pc = 0x79b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x79b4c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x79b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x79b4cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b4d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b4d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79b4d8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b4dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79b4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4e4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b4e8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b4ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b4f0: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B4F0u;
    SET_GPR_U32(ctx, 31, 0x79B4F8u);
    ctx->pc = 0x79B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4F0u;
    // 0x79b4f4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B4F0u, 0x79B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F8u;
label_79b4f8:
    // 0x79b4f8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79b4fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b500: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79b500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b504: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b508: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b510: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B510u;
    SET_GPR_U32(ctx, 31, 0x79B518u);
    ctx->pc = 0x79B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B510u;
    // 0x79b514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B510u, 0x79B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B518u;
label_79b518:
    // 0x79b518: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x79b518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b51c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79b520: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79b520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b524: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79b528: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B528u;
    SET_GPR_U32(ctx, 31, 0x79B530u);
    ctx->pc = 0x79B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B528u;
    // 0x79b52c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B528u, 0x79B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B530u;
label_79b530:
    // 0x79b530: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B530u;
    SET_GPR_U32(ctx, 31, 0x79B538u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B530u, 0x79B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B538u;
label_79b538:
    // 0x79b538: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b53c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b540: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b544: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b548: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B548u;
    SET_GPR_U32(ctx, 31, 0x79B550u);
    ctx->pc = 0x79B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B548u;
    // 0x79b54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B548u, 0x79B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B550u;
label_79b550:
    // 0x79b550: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79b554: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B554u;
    SET_GPR_U32(ctx, 31, 0x79B55Cu);
    ctx->pc = 0x79B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B554u;
    // 0x79b558: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B554u, 0x79B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B55Cu;
label_79b55c:
    // 0x79b55c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79b55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b560: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79b560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b564: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79b564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b568: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79b568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b56c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79b56cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b570: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79b570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b574: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79b574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b578: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b57c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B57Cu;
        // 0x79b580: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B584u;
    // 0x79b584: 0x0  nop
    ctx->pc = 0x79b584u;
    // NOP
    ctx->pc = 0x79b588u;
}
} // namespace gh_r102
