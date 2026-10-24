#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: openFence__5cR409i
// Address: 0x799870 - 0x799a20
void openFence__5cR409i_0x799870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("openFence__5cR409i_0x799870");
#endif

    switch (ctx->pc) {
        case 0x7998a4u: goto label_7998a4;
        case 0x799938u: goto label_799938;
        case 0x799998u: goto label_799998;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a0cu: goto label_799a0c;
        default: break;
    }

    ctx->pc = 0x799870u;

    // 0x799870: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x799874: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799878: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x79987c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x799884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x799888: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79988c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x24a597e8  addiu       $a1, $a1, -0x6818
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940648));
    // 0x799894: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799898: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x799898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x79989c: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7998A4u;
    {
        const bool branch_taken_0x7998a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a4) {
            ctx->pc = 0x7998B8u;
            goto label_7998b8;
        }
    }
    ctx->pc = 0x7998ACu;
    // 0x7998ac: 0x8c43c180  lw          $v1, -0x3E80($v0)
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951296)));
    // 0x7998b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7998B0u;
    {
        const bool branch_taken_0x7998b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b0) {
            ctx->pc = 0x7998C0u;
            goto label_7998c0;
        }
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0x8c43c180  lw          $v1, -0x3E80($v0)
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951296)));
    // 0x7998bc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7998c0:
    // 0x7998c0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x7998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998c4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x7998c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998c8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x7998c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998cc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x7998ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998d0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998d4: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x7998d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998d8: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x7998d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998dc: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x7998dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998e0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x7998e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998e4: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x7998e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998e8: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x7998e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998ec: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x7998ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998f0: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x7998f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998f4: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x7998f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998f8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7998f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7998fc: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x799900: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x799900u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x799904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799908: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x799908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79990c: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x799910: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x799914: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x799914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x799918: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x799918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x79991c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x79991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x799920: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x799920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x799924: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x799924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x799928: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x799928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x79992c: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x79992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x799930: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x799930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x799934: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x799934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_799938:
    // 0x799938: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x799938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x79993c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799940: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x799940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799944: 0x0  nop
    ctx->pc = 0x799944u;
    // NOP
    // 0x799948: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799948u;
    {
        const bool branch_taken_0x799948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799948u;
        // 0x79994c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799948) {
            ctx->pc = 0x799938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799938;
        }
    }
    ctx->pc = 0x799950u;
    // 0x799950: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x799954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799958: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79995c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x79995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x799960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799964: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x799964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x799968: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x79996c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x799970: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799978: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79997c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799984: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799988: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x799988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x79998c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79998cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799990: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x799990u;
    SET_GPR_U32(ctx, 31, 0x799998u);
    ctx->pc = 0x799994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799990u;
    // 0x799994: 0xe520000c  swc1        $f0, 0xC($t1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x799990u, 0x799998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799998u;
label_799998:
    // 0x799998: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79999c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79999cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7999a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x7999a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7999a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7999ac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7999b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7999b4: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x7999B4u;
    SET_GPR_U32(ctx, 31, 0x7999BCu);
    ctx->pc = 0x7999B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B4u;
    // 0x7999b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x7999B4u, 0x7999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999BCu;
label_7999bc:
    // 0x7999bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7999c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7999c8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x7999cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7999d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999d8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7999E0u;
    {
        const bool branch_taken_0x7999e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7999e0) {
            ctx->pc = 0x7999F4u;
            goto label_7999f4;
        }
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999ec: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999ECu;
    SET_GPR_U32(ctx, 31, 0x7999F4u);
    ctx->pc = 0x7999F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ECu;
    // 0x7999f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999ECu, 0x7999F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F4u;
label_7999f4:
    // 0x7999f4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x7999F4u;
    SET_GPR_U32(ctx, 31, 0x7999FCu);
    ctx->pc = 0x7999F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F4u;
    // 0x7999f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x7999F4u, 0x7999FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999FCu;
label_7999fc:
    // 0x7999fc: 0x1050fffa  beq         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7999FCu;
    {
        const bool branch_taken_0x7999fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999FCu;
        // 0x799a00: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999fc) {
            ctx->pc = 0x7999E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999e8;
        }
    }
    ctx->pc = 0x799A04u;
    // 0x799a04: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799A04u;
    SET_GPR_U32(ctx, 31, 0x799A0Cu);
    ctx->pc = 0x799A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A04u;
    // 0x799a08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799A04u, 0x799A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x799a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x799a10: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x799a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x799a14: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x799a18: 0x3e00008  jr          $ra
    ctx->pc = 0x799A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A20u;
}
} // namespace gh_r409
