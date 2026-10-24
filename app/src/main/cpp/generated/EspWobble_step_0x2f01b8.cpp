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

// Function: EspWobble_step
// Address: 0x2f01b8 - 0x2f02b8
void EspWobble_step_0x2f01b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EspWobble_step_0x2f01b8");
#endif

    switch (ctx->pc) {
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f029cu: goto label_2f029c;
        default: break;
    }

    ctx->pc = 0x2f01b8u;

    // 0x2f01b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f01b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f01bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f01bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f01c0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2f01c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f01c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f01c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f01c8: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F01C8u;
    SET_GPR_U32(ctx, 31, 0x2F01D0u);
    ctx->pc = 0x2F01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01C8u;
    // 0x2f01cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F01C8u, 0x2F01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01D0u;
label_2f01d0:
    // 0x2f01d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f01d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f01d4: 0xc60002c8  lwc1        $f0, 0x2C8($s0)
    ctx->pc = 0x2f01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f01d8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2f01d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f01dc: 0x0  nop
    ctx->pc = 0x2f01dcu;
    // NOP
    // 0x2f01e0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x2F01E0u;
    {
        const bool branch_taken_0x2f01e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f01e0) {
            ctx->pc = 0x2F01E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F01E0u;
            // 0x2f01e4: 0xc60002cc  lwc1        $f0, 0x2CC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F021Cu;
            goto label_2f021c;
        }
    }
    ctx->pc = 0x2F01E8u;
    // 0x2f01e8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2F01E8u;
    SET_GPR_U32(ctx, 31, 0x2F01F0u);
    ctx->pc = 0x2F01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01E8u;
    // 0x2f01ec: 0xc60c02c0  lwc1        $f12, 0x2C0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2F01E8u, 0x2F01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01F0u;
label_2f01f0:
    // 0x2f01f0: 0xc60102c0  lwc1        $f1, 0x2C0($s0)
    ctx->pc = 0x2f01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f01f4: 0xc60202b0  lwc1        $f2, 0x2B0($s0)
    ctx->pc = 0x2f01f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f01f8: 0xc60302c8  lwc1        $f3, 0x2C8($s0)
    ctx->pc = 0x2f01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f01fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f01fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f0200: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2f0200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2f0204: 0xe60202b8  swc1        $f2, 0x2B8($s0)
    ctx->pc = 0x2f0204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x2f0208: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2f0208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2f020c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F020Cu;
    SET_GPR_U32(ctx, 31, 0x2F0214u);
    ctx->pc = 0x2F0210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F020Cu;
    // 0x2f0210: 0xe60102c0  swc1        $f1, 0x2C0($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F020Cu, 0x2F0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0214u;
label_2f0214:
    // 0x2f0214: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2f0214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x2f0218: 0xc60002cc  lwc1        $f0, 0x2CC($s0)
    ctx->pc = 0x2f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f021c:
    // 0x2f021c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2f021cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0220: 0x0  nop
    ctx->pc = 0x2f0220u;
    // NOP
    // 0x2f0224: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x2F0224u;
    {
        const bool branch_taken_0x2f0224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0224) {
            ctx->pc = 0x2F0228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0224u;
            // 0x2f0228: 0xc60002dc  lwc1        $f0, 0x2DC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0260u;
            goto label_2f0260;
        }
    }
    ctx->pc = 0x2F022Cu;
    // 0x2f022c: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2F022Cu;
    SET_GPR_U32(ctx, 31, 0x2F0234u);
    ctx->pc = 0x2F0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F022Cu;
    // 0x2f0230: 0xc60c02c4  lwc1        $f12, 0x2C4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2F022Cu, 0x2F0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0234u;
label_2f0234:
    // 0x2f0234: 0xc60102c4  lwc1        $f1, 0x2C4($s0)
    ctx->pc = 0x2f0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0238: 0xc60202b4  lwc1        $f2, 0x2B4($s0)
    ctx->pc = 0x2f0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f023c: 0xc60302cc  lwc1        $f3, 0x2CC($s0)
    ctx->pc = 0x2f023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0240: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f0240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f0244: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2f0244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2f0248: 0xe60202bc  swc1        $f2, 0x2BC($s0)
    ctx->pc = 0x2f0248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x2f024c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2f024cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2f0250: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F0250u;
    SET_GPR_U32(ctx, 31, 0x2F0258u);
    ctx->pc = 0x2F0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0250u;
    // 0x2f0254: 0xe60102c4  swc1        $f1, 0x2C4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F0250u, 0x2F0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0258u;
label_2f0258:
    // 0x2f0258: 0xe60002c4  swc1        $f0, 0x2C4($s0)
    ctx->pc = 0x2f0258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x2f025c: 0xc60002dc  lwc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0260:
    // 0x2f0260: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2f0260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0264: 0x0  nop
    ctx->pc = 0x2f0264u;
    // NOP
    // 0x2f0268: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x2F0268u;
    {
        const bool branch_taken_0x2f0268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0268) {
            ctx->pc = 0x2F026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0268u;
            // 0x2f026c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F02A4u;
            goto label_2f02a4;
        }
    }
    ctx->pc = 0x2F0270u;
    // 0x2f0270: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2F0270u;
    SET_GPR_U32(ctx, 31, 0x2F0278u);
    ctx->pc = 0x2F0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0270u;
    // 0x2f0274: 0xc60c02d8  lwc1        $f12, 0x2D8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2F0270u, 0x2F0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0278u;
label_2f0278:
    // 0x2f0278: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x2f0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f027c: 0xc60202d0  lwc1        $f2, 0x2D0($s0)
    ctx->pc = 0x2f027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f0280: 0xc60302dc  lwc1        $f3, 0x2DC($s0)
    ctx->pc = 0x2f0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f0284: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f0284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f0288: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2f0288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2f028c: 0xe60202d4  swc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f028cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f0290: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2f0290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2f0294: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F0294u;
    SET_GPR_U32(ctx, 31, 0x2F029Cu);
    ctx->pc = 0x2F0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0294u;
    // 0x2f0298: 0xe60102d8  swc1        $f1, 0x2D8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F0294u, 0x2F029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F029Cu;
label_2f029c:
    // 0x2f029c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f02a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f02a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f02a4:
    // 0x2f02a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f02a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f02a8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2f02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f02ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F02ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02ACu;
        // 0x2f02b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F02ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F02B4u;
    // 0x2f02b4: 0x0  nop
    ctx->pc = 0x2f02b4u;
    // NOP
    ctx->pc = 0x2f02b8u;
}
