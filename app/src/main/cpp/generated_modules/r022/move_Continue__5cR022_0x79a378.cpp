#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_Continue__5cR022
// Address: 0x79a378 - 0x79a530
void move_Continue__5cR022_0x79a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Continue__5cR022_0x79a378");
#endif

    switch (ctx->pc) {
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a454u: goto label_79a454;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4fcu: goto label_79a4fc;
        default: break;
    }

    ctx->pc = 0x79a378u;

    // 0x79a378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a37c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a380: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a388: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a390: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a394: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a398: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x79A398u;
    {
        const bool branch_taken_0x79a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a398) {
            ctx->pc = 0x79A494u;
            goto label_79a494;
        }
    }
    ctx->pc = 0x79A3A0u;
    // 0x79a3a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a3a4: 0x2442ccc0  addiu       $v0, $v0, -0x3340
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954176));
    // 0x79a3a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a3ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a3b0: 0x800008  jr          $a0
    ctx->pc = 0x79A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A3B8u: goto label_79a3b8;
            case 0x79A3F0u: goto label_79a3f0;
            case 0x79A430u: goto label_79a430;
            case 0x79A474u: goto label_79a474;
            case 0x79A484u: goto label_79a484;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x79a3bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a3c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3c8: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x79a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x79a3cc: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x79a3d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a3d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a3d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3dc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A3DCu;
    SET_GPR_U32(ctx, 31, 0x79A3E4u);
    ctx->pc = 0x79A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3DCu;
    // 0x79a3e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A3DCu, 0x79A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E4u;
label_79a3e4:
    // 0x79a3e4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x79a3e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a3e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a3ec: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x79a3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_79a3f0:
    // 0x79a3f0: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a3f4: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x79a3f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a3fc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x79a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a400: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79a404: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x79a404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x79a408: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a40c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a410: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x79a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a414: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x79a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a418: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a41c: 0x0  nop
    ctx->pc = 0x79a41cu;
    // NOP
    // 0x79a420: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x79A420u;
    {
        const bool branch_taken_0x79a420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A420u;
        // 0x79a424: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a420) {
            ctx->pc = 0x79A498u;
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A428u;
    // 0x79a428: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A428u;
    {
        const bool branch_taken_0x79a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A428u;
        // 0x79a42c: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a428) {
            ctx->pc = 0x79A474u;
            goto label_79a474;
        }
    }
    ctx->pc = 0x79A430u;
label_79a430:
    // 0x79a430: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x79a434: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79a438: 0x24729b70  addiu       $s2, $v1, -0x6490
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x79a43c: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x79a440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a444: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x79a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x79a448: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x79a448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x79a44c: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x79A44Cu;
    SET_GPR_U32(ctx, 31, 0x79A454u);
    ctx->pc = 0x79A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A44Cu;
    // 0x79a450: 0x8e300084  lw          $s0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x79A44Cu, 0x79A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A454u;
label_79a454:
    // 0x79a454: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79a458: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a45c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A45Cu;
    {
        const bool branch_taken_0x79a45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A45Cu;
        // 0x79a460: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a45c) {
            ctx->pc = 0x79A498u;
            goto label_79a498;
        }
    }
    ctx->pc = 0x79A464u;
    // 0x79a464: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x79a470: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_79a474:
    // 0x79a474: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x79a474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a47c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A47Cu;
    {
        const bool branch_taken_0x79a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A47Cu;
        // 0x79a480: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a47c) {
            ctx->pc = 0x79A494u;
            goto label_79a494;
        }
    }
    ctx->pc = 0x79A484u;
label_79a484:
    // 0x79a484: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a488: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a488u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a490: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a494:
    // 0x79a494: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a498:
    // 0x79a498: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79a49c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79a4a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a4a4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A4A4u;
    {
        const bool branch_taken_0x79a4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A4u;
        // 0x79a4a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a4) {
            ctx->pc = 0x79A514u;
            goto label_79a514;
        }
    }
    ctx->pc = 0x79A4ACu;
    // 0x79a4ac: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79a4b0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A4B0u;
    {
        const bool branch_taken_0x79a4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B0u;
        // 0x79a4b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b0) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A4B8u;
    // 0x79a4b8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A4B8u;
    {
        const bool branch_taken_0x79a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B8u;
        // 0x79a4bc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b8) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A4C0u;
    // 0x79a4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a4c8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79a4cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a4d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a4d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A4D8u;
    SET_GPR_U32(ctx, 31, 0x79A4E0u);
    ctx->pc = 0x79A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D8u;
    // 0x79a4dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A4D8u, 0x79A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x79a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x79a4e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79a4e8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x79a4ec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a4f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a4f4: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x79A4F4u;
    SET_GPR_U32(ctx, 31, 0x79A4FCu);
    ctx->pc = 0x79A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F4u;
    // 0x79a4f8: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x79A4F4u, 0x79A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4FCu;
label_79a4fc:
    // 0x79a4fc: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x79a500: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a504: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x79a504u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a508: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x79a508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a50c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a510: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x79a510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a514:
    // 0x79a514: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a518:
    // 0x79a518: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a51c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a524: 0x3e00008  jr          $ra
    ctx->pc = 0x79A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A524u;
        // 0x79a528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A52Cu;
    // 0x79a52c: 0x0  nop
    ctx->pc = 0x79a52cu;
    // NOP
    ctx->pc = 0x79a530u;
}
} // namespace gh_r022
