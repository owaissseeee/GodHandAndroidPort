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

// Function: func_002F00E0
// Address: 0x2f00e0 - 0x2f01b8
void func_002F00E0_0x2f00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F00E0_0x2f00e0");
#endif

    switch (ctx->pc) {
        case 0x2f0188u: goto label_2f0188;
        default: break;
    }

    ctx->pc = 0x2f00e0u;

    // 0x2f00e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f00e4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f00e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f00e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f00e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f00ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f00ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f00f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f00f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f00f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f00f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f00f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f0100: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f0100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f0104: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f0108: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x2f0108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f010c: 0xc4a0013c  lwc1        $f0, 0x13C($a1)
    ctx->pc = 0x2f010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0110: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f0110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f0114: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x2f0114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x2f0118: 0xc4a10140  lwc1        $f1, 0x140($a1)
    ctx->pc = 0x2f0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f011c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f011cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f0120: 0xe60102b4  swc1        $f1, 0x2B4($s0)
    ctx->pc = 0x2f0120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x2f0124: 0xc4a00144  lwc1        $f0, 0x144($a1)
    ctx->pc = 0x2f0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0128: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f0128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f012c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f0130: 0xc4a10148  lwc1        $f1, 0x148($a1)
    ctx->pc = 0x2f0130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0134: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f0134u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2f0138: 0xe60102c8  swc1        $f1, 0x2C8($s0)
    ctx->pc = 0x2f0138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x2f013c: 0xc4a0014c  lwc1        $f0, 0x14C($a1)
    ctx->pc = 0x2f013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0140: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f0140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2f0144: 0xe60002cc  swc1        $f0, 0x2CC($s0)
    ctx->pc = 0x2f0144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    // 0x2f0148: 0xc4a10150  lwc1        $f1, 0x150($a1)
    ctx->pc = 0x2f0148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f014c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f014cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2f0150: 0xe60102dc  swc1        $f1, 0x2DC($s0)
    ctx->pc = 0x2f0150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f0154: 0x90a4018c  lbu         $a0, 0x18C($a1)
    ctx->pc = 0x2f0154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x2f0158: 0xa20402e0  sb          $a0, 0x2E0($s0)
    ctx->pc = 0x2f0158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f015c: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x2f015cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f0160: 0x90a2018d  lbu         $v0, 0x18D($a1)
    ctx->pc = 0x2f0160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 397)));
    // 0x2f0164: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x2f0164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f0168: 0x90a3018e  lbu         $v1, 0x18E($a1)
    ctx->pc = 0x2f0168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 398)));
    // 0x2f016c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F016Cu;
    {
        const bool branch_taken_0x2f016c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F016Cu;
        // 0x2f0170: 0xa20302e2  sb          $v1, 0x2E2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f016c) {
            ctx->pc = 0x2F0188u;
            goto label_2f0188;
        }
    }
    ctx->pc = 0x2F0174u;
    // 0x2f0174: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f0178: 0x920602e0  lbu         $a2, 0x2E0($s0)
    ctx->pc = 0x2f0178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x2f017c: 0x24a5eb50  addiu       $a1, $a1, -0x14B0
    ctx->pc = 0x2f017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    // 0x2f0180: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F0180u;
    SET_GPR_U32(ctx, 31, 0x2F0188u);
    ctx->pc = 0x2F0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0180u;
    // 0x2f0184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F0180u, 0x2F0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0188u;
label_2f0188:
    // 0x2f0188: 0xc60002b0  lwc1        $f0, 0x2B0($s0)
    ctx->pc = 0x2f0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f018c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0190: 0xc60202b4  lwc1        $f2, 0x2B4($s0)
    ctx->pc = 0x2f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0194: 0xc60102d0  lwc1        $f1, 0x2D0($s0)
    ctx->pc = 0x2f0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0198: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x2f0198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x2f019c: 0xe60102d4  swc1        $f1, 0x2D4($s0)
    ctx->pc = 0x2f019cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f01a0: 0xe60202bc  swc1        $f2, 0x2BC($s0)
    ctx->pc = 0x2f01a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x2f01a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f01a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f01a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f01a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f01ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F01ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01ACu;
        // 0x2f01b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F01ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F01B4u;
    // 0x2f01b4: 0x0  nop
    ctx->pc = 0x2f01b4u;
    // NOP
    ctx->pc = 0x2f01b8u;
}
