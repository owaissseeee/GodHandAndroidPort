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

// Function: IconScreen_stepGrow
// Address: 0x13d698 - 0x13d7b0
void IconScreen_stepGrow_0x13d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IconScreen_stepGrow_0x13d698");
#endif

    switch (ctx->pc) {
        case 0x13d748u: goto label_13d748;
        case 0x13d768u: goto label_13d768;
        case 0x13d788u: goto label_13d788;
        case 0x13d79cu: goto label_13d79c;
        default: break;
    }

    ctx->pc = 0x13d698u;

    // 0x13d698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d69c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x13d69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x13d6a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x13d6a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x13d6a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d6ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d6b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d6b8: 0x3c013ca9  lui         $at, 0x3CA9
    ctx->pc = 0x13d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15529 << 16));
    // 0x13d6bc: 0x3421930c  ori         $at, $at, 0x930C
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37644);
    // 0x13d6c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d6c4: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x13d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13d6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13d6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13d6cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13d6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13d6d0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x13d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13d6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13d6d8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x13d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13d6dc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x13d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13d6e0: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x13d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13d6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13d6e8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x13d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x13d6ec: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x13d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13d6f0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x13d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d6f4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x13d6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13d6f8: 0x0  nop
    ctx->pc = 0x13d6f8u;
    // NOP
    // 0x13d6fc: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x13D6FCu;
    {
        const bool branch_taken_0x13d6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6FCu;
        // 0x13d700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6fc) {
            ctx->pc = 0x13D79Cu;
            goto label_13d79c;
        }
    }
    ctx->pc = 0x13D704u;
    // 0x13d704: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13d708: 0x3c10f7ff  lui         $s0, 0xF7FF
    ctx->pc = 0x13d708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63487 << 16));
    // 0x13d70c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x13d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d710: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x13d714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d718: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x13d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13d71c: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x13d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13d720: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13d724: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x13d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d728: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x13d728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x13d72c: 0xa225001c  sb          $a1, 0x1C($s1)
    ctx->pc = 0x13d72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d730: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13d734: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d738: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x13d73c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d740: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D740u;
    SET_GPR_U32(ctx, 31, 0x13D748u);
    ctx->pc = 0x13D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D740u;
    // 0x13d744: 0x8e2500b0  lw          $a1, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D740u, 0x13D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D748u;
label_13d748:
    // 0x13d748: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x13d748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x13d74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d754: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d758: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x13d758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x13d75c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d760: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D760u;
    SET_GPR_U32(ctx, 31, 0x13D768u);
    ctx->pc = 0x13D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D760u;
    // 0x13d764: 0x8e250098  lw          $a1, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D760u, 0x13D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D768u;
label_13d768:
    // 0x13d768: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x13d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d774: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d778: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x13d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x13d77c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d780: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D780u;
    SET_GPR_U32(ctx, 31, 0x13D788u);
    ctx->pc = 0x13D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D780u;
    // 0x13d784: 0x8e25009c  lw          $a1, 0x9C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D780u, 0x13D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D788u;
label_13d788:
    // 0x13d788: 0x96220092  lhu         $v0, 0x92($s1)
    ctx->pc = 0x13d788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x13d78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d794: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13D794u;
    SET_GPR_U32(ctx, 31, 0x13D79Cu);
    ctx->pc = 0x13D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D794u;
    // 0x13d798: 0xa6220092  sh          $v0, 0x92($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13D794u, 0x13D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D79Cu;
label_13d79c:
    // 0x13d79c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d7a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7B0u;
}
