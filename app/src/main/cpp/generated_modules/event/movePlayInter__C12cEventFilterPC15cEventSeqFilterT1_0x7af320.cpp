#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlayInter__C12cEventFilterPC15cEventSeqFilterT1
// Address: 0x7af320 - 0x7af620
void movePlayInter__C12cEventFilterPC15cEventSeqFilterT1_0x7af320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayInter__C12cEventFilterPC15cEventSeqFilterT1_0x7af320");
#endif

    switch (ctx->pc) {
        case 0x7af378u: goto label_7af378;
        case 0x7af398u: goto label_7af398;
        case 0x7af3acu: goto label_7af3ac;
        case 0x7af3d0u: goto label_7af3d0;
        case 0x7af420u: goto label_7af420;
        case 0x7af434u: goto label_7af434;
        case 0x7af460u: goto label_7af460;
        case 0x7af494u: goto label_7af494;
        case 0x7af4c8u: goto label_7af4c8;
        case 0x7af4fcu: goto label_7af4fc;
        case 0x7af530u: goto label_7af530;
        case 0x7af564u: goto label_7af564;
        case 0x7af584u: goto label_7af584;
        case 0x7af598u: goto label_7af598;
        case 0x7af5acu: goto label_7af5ac;
        case 0x7af5c0u: goto label_7af5c0;
        case 0x7af5d4u: goto label_7af5d4;
        case 0x7af5e8u: goto label_7af5e8;
        case 0x7af5f4u: goto label_7af5f4;
        default: break;
    }

    ctx->pc = 0x7af320u;

    // 0x7af320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7af320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7af324: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7af324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7af328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7af328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7af32c: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7af32cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7af330: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7af330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7af334: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7af334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af338: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7af338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7af33c: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7af33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7af340: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x7af340u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x7af344: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7af344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af348: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x7af348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x7af34c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x7af34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af350: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7af350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7af354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7af354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af358: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7af358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7af35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7af35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7af360: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x7af360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x7af364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7af364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af368: 0x0  nop
    ctx->pc = 0x7af368u;
    // NOP
    // 0x7af36c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af370: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AF370u;
    SET_GPR_U32(ctx, 31, 0x7AF378u);
    ctx->pc = 0x7AF374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF370u;
    // 0x7af374: 0x92650003  lbu         $a1, 0x3($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AF370u, 0x7AF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF378u;
label_7af378:
    // 0x7af378: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x7af378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x7af37c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x7af37cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x7af380: 0x92850003  lbu         $a1, 0x3($s4)
    ctx->pc = 0x7af380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x7af384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7af384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af388: 0x0  nop
    ctx->pc = 0x7af388u;
    // NOP
    // 0x7af38c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af390: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AF390u;
    SET_GPR_U32(ctx, 31, 0x7AF398u);
    ctx->pc = 0x7AF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF390u;
    // 0x7af394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AF390u, 0x7AF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF398u;
label_7af398:
    // 0x7af398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7af398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af39c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7af39cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7af3a0: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x7af3a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7af3a4: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AF3A4u;
    SET_GPR_U32(ctx, 31, 0x7AF3ACu);
    ctx->pc = 0x7AF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF3A4u;
    // 0x7af3a8: 0xc48c000c  lwc1        $f12, 0xC($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AF3A4u, 0x7AF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF3ACu;
label_7af3ac:
    // 0x7af3ac: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x7af3acu;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x7af3b0: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x7af3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x7af3b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7af3b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7af3b8: 0x26a30300  addiu       $v1, $s5, 0x300
    ctx->pc = 0x7af3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
    // 0x7af3bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7af3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7af3c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7af3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7af3c4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x7af3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af3c8: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x7af3c8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x7af3cc: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x7af3ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_7af3d0:
    // 0x7af3d0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x7af3d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7af3d4: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x7af3d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7af3d8: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x7af3d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7af3dc: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x7af3dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x7af3e0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x7af3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x7af3e4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x7af3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x7af3e8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x7af3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x7af3ec: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x7af3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x7af3f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7af3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7af3f4: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AF3F4u;
    {
        const bool branch_taken_0x7af3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7AF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF3F4u;
        // 0x7af3f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7af3f4) {
            ctx->pc = 0x7AF3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7af3d0;
        }
    }
    ctx->pc = 0x7AF3FCu;
    // 0x7af3fc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x7af3fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7af400: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x7af400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x7af404: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x7af404u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x7af408: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x7af408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x7af40c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7af40cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7af410: 0x26b20310  addiu       $s2, $s5, 0x310
    ctx->pc = 0x7af410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 784));
    // 0x7af414: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x7af414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7af418: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF418u;
    SET_GPR_U32(ctx, 31, 0x7AF420u);
    ctx->pc = 0x7AF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF418u;
    // 0x7af41c: 0xc62d0008  lwc1        $f13, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF418u, 0x7AF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF420u;
label_7af420:
    // 0x7af420: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x7af420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x7af424: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x7af424u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x7af428: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x7af428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7af42c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF42Cu;
    SET_GPR_U32(ctx, 31, 0x7AF434u);
    ctx->pc = 0x7AF430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF42Cu;
    // 0x7af430: 0xc62d000c  lwc1        $f13, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF42Cu, 0x7AF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF434u;
label_7af434:
    // 0x7af434: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x7af434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x7af438: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x7af438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7af43c: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x7af43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7af440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7af440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af444: 0x0  nop
    ctx->pc = 0x7af444u;
    // NOP
    // 0x7af448: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af44c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x7af44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af450: 0x0  nop
    ctx->pc = 0x7af450u;
    // NOP
    // 0x7af454: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af458: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF458u;
    SET_GPR_U32(ctx, 31, 0x7AF460u);
    ctx->pc = 0x7AF45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF458u;
    // 0x7af45c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF458u, 0x7AF460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF460u;
label_7af460:
    // 0x7af460: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af464: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af468: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x7af468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7af46c: 0x9203026c  lbu         $v1, 0x26C($s0)
    ctx->pc = 0x7af46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x7af470: 0x9222026c  lbu         $v0, 0x26C($s1)
    ctx->pc = 0x7af470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x7af474: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7af474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af478: 0x0  nop
    ctx->pc = 0x7af478u;
    // NOP
    // 0x7af47c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7af480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af484: 0x0  nop
    ctx->pc = 0x7af484u;
    // NOP
    // 0x7af488: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af48c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF48Cu;
    SET_GPR_U32(ctx, 31, 0x7AF494u);
    ctx->pc = 0x7AF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF48Cu;
    // 0x7af490: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF48Cu, 0x7AF494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF494u;
label_7af494:
    // 0x7af494: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af498: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af49c: 0xa242026c  sb          $v0, 0x26C($s2)
    ctx->pc = 0x7af49cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 620), (uint8_t)GPR_U32(ctx, 2));
    // 0x7af4a0: 0x9203026d  lbu         $v1, 0x26D($s0)
    ctx->pc = 0x7af4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 621)));
    // 0x7af4a4: 0x9222026d  lbu         $v0, 0x26D($s1)
    ctx->pc = 0x7af4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 621)));
    // 0x7af4a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7af4a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af4ac: 0x0  nop
    ctx->pc = 0x7af4acu;
    // NOP
    // 0x7af4b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af4b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7af4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af4b8: 0x0  nop
    ctx->pc = 0x7af4b8u;
    // NOP
    // 0x7af4bc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af4c0: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF4C0u;
    SET_GPR_U32(ctx, 31, 0x7AF4C8u);
    ctx->pc = 0x7AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF4C0u;
    // 0x7af4c4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF4C0u, 0x7AF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF4C8u;
label_7af4c8:
    // 0x7af4c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af4c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af4cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af4d0: 0xa242026d  sb          $v0, 0x26D($s2)
    ctx->pc = 0x7af4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 621), (uint8_t)GPR_U32(ctx, 2));
    // 0x7af4d4: 0x8603026e  lh          $v1, 0x26E($s0)
    ctx->pc = 0x7af4d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 622)));
    // 0x7af4d8: 0x8622026e  lh          $v0, 0x26E($s1)
    ctx->pc = 0x7af4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 622)));
    // 0x7af4dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7af4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af4e0: 0x0  nop
    ctx->pc = 0x7af4e0u;
    // NOP
    // 0x7af4e4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af4e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7af4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af4ec: 0x0  nop
    ctx->pc = 0x7af4ecu;
    // NOP
    // 0x7af4f0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af4f4: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF4F4u;
    SET_GPR_U32(ctx, 31, 0x7AF4FCu);
    ctx->pc = 0x7AF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF4F4u;
    // 0x7af4f8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF4F4u, 0x7AF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF4FCu;
label_7af4fc:
    // 0x7af4fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af4fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af500: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af504: 0xa642026e  sh          $v0, 0x26E($s2)
    ctx->pc = 0x7af504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 622), (uint16_t)GPR_U32(ctx, 2));
    // 0x7af508: 0x86030270  lh          $v1, 0x270($s0)
    ctx->pc = 0x7af508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x7af50c: 0x86220270  lh          $v0, 0x270($s1)
    ctx->pc = 0x7af50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x7af510: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7af510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af514: 0x0  nop
    ctx->pc = 0x7af514u;
    // NOP
    // 0x7af518: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af51c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7af51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af520: 0x0  nop
    ctx->pc = 0x7af520u;
    // NOP
    // 0x7af524: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af528: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF528u;
    SET_GPR_U32(ctx, 31, 0x7AF530u);
    ctx->pc = 0x7AF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF528u;
    // 0x7af52c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF528u, 0x7AF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF530u;
label_7af530:
    // 0x7af530: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af534: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af538: 0xa6420270  sh          $v0, 0x270($s2)
    ctx->pc = 0x7af538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 624), (uint16_t)GPR_U32(ctx, 2));
    // 0x7af53c: 0x96030272  lhu         $v1, 0x272($s0)
    ctx->pc = 0x7af53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 626)));
    // 0x7af540: 0x96220272  lhu         $v0, 0x272($s1)
    ctx->pc = 0x7af540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 626)));
    // 0x7af544: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7af544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7af548: 0x0  nop
    ctx->pc = 0x7af548u;
    // NOP
    // 0x7af54c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7af54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7af550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7af550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7af554: 0x0  nop
    ctx->pc = 0x7af554u;
    // NOP
    // 0x7af558: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7af558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7af55c: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AF55Cu;
    SET_GPR_U32(ctx, 31, 0x7AF564u);
    ctx->pc = 0x7AF560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF55Cu;
    // 0x7af560: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AF55Cu, 0x7AF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF564u;
label_7af564:
    // 0x7af564: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7af564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7af568: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7af568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7af56c: 0x26a40324  addiu       $a0, $s5, 0x324
    ctx->pc = 0x7af56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 804));
    // 0x7af570: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x7af570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x7af574: 0x26860024  addiu       $a2, $s4, 0x24
    ctx->pc = 0x7af574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x7af578: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7af578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7af57c: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF57Cu;
    SET_GPR_U32(ctx, 31, 0x7AF584u);
    ctx->pc = 0x7AF580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF57Cu;
    // 0x7af580: 0xa6420272  sh          $v0, 0x272($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 626), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF57Cu, 0x7AF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF584u;
label_7af584:
    // 0x7af584: 0x26a40388  addiu       $a0, $s5, 0x388
    ctx->pc = 0x7af584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 904));
    // 0x7af588: 0x26650088  addiu       $a1, $s3, 0x88
    ctx->pc = 0x7af588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
    // 0x7af58c: 0x26860088  addiu       $a2, $s4, 0x88
    ctx->pc = 0x7af58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 136));
    // 0x7af590: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF590u;
    SET_GPR_U32(ctx, 31, 0x7AF598u);
    ctx->pc = 0x7AF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF590u;
    // 0x7af594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF590u, 0x7AF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF598u;
label_7af598:
    // 0x7af598: 0x26a403ec  addiu       $a0, $s5, 0x3EC
    ctx->pc = 0x7af598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1004));
    // 0x7af59c: 0x266500ec  addiu       $a1, $s3, 0xEC
    ctx->pc = 0x7af59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x7af5a0: 0x268600ec  addiu       $a2, $s4, 0xEC
    ctx->pc = 0x7af5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 236));
    // 0x7af5a4: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF5A4u;
    SET_GPR_U32(ctx, 31, 0x7AF5ACu);
    ctx->pc = 0x7AF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF5A4u;
    // 0x7af5a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF5A4u, 0x7AF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF5ACu;
label_7af5ac:
    // 0x7af5ac: 0x26a40450  addiu       $a0, $s5, 0x450
    ctx->pc = 0x7af5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1104));
    // 0x7af5b0: 0x26650150  addiu       $a1, $s3, 0x150
    ctx->pc = 0x7af5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x7af5b4: 0x26860150  addiu       $a2, $s4, 0x150
    ctx->pc = 0x7af5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x7af5b8: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF5B8u;
    SET_GPR_U32(ctx, 31, 0x7AF5C0u);
    ctx->pc = 0x7AF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF5B8u;
    // 0x7af5bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF5B8u, 0x7AF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF5C0u;
label_7af5c0:
    // 0x7af5c0: 0x26a404b4  addiu       $a0, $s5, 0x4B4
    ctx->pc = 0x7af5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1204));
    // 0x7af5c4: 0x266501b4  addiu       $a1, $s3, 0x1B4
    ctx->pc = 0x7af5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x7af5c8: 0x268601b4  addiu       $a2, $s4, 0x1B4
    ctx->pc = 0x7af5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    // 0x7af5cc: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF5CCu;
    SET_GPR_U32(ctx, 31, 0x7AF5D4u);
    ctx->pc = 0x7AF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF5CCu;
    // 0x7af5d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF5CCu, 0x7AF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF5D4u;
label_7af5d4:
    // 0x7af5d4: 0x26650284  addiu       $a1, $s3, 0x284
    ctx->pc = 0x7af5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
    // 0x7af5d8: 0x26860284  addiu       $a2, $s4, 0x284
    ctx->pc = 0x7af5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
    // 0x7af5dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7af5dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7af5e0: 0xc1ebef2  jal         func_7AFBC8
    ctx->pc = 0x7AF5E0u;
    SET_GPR_U32(ctx, 31, 0x7AF5E8u);
    ctx->pc = 0x7AF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF5E0u;
    // 0x7af5e4: 0x26a40584  addiu       $a0, $s5, 0x584 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AFBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AFBC8u, 0x7AF5E0u, 0x7AF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF5E8u;
label_7af5e8:
    // 0x7af5e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7af5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7af5ec: 0xc1ebc88  jal         func_7AF220
    ctx->pc = 0x7AF5ECu;
    SET_GPR_U32(ctx, 31, 0x7AF5F4u);
    ctx->pc = 0x7AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AF5ECu;
    // 0x7af5f0: 0x24850300  addiu       $a1, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF220u, 0x7AF5ECu, 0x7AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AF5F4u;
label_7af5f4:
    // 0x7af5f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7af5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7af5f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7af5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7af5fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7af5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7af600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7af600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7af604: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7af604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7af608: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7af608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7af60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7af60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7af610: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x7af610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7af614: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x7af614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7af618: 0x3e00008  jr          $ra
    ctx->pc = 0x7AF618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AF618u;
        // 0x7af61c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AF618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AF620u;
}
} // namespace gh_event
