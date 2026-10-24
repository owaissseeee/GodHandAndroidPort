#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: VillagerTask__5cR501P5cR501
// Address: 0x79b878 - 0x79b9b0
void VillagerTask__5cR501P5cR501_0x79b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VillagerTask__5cR501P5cR501_0x79b878");
#endif

    switch (ctx->pc) {
        case 0x79b8a8u: goto label_79b8a8;
        case 0x79b8ccu: goto label_79b8cc;
        case 0x79b8f0u: goto label_79b8f0;
        case 0x79b910u: goto label_79b910;
        case 0x79b920u: goto label_79b920;
        case 0x79b928u: goto label_79b928;
        case 0x79b94cu: goto label_79b94c;
        case 0x79b95cu: goto label_79b95c;
        case 0x79b964u: goto label_79b964;
        case 0x79b984u: goto label_79b984;
        case 0x79b990u: goto label_79b990;
        default: break;
    }

    ctx->pc = 0x79b878u;

    // 0x79b878: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x79b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x79b87c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79b880: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x79b884: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b888: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x79b88c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x79b890: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b894: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x79b898: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x79b89c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79b8a0: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79B8A0u;
    SET_GPR_U32(ctx, 31, 0x79B8A8u);
    ctx->pc = 0x79B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8A0u;
    // 0x79b8a4: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79B8A0u, 0x79B8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8A8u;
label_79b8a8:
    // 0x79b8a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b8a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b8ac: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b8b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b8b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79b8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8bc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x79b8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79b8c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b8c4: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79B8C4u;
    SET_GPR_U32(ctx, 31, 0x79B8CCu);
    ctx->pc = 0x79B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8C4u;
    // 0x79b8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79B8C4u, 0x79B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8CCu;
label_79b8cc:
    // 0x79b8cc: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x79b8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x79b8d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79b8d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b8d8: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x79b8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x79b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79b8e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x79b8e8: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79B8E8u;
    SET_GPR_U32(ctx, 31, 0x79B8F0u);
    ctx->pc = 0x79B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8E8u;
    // 0x79b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79B8E8u, 0x79B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8F0u;
label_79b8f0:
    // 0x79b8f0: 0x24021005  addiu       $v0, $zero, 0x1005
    ctx->pc = 0x79b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
    // 0x79b8f4: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x79b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x79b8f8: 0xa7a2006e  sh          $v0, 0x6E($sp)
    ctx->pc = 0x79b8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x79b8fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b908: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x79B908u;
    SET_GPR_U32(ctx, 31, 0x79B910u);
    ctx->pc = 0x79B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B908u;
    // 0x79b90c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x79B908u, 0x79B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B910u;
label_79b910:
    // 0x79b910: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79b910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b914: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79B914u;
    {
        const bool branch_taken_0x79b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B914u;
        // 0x79b918: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b914) {
            ctx->pc = 0x79B95Cu;
            goto label_79b95c;
        }
    }
    ctx->pc = 0x79B91Cu;
    // 0x79b91c: 0x0  nop
    ctx->pc = 0x79b91cu;
    // NOP
label_79b920:
    // 0x79b920: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79B920u;
    SET_GPR_U32(ctx, 31, 0x79B928u);
    ctx->pc = 0x79B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B920u;
    // 0x79b924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79B920u, 0x79B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B928u;
label_79b928:
    // 0x79b928: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b928u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b92c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x79b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b930: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79b934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b93c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b944: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79B944u;
    SET_GPR_U32(ctx, 31, 0x79B94Cu);
    ctx->pc = 0x79B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B944u;
    // 0x79b948: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79B944u, 0x79B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B94Cu;
label_79b94c:
    // 0x79b94c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b954: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B954u;
    SET_GPR_U32(ctx, 31, 0x79B95Cu);
    ctx->pc = 0x79B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B954u;
    // 0x79b958: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B954u, 0x79B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B95Cu;
label_79b95c:
    // 0x79b95c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B95Cu;
    SET_GPR_U32(ctx, 31, 0x79B964u);
    ctx->pc = 0x79B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B95Cu;
    // 0x79b960: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B95Cu, 0x79B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B964u;
label_79b964:
    // 0x79b964: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B964u;
    {
        const bool branch_taken_0x79b964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b964) {
            ctx->pc = 0x79B968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B964u;
            // 0x79b968: 0x2644ea60  addiu       $a0, $s2, -0x15A0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B97Cu;
            goto label_79b97c;
        }
    }
    ctx->pc = 0x79B96Cu;
    // 0x79b96c: 0x92820398  lbu         $v0, 0x398($s4)
    ctx->pc = 0x79b96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 920)));
    // 0x79b970: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x79B970u;
    {
        const bool branch_taken_0x79b970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b970) {
            ctx->pc = 0x79B920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b920;
        }
    }
    ctx->pc = 0x79B978u;
    // 0x79b978: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x79b978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
label_79b97c:
    // 0x79b97c: 0xc0b0bf6  jal         func_2C2FD8
    ctx->pc = 0x79B97Cu;
    SET_GPR_U32(ctx, 31, 0x79B984u);
    ctx->pc = 0x79B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B97Cu;
    // 0x79b980: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2FD8u, 0x79B97Cu, 0x79B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B984u;
label_79b984:
    // 0x79b984: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b988: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B988u;
    SET_GPR_U32(ctx, 31, 0x79B990u);
    ctx->pc = 0x79B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B988u;
    // 0x79b98c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B988u, 0x79B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B990u;
label_79b990:
    // 0x79b990: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79b990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79b994: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79b994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79b998: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79b998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b99c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79b99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b9a0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79b9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b9a4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x79b9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9A8u;
        // 0x79b9ac: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9B0u;
}
} // namespace gh_r501
