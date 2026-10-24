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

// Function: func_0024C3C8
// Address: 0x24c3c8 - 0x24da80
void func_0024C3C8_0x24c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024C3C8_0x24c3c8");
#endif

    switch (ctx->pc) {
        case 0x24c420u: goto label_24c420;
        case 0x24c430u: goto label_24c430;
        case 0x24c478u: goto label_24c478;
        case 0x24c520u: goto label_24c520;
        case 0x24c534u: goto label_24c534;
        case 0x24c548u: goto label_24c548;
        case 0x24c57cu: goto label_24c57c;
        case 0x24c5a8u: goto label_24c5a8;
        case 0x24c608u: goto label_24c608;
        case 0x24c634u: goto label_24c634;
        case 0x24c660u: goto label_24c660;
        case 0x24c6c0u: goto label_24c6c0;
        case 0x24c728u: goto label_24c728;
        case 0x24c754u: goto label_24c754;
        case 0x24c764u: goto label_24c764;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c83cu: goto label_24c83c;
        case 0x24c888u: goto label_24c888;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c918u: goto label_24c918;
        case 0x24c944u: goto label_24c944;
        case 0x24c970u: goto label_24c970;
        case 0x24c980u: goto label_24c980;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca54u: goto label_24ca54;
        case 0x24cab4u: goto label_24cab4;
        case 0x24caf0u: goto label_24caf0;
        case 0x24cb28u: goto label_24cb28;
        case 0x24cb48u: goto label_24cb48;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24ccc4u: goto label_24ccc4;
        case 0x24cce0u: goto label_24cce0;
        case 0x24cd08u: goto label_24cd08;
        case 0x24cd18u: goto label_24cd18;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd54u: goto label_24cd54;
        case 0x24cd64u: goto label_24cd64;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24ce00u: goto label_24ce00;
        case 0x24ce1cu: goto label_24ce1c;
        case 0x24ce68u: goto label_24ce68;
        case 0x24cea8u: goto label_24cea8;
        case 0x24ced0u: goto label_24ced0;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf98u: goto label_24cf98;
        case 0x24d058u: goto label_24d058;
        case 0x24d088u: goto label_24d088;
        case 0x24d0a4u: goto label_24d0a4;
        case 0x24d0c0u: goto label_24d0c0;
        case 0x24d0dcu: goto label_24d0dc;
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d190u: goto label_24d190;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d254u: goto label_24d254;
        case 0x24d2a0u: goto label_24d2a0;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d310u: goto label_24d310;
        case 0x24d33cu: goto label_24d33c;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d404u: goto label_24d404;
        case 0x24d40cu: goto label_24d40c;
        case 0x24d434u: goto label_24d434;
        case 0x24d43cu: goto label_24d43c;
        case 0x24d448u: goto label_24d448;
        case 0x24d478u: goto label_24d478;
        case 0x24d49cu: goto label_24d49c;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4e4u: goto label_24d4e4;
        case 0x24d504u: goto label_24d504;
        case 0x24d528u: goto label_24d528;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d688u: goto label_24d688;
        case 0x24d698u: goto label_24d698;
        case 0x24d710u: goto label_24d710;
        case 0x24d720u: goto label_24d720;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d748u: goto label_24d748;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d824u: goto label_24d824;
        case 0x24d840u: goto label_24d840;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d878u: goto label_24d878;
        case 0x24d894u: goto label_24d894;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d918u: goto label_24d918;
        case 0x24d928u: goto label_24d928;
        case 0x24d950u: goto label_24d950;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d9d8u: goto label_24d9d8;
        case 0x24d9f8u: goto label_24d9f8;
        case 0x24da00u: goto label_24da00;
        case 0x24da10u: goto label_24da10;
        case 0x24da20u: goto label_24da20;
        case 0x24da30u: goto label_24da30;
        case 0x24da44u: goto label_24da44;
        case 0x24da50u: goto label_24da50;
        case 0x24da58u: goto label_24da58;
        default: break;
    }

    ctx->pc = 0x24c3c8u;

    // 0x24c3c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24c3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24c3cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24c3d0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x24c3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x24c3d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24c3dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24c3e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24c3e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24c3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x24c3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c3ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24c3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24c3f0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x24c3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x24c3f4: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x24C3F4u;
    {
        const bool branch_taken_0x24c3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c3f4) {
            ctx->pc = 0x24C3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C3F4u;
            // 0x24c3f8: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4C0u;
            goto label_24c4c0;
        }
    }
    ctx->pc = 0x24C3FCu;
    // 0x24c3fc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24c400: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x24c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x24c404: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C404u;
    {
        const bool branch_taken_0x24c404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c404) {
            ctx->pc = 0x24C408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C404u;
            // 0x24c408: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C448u;
            goto label_24c448;
        }
    }
    ctx->pc = 0x24C40Cu;
    // 0x24c40c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24c40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x24c410: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24C410u;
    {
        const bool branch_taken_0x24c410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c410) {
            ctx->pc = 0x24C414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C410u;
            // 0x24c414: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C448u;
            goto label_24c448;
        }
    }
    ctx->pc = 0x24C418u;
    // 0x24c418: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24C418u;
    SET_GPR_U32(ctx, 31, 0x24C420u);
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24C418u, 0x24C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C420u;
label_24c420:
    // 0x24c420: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C420u;
    {
        const bool branch_taken_0x24c420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c420) {
            ctx->pc = 0x24C424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C420u;
            // 0x24c424: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C448u;
            goto label_24c448;
        }
    }
    ctx->pc = 0x24C428u;
    // 0x24c428: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C428u;
    SET_GPR_U32(ctx, 31, 0x24C430u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C428u, 0x24C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C430u;
label_24c430:
    // 0x24c430: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24c434: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C434u;
    {
        const bool branch_taken_0x24c434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c434) {
            ctx->pc = 0x24C438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C434u;
            // 0x24c438: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C448u;
            goto label_24c448;
        }
    }
    ctx->pc = 0x24C43Cu;
    // 0x24c43c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24c440: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24c440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24c444: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x24c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_24c448:
    // 0x24c448: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x24C448u;
    {
        const bool branch_taken_0x24c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c448) {
            ctx->pc = 0x24C44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C448u;
            // 0x24c44c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4C0u;
            goto label_24c4c0;
        }
    }
    ctx->pc = 0x24C450u;
    // 0x24c450: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x24c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24c454: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x24C454u;
    {
        const bool branch_taken_0x24c454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c454) {
            ctx->pc = 0x24C458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C454u;
            // 0x24c458: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4C0u;
            goto label_24c4c0;
        }
    }
    ctx->pc = 0x24C45Cu;
    // 0x24c45c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24c460: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x24c460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24c464: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24c468: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24c468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24c46c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24c46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24c470: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x24C470u;
    SET_GPR_U32(ctx, 31, 0x24C478u);
    ctx->pc = 0x24C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C470u;
    // 0x24c474: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x24C470u, 0x24C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C478u;
label_24c478:
    // 0x24c478: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x24c478u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x24c47c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24c47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c480: 0x0  nop
    ctx->pc = 0x24c480u;
    // NOP
    // 0x24c484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c488: 0x0  nop
    ctx->pc = 0x24c488u;
    // NOP
    // 0x24c48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C48Cu;
    {
        const bool branch_taken_0x24c48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C48Cu;
        // 0x24c490: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c48c) {
            ctx->pc = 0x24C498u;
            goto label_24c498;
        }
    }
    ctx->pc = 0x24C494u;
    // 0x24c494: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x24c494u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_24c498:
    // 0x24c498: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x24c498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x24c49c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x24c49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x24c4a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c4a4: 0x0  nop
    ctx->pc = 0x24c4a4u;
    // NOP
    // 0x24c4a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24c4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c4ac: 0x0  nop
    ctx->pc = 0x24c4acu;
    // NOP
    // 0x24c4b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24C4B0u;
    {
        const bool branch_taken_0x24c4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B0u;
        // 0x24c4b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4b0) {
            ctx->pc = 0x24C4BCu;
            goto label_24c4bc;
        }
    }
    ctx->pc = 0x24C4B8u;
    // 0x24c4b8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24c4bc:
    // 0x24c4bc: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x24c4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_24c4c0:
    // 0x24c4c0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24c4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24c4c4: 0x10400564  beqz        $v0, . + 4 + (0x564 << 2)
    ctx->pc = 0x24C4C4u;
    {
        const bool branch_taken_0x24c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4C4u;
        // 0x24c4c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4c4) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24C4CCu;
    // 0x24c4cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24c4d0: 0x2442da50  addiu       $v0, $v0, -0x25B0
    ctx->pc = 0x24c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957648));
    // 0x24c4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c4d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c4dc: 0x800008  jr          $a0
    ctx->pc = 0x24C4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24C4E4u: goto label_24c4e4;
            case 0x24CC7Cu: goto label_24cc7c;
            case 0x24D0F0u: goto label_24d0f0;
            case 0x24D550u: goto label_24d550;
            case 0x24D8DCu: goto label_24d8dc;
            case 0x24D98Cu: goto label_24d98c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C4E4u;
label_24c4e4:
    // 0x24c4e4: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x24c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x24c4e8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24C4E8u;
    {
        const bool branch_taken_0x24c4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4E8u;
        // 0x24c4ec: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4e8) {
            ctx->pc = 0x24C54Cu;
            goto label_24c54c;
        }
    }
    ctx->pc = 0x24C4F0u;
    // 0x24c4f0: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x24c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x24c4f4: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x24c4f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x24c4f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C4F8u;
    {
        const bool branch_taken_0x24c4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4F8u;
        // 0x24c4fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4f8) {
            ctx->pc = 0x24C518u;
            goto label_24c518;
        }
    }
    ctx->pc = 0x24C500u;
    // 0x24c500: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24c500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24c504: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x24c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
    // 0x24c508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c50c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c510: 0x800008  jr          $a0
    ctx->pc = 0x24C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24C518u: goto label_24c518;
            case 0x24C534u: goto label_24c534;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C518u;
label_24c518:
    // 0x24c518: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C518u;
    SET_GPR_U32(ctx, 31, 0x24C520u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C518u, 0x24C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C520u;
label_24c520:
    // 0x24c520: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x24c524: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C524u;
    {
        const bool branch_taken_0x24c524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c524) {
            ctx->pc = 0x24C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C524u;
            // 0x24c528: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C538u;
            goto label_24c538;
        }
    }
    ctx->pc = 0x24C52Cu;
    // 0x24c52c: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x24C52Cu;
    SET_GPR_U32(ctx, 31, 0x24C534u);
    ctx->pc = 0x24C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C52Cu;
    // 0x24c530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24C52Cu, 0x24C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C534u;
label_24c534:
    // 0x24c534: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24c534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_24c538:
    // 0x24c538: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C538u;
    {
        const bool branch_taken_0x24c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c538) {
            ctx->pc = 0x24C53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C538u;
            // 0x24c53c: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C54Cu;
            goto label_24c54c;
        }
    }
    ctx->pc = 0x24C540u;
    // 0x24c540: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x24C540u;
    SET_GPR_U32(ctx, 31, 0x24C548u);
    ctx->pc = 0x24C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C540u;
    // 0x24c544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x24C540u, 0x24C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C548u;
label_24c548:
    // 0x24c548: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x24c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_24c54c:
    // 0x24c54c: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x24c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x24c550: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x24c550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x24c554: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x24C554u;
    {
        const bool branch_taken_0x24c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C554u;
        // 0x24c558: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c554) {
            ctx->pc = 0x24C600u;
            goto label_24c600;
        }
    }
    ctx->pc = 0x24C55Cu;
    // 0x24c55c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24c560: 0x2442db40  addiu       $v0, $v0, -0x24C0
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957888));
    // 0x24c564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c56c: 0x800008  jr          $a0
    ctx->pc = 0x24C56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24C574u: goto label_24c574;
            case 0x24C5A0u: goto label_24c5a0;
            case 0x24C600u: goto label_24c600;
            case 0x24C62Cu: goto label_24c62c;
            case 0x24C658u: goto label_24c658;
            case 0x24C6B8u: goto label_24c6b8;
            case 0x24C75Cu: goto label_24c75c;
            case 0x24C7BCu: goto label_24c7bc;
            case 0x24C86Cu: goto label_24c86c;
            case 0x24C978u: goto label_24c978;
            case 0x24C9B0u: goto label_24c9b0;
            case 0x24C9E8u: goto label_24c9e8;
            case 0x24CA20u: goto label_24ca20;
            case 0x24CA4Cu: goto label_24ca4c;
            case 0x24CAACu: goto label_24caac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C56Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C574u;
label_24c574:
    // 0x24c574: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C574u;
    SET_GPR_U32(ctx, 31, 0x24C57Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C574u, 0x24C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C57Cu;
label_24c57c:
    // 0x24c57c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c580: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C580u;
    {
        const bool branch_taken_0x24c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C580u;
        // 0x24c584: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c580) {
            ctx->pc = 0x24C594u;
            goto label_24c594;
        }
    }
    ctx->pc = 0x24C588u;
    // 0x24c588: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x24c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x24c58c: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x24C58Cu;
    {
        const bool branch_taken_0x24c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C58Cu;
        // 0x24c590: 0x8c4402d4  lw          $a0, 0x2D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c58c) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C594u;
label_24c594:
    // 0x24c594: 0x8c4302d8  lw          $v1, 0x2D8($v0)
    ctx->pc = 0x24c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 728)));
    // 0x24c598: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x24C598u;
    {
        const bool branch_taken_0x24c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C598u;
        // 0x24c59c: 0x8c4402dc  lw          $a0, 0x2DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c598) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C5A0u;
label_24c5a0:
    // 0x24c5a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C5A0u;
    SET_GPR_U32(ctx, 31, 0x24C5A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C5A0u, 0x24C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5A8u;
label_24c5a8:
    // 0x24c5a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c5ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c5b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c5b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c5b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C5B4u;
    {
        const bool branch_taken_0x24c5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5b4) {
            ctx->pc = 0x24C5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5B4u;
            // 0x24c5b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5BCu;
            goto label_24c5bc;
        }
    }
    ctx->pc = 0x24C5BCu;
label_24c5bc:
    // 0x24c5bc: 0x2810  mfhi        $a1
    ctx->pc = 0x24c5bcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c5c0: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C5C0u;
    {
        const bool branch_taken_0x24c5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c5c0) {
            ctx->pc = 0x24C5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5C0u;
            // 0x24c5c4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5E8u;
            goto label_24c5e8;
        }
    }
    ctx->pc = 0x24C5C8u;
    // 0x24c5c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C5C8u;
    {
        const bool branch_taken_0x24c5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5C8u;
        // 0x24c5cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5c8) {
            ctx->pc = 0x24C5D8u;
            goto label_24c5d8;
        }
    }
    ctx->pc = 0x24C5D0u;
    // 0x24c5d0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C5D0u;
    {
        const bool branch_taken_0x24c5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c5d0) {
            ctx->pc = 0x24C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5D0u;
            // 0x24c5d4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5F4u;
            goto label_24c5f4;
        }
    }
    ctx->pc = 0x24C5D8u;
label_24c5d8:
    // 0x24c5d8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c5dc: 0x8c4326d8  lw          $v1, 0x26D8($v0)
    ctx->pc = 0x24c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9944)));
    // 0x24c5e0: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x24C5E0u;
    {
        const bool branch_taken_0x24c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5E0u;
        // 0x24c5e4: 0x8c4426dc  lw          $a0, 0x26DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5e0) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C5E8u;
label_24c5e8:
    // 0x24c5e8: 0x8c4329f0  lw          $v1, 0x29F0($v0)
    ctx->pc = 0x24c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10736)));
    // 0x24c5ec: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x24C5ECu;
    {
        const bool branch_taken_0x24c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5ECu;
        // 0x24c5f0: 0x8c4429f4  lw          $a0, 0x29F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5ec) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C5F4u;
label_24c5f4:
    // 0x24c5f4: 0x8c4329e8  lw          $v1, 0x29E8($v0)
    ctx->pc = 0x24c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10728)));
    // 0x24c5f8: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x24C5F8u;
    {
        const bool branch_taken_0x24c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5F8u;
        // 0x24c5fc: 0x8c4429ec  lw          $a0, 0x29EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5f8) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C600u;
label_24c600:
    // 0x24c600: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C600u;
    SET_GPR_U32(ctx, 31, 0x24C608u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C600u, 0x24C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C608u;
label_24c608:
    // 0x24c608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c60c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C60Cu;
    {
        const bool branch_taken_0x24c60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C60Cu;
        // 0x24c610: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c60c) {
            ctx->pc = 0x24C620u;
            goto label_24c620;
        }
    }
    ctx->pc = 0x24C614u;
    // 0x24c614: 0x8c430774  lw          $v1, 0x774($v0)
    ctx->pc = 0x24c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1908)));
    // 0x24c618: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x24C618u;
    {
        const bool branch_taken_0x24c618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C618u;
        // 0x24c61c: 0x8c440778  lw          $a0, 0x778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c618) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C620u;
label_24c620:
    // 0x24c620: 0x8c43077c  lw          $v1, 0x77C($v0)
    ctx->pc = 0x24c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x24c624: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x24C624u;
    {
        const bool branch_taken_0x24c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C624u;
        // 0x24c628: 0x8c440780  lw          $a0, 0x780($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c624) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C62Cu;
label_24c62c:
    // 0x24c62c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C62Cu;
    SET_GPR_U32(ctx, 31, 0x24C634u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C62Cu, 0x24C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C634u;
label_24c634:
    // 0x24c634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C638u;
    {
        const bool branch_taken_0x24c638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C638u;
        // 0x24c63c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c638) {
            ctx->pc = 0x24C64Cu;
            goto label_24c64c;
        }
    }
    ctx->pc = 0x24C640u;
    // 0x24c640: 0x8c431238  lw          $v1, 0x1238($v0)
    ctx->pc = 0x24c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4664)));
    // 0x24c644: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x24C644u;
    {
        const bool branch_taken_0x24c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C644u;
        // 0x24c648: 0x8c44123c  lw          $a0, 0x123C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c644) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C64Cu;
label_24c64c:
    // 0x24c64c: 0x8c431240  lw          $v1, 0x1240($v0)
    ctx->pc = 0x24c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4672)));
    // 0x24c650: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x24C650u;
    {
        const bool branch_taken_0x24c650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C650u;
        // 0x24c654: 0x8c441244  lw          $a0, 0x1244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c650) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C658u;
label_24c658:
    // 0x24c658: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C658u;
    SET_GPR_U32(ctx, 31, 0x24C660u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C658u, 0x24C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C660u;
label_24c660:
    // 0x24c660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c668: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c668u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c66c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C66Cu;
    {
        const bool branch_taken_0x24c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c66c) {
            ctx->pc = 0x24C670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C66Cu;
            // 0x24c670: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C674u;
            goto label_24c674;
        }
    }
    ctx->pc = 0x24C674u;
label_24c674:
    // 0x24c674: 0x2810  mfhi        $a1
    ctx->pc = 0x24c674u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c678: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C678u;
    {
        const bool branch_taken_0x24c678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c678) {
            ctx->pc = 0x24C67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C678u;
            // 0x24c67c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6A0u;
            goto label_24c6a0;
        }
    }
    ctx->pc = 0x24C680u;
    // 0x24c680: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C680u;
    {
        const bool branch_taken_0x24c680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C680u;
        // 0x24c684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c680) {
            ctx->pc = 0x24C690u;
            goto label_24c690;
        }
    }
    ctx->pc = 0x24C688u;
    // 0x24c688: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C688u;
    {
        const bool branch_taken_0x24c688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c688) {
            ctx->pc = 0x24C68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C688u;
            // 0x24c68c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6ACu;
            goto label_24c6ac;
        }
    }
    ctx->pc = 0x24C690u;
label_24c690:
    // 0x24c690: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c694: 0x8c4309b0  lw          $v1, 0x9B0($v0)
    ctx->pc = 0x24c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2480)));
    // 0x24c698: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x24C698u;
    {
        const bool branch_taken_0x24c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C698u;
        // 0x24c69c: 0x8c4409b4  lw          $a0, 0x9B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c698) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C6A0u;
label_24c6a0:
    // 0x24c6a0: 0x8c4309b8  lw          $v1, 0x9B8($v0)
    ctx->pc = 0x24c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2488)));
    // 0x24c6a4: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x24C6A4u;
    {
        const bool branch_taken_0x24c6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6A4u;
        // 0x24c6a8: 0x8c4409bc  lw          $a0, 0x9BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6a4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C6ACu;
label_24c6ac:
    // 0x24c6ac: 0x8c4309c0  lw          $v1, 0x9C0($v0)
    ctx->pc = 0x24c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2496)));
    // 0x24c6b0: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x24C6B0u;
    {
        const bool branch_taken_0x24c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6B0u;
        // 0x24c6b4: 0x8c4409c4  lw          $a0, 0x9C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6b0) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C6B8u;
label_24c6b8:
    // 0x24c6b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C6B8u;
    SET_GPR_U32(ctx, 31, 0x24C6C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C6B8u, 0x24C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6C0u;
label_24c6c0:
    // 0x24c6c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c6c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c6c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c6c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c6cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C6CCu;
    {
        const bool branch_taken_0x24c6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6cc) {
            ctx->pc = 0x24C6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6CCu;
            // 0x24c6d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6D4u;
            goto label_24c6d4;
        }
    }
    ctx->pc = 0x24C6D4u;
label_24c6d4:
    // 0x24c6d4: 0x2810  mfhi        $a1
    ctx->pc = 0x24c6d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c6d8: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C6D8u;
    {
        const bool branch_taken_0x24c6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c6d8) {
            ctx->pc = 0x24C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6D8u;
            // 0x24c6dc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C700u;
            goto label_24c700;
        }
    }
    ctx->pc = 0x24C6E0u;
    // 0x24c6e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C6E0u;
    {
        const bool branch_taken_0x24c6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6E0u;
        // 0x24c6e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6e0) {
            ctx->pc = 0x24C6F0u;
            goto label_24c6f0;
        }
    }
    ctx->pc = 0x24C6E8u;
    // 0x24c6e8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C6E8u;
    {
        const bool branch_taken_0x24c6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c6e8) {
            ctx->pc = 0x24C6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6E8u;
            // 0x24c6ec: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C70Cu;
            goto label_24c70c;
        }
    }
    ctx->pc = 0x24C6F0u;
label_24c6f0:
    // 0x24c6f0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c6f4: 0x8c4309b0  lw          $v1, 0x9B0($v0)
    ctx->pc = 0x24c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2480)));
    // 0x24c6f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C6F8u;
    {
        const bool branch_taken_0x24c6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6F8u;
        // 0x24c6fc: 0x8c4409b4  lw          $a0, 0x9B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6f8) {
            ctx->pc = 0x24C714u;
            goto label_24c714;
        }
    }
    ctx->pc = 0x24C700u;
label_24c700:
    // 0x24c700: 0x8c4309b8  lw          $v1, 0x9B8($v0)
    ctx->pc = 0x24c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2488)));
    // 0x24c704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C704u;
    {
        const bool branch_taken_0x24c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C704u;
        // 0x24c708: 0x8c4409bc  lw          $a0, 0x9BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c704) {
            ctx->pc = 0x24C714u;
            goto label_24c714;
        }
    }
    ctx->pc = 0x24C70Cu;
label_24c70c:
    // 0x24c70c: 0x8c4309c0  lw          $v1, 0x9C0($v0)
    ctx->pc = 0x24c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2496)));
    // 0x24c710: 0x8c4409c4  lw          $a0, 0x9C4($v0)
    ctx->pc = 0x24c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2500)));
label_24c714:
    // 0x24c714: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c718: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24c718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24c71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c720: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24C720u;
    SET_GPR_U32(ctx, 31, 0x24C728u);
    ctx->pc = 0x24C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C720u;
    // 0x24c724: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24C720u, 0x24C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C728u;
label_24c728:
    // 0x24c728: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24c72c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x24c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x24c730: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24c730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24c734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c738: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24c738u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24c73c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24c73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24c740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c744: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24c744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c748: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24c748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c74c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24C74Cu;
    SET_GPR_U32(ctx, 31, 0x24C754u);
    ctx->pc = 0x24C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C74Cu;
    // 0x24c750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24C74Cu, 0x24C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C754u;
label_24c754:
    // 0x24c754: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x24C754u;
    {
        const bool branch_taken_0x24c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C754u;
        // 0x24c758: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c754) {
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24C75Cu;
label_24c75c:
    // 0x24c75c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C75Cu;
    SET_GPR_U32(ctx, 31, 0x24C764u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C75Cu, 0x24C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C764u;
label_24c764:
    // 0x24c764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c76c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c76cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c770: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C770u;
    {
        const bool branch_taken_0x24c770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c770) {
            ctx->pc = 0x24C774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C770u;
            // 0x24c774: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C778u;
            goto label_24c778;
        }
    }
    ctx->pc = 0x24C778u;
label_24c778:
    // 0x24c778: 0x2810  mfhi        $a1
    ctx->pc = 0x24c778u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c77c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C77Cu;
    {
        const bool branch_taken_0x24c77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c77c) {
            ctx->pc = 0x24C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C77Cu;
            // 0x24c780: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7A4u;
            goto label_24c7a4;
        }
    }
    ctx->pc = 0x24C784u;
    // 0x24c784: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C784u;
    {
        const bool branch_taken_0x24c784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C784u;
        // 0x24c788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c784) {
            ctx->pc = 0x24C794u;
            goto label_24c794;
        }
    }
    ctx->pc = 0x24C78Cu;
    // 0x24c78c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C78Cu;
    {
        const bool branch_taken_0x24c78c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c78c) {
            ctx->pc = 0x24C790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C78Cu;
            // 0x24c790: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7B0u;
            goto label_24c7b0;
        }
    }
    ctx->pc = 0x24C794u;
label_24c794:
    // 0x24c794: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c798: 0x8c43311c  lw          $v1, 0x311C($v0)
    ctx->pc = 0x24c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12572)));
    // 0x24c79c: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x24C79Cu;
    {
        const bool branch_taken_0x24c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C79Cu;
        // 0x24c7a0: 0x8c443120  lw          $a0, 0x3120($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c79c) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C7A4u;
label_24c7a4:
    // 0x24c7a4: 0x8c433124  lw          $v1, 0x3124($v0)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12580)));
    // 0x24c7a8: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x24C7A8u;
    {
        const bool branch_taken_0x24c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7A8u;
        // 0x24c7ac: 0x8c443128  lw          $a0, 0x3128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7a8) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C7B0u;
label_24c7b0:
    // 0x24c7b0: 0x8c43312c  lw          $v1, 0x312C($v0)
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12588)));
    // 0x24c7b4: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x24C7B4u;
    {
        const bool branch_taken_0x24c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7B4u;
        // 0x24c7b8: 0x8c443130  lw          $a0, 0x3130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7b4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C7BCu;
label_24c7bc:
    // 0x24c7bc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C7BCu;
    SET_GPR_U32(ctx, 31, 0x24C7C4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C7BCu, 0x24C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7C4u;
label_24c7c4:
    // 0x24c7c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c7cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c7ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c7d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C7D0u;
    {
        const bool branch_taken_0x24c7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7d0) {
            ctx->pc = 0x24C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7D0u;
            // 0x24c7d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7D8u;
            goto label_24c7d8;
        }
    }
    ctx->pc = 0x24C7D8u;
label_24c7d8:
    // 0x24c7d8: 0x2810  mfhi        $a1
    ctx->pc = 0x24c7d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c7dc: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C7DCu;
    {
        const bool branch_taken_0x24c7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c7dc) {
            ctx->pc = 0x24C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7DCu;
            // 0x24c7e0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C804u;
            goto label_24c804;
        }
    }
    ctx->pc = 0x24C7E4u;
    // 0x24c7e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C7E4u;
    {
        const bool branch_taken_0x24c7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7E4u;
        // 0x24c7e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7e4) {
            ctx->pc = 0x24C7F4u;
            goto label_24c7f4;
        }
    }
    ctx->pc = 0x24C7ECu;
    // 0x24c7ec: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C7ECu;
    {
        const bool branch_taken_0x24c7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c7ec) {
            ctx->pc = 0x24C7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7ECu;
            // 0x24c7f0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C810u;
            goto label_24c810;
        }
    }
    ctx->pc = 0x24C7F4u;
label_24c7f4:
    // 0x24c7f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c7f8: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x24c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x24c7fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C7FCu;
    {
        const bool branch_taken_0x24c7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7FCu;
        // 0x24c800: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7fc) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C804u;
label_24c804:
    // 0x24c804: 0x8c433308  lw          $v1, 0x3308($v0)
    ctx->pc = 0x24c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13064)));
    // 0x24c808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C808u;
    {
        const bool branch_taken_0x24c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C808u;
        // 0x24c80c: 0x8c44330c  lw          $a0, 0x330C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c808) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C810u;
label_24c810:
    // 0x24c810: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x24c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x24c814: 0x8c443314  lw          $a0, 0x3314($v0)
    ctx->pc = 0x24c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13076)));
label_24c818:
    // 0x24c818: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24c818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c81c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24c81cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24c820: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24c824: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24c824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24c828: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24c82c: 0x504000ac  beql        $v0, $zero, . + 4 + (0xAC << 2)
    ctx->pc = 0x24C82Cu;
    {
        const bool branch_taken_0x24c82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c82c) {
            ctx->pc = 0x24C830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C82Cu;
            // 0x24c830: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24C834u;
    // 0x24c834: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C834u;
    SET_GPR_U32(ctx, 31, 0x24C83Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C834u, 0x24C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C83Cu;
label_24c83c:
    // 0x24c83c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c840: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C840u;
    {
        const bool branch_taken_0x24c840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C840u;
        // 0x24c844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c840) {
            ctx->pc = 0x24C850u;
            goto label_24c850;
        }
    }
    ctx->pc = 0x24C848u;
    // 0x24c848: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C848u;
    {
        const bool branch_taken_0x24c848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c848) {
            ctx->pc = 0x24C84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C848u;
            // 0x24c84c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C860u;
            goto label_24c860;
        }
    }
    ctx->pc = 0x24C850u;
label_24c850:
    // 0x24c850: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c854: 0x8c433398  lw          $v1, 0x3398($v0)
    ctx->pc = 0x24c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13208)));
    // 0x24c858: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x24C858u;
    {
        const bool branch_taken_0x24c858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C858u;
        // 0x24c85c: 0x8c44339c  lw          $a0, 0x339C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c858) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C860u;
label_24c860:
    // 0x24c860: 0x8c4333a0  lw          $v1, 0x33A0($v0)
    ctx->pc = 0x24c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13216)));
    // 0x24c864: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x24C864u;
    {
        const bool branch_taken_0x24c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C864u;
        // 0x24c868: 0x8c4433a4  lw          $a0, 0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c864) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C86Cu;
label_24c86c:
    // 0x24c86c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24c870: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24c870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x24c874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24c874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24c878: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24C878u;
    {
        const bool branch_taken_0x24c878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c878) {
            ctx->pc = 0x24C8B8u;
            goto label_24c8b8;
        }
    }
    ctx->pc = 0x24C880u;
    // 0x24c880: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C880u;
    SET_GPR_U32(ctx, 31, 0x24C888u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C880u, 0x24C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C888u;
label_24c888:
    // 0x24c888: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24c888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c88c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C88Cu;
    {
        const bool branch_taken_0x24c88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C88Cu;
        // 0x24c890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c88c) {
            ctx->pc = 0x24C89Cu;
            goto label_24c89c;
        }
    }
    ctx->pc = 0x24C894u;
    // 0x24c894: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C894u;
    {
        const bool branch_taken_0x24c894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c894) {
            ctx->pc = 0x24C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C894u;
            // 0x24c898: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C89Cu;
label_24c89c:
    // 0x24c89c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c8a0: 0x8c433928  lw          $v1, 0x3928($v0)
    ctx->pc = 0x24c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14632)));
    // 0x24c8a4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x24C8A4u;
    {
        const bool branch_taken_0x24c8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8A4u;
        // 0x24c8a8: 0x8c44392c  lw          $a0, 0x392C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8a4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C8ACu;
label_24c8ac:
    // 0x24c8ac: 0x8c433930  lw          $v1, 0x3930($v0)
    ctx->pc = 0x24c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14640)));
    // 0x24c8b0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x24C8B0u;
    {
        const bool branch_taken_0x24c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8B0u;
        // 0x24c8b4: 0x8c443934  lw          $a0, 0x3934($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8b0) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C8B8u;
label_24c8b8:
    // 0x24c8b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C8B8u;
    SET_GPR_U32(ctx, 31, 0x24C8C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C8B8u, 0x24C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8C0u;
label_24c8c0:
    // 0x24c8c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c8c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c8c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24c8c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24c8cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C8CCu;
    {
        const bool branch_taken_0x24c8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c8cc) {
            ctx->pc = 0x24C8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C8CCu;
            // 0x24c8d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C8D4u;
            goto label_24c8d4;
        }
    }
    ctx->pc = 0x24C8D4u;
label_24c8d4:
    // 0x24c8d4: 0x2810  mfhi        $a1
    ctx->pc = 0x24c8d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24c8d8: 0x50a40011  beql        $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C8D8u;
    {
        const bool branch_taken_0x24c8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c8d8) {
            ctx->pc = 0x24C8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C8D8u;
            // 0x24c8dc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C920u;
            goto label_24c920;
        }
    }
    ctx->pc = 0x24C8E0u;
    // 0x24c8e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C8E0u;
    {
        const bool branch_taken_0x24c8e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8E0u;
        // 0x24c8e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c8e0) {
            ctx->pc = 0x24C8F0u;
            goto label_24c8f0;
        }
    }
    ctx->pc = 0x24C8E8u;
    // 0x24c8e8: 0x50a20018  beql        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24C8E8u;
    {
        const bool branch_taken_0x24c8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c8e8) {
            ctx->pc = 0x24C8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C8E8u;
            // 0x24c8ec: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C94Cu;
            goto label_24c94c;
        }
    }
    ctx->pc = 0x24C8F0u;
label_24c8f0:
    // 0x24c8f0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c8f4: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x24c8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x24c8f8: 0x8c433890  lw          $v1, 0x3890($v0)
    ctx->pc = 0x24c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14480)));
    // 0x24c8fc: 0x8c443894  lw          $a0, 0x3894($v0)
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14484)));
    // 0x24c900: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24c900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c904: 0x10e00075  beqz        $a3, . + 4 + (0x75 << 2)
    ctx->pc = 0x24C904u;
    {
        const bool branch_taken_0x24c904 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C904u;
        // 0x24c908: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c904) {
            ctx->pc = 0x24CADCu;
            goto label_24cadc;
        }
    }
    ctx->pc = 0x24C90Cu;
    // 0x24c90c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c910: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24C910u;
    SET_GPR_U32(ctx, 31, 0x24C918u);
    ctx->pc = 0x24C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C910u;
    // 0x24c914: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24C910u, 0x24C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C918u;
label_24c918:
    // 0x24c918: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x24C918u;
    {
        const bool branch_taken_0x24c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C918u;
        // 0x24c91c: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c918) {
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24C920u;
label_24c920:
    // 0x24c920: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x24c920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x24c924: 0x8c433888  lw          $v1, 0x3888($v0)
    ctx->pc = 0x24c924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14472)));
    // 0x24c928: 0x8c44388c  lw          $a0, 0x388C($v0)
    ctx->pc = 0x24c928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14476)));
    // 0x24c92c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24c92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c930: 0x10e0006a  beqz        $a3, . + 4 + (0x6A << 2)
    ctx->pc = 0x24C930u;
    {
        const bool branch_taken_0x24c930 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C930u;
        // 0x24c934: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c930) {
            ctx->pc = 0x24CADCu;
            goto label_24cadc;
        }
    }
    ctx->pc = 0x24C938u;
    // 0x24c938: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c93c: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24C93Cu;
    SET_GPR_U32(ctx, 31, 0x24C944u);
    ctx->pc = 0x24C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C93Cu;
    // 0x24c940: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24C93Cu, 0x24C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C944u;
label_24c944:
    // 0x24c944: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x24C944u;
    {
        const bool branch_taken_0x24c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C944u;
        // 0x24c948: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c944) {
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24C94Cu;
label_24c94c:
    // 0x24c94c: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x24c94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x24c950: 0x8c433880  lw          $v1, 0x3880($v0)
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14464)));
    // 0x24c954: 0x8c443884  lw          $a0, 0x3884($v0)
    ctx->pc = 0x24c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14468)));
    // 0x24c958: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24c958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c95c: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x24C95Cu;
    {
        const bool branch_taken_0x24c95c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C95Cu;
        // 0x24c960: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c95c) {
            ctx->pc = 0x24CADCu;
            goto label_24cadc;
        }
    }
    ctx->pc = 0x24C964u;
    // 0x24c964: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c968: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24C968u;
    SET_GPR_U32(ctx, 31, 0x24C970u);
    ctx->pc = 0x24C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C968u;
    // 0x24c96c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24C968u, 0x24C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C970u;
label_24c970:
    // 0x24c970: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x24C970u;
    {
        const bool branch_taken_0x24c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C970u;
        // 0x24c974: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c970) {
            ctx->pc = 0x24CAE0u;
            goto label_24cae0;
        }
    }
    ctx->pc = 0x24C978u;
label_24c978:
    // 0x24c978: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C978u;
    SET_GPR_U32(ctx, 31, 0x24C980u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C978u, 0x24C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C980u;
label_24c980:
    // 0x24c980: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c984: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C984u;
    {
        const bool branch_taken_0x24c984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C984u;
        // 0x24c988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c984) {
            ctx->pc = 0x24C994u;
            goto label_24c994;
        }
    }
    ctx->pc = 0x24C98Cu;
    // 0x24c98c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C98Cu;
    {
        const bool branch_taken_0x24c98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c98c) {
            ctx->pc = 0x24C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C98Cu;
            // 0x24c990: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C9A4u;
            goto label_24c9a4;
        }
    }
    ctx->pc = 0x24C994u;
label_24c994:
    // 0x24c994: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c998: 0x8c431680  lw          $v1, 0x1680($v0)
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5760)));
    // 0x24c99c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x24C99Cu;
    {
        const bool branch_taken_0x24c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C99Cu;
        // 0x24c9a0: 0x8c441684  lw          $a0, 0x1684($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c99c) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C9A4u;
label_24c9a4:
    // 0x24c9a4: 0x8c431688  lw          $v1, 0x1688($v0)
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5768)));
    // 0x24c9a8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x24C9A8u;
    {
        const bool branch_taken_0x24c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9A8u;
        // 0x24c9ac: 0x8c44168c  lw          $a0, 0x168C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9a8) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C9B0u;
label_24c9b0:
    // 0x24c9b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C9B0u;
    SET_GPR_U32(ctx, 31, 0x24C9B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C9B0u, 0x24C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9B8u;
label_24c9b8:
    // 0x24c9b8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24c9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c9bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C9BCu;
    {
        const bool branch_taken_0x24c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9BCu;
        // 0x24c9c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9bc) {
            ctx->pc = 0x24C9CCu;
            goto label_24c9cc;
        }
    }
    ctx->pc = 0x24C9C4u;
    // 0x24c9c4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C9C4u;
    {
        const bool branch_taken_0x24c9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c9c4) {
            ctx->pc = 0x24C9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C9C4u;
            // 0x24c9c8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C9DCu;
            goto label_24c9dc;
        }
    }
    ctx->pc = 0x24C9CCu;
label_24c9cc:
    // 0x24c9cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24c9d0: 0x8c433a84  lw          $v1, 0x3A84($v0)
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14980)));
    // 0x24c9d4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x24C9D4u;
    {
        const bool branch_taken_0x24c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9D4u;
        // 0x24c9d8: 0x8c443a88  lw          $a0, 0x3A88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9d4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C9DCu;
label_24c9dc:
    // 0x24c9dc: 0x8c433a8c  lw          $v1, 0x3A8C($v0)
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14988)));
    // 0x24c9e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24C9E0u;
    {
        const bool branch_taken_0x24c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9E0u;
        // 0x24c9e4: 0x8c443a90  lw          $a0, 0x3A90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9e0) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24C9E8u;
label_24c9e8:
    // 0x24c9e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24C9E8u;
    SET_GPR_U32(ctx, 31, 0x24C9F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24C9E8u, 0x24C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9F0u;
label_24c9f0:
    // 0x24c9f0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24c9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c9f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C9F4u;
    {
        const bool branch_taken_0x24c9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F4u;
        // 0x24c9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9f4) {
            ctx->pc = 0x24CA04u;
            goto label_24ca04;
        }
    }
    ctx->pc = 0x24C9FCu;
    // 0x24c9fc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C9FCu;
    {
        const bool branch_taken_0x24c9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c9fc) {
            ctx->pc = 0x24CA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C9FCu;
            // 0x24ca00: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CA14u;
            goto label_24ca14;
        }
    }
    ctx->pc = 0x24CA04u;
label_24ca04:
    // 0x24ca04: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24ca08: 0x8c431680  lw          $v1, 0x1680($v0)
    ctx->pc = 0x24ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5760)));
    // 0x24ca0c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24CA0Cu;
    {
        const bool branch_taken_0x24ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA0Cu;
        // 0x24ca10: 0x8c441684  lw          $a0, 0x1684($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5764)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca0c) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CA14u;
label_24ca14:
    // 0x24ca14: 0x8c431688  lw          $v1, 0x1688($v0)
    ctx->pc = 0x24ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5768)));
    // 0x24ca18: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x24CA18u;
    {
        const bool branch_taken_0x24ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA18u;
        // 0x24ca1c: 0x8c44168c  lw          $a0, 0x168C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca18) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CA20u;
label_24ca20:
    // 0x24ca20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CA20u;
    SET_GPR_U32(ctx, 31, 0x24CA28u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CA20u, 0x24CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA28u;
label_24ca28:
    // 0x24ca28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ca2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CA2Cu;
    {
        const bool branch_taken_0x24ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA2Cu;
        // 0x24ca30: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca2c) {
            ctx->pc = 0x24CA40u;
            goto label_24ca40;
        }
    }
    ctx->pc = 0x24CA34u;
    // 0x24ca34: 0x8c431cf8  lw          $v1, 0x1CF8($v0)
    ctx->pc = 0x24ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7416)));
    // 0x24ca38: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24CA38u;
    {
        const bool branch_taken_0x24ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA38u;
        // 0x24ca3c: 0x8c441cfc  lw          $a0, 0x1CFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca38) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CA40u;
label_24ca40:
    // 0x24ca40: 0x8c431d00  lw          $v1, 0x1D00($v0)
    ctx->pc = 0x24ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7424)));
    // 0x24ca44: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x24CA44u;
    {
        const bool branch_taken_0x24ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA44u;
        // 0x24ca48: 0x8c441d04  lw          $a0, 0x1D04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca44) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CA4Cu;
label_24ca4c:
    // 0x24ca4c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CA4Cu;
    SET_GPR_U32(ctx, 31, 0x24CA54u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CA4Cu, 0x24CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA54u;
label_24ca54:
    // 0x24ca54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ca58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ca5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24ca5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24ca60: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CA60u;
    {
        const bool branch_taken_0x24ca60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca60) {
            ctx->pc = 0x24CA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CA60u;
            // 0x24ca64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CA68u;
            goto label_24ca68;
        }
    }
    ctx->pc = 0x24CA68u;
label_24ca68:
    // 0x24ca68: 0x2810  mfhi        $a1
    ctx->pc = 0x24ca68u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24ca6c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CA6Cu;
    {
        const bool branch_taken_0x24ca6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24ca6c) {
            ctx->pc = 0x24CA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CA6Cu;
            // 0x24ca70: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CA94u;
            goto label_24ca94;
        }
    }
    ctx->pc = 0x24CA74u;
    // 0x24ca74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CA74u;
    {
        const bool branch_taken_0x24ca74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA74u;
        // 0x24ca78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca74) {
            ctx->pc = 0x24CA84u;
            goto label_24ca84;
        }
    }
    ctx->pc = 0x24CA7Cu;
    // 0x24ca7c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CA7Cu;
    {
        const bool branch_taken_0x24ca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ca7c) {
            ctx->pc = 0x24CA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CA7Cu;
            // 0x24ca80: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CAA0u;
            goto label_24caa0;
        }
    }
    ctx->pc = 0x24CA84u;
label_24ca84:
    // 0x24ca84: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24ca88: 0x8c432e34  lw          $v1, 0x2E34($v0)
    ctx->pc = 0x24ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11828)));
    // 0x24ca8c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24CA8Cu;
    {
        const bool branch_taken_0x24ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA8Cu;
        // 0x24ca90: 0x8c442e38  lw          $a0, 0x2E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca8c) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CA94u;
label_24ca94:
    // 0x24ca94: 0x8c432e3c  lw          $v1, 0x2E3C($v0)
    ctx->pc = 0x24ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11836)));
    // 0x24ca98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24CA98u;
    {
        const bool branch_taken_0x24ca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA98u;
        // 0x24ca9c: 0x8c442e40  lw          $a0, 0x2E40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca98) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CAA0u;
label_24caa0:
    // 0x24caa0: 0x8c432e44  lw          $v1, 0x2E44($v0)
    ctx->pc = 0x24caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11844)));
    // 0x24caa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24CAA4u;
    {
        const bool branch_taken_0x24caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAA4u;
        // 0x24caa8: 0x8c442e48  lw          $a0, 0x2E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caa4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CAACu;
label_24caac:
    // 0x24caac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CAACu;
    SET_GPR_U32(ctx, 31, 0x24CAB4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CAACu, 0x24CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAB4u;
label_24cab4:
    // 0x24cab4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24cab8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CAB8u;
    {
        const bool branch_taken_0x24cab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAB8u;
        // 0x24cabc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cab8) {
            ctx->pc = 0x24CACCu;
            goto label_24cacc;
        }
    }
    ctx->pc = 0x24CAC0u;
    // 0x24cac0: 0x8c432354  lw          $v1, 0x2354($v0)
    ctx->pc = 0x24cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9044)));
    // 0x24cac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CAC4u;
    {
        const bool branch_taken_0x24cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAC4u;
        // 0x24cac8: 0x8c442358  lw          $a0, 0x2358($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cac4) {
            ctx->pc = 0x24CAD4u;
            goto label_24cad4;
        }
    }
    ctx->pc = 0x24CACCu;
label_24cacc:
    // 0x24cacc: 0x8c43235c  lw          $v1, 0x235C($v0)
    ctx->pc = 0x24caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9052)));
    // 0x24cad0: 0x8c442360  lw          $a0, 0x2360($v0)
    ctx->pc = 0x24cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9056)));
label_24cad4:
    // 0x24cad4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24cad4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cad8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24cad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24cadc:
    // 0x24cadc: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x24cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_24cae0:
    // 0x24cae0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24CAE0u;
    {
        const bool branch_taken_0x24cae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAE0u;
        // 0x24cae4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cae0) {
            ctx->pc = 0x24CB1Cu;
            goto label_24cb1c;
        }
    }
    ctx->pc = 0x24CAE8u;
    // 0x24cae8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CAE8u;
    SET_GPR_U32(ctx, 31, 0x24CAF0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CAE8u, 0x24CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAF0u;
label_24caf0:
    // 0x24caf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24caf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CAF4u;
    {
        const bool branch_taken_0x24caf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAF4u;
        // 0x24caf8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caf4) {
            ctx->pc = 0x24CB08u;
            goto label_24cb08;
        }
    }
    ctx->pc = 0x24CAFCu;
    // 0x24cafc: 0x8c430774  lw          $v1, 0x774($v0)
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1908)));
    // 0x24cb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CB00u;
    {
        const bool branch_taken_0x24cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB00u;
        // 0x24cb04: 0x8c440778  lw          $a0, 0x778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb00) {
            ctx->pc = 0x24CB10u;
            goto label_24cb10;
        }
    }
    ctx->pc = 0x24CB08u;
label_24cb08:
    // 0x24cb08: 0x8c43077c  lw          $v1, 0x77C($v0)
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
    // 0x24cb0c: 0x8c440780  lw          $a0, 0x780($v0)
    ctx->pc = 0x24cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_24cb10:
    // 0x24cb10: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24cb10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cb14: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24cb14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24cb18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_24cb1c:
    // 0x24cb1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb20: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24CB20u;
    SET_GPR_U32(ctx, 31, 0x24CB28u);
    ctx->pc = 0x24CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB20u;
    // 0x24cb24: 0x2450ee00  addiu       $s0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24CB20u, 0x24CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB28u;
label_24cb28:
    // 0x24cb28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24cb28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24cb2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24cb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb34: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24cb34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24cb38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24cb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cb3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24cb3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb40: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24CB40u;
    SET_GPR_U32(ctx, 31, 0x24CB48u);
    ctx->pc = 0x24CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB40u;
    // 0x24cb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24CB40u, 0x24CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB48u;
label_24cb48:
    // 0x24cb48: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24CB48u;
    SET_GPR_U32(ctx, 31, 0x24CB50u);
    ctx->pc = 0x24CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB48u;
    // 0x24cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24CB48u, 0x24CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB50u;
label_24cb50:
    // 0x24cb50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24cb54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb58: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24cb5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24cb5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24cb60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24cb64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24cb68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24cb6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb70: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24CB70u;
    SET_GPR_U32(ctx, 31, 0x24CB78u);
    ctx->pc = 0x24CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB70u;
    // 0x24cb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24CB70u, 0x24CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB78u;
label_24cb78:
    // 0x24cb78: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x24CB78u;
    SET_GPR_U32(ctx, 31, 0x24CB80u);
    ctx->pc = 0x24CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB78u;
    // 0x24cb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x24CB78u, 0x24CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB80u;
label_24cb80:
    // 0x24cb80: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24CB80u;
    SET_GPR_U32(ctx, 31, 0x24CB88u);
    ctx->pc = 0x24CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB80u;
    // 0x24cb84: 0xae2005f0  sw          $zero, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24CB80u, 0x24CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB88u;
label_24cb88:
    // 0x24cb88: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x24cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24cb8c: 0x262305d0  addiu       $v1, $s1, 0x5D0
    ctx->pc = 0x24cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x24cb90: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CB90u;
    {
        const bool branch_taken_0x24cb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cb90) {
            ctx->pc = 0x24CB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CB90u;
            // 0x24cb94: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CBB4u;
            goto label_24cbb4;
        }
    }
    ctx->pc = 0x24CB98u;
    // 0x24cb98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cb9c: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x24cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x24cba0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cba4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24cba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24cba8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24cbb0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x24cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_24cbb4:
    // 0x24cbb4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24CBB4u;
    {
        const bool branch_taken_0x24cbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBB4u;
        // 0x24cbb8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbb4) {
            ctx->pc = 0x24CBF4u;
            goto label_24cbf4;
        }
    }
    ctx->pc = 0x24CBBCu;
    // 0x24cbbc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x24cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x24cbc0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x24CBC0u;
    {
        const bool branch_taken_0x24cbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBC0u;
        // 0x24cbc4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbc0) {
            ctx->pc = 0x24CBF0u;
            goto label_24cbf0;
        }
    }
    ctx->pc = 0x24CBC8u;
    // 0x24cbc8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x24cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x24cbcc: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x24cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x24cbd0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CBD0u;
    {
        const bool branch_taken_0x24cbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cbd0) {
            ctx->pc = 0x24CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CBD0u;
            // 0x24cbd4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CBF4u;
            goto label_24cbf4;
        }
    }
    ctx->pc = 0x24CBD8u;
    // 0x24cbd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbdc: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x24cbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x24cbe0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cbe4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24cbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24cbe8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x24cbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_24cbf0:
    // 0x24cbf0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_24cbf4:
    // 0x24cbf4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24CBF4u;
    SET_GPR_U32(ctx, 31, 0x24CBFCu);
    ctx->pc = 0x24CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBF4u;
    // 0x24cbf8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24CBF4u, 0x24CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBFCu;
label_24cbfc:
    // 0x24cbfc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24cc00: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24cc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24cc04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CC04u;
    {
        const bool branch_taken_0x24cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC04u;
        // 0x24cc08: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc04) {
            ctx->pc = 0x24CC24u;
            goto label_24cc24;
        }
    }
    ctx->pc = 0x24CC0Cu;
    // 0x24cc0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24cc10: 0x2442dd40  addiu       $v0, $v0, -0x22C0
    ctx->pc = 0x24cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x24cc14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cc18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24cc1c: 0x800008  jr          $a0
    ctx->pc = 0x24CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CC24u: goto label_24cc24;
            case 0x24CC2Cu: goto label_24cc2c;
            case 0x24CC34u: goto label_24cc34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CC1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CC24u;
label_24cc24:
    // 0x24cc24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24CC24u;
    {
        const bool branch_taken_0x24cc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC24u;
        // 0x24cc28: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc24) {
            ctx->pc = 0x24CC38u;
            goto label_24cc38;
        }
    }
    ctx->pc = 0x24CC2Cu;
label_24cc2c:
    // 0x24cc2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CC2Cu;
    {
        const bool branch_taken_0x24cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC2Cu;
        // 0x24cc30: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc2c) {
            ctx->pc = 0x24CC38u;
            goto label_24cc38;
        }
    }
    ctx->pc = 0x24CC34u;
label_24cc34:
    // 0x24cc34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24cc38:
    // 0x24cc38: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x24cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x24cc3c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24cc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x24cc40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24CC40u;
    {
        const bool branch_taken_0x24cc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC40u;
        // 0x24cc44: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc40) {
            ctx->pc = 0x24CC4Cu;
            goto label_24cc4c;
        }
    }
    ctx->pc = 0x24CC48u;
    // 0x24cc48: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x24cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
label_24cc4c:
    // 0x24cc4c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x24cc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x24cc50: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x24cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24cc54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24cc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24cc58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24cc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24cc5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24cc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24cc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24cc64: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x24cc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x24cc68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24cc68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cc6c: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x24cc6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x24cc70: 0xe6220604  swc1        $f2, 0x604($s1)
    ctx->pc = 0x24cc70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x24cc74: 0xe6200608  swc1        $f0, 0x608($s1)
    ctx->pc = 0x24cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
    // 0x24cc78: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24cc7c:
    // 0x24cc7c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24cc80: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24cc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24cc84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CC84u;
    {
        const bool branch_taken_0x24cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC84u;
        // 0x24cc88: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc84) {
            ctx->pc = 0x24CC94u;
            goto label_24cc94;
        }
    }
    ctx->pc = 0x24CC8Cu;
    // 0x24cc8c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x24CC8Cu;
    {
        const bool branch_taken_0x24cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc8c) {
            ctx->pc = 0x24CC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CC8Cu;
            // 0x24cc90: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CCC8u;
            goto label_24ccc8;
        }
    }
    ctx->pc = 0x24CC94u;
label_24cc94:
    // 0x24cc94: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x24cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x24cc98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24CC98u;
    {
        const bool branch_taken_0x24cc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC98u;
        // 0x24cc9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc98) {
            ctx->pc = 0x24CCC4u;
            goto label_24ccc4;
        }
    }
    ctx->pc = 0x24CCA0u;
    // 0x24cca0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x24cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24cca4: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x24cca8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24cca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24ccac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ccacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ccb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccb4: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x24ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x24ccb8: 0x262505d0  addiu       $a1, $s1, 0x5D0
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x24ccbc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24CCBCu;
    SET_GPR_U32(ctx, 31, 0x24CCC4u);
    ctx->pc = 0x24CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCBCu;
    // 0x24ccc0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24CCBCu, 0x24CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCC4u;
label_24ccc4:
    // 0x24ccc4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x24ccc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_24ccc8:
    // 0x24ccc8: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x24ccc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x24cccc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x24ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x24ccd0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CCD0u;
    {
        const bool branch_taken_0x24ccd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCD0u;
        // 0x24ccd4: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccd0) {
            ctx->pc = 0x24CD20u;
            goto label_24cd20;
        }
    }
    ctx->pc = 0x24CCD8u;
    // 0x24ccd8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24CCD8u;
    SET_GPR_U32(ctx, 31, 0x24CCE0u);
    ctx->pc = 0x24CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCD8u;
    // 0x24ccdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24CCD8u, 0x24CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCE0u;
label_24cce0:
    // 0x24cce0: 0xc6200608  lwc1        $f0, 0x608($s1)
    ctx->pc = 0x24cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cce4: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x24cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cce8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24cce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24ccec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24ccecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24ccf0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24ccf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ccf4: 0x0  nop
    ctx->pc = 0x24ccf4u;
    // NOP
    // 0x24ccf8: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x24CCF8u;
    {
        const bool branch_taken_0x24ccf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCF8u;
        // 0x24ccfc: 0xe6200608  swc1        $f0, 0x608($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccf8) {
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CD00u;
    // 0x24cd00: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24CD00u;
    SET_GPR_U32(ctx, 31, 0x24CD08u);
    ctx->pc = 0x24CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD00u;
    // 0x24cd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24CD00u, 0x24CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD08u;
label_24cd08:
    // 0x24cd08: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24CD08u;
    {
        const bool branch_taken_0x24cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd08) {
            ctx->pc = 0x24CDACu;
            goto label_24cdac;
        }
    }
    ctx->pc = 0x24CD10u;
    // 0x24cd10: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24CD10u;
    SET_GPR_U32(ctx, 31, 0x24CD18u);
    ctx->pc = 0x24CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD10u;
    // 0x24cd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24CD10u, 0x24CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD18u;
label_24cd18:
    // 0x24cd18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24CD18u;
    {
        const bool branch_taken_0x24cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD18u;
        // 0x24cd1c: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd18) {
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CD20u;
label_24cd20:
    // 0x24cd20: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24CD20u;
    SET_GPR_U32(ctx, 31, 0x24CD28u);
    ctx->pc = 0x24CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD20u;
    // 0x24cd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24CD20u, 0x24CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD28u;
label_24cd28:
    // 0x24cd28: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24CD28u;
    {
        const bool branch_taken_0x24cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD28u;
        // 0x24cd2c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd28) {
            ctx->pc = 0x24CD6Cu;
            goto label_24cd6c;
        }
    }
    ctx->pc = 0x24CD30u;
    // 0x24cd30: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24cd34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24cd38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CD38u;
    {
        const bool branch_taken_0x24cd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD38u;
        // 0x24cd3c: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd38) {
            ctx->pc = 0x24CD4Cu;
            goto label_24cd4c;
        }
    }
    ctx->pc = 0x24CD40u;
    // 0x24cd40: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24cd44: 0x1062021a  beq         $v1, $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x24CD44u;
    {
        const bool branch_taken_0x24cd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cd44) {
            ctx->pc = 0x24D5B0u;
            goto label_24d5b0;
        }
    }
    ctx->pc = 0x24CD4Cu;
label_24cd4c:
    // 0x24cd4c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24CD4Cu;
    SET_GPR_U32(ctx, 31, 0x24CD54u);
    ctx->pc = 0x24CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD4Cu;
    // 0x24cd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24CD4Cu, 0x24CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD54u;
label_24cd54:
    // 0x24cd54: 0x14400216  bnez        $v0, . + 4 + (0x216 << 2)
    ctx->pc = 0x24CD54u;
    {
        const bool branch_taken_0x24cd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cd54) {
            ctx->pc = 0x24D5B0u;
            goto label_24d5b0;
        }
    }
    ctx->pc = 0x24CD5Cu;
    // 0x24cd5c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24CD5Cu;
    SET_GPR_U32(ctx, 31, 0x24CD64u);
    ctx->pc = 0x24CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD5Cu;
    // 0x24cd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24CD5Cu, 0x24CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD64u;
label_24cd64:
    // 0x24cd64: 0x1000033d  b           . + 4 + (0x33D << 2)
    ctx->pc = 0x24CD64u;
    {
        const bool branch_taken_0x24cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD64u;
        // 0x24cd68: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd64) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24CD6Cu;
label_24cd6c:
    // 0x24cd6c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24CD6Cu;
    SET_GPR_U32(ctx, 31, 0x24CD74u);
    ctx->pc = 0x24CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD6Cu;
    // 0x24cd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24CD6Cu, 0x24CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD74u;
label_24cd74:
    // 0x24cd74: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24CD74u;
    {
        const bool branch_taken_0x24cd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cd74) {
            ctx->pc = 0x24CD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CD74u;
            // 0x24cd78: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CD7Cu;
    // 0x24cd7c: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x24cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cd80: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x24cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cd84: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24cd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24cd88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24cd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24cd8c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24cd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cd90: 0x0  nop
    ctx->pc = 0x24cd90u;
    // NOP
    // 0x24cd94: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24CD94u;
    {
        const bool branch_taken_0x24cd94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD94u;
        // 0x24cd98: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd94) {
            ctx->pc = 0x24CDD4u;
            goto label_24cdd4;
        }
    }
    ctx->pc = 0x24CD9Cu;
    // 0x24cd9c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24cda0: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x24cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x24cda4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CDA4u;
    {
        const bool branch_taken_0x24cda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24cda4) {
            ctx->pc = 0x24CDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CDA4u;
            // 0x24cda8: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CDBCu;
            goto label_24cdbc;
        }
    }
    ctx->pc = 0x24CDACu;
label_24cdac:
    // 0x24cdac: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24CDACu;
    SET_GPR_U32(ctx, 31, 0x24CDB4u);
    ctx->pc = 0x24CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDACu;
    // 0x24cdb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24CDACu, 0x24CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDB4u;
label_24cdb4:
    // 0x24cdb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24CDB4u;
    {
        const bool branch_taken_0x24cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDB4u;
        // 0x24cdb8: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdb4) {
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CDBCu;
label_24cdbc:
    // 0x24cdbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24cdc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24cdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24cdc4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CDC4u;
    {
        const bool branch_taken_0x24cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cdc4) {
            ctx->pc = 0x24CDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CDC4u;
            // 0x24cdc8: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CDD8u;
            goto label_24cdd8;
        }
    }
    ctx->pc = 0x24CDCCu;
    // 0x24cdcc: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24CDCCu;
    SET_GPR_U32(ctx, 31, 0x24CDD4u);
    ctx->pc = 0x24CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDCCu;
    // 0x24cdd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24CDCCu, 0x24CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDD4u;
label_24cdd4:
    // 0x24cdd4: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24cdd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_24cdd8:
    // 0x24cdd8: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x24CDD8u;
    {
        const bool branch_taken_0x24cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cdd8) {
            ctx->pc = 0x24CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CDD8u;
            // 0x24cddc: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CFA4u;
            goto label_24cfa4;
        }
    }
    ctx->pc = 0x24CDE0u;
    // 0x24cde0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24cde4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24cde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24cde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cdec: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24CDECu;
    SET_GPR_U32(ctx, 31, 0x24CDF4u);
    ctx->pc = 0x24CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDECu;
    // 0x24cdf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24CDECu, 0x24CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDF4u;
label_24cdf4:
    // 0x24cdf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24cdf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24cdf8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24CDF8u;
    SET_GPR_U32(ctx, 31, 0x24CE00u);
    ctx->pc = 0x24CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDF8u;
    // 0x24cdfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24CDF8u, 0x24CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE00u;
label_24ce00:
    // 0x24ce00: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x24ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x24ce04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CE04u;
    {
        const bool branch_taken_0x24ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE04u;
        // 0x24ce08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce04) {
            ctx->pc = 0x24CE14u;
            goto label_24ce14;
        }
    }
    ctx->pc = 0x24CE0Cu;
    // 0x24ce0c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x24CE0Cu;
    {
        const bool branch_taken_0x24ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE0Cu;
        // 0x24ce10: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce0c) {
            ctx->pc = 0x24CFA0u;
            goto label_24cfa0;
        }
    }
    ctx->pc = 0x24CE14u;
label_24ce14:
    // 0x24ce14: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24CE14u;
    SET_GPR_U32(ctx, 31, 0x24CE1Cu);
    ctx->pc = 0x24CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE14u;
    // 0x24ce18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24CE14u, 0x24CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE1Cu;
label_24ce1c:
    // 0x24ce1c: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x24CE1Cu;
    {
        const bool branch_taken_0x24ce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ce1c) {
            ctx->pc = 0x24CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE1Cu;
            // 0x24ce20: 0xc6210604  lwc1        $f1, 0x604($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CFA4u;
            goto label_24cfa4;
        }
    }
    ctx->pc = 0x24CE24u;
    // 0x24ce24: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24ce28: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x24ce28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x24ce2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CE2Cu;
    {
        const bool branch_taken_0x24ce2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE2Cu;
        // 0x24ce30: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce2c) {
            ctx->pc = 0x24CE4Cu;
            goto label_24ce4c;
        }
    }
    ctx->pc = 0x24CE34u;
    // 0x24ce34: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24CE34u;
    {
        const bool branch_taken_0x24ce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE34u;
        // 0x24ce38: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce34) {
            ctx->pc = 0x24CEC8u;
            goto label_24cec8;
        }
    }
    ctx->pc = 0x24CE3Cu;
    // 0x24ce3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CE3Cu;
    {
        const bool branch_taken_0x24ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ce3c) {
            ctx->pc = 0x24CE60u;
            goto label_24ce60;
        }
    }
    ctx->pc = 0x24CE44u;
    // 0x24ce44: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x24CE44u;
    {
        const bool branch_taken_0x24ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce44) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CE4Cu;
label_24ce4c:
    // 0x24ce4c: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x24ce50: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24CE50u;
    {
        const bool branch_taken_0x24ce50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24ce50) {
            ctx->pc = 0x24CEC8u;
            goto label_24cec8;
        }
    }
    ctx->pc = 0x24CE58u;
    // 0x24ce58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24CE58u;
    {
        const bool branch_taken_0x24ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce58) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CE60u;
label_24ce60:
    // 0x24ce60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CE60u;
    SET_GPR_U32(ctx, 31, 0x24CE68u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CE60u, 0x24CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE68u;
label_24ce68:
    // 0x24ce68: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24ce6c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24CE6Cu;
    {
        const bool branch_taken_0x24ce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ce6c) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CE74u;
    // 0x24ce74: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x24ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ce78: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24ce7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ce7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ce80: 0x0  nop
    ctx->pc = 0x24ce80u;
    // NOP
    // 0x24ce84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ce88: 0x0  nop
    ctx->pc = 0x24ce88u;
    // NOP
    // 0x24ce8c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x24CE8Cu;
    {
        const bool branch_taken_0x24ce8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE8Cu;
        // 0x24ce90: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce8c) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CE94u;
    // 0x24ce94: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24ce94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24ce98: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x24CE98u;
    {
        const bool branch_taken_0x24ce98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ce98) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CEA0u;
    // 0x24cea0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CEA0u;
    SET_GPR_U32(ctx, 31, 0x24CEA8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CEA0u, 0x24CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEA8u;
label_24cea8:
    // 0x24cea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24ceac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24CEACu;
    {
        const bool branch_taken_0x24ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEACu;
        // 0x24ceb0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ceac) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CEB4u;
    // 0x24ceb4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x24ceb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ceb8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x24ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cebc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x24cebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24cec0: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x24CEC0u;
    {
        const bool branch_taken_0x24cec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEC0u;
        // 0x24cec4: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cec0) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24CEC8u;
label_24cec8:
    // 0x24cec8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CEC8u;
    SET_GPR_U32(ctx, 31, 0x24CED0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CEC8u, 0x24CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CED0u;
label_24ced0:
    // 0x24ced0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24ced4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24CED4u;
    {
        const bool branch_taken_0x24ced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ced4) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CEDCu;
    // 0x24cedc: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x24cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cee0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24cee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x24cee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24cee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cee8: 0x0  nop
    ctx->pc = 0x24cee8u;
    // NOP
    // 0x24ceec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ceecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cef0: 0x0  nop
    ctx->pc = 0x24cef0u;
    // NOP
    // 0x24cef4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24CEF4u;
    {
        const bool branch_taken_0x24cef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEF4u;
        // 0x24cef8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cef4) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CEFCu;
    // 0x24cefc: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24cefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24cf00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CF00u;
    {
        const bool branch_taken_0x24cf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF00u;
        // 0x24cf04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf00) {
            ctx->pc = 0x24CF18u;
            goto label_24cf18;
        }
    }
    ctx->pc = 0x24CF08u;
    // 0x24cf08: 0xc09a01a  jal         func_268068
    ctx->pc = 0x24CF08u;
    SET_GPR_U32(ctx, 31, 0x24CF10u);
    ctx->pc = 0x24CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF08u;
    // 0x24cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268068u, 0x24CF08u, 0x24CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF10u;
label_24cf10:
    // 0x24cf10: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x24CF10u;
    {
        const bool branch_taken_0x24cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF10u;
        // 0x24cf14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf10) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24CF18u;
label_24cf18:
    // 0x24cf18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24CF18u;
    SET_GPR_U32(ctx, 31, 0x24CF20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24CF18u, 0x24CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF20u;
label_24cf20:
    // 0x24cf20: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24cf24: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24cf24u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24cf28: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CF28u;
    {
        const bool branch_taken_0x24cf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf28) {
            ctx->pc = 0x24CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CF28u;
            // 0x24cf2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CF30u;
            goto label_24cf30;
        }
    }
    ctx->pc = 0x24CF30u;
label_24cf30:
    // 0x24cf30: 0x2010  mfhi        $a0
    ctx->pc = 0x24cf30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24cf34: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24CF34u;
    {
        const bool branch_taken_0x24cf34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cf34) {
            ctx->pc = 0x24CF90u;
            goto label_24cf90;
        }
    }
    ctx->pc = 0x24CF3Cu;
    // 0x24cf3c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x24cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cf40: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24cf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24cf44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24cf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cf48: 0x0  nop
    ctx->pc = 0x24cf48u;
    // NOP
    // 0x24cf4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24cf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cf50: 0x0  nop
    ctx->pc = 0x24cf50u;
    // NOP
    // 0x24cf54: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x24CF54u;
    {
        const bool branch_taken_0x24cf54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF54u;
        // 0x24cf58: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf54) {
            ctx->pc = 0x24CF90u;
            goto label_24cf90;
        }
    }
    ctx->pc = 0x24CF5Cu;
    // 0x24cf5c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24cf5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24cf60: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24CF60u;
    {
        const bool branch_taken_0x24cf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cf60) {
            ctx->pc = 0x24CF90u;
            goto label_24cf90;
        }
    }
    ctx->pc = 0x24CF68u;
    // 0x24cf68: 0x922217bb  lbu         $v0, 0x17BB($s1)
    ctx->pc = 0x24cf68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6075)));
    // 0x24cf6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CF6Cu;
    {
        const bool branch_taken_0x24cf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf6c) {
            ctx->pc = 0x24CF90u;
            goto label_24cf90;
        }
    }
    ctx->pc = 0x24CF74u;
    // 0x24cf74: 0xc6211740  lwc1        $f1, 0x1740($s1)
    ctx->pc = 0x24cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cf78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24cf78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24cf7c: 0x0  nop
    ctx->pc = 0x24cf7cu;
    // NOP
    // 0x24cf80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24cf80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cf84: 0x0  nop
    ctx->pc = 0x24cf84u;
    // NOP
    // 0x24cf88: 0x450101df  bc1t        . + 4 + (0x1DF << 2)
    ctx->pc = 0x24CF88u;
    {
        const bool branch_taken_0x24cf88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF88u;
        // 0x24cf8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf88) {
            ctx->pc = 0x24D708u;
            goto label_24d708;
        }
    }
    ctx->pc = 0x24CF90u;
label_24cf90:
    // 0x24cf90: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24CF90u;
    SET_GPR_U32(ctx, 31, 0x24CF98u);
    ctx->pc = 0x24CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF90u;
    // 0x24cf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24CF90u, 0x24CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF98u;
label_24cf98:
    // 0x24cf98: 0x144002b0  bnez        $v0, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x24CF98u;
    {
        const bool branch_taken_0x24cf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF98u;
        // 0x24cf9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf98) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24CFA0u;
label_24cfa0:
    // 0x24cfa0: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x24cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24cfa4:
    // 0x24cfa4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24cfa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24cfa8: 0x0  nop
    ctx->pc = 0x24cfa8u;
    // NOP
    // 0x24cfac: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x24cfacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cfb0: 0x0  nop
    ctx->pc = 0x24cfb0u;
    // NOP
    // 0x24cfb4: 0x450002a8  bc1f        . + 4 + (0x2A8 << 2)
    ctx->pc = 0x24CFB4u;
    {
        const bool branch_taken_0x24cfb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB4u;
        // 0x24cfb8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfb4) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24CFBCu;
    // 0x24cfbc: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24cfbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24cfc0: 0x146002a6  bnez        $v1, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x24CFC0u;
    {
        const bool branch_taken_0x24cfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFC0u;
        // 0x24cfc4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfc0) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24CFC8u;
    // 0x24cfc8: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24cfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x24cfcc: 0x544002a4  bnel        $v0, $zero, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x24CFCCu;
    {
        const bool branch_taken_0x24cfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cfcc) {
            ctx->pc = 0x24CFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CFCCu;
            // 0x24cfd0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA60u;
            goto label_24da60;
        }
    }
    ctx->pc = 0x24CFD4u;
    // 0x24cfd4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cfd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24cfd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24cfdc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24cfdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24cfe0: 0x0  nop
    ctx->pc = 0x24cfe0u;
    // NOP
    // 0x24cfe4: 0x4500029d  bc1f        . + 4 + (0x29D << 2)
    ctx->pc = 0x24CFE4u;
    {
        const bool branch_taken_0x24cfe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE4u;
        // 0x24cfe8: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfe4) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24CFECu;
    // 0x24cfec: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24cff0: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24cff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24cff4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24CFF4u;
    {
        const bool branch_taken_0x24cff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF4u;
        // 0x24cff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cff4) {
            ctx->pc = 0x24D020u;
            goto label_24d020;
        }
    }
    ctx->pc = 0x24CFFCu;
    // 0x24cffc: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x24cffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x24d000: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D000u;
    {
        const bool branch_taken_0x24d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D000u;
        // 0x24d004: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d000) {
            ctx->pc = 0x24D034u;
            goto label_24d034;
        }
    }
    ctx->pc = 0x24D008u;
    // 0x24d008: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D008u;
    {
        const bool branch_taken_0x24d008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D008u;
        // 0x24d00c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d008) {
            ctx->pc = 0x24D034u;
            goto label_24d034;
        }
    }
    ctx->pc = 0x24D010u;
    // 0x24d010: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D010u;
    {
        const bool branch_taken_0x24d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d010) {
            ctx->pc = 0x24D014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D010u;
            // 0x24d014: 0x922217c0  lbu         $v0, 0x17C0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D038u;
            goto label_24d038;
        }
    }
    ctx->pc = 0x24D018u;
    // 0x24d018: 0x10000290  b           . + 4 + (0x290 << 2)
    ctx->pc = 0x24D018u;
    {
        const bool branch_taken_0x24d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D018u;
        // 0x24d01c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d018) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D020u;
label_24d020:
    // 0x24d020: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x24d020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x24d024: 0x1040028c  beqz        $v0, . + 4 + (0x28C << 2)
    ctx->pc = 0x24D024u;
    {
        const bool branch_taken_0x24d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D024u;
        // 0x24d028: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d024) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D02Cu;
    // 0x24d02c: 0x5440028b  bnel        $v0, $zero, . + 4 + (0x28B << 2)
    ctx->pc = 0x24D02Cu;
    {
        const bool branch_taken_0x24d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d02c) {
            ctx->pc = 0x24D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D02Cu;
            // 0x24d030: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D034u;
label_24d034:
    // 0x24d034: 0x922217c0  lbu         $v0, 0x17C0($s1)
    ctx->pc = 0x24d034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6080)));
label_24d038:
    // 0x24d038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d03c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24d03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d040: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x24d040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d044: 0x14600284  bnez        $v1, . + 4 + (0x284 << 2)
    ctx->pc = 0x24D044u;
    {
        const bool branch_taken_0x24d044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D044u;
        // 0x24d048: 0xa22217c0  sb          $v0, 0x17C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6080), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d044) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D04Cu;
    // 0x24d04c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24d050: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24D050u;
    SET_GPR_U32(ctx, 31, 0x24D058u);
    ctx->pc = 0x24D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D050u;
    // 0x24d054: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24D050u, 0x24D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D058u;
label_24d058:
    // 0x24d058: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d05c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24d05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24d060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D060u;
    {
        const bool branch_taken_0x24d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D060u;
        // 0x24d064: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d060) {
            ctx->pc = 0x24D080u;
            goto label_24d080;
        }
    }
    ctx->pc = 0x24D068u;
    // 0x24d068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d06c: 0x2442dd60  addiu       $v0, $v0, -0x22A0
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x24d070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d078: 0x800008  jr          $a0
    ctx->pc = 0x24D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D080u: goto label_24d080;
            case 0x24D09Cu: goto label_24d09c;
            case 0x24D0B8u: goto label_24d0b8;
            case 0x24D0D4u: goto label_24d0d4;
            case 0x24D88Cu: goto label_24d88c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D080u;
label_24d080:
    // 0x24d080: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D080u;
    SET_GPR_U32(ctx, 31, 0x24D088u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D080u, 0x24D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D088u;
label_24d088:
    // 0x24d088: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24d088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24d08c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24d08cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24d090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d094: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x24D094u;
    {
        const bool branch_taken_0x24d094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d094) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D09Cu;
label_24d09c:
    // 0x24d09c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D09Cu;
    SET_GPR_U32(ctx, 31, 0x24D0A4u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D09Cu, 0x24D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0A4u;
label_24d0a4:
    // 0x24d0a4: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x24d0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x24d0a8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24d0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24d0ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d0b0: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x24D0B0u;
    {
        const bool branch_taken_0x24d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d0b0) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D0B8u;
label_24d0b8:
    // 0x24d0b8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D0B8u;
    SET_GPR_U32(ctx, 31, 0x24D0C0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D0B8u, 0x24D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0C0u;
label_24d0c0:
    // 0x24d0c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24d0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24d0c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d0cc: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x24D0CCu;
    {
        const bool branch_taken_0x24d0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d0cc) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D0D4u;
label_24d0d4:
    // 0x24d0d4: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D0D4u;
    SET_GPR_U32(ctx, 31, 0x24D0DCu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D0D4u, 0x24D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0DCu;
label_24d0dc:
    // 0x24d0dc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24d0e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d0e8: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x24D0E8u;
    {
        const bool branch_taken_0x24d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d0e8) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D0F0u;
label_24d0f0:
    // 0x24d0f0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24D0F0u;
    SET_GPR_U32(ctx, 31, 0x24D0F8u);
    ctx->pc = 0x24D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0F0u;
    // 0x24d0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24D0F0u, 0x24D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0F8u;
label_24d0f8:
    // 0x24d0f8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24d0fc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x24d0fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24d100: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x24d104: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x24d104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x24d108: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24D108u;
    {
        const bool branch_taken_0x24d108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D108u;
        // 0x24d10c: 0xae200608  sw          $zero, 0x608($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d108) {
            ctx->pc = 0x24D14Cu;
            goto label_24d14c;
        }
    }
    ctx->pc = 0x24D110u;
    // 0x24d110: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x24d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x24d114: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d118: 0x2442dd80  addiu       $v0, $v0, -0x2280
    ctx->pc = 0x24d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958464));
    // 0x24d11c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d124: 0x800008  jr          $a0
    ctx->pc = 0x24D124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D12Cu: goto label_24d12c;
            case 0x24D13Cu: goto label_24d13c;
            case 0x24D14Cu: goto label_24d14c;
            case 0x24D15Cu: goto label_24d15c;
            case 0x24D16Cu: goto label_24d16c;
            case 0x24D1C4u: goto label_24d1c4;
            case 0x24D1D4u: goto label_24d1d4;
            case 0x24D284u: goto label_24d284;
            case 0x24D344u: goto label_24d344;
            case 0x24D354u: goto label_24d354;
            case 0x24D364u: goto label_24d364;
            case 0x24D374u: goto label_24d374;
            case 0x24D384u: goto label_24d384;
            case 0x24D394u: goto label_24d394;
            case 0x24D3A4u: goto label_24d3a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D12Cu;
label_24d12c:
    // 0x24d12c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d130: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24d134: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x24D134u;
    {
        const bool branch_taken_0x24d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D134u;
        // 0x24d138: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d134) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D13Cu;
label_24d13c:
    // 0x24d13c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d140: 0x8c432bec  lw          $v1, 0x2BEC($v0)
    ctx->pc = 0x24d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11244)));
    // 0x24d144: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x24D144u;
    {
        const bool branch_taken_0x24d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D144u;
        // 0x24d148: 0x8c442bf0  lw          $a0, 0x2BF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d144) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D14Cu;
label_24d14c:
    // 0x24d14c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d150: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24d154: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x24D154u;
    {
        const bool branch_taken_0x24d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D154u;
        // 0x24d158: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d154) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D15Cu;
label_24d15c:
    // 0x24d15c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d160: 0x8c4309f0  lw          $v1, 0x9F0($v0)
    ctx->pc = 0x24d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2544)));
    // 0x24d164: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x24D164u;
    {
        const bool branch_taken_0x24d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D164u;
        // 0x24d168: 0x8c4409f4  lw          $a0, 0x9F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d164) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D16Cu;
label_24d16c:
    // 0x24d16c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d170: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x24d174: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x24d174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x24d178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d17c: 0x8c4609f0  lw          $a2, 0x9F0($v0)
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2544)));
    // 0x24d180: 0x8c4509f4  lw          $a1, 0x9F4($v0)
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2548)));
    // 0x24d184: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x24d184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24d188: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24D188u;
    SET_GPR_U32(ctx, 31, 0x24D190u);
    ctx->pc = 0x24D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D188u;
    // 0x24d18c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24D188u, 0x24D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D190u;
label_24d190:
    // 0x24d190: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x24d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x24d194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d198: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24d198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24d19c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d1a0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24d1a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24d1a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24d1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24d1acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24d1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24D1B4u;
    SET_GPR_U32(ctx, 31, 0x24D1BCu);
    ctx->pc = 0x24D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1B4u;
    // 0x24d1b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24D1B4u, 0x24D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1BCu;
label_24d1bc:
    // 0x24d1bc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x24D1BCu;
    {
        const bool branch_taken_0x24d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d1bc) {
            ctx->pc = 0x24D3B8u;
            goto label_24d3b8;
        }
    }
    ctx->pc = 0x24D1C4u;
label_24d1c4:
    // 0x24d1c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d1c8: 0x8c43314c  lw          $v1, 0x314C($v0)
    ctx->pc = 0x24d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12620)));
    // 0x24d1cc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x24D1CCu;
    {
        const bool branch_taken_0x24d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1CCu;
        // 0x24d1d0: 0x8c443150  lw          $a0, 0x3150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1cc) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D1D4u;
label_24d1d4:
    // 0x24d1d4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D1D4u;
    SET_GPR_U32(ctx, 31, 0x24D1DCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D1D4u, 0x24D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1DCu;
label_24d1dc:
    // 0x24d1dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d1e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d1e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d1e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d1e8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D1E8u;
    {
        const bool branch_taken_0x24d1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d1e8) {
            ctx->pc = 0x24D1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D1E8u;
            // 0x24d1ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D1F0u;
            goto label_24d1f0;
        }
    }
    ctx->pc = 0x24D1F0u;
label_24d1f0:
    // 0x24d1f0: 0x2810  mfhi        $a1
    ctx->pc = 0x24d1f0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24d1f4: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D1F4u;
    {
        const bool branch_taken_0x24d1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24d1f4) {
            ctx->pc = 0x24D1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D1F4u;
            // 0x24d1f8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D21Cu;
            goto label_24d21c;
        }
    }
    ctx->pc = 0x24D1FCu;
    // 0x24d1fc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D1FCu;
    {
        const bool branch_taken_0x24d1fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1FCu;
        // 0x24d200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1fc) {
            ctx->pc = 0x24D20Cu;
            goto label_24d20c;
        }
    }
    ctx->pc = 0x24D204u;
    // 0x24d204: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D204u;
    {
        const bool branch_taken_0x24d204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d204) {
            ctx->pc = 0x24D208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D204u;
            // 0x24d208: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D228u;
            goto label_24d228;
        }
    }
    ctx->pc = 0x24D20Cu;
label_24d20c:
    // 0x24d20c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d210: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x24d214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24D214u;
    {
        const bool branch_taken_0x24d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D214u;
        // 0x24d218: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d214) {
            ctx->pc = 0x24D230u;
            goto label_24d230;
        }
    }
    ctx->pc = 0x24D21Cu;
label_24d21c:
    // 0x24d21c: 0x8c433308  lw          $v1, 0x3308($v0)
    ctx->pc = 0x24d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13064)));
    // 0x24d220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24D220u;
    {
        const bool branch_taken_0x24d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D220u;
        // 0x24d224: 0x8c44330c  lw          $a0, 0x330C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d220) {
            ctx->pc = 0x24D230u;
            goto label_24d230;
        }
    }
    ctx->pc = 0x24D228u;
label_24d228:
    // 0x24d228: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x24d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x24d22c: 0x8c443314  lw          $a0, 0x3314($v0)
    ctx->pc = 0x24d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13076)));
label_24d230:
    // 0x24d230: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d234: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24d234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24d238: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24d23c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24d240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d244: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x24D244u;
    {
        const bool branch_taken_0x24d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D244u;
        // 0x24d248: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d244) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D24Cu;
    // 0x24d24c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D24Cu;
    SET_GPR_U32(ctx, 31, 0x24D254u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D24Cu, 0x24D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D254u;
label_24d254:
    // 0x24d254: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24d254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d258: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D258u;
    {
        const bool branch_taken_0x24d258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D258u;
        // 0x24d25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d258) {
            ctx->pc = 0x24D268u;
            goto label_24d268;
        }
    }
    ctx->pc = 0x24D260u;
    // 0x24d260: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D260u;
    {
        const bool branch_taken_0x24d260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d260) {
            ctx->pc = 0x24D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D260u;
            // 0x24d264: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D278u;
            goto label_24d278;
        }
    }
    ctx->pc = 0x24D268u;
label_24d268:
    // 0x24d268: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d26c: 0x8c433398  lw          $v1, 0x3398($v0)
    ctx->pc = 0x24d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13208)));
    // 0x24d270: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24D270u;
    {
        const bool branch_taken_0x24d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D270u;
        // 0x24d274: 0x8c44339c  lw          $a0, 0x339C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d270) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D278u;
label_24d278:
    // 0x24d278: 0x8c4333a0  lw          $v1, 0x33A0($v0)
    ctx->pc = 0x24d278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13216)));
    // 0x24d27c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24D27Cu;
    {
        const bool branch_taken_0x24d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D27Cu;
        // 0x24d280: 0x8c4433a4  lw          $a0, 0x33A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d27c) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D284u;
label_24d284:
    // 0x24d284: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24d288: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x24d288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x24d28c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d290: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24D290u;
    {
        const bool branch_taken_0x24d290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d290) {
            ctx->pc = 0x24D2D8u;
            goto label_24d2d8;
        }
    }
    ctx->pc = 0x24D298u;
    // 0x24d298: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D298u;
    SET_GPR_U32(ctx, 31, 0x24D2A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D298u, 0x24D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2A0u;
label_24d2a0:
    // 0x24d2a0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x24d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d2a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D2A4u;
    {
        const bool branch_taken_0x24d2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2A4u;
        // 0x24d2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2a4) {
            ctx->pc = 0x24D2B4u;
            goto label_24d2b4;
        }
    }
    ctx->pc = 0x24D2ACu;
    // 0x24d2ac: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D2ACu;
    {
        const bool branch_taken_0x24d2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d2ac) {
            ctx->pc = 0x24D2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D2ACu;
            // 0x24d2b0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D2C4u;
            goto label_24d2c4;
        }
    }
    ctx->pc = 0x24D2B4u;
label_24d2b4:
    // 0x24d2b4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d2b8: 0x8c433938  lw          $v1, 0x3938($v0)
    ctx->pc = 0x24d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14648)));
    // 0x24d2bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24D2BCu;
    {
        const bool branch_taken_0x24d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2BCu;
        // 0x24d2c0: 0x8c44393c  lw          $a0, 0x393C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2bc) {
            ctx->pc = 0x24D2CCu;
            goto label_24d2cc;
        }
    }
    ctx->pc = 0x24D2C4u;
label_24d2c4:
    // 0x24d2c4: 0x8c433940  lw          $v1, 0x3940($v0)
    ctx->pc = 0x24d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14656)));
    // 0x24d2c8: 0x8c443944  lw          $a0, 0x3944($v0)
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14660)));
label_24d2cc:
    // 0x24d2cc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d2d0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x24D2D0u;
    {
        const bool branch_taken_0x24d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D0u;
        // 0x24d2d4: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2d0) {
            ctx->pc = 0x24D3DCu;
            goto label_24d3dc;
        }
    }
    ctx->pc = 0x24D2D8u;
label_24d2d8:
    // 0x24d2d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D2D8u;
    SET_GPR_U32(ctx, 31, 0x24D2E0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D2D8u, 0x24D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2E0u;
label_24d2e0:
    // 0x24d2e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d2e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D2E4u;
    {
        const bool branch_taken_0x24d2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2E4u;
        // 0x24d2e8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2e4) {
            ctx->pc = 0x24D318u;
            goto label_24d318;
        }
    }
    ctx->pc = 0x24D2ECu;
    // 0x24d2ec: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x24d2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x24d2f0: 0x8c433898  lw          $v1, 0x3898($v0)
    ctx->pc = 0x24d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14488)));
    // 0x24d2f4: 0x8c44389c  lw          $a0, 0x389C($v0)
    ctx->pc = 0x24d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14492)));
    // 0x24d2f8: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d2fc: 0x10e00037  beqz        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x24D2FCu;
    {
        const bool branch_taken_0x24d2fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2FCu;
        // 0x24d300: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2fc) {
            ctx->pc = 0x24D3DCu;
            goto label_24d3dc;
        }
    }
    ctx->pc = 0x24D304u;
    // 0x24d304: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24d304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d308: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24D308u;
    SET_GPR_U32(ctx, 31, 0x24D310u);
    ctx->pc = 0x24D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D308u;
    // 0x24d30c: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24D308u, 0x24D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D310u;
label_24d310:
    // 0x24d310: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x24D310u;
    {
        const bool branch_taken_0x24d310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D310u;
        // 0x24d314: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d310) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D318u;
label_24d318:
    // 0x24d318: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x24d318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x24d31c: 0x8c4338a0  lw          $v1, 0x38A0($v0)
    ctx->pc = 0x24d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14496)));
    // 0x24d320: 0x8c4438a4  lw          $a0, 0x38A4($v0)
    ctx->pc = 0x24d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14500)));
    // 0x24d324: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d328: 0x10e0002c  beqz        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x24D328u;
    {
        const bool branch_taken_0x24d328 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D328u;
        // 0x24d32c: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d328) {
            ctx->pc = 0x24D3DCu;
            goto label_24d3dc;
        }
    }
    ctx->pc = 0x24D330u;
    // 0x24d330: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x24d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d334: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x24D334u;
    SET_GPR_U32(ctx, 31, 0x24D33Cu);
    ctx->pc = 0x24D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D334u;
    // 0x24d338: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x24D334u, 0x24D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D33Cu;
label_24d33c:
    // 0x24d33c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x24D33Cu;
    {
        const bool branch_taken_0x24d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D33Cu;
        // 0x24d340: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d33c) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D344u;
label_24d344:
    // 0x24d344: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d348: 0x8c4316a8  lw          $v1, 0x16A8($v0)
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5800)));
    // 0x24d34c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24D34Cu;
    {
        const bool branch_taken_0x24d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D34Cu;
        // 0x24d350: 0x8c4416ac  lw          $a0, 0x16AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d34c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D354u;
label_24d354:
    // 0x24d354: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d358: 0x8c433aac  lw          $v1, 0x3AAC($v0)
    ctx->pc = 0x24d358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15020)));
    // 0x24d35c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24D35Cu;
    {
        const bool branch_taken_0x24d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D35Cu;
        // 0x24d360: 0x8c443ab0  lw          $a0, 0x3AB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d35c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D364u;
label_24d364:
    // 0x24d364: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d368: 0x8c4316a8  lw          $v1, 0x16A8($v0)
    ctx->pc = 0x24d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5800)));
    // 0x24d36c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24D36Cu;
    {
        const bool branch_taken_0x24d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D36Cu;
        // 0x24d370: 0x8c4416ac  lw          $a0, 0x16AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d36c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D374u;
label_24d374:
    // 0x24d374: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d378: 0x8c430540  lw          $v1, 0x540($v0)
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1344)));
    // 0x24d37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24D37Cu;
    {
        const bool branch_taken_0x24d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D37Cu;
        // 0x24d380: 0x8c440544  lw          $a0, 0x544($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d37c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D384u;
label_24d384:
    // 0x24d384: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d388: 0x8c432eb4  lw          $v1, 0x2EB4($v0)
    ctx->pc = 0x24d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11956)));
    // 0x24d38c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D38Cu;
    {
        const bool branch_taken_0x24d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D38Cu;
        // 0x24d390: 0x8c442eb8  lw          $a0, 0x2EB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d38c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D394u;
label_24d394:
    // 0x24d394: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d398: 0x8c431268  lw          $v1, 0x1268($v0)
    ctx->pc = 0x24d398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
    // 0x24d39c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24D39Cu;
    {
        const bool branch_taken_0x24d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D39Cu;
        // 0x24d3a0: 0x8c44126c  lw          $a0, 0x126C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d39c) {
            ctx->pc = 0x24D3B0u;
            goto label_24d3b0;
        }
    }
    ctx->pc = 0x24D3A4u;
label_24d3a4:
    // 0x24d3a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d3a8: 0x8c43236c  lw          $v1, 0x236C($v0)
    ctx->pc = 0x24d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9068)));
    // 0x24d3ac: 0x8c442370  lw          $a0, 0x2370($v0)
    ctx->pc = 0x24d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9072)));
label_24d3b0:
    // 0x24d3b0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d3b4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x24d3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24d3b8:
    // 0x24d3b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D3B8u;
    SET_GPR_U32(ctx, 31, 0x24D3C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D3B8u, 0x24D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3C0u;
label_24d3c0:
    // 0x24d3c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x24d3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x24d3c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D3C4u;
    {
        const bool branch_taken_0x24d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3C4u;
        // 0x24d3c8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3c4) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D3CCu;
    // 0x24d3cc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24d3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24d3d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24d3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24d3d4: 0x0  nop
    ctx->pc = 0x24d3d4u;
    // NOP
    // 0x24d3d8: 0xe6340608  swc1        $f20, 0x608($s1)
    ctx->pc = 0x24d3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
label_24d3dc:
    // 0x24d3dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_24d3e0:
    // 0x24d3e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24d3e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24d3e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24d3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3ec: 0x36880040  ori         $t0, $s4, 0x40
    ctx->pc = 0x24d3ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
    // 0x24d3f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24d3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d3f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24d3f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3f8: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x24d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x24d3fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24D3FCu;
    SET_GPR_U32(ctx, 31, 0x24D404u);
    ctx->pc = 0x24D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3FCu;
    // 0x24d400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24D3FCu, 0x24D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D404u;
label_24d404:
    // 0x24d404: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24D404u;
    SET_GPR_U32(ctx, 31, 0x24D40Cu);
    ctx->pc = 0x24D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D404u;
    // 0x24d408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24D404u, 0x24D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D40Cu;
label_24d40c:
    // 0x24d40c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24d410: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d414: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24d414u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24d418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24d418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d41c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d41cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24d420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d424: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24d424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d428: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24d428u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d42c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24D42Cu;
    SET_GPR_U32(ctx, 31, 0x24D434u);
    ctx->pc = 0x24D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D42Cu;
    // 0x24d430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24D42Cu, 0x24D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D434u;
label_24d434:
    // 0x24d434: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x24D434u;
    SET_GPR_U32(ctx, 31, 0x24D43Cu);
    ctx->pc = 0x24D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D434u;
    // 0x24d438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x24D434u, 0x24D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D43Cu;
label_24d43c:
    // 0x24d43c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24d440: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24D440u;
    SET_GPR_U32(ctx, 31, 0x24D448u);
    ctx->pc = 0x24D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D440u;
    // 0x24d444: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24D440u, 0x24D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D448u;
label_24d448:
    // 0x24d448: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d44c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24d44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24d450: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D450u;
    {
        const bool branch_taken_0x24d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D450u;
        // 0x24d454: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d450) {
            ctx->pc = 0x24D470u;
            goto label_24d470;
        }
    }
    ctx->pc = 0x24D458u;
    // 0x24d458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d45c: 0x2442df80  addiu       $v0, $v0, -0x2080
    ctx->pc = 0x24d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
    // 0x24d460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d464: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d468: 0x800008  jr          $a0
    ctx->pc = 0x24D468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D470u: goto label_24d470;
            case 0x24D494u: goto label_24d494;
            case 0x24D4B8u: goto label_24d4b8;
            case 0x24D4DCu: goto label_24d4dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D470u;
    SET_GPR_U32(ctx, 31, 0x24D478u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D470u, 0x24D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D478u;
label_24d478:
    // 0x24d478: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24d47c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d47cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d480: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D480u;
    {
        const bool branch_taken_0x24d480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d480) {
            ctx->pc = 0x24D484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D480u;
            // 0x24d484: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D488u;
            goto label_24d488;
        }
    }
    ctx->pc = 0x24D488u;
label_24d488:
    // 0x24d488: 0x2010  mfhi        $a0
    ctx->pc = 0x24d488u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d48c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24D48Cu;
    {
        const bool branch_taken_0x24d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D48Cu;
        // 0x24d490: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d48c) {
            ctx->pc = 0x24D4FCu;
            goto label_24d4fc;
        }
    }
    ctx->pc = 0x24D494u;
label_24d494:
    // 0x24d494: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D494u;
    SET_GPR_U32(ctx, 31, 0x24D49Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D494u, 0x24D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D49Cu;
label_24d49c:
    // 0x24d49c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24d4a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d4a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d4a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D4A4u;
    {
        const bool branch_taken_0x24d4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d4a4) {
            ctx->pc = 0x24D4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D4A4u;
            // 0x24d4a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D4ACu;
            goto label_24d4ac;
        }
    }
    ctx->pc = 0x24D4ACu;
label_24d4ac:
    // 0x24d4ac: 0x2010  mfhi        $a0
    ctx->pc = 0x24d4acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d4b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24D4B0u;
    {
        const bool branch_taken_0x24d4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4B0u;
        // 0x24d4b4: 0x2484002d  addiu       $a0, $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4b0) {
            ctx->pc = 0x24D4FCu;
            goto label_24d4fc;
        }
    }
    ctx->pc = 0x24D4B8u;
label_24d4b8:
    // 0x24d4b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D4B8u;
    SET_GPR_U32(ctx, 31, 0x24D4C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D4B8u, 0x24D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4C0u;
label_24d4c0:
    // 0x24d4c0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24d4c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d4c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d4c8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D4C8u;
    {
        const bool branch_taken_0x24d4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d4c8) {
            ctx->pc = 0x24D4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D4C8u;
            // 0x24d4cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D4D0u;
            goto label_24d4d0;
        }
    }
    ctx->pc = 0x24D4D0u;
label_24d4d0:
    // 0x24d4d0: 0x2010  mfhi        $a0
    ctx->pc = 0x24d4d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d4d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24D4D4u;
    {
        const bool branch_taken_0x24d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4D4u;
        // 0x24d4d8: 0x2484001e  addiu       $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4d4) {
            ctx->pc = 0x24D4FCu;
            goto label_24d4fc;
        }
    }
    ctx->pc = 0x24D4DCu;
label_24d4dc:
    // 0x24d4dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D4DCu;
    SET_GPR_U32(ctx, 31, 0x24D4E4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D4DCu, 0x24D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4E4u;
label_24d4e4:
    // 0x24d4e4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x24d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x24d4e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d4e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d4ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D4ECu;
    {
        const bool branch_taken_0x24d4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d4ec) {
            ctx->pc = 0x24D4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D4ECu;
            // 0x24d4f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D4F4u;
            goto label_24d4f4;
        }
    }
    ctx->pc = 0x24D4F4u;
label_24d4f4:
    // 0x24d4f4: 0x2010  mfhi        $a0
    ctx->pc = 0x24d4f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d4f8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x24d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_24d4fc:
    // 0x24d4fc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x24D4FCu;
    SET_GPR_U32(ctx, 31, 0x24D504u);
    ctx->pc = 0x24D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4FCu;
    // 0x24d500: 0xae2405f4  sw          $a0, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x24D4FCu, 0x24D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D504u;
label_24d504:
    // 0x24d504: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x24d504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x24d508: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x24d508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x24d50c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24d50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24d510: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x24d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d514: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24d514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24d518: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24d518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24d51c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x24d51cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x24d520: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x24D520u;
    SET_GPR_U32(ctx, 31, 0x24D528u);
    ctx->pc = 0x24D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D520u;
    // 0x24d524: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x24D520u, 0x24D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D528u;
label_24d528:
    // 0x24d528: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x24d528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x24d52c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24d530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d534: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24d534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24d538: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24d538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24d53c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d540: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x24d540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x24d544: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x24d544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x24d548: 0xe6220604  swc1        $f2, 0x604($s1)
    ctx->pc = 0x24d548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
    // 0x24d54c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24d54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24d550:
    // 0x24d550: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x24d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d558: 0x0  nop
    ctx->pc = 0x24d558u;
    // NOP
    // 0x24d55c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d560: 0x0  nop
    ctx->pc = 0x24d560u;
    // NOP
    // 0x24d564: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24D564u;
    {
        const bool branch_taken_0x24d564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D564u;
        // 0x24d568: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d564) {
            ctx->pc = 0x24D584u;
            goto label_24d584;
        }
    }
    ctx->pc = 0x24D56Cu;
    // 0x24d56c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d570: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x24d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x24d574: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d57c: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x24d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x24d580: 0xe6200608  swc1        $f0, 0x608($s1)
    ctx->pc = 0x24d580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1544), bits); }
label_24d584:
    // 0x24d584: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24D584u;
    SET_GPR_U32(ctx, 31, 0x24D58Cu);
    ctx->pc = 0x24D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D584u;
    // 0x24d588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24D584u, 0x24D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D58Cu;
label_24d58c:
    // 0x24d58c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24D58Cu;
    {
        const bool branch_taken_0x24d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D58Cu;
        // 0x24d590: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d58c) {
            ctx->pc = 0x24D5E8u;
            goto label_24d5e8;
        }
    }
    ctx->pc = 0x24D594u;
    // 0x24d594: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x24d598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d59c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D59Cu;
    {
        const bool branch_taken_0x24d59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x24020264  addiu       $v0, $zero, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d59c) {
            ctx->pc = 0x24D5C0u;
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D5A4u;
    // 0x24d5a4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24d5a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24D5C0u;
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D5B0u;
label_24d5b0:
    // 0x24d5b0: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24D5B0u;
    SET_GPR_U32(ctx, 31, 0x24D5B8u);
    ctx->pc = 0x24D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5B0u;
    // 0x24d5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24D5B0u, 0x24D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5B8u;
label_24d5b8:
    // 0x24d5b8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x24D5B8u;
    {
        const bool branch_taken_0x24d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B8u;
        // 0x24d5bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5b8) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D5C0u;
label_24d5c0:
    // 0x24d5c0: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24D5C0u;
    SET_GPR_U32(ctx, 31, 0x24D5C8u);
    ctx->pc = 0x24D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5C0u;
    // 0x24d5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24D5C0u, 0x24D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5C8u;
label_24d5c8:
    // 0x24d5c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D5C8u;
    {
        const bool branch_taken_0x24d5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d5c8) {
            ctx->pc = 0x24D5E0u;
            goto label_24d5e0;
        }
    }
    ctx->pc = 0x24D5D0u;
    // 0x24d5d0: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24D5D0u;
    SET_GPR_U32(ctx, 31, 0x24D5D8u);
    ctx->pc = 0x24D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5D0u;
    // 0x24d5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24D5D0u, 0x24D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5D8u;
label_24d5d8:
    // 0x24d5d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24D5D8u;
    {
        const bool branch_taken_0x24d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5D8u;
        // 0x24d5dc: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5d8) {
            ctx->pc = 0x24D5ECu;
            goto label_24d5ec;
        }
    }
    ctx->pc = 0x24D5E0u;
label_24d5e0:
    // 0x24d5e0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24D5E0u;
    SET_GPR_U32(ctx, 31, 0x24D5E8u);
    ctx->pc = 0x24D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5E0u;
    // 0x24d5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24D5E0u, 0x24D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5E8u;
label_24d5e8:
    // 0x24d5e8: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x24d5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_24d5ec:
    // 0x24d5ec: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x24D5ECu;
    {
        const bool branch_taken_0x24d5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d5ec) {
            ctx->pc = 0x24D5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D5ECu;
            // 0x24d5f0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D660u;
            goto label_24d660;
        }
    }
    ctx->pc = 0x24D5F4u;
    // 0x24d5f4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24D5F4u;
    SET_GPR_U32(ctx, 31, 0x24D5FCu);
    ctx->pc = 0x24D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D5F4u;
    // 0x24d5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24D5F4u, 0x24D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D5FCu;
label_24d5fc:
    // 0x24d5fc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x24D5FCu;
    {
        const bool branch_taken_0x24d5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d5fc) {
            ctx->pc = 0x24D600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D5FCu;
            // 0x24d600: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D660u;
            goto label_24d660;
        }
    }
    ctx->pc = 0x24D604u;
    // 0x24d604: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x24d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d608: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x24d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d60c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24d60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24d610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24d610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24d614: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24d614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d618: 0x0  nop
    ctx->pc = 0x24d618u;
    // NOP
    // 0x24d61c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24D61Cu;
    {
        const bool branch_taken_0x24d61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D61Cu;
        // 0x24d620: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d61c) {
            ctx->pc = 0x24D65Cu;
            goto label_24d65c;
        }
    }
    ctx->pc = 0x24D624u;
    // 0x24d624: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24d628: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x24d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x24d62c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D62Cu;
    {
        const bool branch_taken_0x24d62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d62c) {
            ctx->pc = 0x24D630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D62Cu;
            // 0x24d630: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D644u;
            goto label_24d644;
        }
    }
    ctx->pc = 0x24D634u;
    // 0x24d634: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24D634u;
    SET_GPR_U32(ctx, 31, 0x24D63Cu);
    ctx->pc = 0x24D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D634u;
    // 0x24d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24D634u, 0x24D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D63Cu;
label_24d63c:
    // 0x24d63c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D63Cu;
    {
        const bool branch_taken_0x24d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D63Cu;
        // 0x24d640: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d63c) {
            ctx->pc = 0x24D660u;
            goto label_24d660;
        }
    }
    ctx->pc = 0x24D644u;
label_24d644:
    // 0x24d644: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24d644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24d648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24d64c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24D64Cu;
    {
        const bool branch_taken_0x24d64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d64c) {
            ctx->pc = 0x24D650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D64Cu;
            // 0x24d650: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D660u;
            goto label_24d660;
        }
    }
    ctx->pc = 0x24D654u;
    // 0x24d654: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24D654u;
    SET_GPR_U32(ctx, 31, 0x24D65Cu);
    ctx->pc = 0x24D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D654u;
    // 0x24d658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24D654u, 0x24D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D65Cu;
label_24d65c:
    // 0x24d65c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x24d65cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_24d660:
    // 0x24d660: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24d664: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D664u;
    {
        const bool branch_taken_0x24d664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d664) {
            ctx->pc = 0x24D668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D664u;
            // 0x24d668: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D66Cu;
            goto label_24d66c;
        }
    }
    ctx->pc = 0x24D66Cu;
label_24d66c:
    // 0x24d66c: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x24d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x24d670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D670u;
    {
        const bool branch_taken_0x24d670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D670u;
        // 0x24d674: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d670) {
            ctx->pc = 0x24D680u;
            goto label_24d680;
        }
    }
    ctx->pc = 0x24D678u;
    // 0x24d678: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x24D678u;
    {
        const bool branch_taken_0x24d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D678u;
        // 0x24d67c: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d678) {
            ctx->pc = 0x24D728u;
            goto label_24d728;
        }
    }
    ctx->pc = 0x24D680u;
label_24d680:
    // 0x24d680: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24D680u;
    SET_GPR_U32(ctx, 31, 0x24D688u);
    ctx->pc = 0x24D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D680u;
    // 0x24d684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24D680u, 0x24D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D688u;
label_24d688:
    // 0x24d688: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x24D688u;
    {
        const bool branch_taken_0x24d688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d688) {
            ctx->pc = 0x24D728u;
            goto label_24d728;
        }
    }
    ctx->pc = 0x24D690u;
    // 0x24d690: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24D690u;
    SET_GPR_U32(ctx, 31, 0x24D698u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24D690u, 0x24D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D698u;
label_24d698:
    // 0x24d698: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24d69c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x24d69cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x24d6a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D6A0u;
    {
        const bool branch_taken_0x24d6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d6a0) {
            ctx->pc = 0x24D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D6A0u;
            // 0x24d6a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D6A8u;
            goto label_24d6a8;
        }
    }
    ctx->pc = 0x24D6A8u;
label_24d6a8:
    // 0x24d6a8: 0x2010  mfhi        $a0
    ctx->pc = 0x24d6a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d6ac: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24D6ACu;
    {
        const bool branch_taken_0x24d6ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d6ac) {
            ctx->pc = 0x24D718u;
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D6B4u;
    // 0x24d6b4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x24d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6b8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24d6bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24d6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d6c0: 0x0  nop
    ctx->pc = 0x24d6c0u;
    // NOP
    // 0x24d6c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24d6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d6c8: 0x0  nop
    ctx->pc = 0x24d6c8u;
    // NOP
    // 0x24d6cc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x24D6CCu;
    {
        const bool branch_taken_0x24d6cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6CCu;
        // 0x24d6d0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6cc) {
            ctx->pc = 0x24D718u;
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D6D4u;
    // 0x24d6d4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24d6d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24d6d8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24D6D8u;
    {
        const bool branch_taken_0x24d6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d6d8) {
            ctx->pc = 0x24D718u;
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D6E0u;
    // 0x24d6e0: 0x922217bb  lbu         $v0, 0x17BB($s1)
    ctx->pc = 0x24d6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6075)));
    // 0x24d6e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D6E4u;
    {
        const bool branch_taken_0x24d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d6e4) {
            ctx->pc = 0x24D718u;
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D6ECu;
    // 0x24d6ec: 0xc6211740  lwc1        $f1, 0x1740($s1)
    ctx->pc = 0x24d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d6f4: 0x0  nop
    ctx->pc = 0x24d6f4u;
    // NOP
    // 0x24d6f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24d6f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d6fc: 0x0  nop
    ctx->pc = 0x24d6fcu;
    // NOP
    // 0x24d700: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D700u;
    {
        const bool branch_taken_0x24d700 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D700u;
        // 0x24d704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d700) {
            ctx->pc = 0x24D718u;
            goto label_24d718;
        }
    }
    ctx->pc = 0x24D708u;
label_24d708:
    // 0x24d708: 0xc09d08e  jal         func_274238
    ctx->pc = 0x24D708u;
    SET_GPR_U32(ctx, 31, 0x24D710u);
    ctx->pc = 0x24D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D708u;
    // 0x24d70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x24D708u, 0x24D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D710u;
label_24d710:
    // 0x24d710: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x24D710u;
    {
        const bool branch_taken_0x24d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D710u;
        // 0x24d714: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d710) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D718u;
label_24d718:
    // 0x24d718: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24D718u;
    SET_GPR_U32(ctx, 31, 0x24D720u);
    ctx->pc = 0x24D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D718u;
    // 0x24d71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24D718u, 0x24D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D720u;
label_24d720:
    // 0x24d720: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x24D720u;
    {
        const bool branch_taken_0x24d720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D720u;
        // 0x24d724: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d720) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D728u;
label_24d728:
    // 0x24d728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24d728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24d72c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24d72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24d730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d734: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24D734u;
    SET_GPR_U32(ctx, 31, 0x24D73Cu);
    ctx->pc = 0x24D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D734u;
    // 0x24d738: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24D734u, 0x24D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D73Cu;
label_24d73c:
    // 0x24d73c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24d73cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24d740: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24D740u;
    SET_GPR_U32(ctx, 31, 0x24D748u);
    ctx->pc = 0x24D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D740u;
    // 0x24d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24D740u, 0x24D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D748u;
label_24d748:
    // 0x24d748: 0xc6210604  lwc1        $f1, 0x604($s1)
    ctx->pc = 0x24d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d74c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24d74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24d750: 0x0  nop
    ctx->pc = 0x24d750u;
    // NOP
    // 0x24d754: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x24d754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d758: 0x0  nop
    ctx->pc = 0x24d758u;
    // NOP
    // 0x24d75c: 0x450000be  bc1f        . + 4 + (0xBE << 2)
    ctx->pc = 0x24D75Cu;
    {
        const bool branch_taken_0x24d75c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D75Cu;
        // 0x24d760: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d75c) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D764u;
    // 0x24d764: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x24d764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x24d768: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x24D768u;
    {
        const bool branch_taken_0x24d768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D768u;
        // 0x24d76c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d768) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D770u;
    // 0x24d770: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d774: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d778: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24d778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d77c: 0x0  nop
    ctx->pc = 0x24d77cu;
    // NOP
    // 0x24d780: 0x450000b6  bc1f        . + 4 + (0xB6 << 2)
    ctx->pc = 0x24D780u;
    {
        const bool branch_taken_0x24d780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D780u;
        // 0x24d784: 0xe6200604  swc1        $f0, 0x604($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d780) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D788u;
    // 0x24d788: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24d78c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x24d78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x24d790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D790u;
    {
        const bool branch_taken_0x24d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D790u;
        // 0x24d794: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d790) {
            ctx->pc = 0x24D7BCu;
            goto label_24d7bc;
        }
    }
    ctx->pc = 0x24D798u;
    // 0x24d798: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x24d798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x24d79c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24D79Cu;
    {
        const bool branch_taken_0x24d79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D79Cu;
        // 0x24d7a0: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d79c) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D7A4u;
    // 0x24d7a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24D7A4u;
    {
        const bool branch_taken_0x24d7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A4u;
        // 0x24d7a8: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7a4) {
            ctx->pc = 0x24D7D0u;
            goto label_24d7d0;
        }
    }
    ctx->pc = 0x24D7ACu;
    // 0x24d7ac: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D7ACu;
    {
        const bool branch_taken_0x24d7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d7ac) {
            ctx->pc = 0x24D7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D7ACu;
            // 0x24d7b0: 0x922217c0  lbu         $v0, 0x17C0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D7D4u;
            goto label_24d7d4;
        }
    }
    ctx->pc = 0x24D7B4u;
    // 0x24d7b4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x24D7B4u;
    {
        const bool branch_taken_0x24d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7B4u;
        // 0x24d7b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7b4) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D7BCu;
label_24d7bc:
    // 0x24d7bc: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x24d7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x24d7c0: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x24D7C0u;
    {
        const bool branch_taken_0x24d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7C0u;
        // 0x24d7c4: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7c0) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D7C8u;
    // 0x24d7c8: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x24D7C8u;
    {
        const bool branch_taken_0x24d7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d7c8) {
            ctx->pc = 0x24D7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D7C8u;
            // 0x24d7cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D7D0u;
label_24d7d0:
    // 0x24d7d0: 0x922217c0  lbu         $v0, 0x17C0($s1)
    ctx->pc = 0x24d7d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6080)));
label_24d7d4:
    // 0x24d7d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d7d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24d7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d7dc: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x24d7dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d7e0: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x24D7E0u;
    {
        const bool branch_taken_0x24d7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E0u;
        // 0x24d7e4: 0xa22217c0  sb          $v0, 0x17C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6080), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7e0) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D7E8u;
    // 0x24d7e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24d7ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x24D7ECu;
    SET_GPR_U32(ctx, 31, 0x24D7F4u);
    ctx->pc = 0x24D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7ECu;
    // 0x24d7f0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x24D7ECu, 0x24D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D7F4u;
label_24d7f4:
    // 0x24d7f4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d7f8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24d7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24d7fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D7FCu;
    {
        const bool branch_taken_0x24d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7FCu;
        // 0x24d800: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7fc) {
            ctx->pc = 0x24D81Cu;
            goto label_24d81c;
        }
    }
    ctx->pc = 0x24D804u;
    // 0x24d804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d808: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
    // 0x24d80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d814: 0x800008  jr          $a0
    ctx->pc = 0x24D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D81Cu: goto label_24d81c;
            case 0x24D838u: goto label_24d838;
            case 0x24D854u: goto label_24d854;
            case 0x24D870u: goto label_24d870;
            case 0x24D88Cu: goto label_24d88c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D81Cu;
label_24d81c:
    // 0x24d81c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D81Cu;
    SET_GPR_U32(ctx, 31, 0x24D824u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D81Cu, 0x24D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D824u;
label_24d824:
    // 0x24d824: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24d824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24d828: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24d828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24d82c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d830: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24D830u;
    {
        const bool branch_taken_0x24d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d830) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D838u;
label_24d838:
    // 0x24d838: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D838u;
    SET_GPR_U32(ctx, 31, 0x24D840u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D838u, 0x24D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D840u;
label_24d840:
    // 0x24d840: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x24d840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x24d844: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24d844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24d848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d84c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24D84Cu;
    {
        const bool branch_taken_0x24d84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d84c) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D854u;
label_24d854:
    // 0x24d854: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D854u;
    SET_GPR_U32(ctx, 31, 0x24D85Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D854u, 0x24D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D85Cu;
label_24d85c:
    // 0x24d85c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24d85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24d860: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d868: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24D868u;
    {
        const bool branch_taken_0x24d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d868) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D870u;
label_24d870:
    // 0x24d870: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D870u;
    SET_GPR_U32(ctx, 31, 0x24D878u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D870u, 0x24D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D878u;
label_24d878:
    // 0x24d878: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x24d878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x24d87c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d880: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24D884u;
    {
        const bool branch_taken_0x24d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d884) {
            ctx->pc = 0x24D89Cu;
            goto label_24d89c;
        }
    }
    ctx->pc = 0x24D88Cu;
label_24d88c:
    // 0x24d88c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x24D88Cu;
    SET_GPR_U32(ctx, 31, 0x24D894u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x24D88Cu, 0x24D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D894u;
label_24d894:
    // 0x24d894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24d894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24d898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24d89c:
    // 0x24d89c: 0x0  nop
    ctx->pc = 0x24d89cu;
    // NOP
    // 0x24d8a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d8a4: 0x0  nop
    ctx->pc = 0x24d8a4u;
    // NOP
    // 0x24d8a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24D8A8u;
    {
        const bool branch_taken_0x24d8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d8a8) {
            ctx->pc = 0x24D8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D8A8u;
            // 0x24d8ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D8B0u;
            goto label_24d8b0;
        }
    }
    ctx->pc = 0x24D8B0u;
label_24d8b0:
    // 0x24d8b0: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x24D8B0u;
    {
        const bool branch_taken_0x24d8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B0u;
        // 0x24d8b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8b0) {
            ctx->pc = 0x24DA5Cu;
            goto label_24da5c;
        }
    }
    ctx->pc = 0x24D8B8u;
    // 0x24d8b8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x24D8B8u;
    SET_GPR_U32(ctx, 31, 0x24D8C0u);
    ctx->pc = 0x24D8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8B8u;
    // 0x24d8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x24D8B8u, 0x24D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8C0u;
label_24d8c0:
    // 0x24d8c0: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x24D8C0u;
    {
        const bool branch_taken_0x24d8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C0u;
        // 0x24d8c4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8c0) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D8C8u;
    // 0x24d8c8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x24d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x24d8cc: 0xa22017c0  sb          $zero, 0x17C0($s1)
    ctx->pc = 0x24d8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6080), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d8d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d8d4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x24D8D4u;
    {
        const bool branch_taken_0x24d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8D4u;
        // 0x24d8d8: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8d4) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D8DCu;
label_24d8dc:
    // 0x24d8dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x24d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24d8e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d8e4: 0x8c433a70  lw          $v1, 0x3A70($v0)
    ctx->pc = 0x24d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14960)));
    // 0x24d8e8: 0x8c453a74  lw          $a1, 0x3A74($v0)
    ctx->pc = 0x24d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14964)));
    // 0x24d8ec: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d8f0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24D8F0u;
    SET_GPR_U32(ctx, 31, 0x24D8F8u);
    ctx->pc = 0x24D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8F0u;
    // 0x24d8f4: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24D8F0u, 0x24D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8F8u;
label_24d8f8:
    // 0x24d8f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24d8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24d8fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24d8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d900: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d904: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24d904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24d908: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24d908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d90c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24d90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d910: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24D910u;
    SET_GPR_U32(ctx, 31, 0x24D918u);
    ctx->pc = 0x24D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D910u;
    // 0x24d914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24D910u, 0x24D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D918u;
label_24d918:
    // 0x24d918: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x24d918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x24d91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d920: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x24D920u;
    SET_GPR_U32(ctx, 31, 0x24D928u);
    ctx->pc = 0x24D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D920u;
    // 0x24d924: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x24D920u, 0x24D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D928u;
label_24d928:
    // 0x24d928: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24d928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24d92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d930: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24d930u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24d934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d938: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24d938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d93c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24d93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24d940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d944: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24d944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d948: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x24D948u;
    SET_GPR_U32(ctx, 31, 0x24D950u);
    ctx->pc = 0x24D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D948u;
    // 0x24d94c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x24D948u, 0x24D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D950u;
label_24d950:
    // 0x24d950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d954: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24d958: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d95c: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x24d95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x24d960: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d964: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x24D964u;
    SET_GPR_U32(ctx, 31, 0x24D96Cu);
    ctx->pc = 0x24D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D964u;
    // 0x24d968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x24D964u, 0x24D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D96Cu;
label_24d96c:
    // 0x24d96c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x24d96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x24d970: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24d974: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x24d974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24d978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24d978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d97c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d980: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x24d980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x24d984: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x24d984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x24d988: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x24d988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24d98c:
    // 0x24d98c: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x24d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d994: 0x0  nop
    ctx->pc = 0x24d994u;
    // NOP
    // 0x24d998: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24d998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d99c: 0x0  nop
    ctx->pc = 0x24d99cu;
    // NOP
    // 0x24d9a0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x24D9A0u;
    {
        const bool branch_taken_0x24d9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d9a0) {
            ctx->pc = 0x24D9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D9A0u;
            // 0x24d9a4: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D9C8u;
            goto label_24d9c8;
        }
    }
    ctx->pc = 0x24D9A8u;
    // 0x24d9a8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d9ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24d9b0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x24d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x24d9b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24d9b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d9bc: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x24d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x24d9c0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x24d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x24d9c4: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x24d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_24d9c8:
    // 0x24d9c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24D9C8u;
    {
        const bool branch_taken_0x24d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9C8u;
        // 0x24d9cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9c8) {
            ctx->pc = 0x24D9F8u;
            goto label_24d9f8;
        }
    }
    ctx->pc = 0x24D9D0u;
    // 0x24d9d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24D9D0u;
    SET_GPR_U32(ctx, 31, 0x24D9D8u);
    ctx->pc = 0x24D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9D0u;
    // 0x24d9d4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24D9D0u, 0x24D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9D8u;
label_24d9d8:
    // 0x24d9d8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d9e0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x24d9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x24d9e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24d9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24d9e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24d9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24d9ec: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24d9f0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24D9F0u;
    SET_GPR_U32(ctx, 31, 0x24D9F8u);
    ctx->pc = 0x24D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9F0u;
    // 0x24d9f4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24D9F0u, 0x24D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9F8u;
label_24d9f8:
    // 0x24d9f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24D9F8u;
    SET_GPR_U32(ctx, 31, 0x24DA00u);
    ctx->pc = 0x24D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9F8u;
    // 0x24d9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24D9F8u, 0x24DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA00u;
label_24da00:
    // 0x24da00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24DA00u;
    {
        const bool branch_taken_0x24da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da00) {
            ctx->pc = 0x24DA30u;
            goto label_24da30;
        }
    }
    ctx->pc = 0x24DA08u;
    // 0x24da08: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x24DA08u;
    SET_GPR_U32(ctx, 31, 0x24DA10u);
    ctx->pc = 0x24DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA08u;
    // 0x24da0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x24DA08u, 0x24DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA10u;
label_24da10:
    // 0x24da10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DA10u;
    {
        const bool branch_taken_0x24da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da10) {
            ctx->pc = 0x24DA28u;
            goto label_24da28;
        }
    }
    ctx->pc = 0x24DA18u;
    // 0x24da18: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x24DA18u;
    SET_GPR_U32(ctx, 31, 0x24DA20u);
    ctx->pc = 0x24DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA18u;
    // 0x24da1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x24DA18u, 0x24DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA20u;
label_24da20:
    // 0x24da20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24DA20u;
    {
        const bool branch_taken_0x24da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da20) {
            ctx->pc = 0x24DA30u;
            goto label_24da30;
        }
    }
    ctx->pc = 0x24DA28u;
label_24da28:
    // 0x24da28: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24DA28u;
    SET_GPR_U32(ctx, 31, 0x24DA30u);
    ctx->pc = 0x24DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA28u;
    // 0x24da2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24DA28u, 0x24DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA30u;
label_24da30:
    // 0x24da30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24da34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24da34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24da38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24da38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da3c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24DA3Cu;
    SET_GPR_U32(ctx, 31, 0x24DA44u);
    ctx->pc = 0x24DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA3Cu;
    // 0x24da40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24DA3Cu, 0x24DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA44u;
label_24da44:
    // 0x24da44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da48: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24DA48u;
    SET_GPR_U32(ctx, 31, 0x24DA50u);
    ctx->pc = 0x24DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA48u;
    // 0x24da4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24DA48u, 0x24DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA50u;
label_24da50:
    // 0x24da50: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x24DA50u;
    SET_GPR_U32(ctx, 31, 0x24DA58u);
    ctx->pc = 0x24DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA50u;
    // 0x24da54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x24DA50u, 0x24DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA58u;
label_24da58:
    // 0x24da58: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24da58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24da5c:
    // 0x24da5c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24da5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24da60:
    // 0x24da60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24da60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24da64: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24da64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24da68: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24da68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24da6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24da70: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x24da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24da74: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA74u;
        // 0x24da78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA7Cu;
    // 0x24da7c: 0x0  nop
    ctx->pc = 0x24da7cu;
    // NOP
    ctx->pc = 0x24da80u;
}
