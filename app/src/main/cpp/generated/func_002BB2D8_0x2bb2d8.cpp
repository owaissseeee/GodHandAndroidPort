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

// Function: func_002BB2D8
// Address: 0x2bb2d8 - 0x2bb3f0
void func_002BB2D8_0x2bb2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB2D8_0x2bb2d8");
#endif

    switch (ctx->pc) {
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3b4u: goto label_2bb3b4;
        default: break;
    }

    ctx->pc = 0x2bb2d8u;

    // 0x2bb2d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb2dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb2e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2bb2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb2e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bb2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2bb2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb2f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2bb2f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bb2f4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BB2F4u;
    SET_GPR_U32(ctx, 31, 0x2BB2FCu);
    ctx->pc = 0x2BB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2F4u;
    // 0x2bb2f8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BB2F4u, 0x2BB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2FCu;
label_2bb2fc:
    // 0x2bb2fc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2bb2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb300: 0x0  nop
    ctx->pc = 0x2bb300u;
    // NOP
    // 0x2bb304: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB304u;
    {
        const bool branch_taken_0x2bb304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB304u;
        // 0x2bb308: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb304) {
            ctx->pc = 0x2BB324u;
            goto label_2bb324;
        }
    }
    ctx->pc = 0x2BB30Cu;
    // 0x2bb30c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BB30Cu;
    SET_GPR_U32(ctx, 31, 0x2BB314u);
    ctx->pc = 0x2BB310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB30Cu;
    // 0x2bb310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BB30Cu, 0x2BB314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB314u;
label_2bb314:
    // 0x2bb314: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2bb314u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb318: 0x0  nop
    ctx->pc = 0x2bb318u;
    // NOP
    // 0x2bb31c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2BB31Cu;
    {
        const bool branch_taken_0x2bb31c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB31Cu;
        // 0x2bb320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb31c) {
            ctx->pc = 0x2BB37Cu;
            goto label_2bb37c;
        }
    }
    ctx->pc = 0x2BB324u;
label_2bb324:
    // 0x2bb324: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2bb324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bb328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bb328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb32c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2bb32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2bb330: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bb330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bb334: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x2bb334u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x2bb338: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bb338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bb33c: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB33Cu;
    {
        const bool branch_taken_0x2bb33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB33Cu;
        // 0x2bb340: 0xa2220004  sb          $v0, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb33c) {
            ctx->pc = 0x2BB360u;
            goto label_2bb360;
        }
    }
    ctx->pc = 0x2BB344u;
    // 0x2bb344: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2bb348: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x2bb34c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2bb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x2bb350: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2bb350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2bb354: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x2bb354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x2bb358: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BB358u;
    {
        const bool branch_taken_0x2bb358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB358u;
        // 0x2bb35c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb358) {
            ctx->pc = 0x2BB39Cu;
            goto label_2bb39c;
        }
    }
    ctx->pc = 0x2BB360u;
label_2bb360:
    // 0x2bb360: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2bb364: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2bb364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2bb368: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x2bb368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x2bb36c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2bb36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb370: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x2bb370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x2bb374: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB374u;
    {
        const bool branch_taken_0x2bb374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB374u;
        // 0x2bb378: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb374) {
            ctx->pc = 0x2BB39Cu;
            goto label_2bb39c;
        }
    }
    ctx->pc = 0x2BB37Cu;
label_2bb37c:
    // 0x2bb37c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2bb37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bb380: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2bb384: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bb388: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2bb388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2bb38c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2bb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2bb390: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x2bb390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bb394: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x2bb394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x2bb398: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x2bb398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_2bb39c:
    // 0x2bb39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3a0: 0xc051dca  jal         func_147728
    ctx->pc = 0x2BB3A0u;
    SET_GPR_U32(ctx, 31, 0x2BB3A8u);
    ctx->pc = 0x2BB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3A0u;
    // 0x2bb3a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2BB3A0u, 0x2BB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3A8u;
label_2bb3a8:
    // 0x2bb3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3ac: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2BB3ACu;
    SET_GPR_U32(ctx, 31, 0x2BB3B4u);
    ctx->pc = 0x2BB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3ACu;
    // 0x2bb3b0: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2BB3ACu, 0x2BB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3B4u;
label_2bb3b4:
    // 0x2bb3b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bb3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb3c0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2bb3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3C4u;
        // 0x2bb3c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB3CCu;
    // 0x2bb3cc: 0x0  nop
    ctx->pc = 0x2bb3ccu;
    // NOP
    // 0x2bb3d0: 0x0  nop
    ctx->pc = 0x2bb3d0u;
    // NOP
    // 0x2bb3d4: 0x0  nop
    ctx->pc = 0x2bb3d4u;
    // NOP
    // 0x2bb3d8: 0x0  nop
    ctx->pc = 0x2bb3d8u;
    // NOP
    // 0x2bb3dc: 0x0  nop
    ctx->pc = 0x2bb3dcu;
    // NOP
    // 0x2bb3e0: 0x0  nop
    ctx->pc = 0x2bb3e0u;
    // NOP
    // 0x2bb3e4: 0x0  nop
    ctx->pc = 0x2bb3e4u;
    // NOP
    // 0x2bb3e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bb3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb3ec: 0x0  nop
    ctx->pc = 0x2bb3ecu;
    // NOP
    ctx->pc = 0x2bb3f0u;
}
