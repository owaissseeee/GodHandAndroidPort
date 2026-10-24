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

// Function: func_0027F3A0
// Address: 0x27f3a0 - 0x27f4c0
void func_0027F3A0_0x27f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F3A0_0x27f3a0");
#endif

    switch (ctx->pc) {
        case 0x27f42cu: goto label_27f42c;
        case 0x27f474u: goto label_27f474;
        default: break;
    }

    ctx->pc = 0x27f3a0u;

    // 0x27f3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f3a4: 0x2403026b  addiu       $v1, $zero, 0x26B
    ctx->pc = 0x27f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x27f3a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27f3ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27f3b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f3b4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x27f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27f3b8: 0x5043003d  beql        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x27F3B8u;
    {
        const bool branch_taken_0x27f3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27f3b8) {
            ctx->pc = 0x27F3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3B8u;
            // 0x27f3bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4B0u;
            goto label_27f4b0;
        }
    }
    ctx->pc = 0x27F3C0u;
    // 0x27f3c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x27f3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x27f3c4: 0x5840003a  blezl       $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27F3C4u;
    {
        const bool branch_taken_0x27f3c4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27f3c4) {
            ctx->pc = 0x27F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3C4u;
            // 0x27f3c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4B0u;
            goto label_27f4b0;
        }
    }
    ctx->pc = 0x27F3CCu;
    // 0x27f3cc: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x27f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x27f3d0: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x27F3D0u;
    {
        const bool branch_taken_0x27f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f3d0) {
            ctx->pc = 0x27F3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3D0u;
            // 0x27f3d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4B0u;
            goto label_27f4b0;
        }
    }
    ctx->pc = 0x27F3D8u;
    // 0x27f3d8: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x27f3d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27f3dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27f3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27f3e0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x27F3E0u;
    {
        const bool branch_taken_0x27f3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f3e0) {
            ctx->pc = 0x27F3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3E0u;
            // 0x27f3e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4B0u;
            goto label_27f4b0;
        }
    }
    ctx->pc = 0x27F3E8u;
    // 0x27f3e8: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x27f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f3ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27f3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f3f0: 0x0  nop
    ctx->pc = 0x27f3f0u;
    // NOP
    // 0x27f3f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f3f8: 0x0  nop
    ctx->pc = 0x27f3f8u;
    // NOP
    // 0x27f3fc: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x27F3FCu;
    {
        const bool branch_taken_0x27f3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f3fc) {
            ctx->pc = 0x27F400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F3FCu;
            // 0x27f400: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F4B0u;
            goto label_27f4b0;
        }
    }
    ctx->pc = 0x27F404u;
    // 0x27f404: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27f404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27f408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f40c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27f410: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x27f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27f414: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27f414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f418: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f41c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f41cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f420: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27f420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f424: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27F424u;
    SET_GPR_U32(ctx, 31, 0x27F42Cu);
    ctx->pc = 0x27F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F424u;
    // 0x27f428: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27F424u, 0x27F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F42Cu;
label_27f42c:
    // 0x27f42c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x27f42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27f430: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27f434: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27f434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F438u;
    {
        const bool branch_taken_0x27f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F438u;
        // 0x27f43c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f438) {
            ctx->pc = 0x27F44Cu;
            goto label_27f44c;
        }
    }
    ctx->pc = 0x27F440u;
    // 0x27f440: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27f444: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F444u;
    {
        const bool branch_taken_0x27f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F444u;
        // 0x27f448: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f444) {
            ctx->pc = 0x27F450u;
            goto label_27f450;
        }
    }
    ctx->pc = 0x27F44Cu;
label_27f44c:
    // 0x27f44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27f44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f450:
    // 0x27f450: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F450u;
    {
        const bool branch_taken_0x27f450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F450u;
        // 0x27f454: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f450) {
            ctx->pc = 0x27F474u;
            goto label_27f474;
        }
    }
    ctx->pc = 0x27F458u;
    // 0x27f458: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27f45c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27f460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f464: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27f464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27f468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f46c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x27F46Cu;
    SET_GPR_U32(ctx, 31, 0x27F474u);
    ctx->pc = 0x27F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F46Cu;
    // 0x27f470: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x27F46Cu, 0x27F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27f474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27f478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f47c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x27f480: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x27f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x27f484: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F484u;
    {
        const bool branch_taken_0x27f484 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x27F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F484u;
        // 0x27f488: 0x96030548  lhu         $v1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f484) {
            ctx->pc = 0x27F494u;
            goto label_27f494;
        }
    }
    ctx->pc = 0x27F48Cu;
    // 0x27f48c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F48Cu;
    {
        const bool branch_taken_0x27f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F48Cu;
        // 0x27f490: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f48c) {
            ctx->pc = 0x27F498u;
            goto label_27f498;
        }
    }
    ctx->pc = 0x27F494u;
label_27f494:
    // 0x27f494: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x27f494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_27f498:
    // 0x27f498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f49c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27f49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f4a0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x27f4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f4a4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27f4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f4a8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27f4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f4ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27f4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f4b0:
    // 0x27f4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F4B4u;
        // 0x27f4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4BCu;
    // 0x27f4bc: 0x0  nop
    ctx->pc = 0x27f4bcu;
    // NOP
    ctx->pc = 0x27f4c0u;
}
