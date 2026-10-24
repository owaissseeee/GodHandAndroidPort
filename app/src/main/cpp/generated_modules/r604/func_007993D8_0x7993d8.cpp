#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_007993D8
// Address: 0x7993d8 - 0x799760
void func_007993D8_0x7993d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993D8_0x7993d8");
#endif

    switch (ctx->pc) {
        case 0x79943cu: goto label_79943c;
        case 0x799474u: goto label_799474;
        case 0x79948cu: goto label_79948c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994f4u: goto label_7994f4;
        case 0x799510u: goto label_799510;
        case 0x799524u: goto label_799524;
        case 0x799538u: goto label_799538;
        case 0x799588u: goto label_799588;
        case 0x79959cu: goto label_79959c;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995f8u: goto label_7995f8;
        case 0x799628u: goto label_799628;
        case 0x799640u: goto label_799640;
        case 0x799658u: goto label_799658;
        case 0x799660u: goto label_799660;
        case 0x79966cu: goto label_79966c;
        case 0x79967cu: goto label_79967c;
        case 0x799698u: goto label_799698;
        case 0x7996acu: goto label_7996ac;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996ecu: goto label_7996ec;
        case 0x79970cu: goto label_79970c;
        case 0x799738u: goto label_799738;
        default: break;
    }

    ctx->pc = 0x7993d8u;

    // 0x7993d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7993dc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7993e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7993e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7993e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x7993e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x7993e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7993e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7993ec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7993ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7993f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7993f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7993f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7993f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7993f8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x7993f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x7993fc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x7993fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x799400: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799404: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799408: 0x4800070  bltz        $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x799408u;
    {
        const bool branch_taken_0x799408 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799408u;
        // 0x79940c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799408) {
            ctx->pc = 0x7995CCu;
            goto label_7995cc;
        }
    }
    ctx->pc = 0x799410u;
    // 0x799410: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799414: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x799418: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x79941c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79941cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799420: 0x2631b430  addiu       $s1, $s1, -0x4BD0
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947888));
    // 0x799424: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
    // 0x799428: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x79942c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79942cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x79943cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799440: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799444: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x799448: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79944c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799450: 0x2610b438  addiu       $s0, $s0, -0x4BC8
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947896));
    // 0x799454: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x799458: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79945c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79945cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799464: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799468: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799468u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x79946c: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79947c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799484: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799484u;
    SET_GPR_U32(ctx, 31, 0x79948Cu);
    ctx->pc = 0x799488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799484u;
    // 0x799488: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799498: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7994a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7994a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7994ac: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7994b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7994b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x7994bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x7994c0: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7994cc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7994d0: 0x8c62b600  lw          $v0, -0x4A00($v1)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B600u));
    // 0x7994d4: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x7994e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x7994ec: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x7994f8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994fc: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799500: 0x24a5b440  addiu       $a1, $a1, -0x4BC0
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
    // 0x799504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799508: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799518: 0x24a5b450  addiu       $a1, $a1, -0x4BB0
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    // 0x79951c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79952c: 0x24a5b460  addiu       $a1, $a1, -0x4BA0
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947936));
    // 0x799530: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x79953c: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x799540: 0x8cc27a8c  lw          $v0, 0x7A8C($a2)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799544: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799548: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79954c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x799550: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799558: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79955c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799560: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x799564: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799568: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79956c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799570: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799574: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799578: 0xacc27a8c  sw          $v0, 0x7A8C($a2)
    ctx->pc = 0x799578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31372), GPR_U32(ctx, 2));
    // 0x79957c: 0x24a59e60  addiu       $a1, $a1, -0x61A0
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942304));
    // 0x799580: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799580u;
    SET_GPR_U32(ctx, 31, 0x799588u);
    ctx->pc = 0x799584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799580u;
    // 0x799584: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799580u, 0x799588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79958c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799590: 0x24a5a160  addiu       $a1, $a1, -0x5EA0
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943072));
    // 0x799594: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7995a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7995a4: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x7995a8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x7995ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A8u;
    // 0x7995ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7995b4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7995b8: 0x24a59ba8  addiu       $a1, $a1, -0x6458
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941608));
    // 0x7995bc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995BCu;
    SET_GPR_U32(ctx, 31, 0x7995C4u);
    ctx->pc = 0x7995C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995BCu;
    // 0x7995c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995BCu, 0x7995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C4u;
label_7995c4:
    // 0x7995c4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x7995C4u;
    {
        const bool branch_taken_0x7995c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c4) {
            ctx->pc = 0x799710u;
            goto label_799710;
        }
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x7995d0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x7995d4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x7995d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7995d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7995dc: 0x2631b430  addiu       $s1, $s1, -0x4BD0
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947888));
    // 0x7995e0: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
    // 0x7995e4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x7995e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7995e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7995ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f0: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x7995fc: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x799600: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799604: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799608: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79960c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x799610: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799614: 0x2610b438  addiu       $s0, $s0, -0x4BC8
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947896));
    // 0x799618: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x799618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79961c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799620: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x799628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79962c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799630: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799638: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x799644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79964c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x79964cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799650: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x799650u;
    SET_GPR_U32(ctx, 31, 0x799658u);
    ctx->pc = 0x799654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799650u;
    // 0x799654: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x799650u, 0x799658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0xc1e6928  jal         func_79A4A0
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A4A0u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799664: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799664u;
    SET_GPR_U32(ctx, 31, 0x79966Cu);
    ctx->pc = 0x799668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799664u;
    // 0x799668: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799664u, 0x79966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79966Cu;
label_79966c:
    // 0x79966c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799674: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x799680: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799684: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799688: 0x24a5b440  addiu       $a1, $a1, -0x4BC0
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
    // 0x79968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799690: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79969c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a0: 0x24a5b450  addiu       $a1, $a1, -0x4BB0
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    // 0x7996a4: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7996A4u;
    SET_GPR_U32(ctx, 31, 0x7996ACu);
    ctx->pc = 0x7996A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A4u;
    // 0x7996a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7996A4u, 0x7996ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996ACu;
label_7996ac:
    // 0x7996ac: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b4: 0x24a5b460  addiu       $a1, $a1, -0x4BA0
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947936));
    // 0x7996b8: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7996c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7996cc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7996ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7996d0: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x7996d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x7996d4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d8: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x7996d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x7996dc: 0x0  nop
    ctx->pc = 0x7996dcu;
    // NOP
label_7996e0:
    // 0x7996e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x7996E4u;
    SET_GPR_U32(ctx, 31, 0x7996ECu);
    ctx->pc = 0x7996E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E4u;
    // 0x7996e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x7996E4u, 0x7996ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996ECu;
label_7996ec:
    // 0x7996ec: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x7996f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x7996E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996fc: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799700: 0x24a598f8  addiu       $a1, $a1, -0x6708
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940920));
    // 0x799704: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799710:
    // 0x799710: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799714: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799718: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79971c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79971Cu;
    {
        const bool branch_taken_0x79971c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79971Cu;
        // 0x799720: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79971c) {
            ctx->pc = 0x79973Cu;
            goto label_79973c;
        }
    }
    ctx->pc = 0x799724u;
    // 0x799724: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799728: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79972c: 0x24a59da0  addiu       $a1, $a1, -0x6260
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    // 0x799730: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799730u;
    SET_GPR_U32(ctx, 31, 0x799738u);
    ctx->pc = 0x799734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799730u;
    // 0x799734: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799730u, 0x799738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799738u;
label_799738:
    // 0x799738: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79973c:
    // 0x79973c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79973cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799740: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799744: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799748: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79974c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799750: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x799750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799754: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x799754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799758: 0x3e00008  jr          $ra
    ctx->pc = 0x799758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799760u;
}
} // namespace gh_r604
