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

// Function: cCamera_stepVib
// Address: 0x138558 - 0x138600
void cCamera_stepVib_0x138558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_stepVib_0x138558");
#endif

    switch (ctx->pc) {
        case 0x13859cu: goto label_13859c;
        case 0x1385e0u: goto label_1385e0;
        default: break;
    }

    ctx->pc = 0x138558u;

    // 0x138558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13855c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138568: 0x92020278  lbu         $v0, 0x278($s0)
    ctx->pc = 0x138568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x13856c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13856Cu;
    {
        const bool branch_taken_0x13856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13856c) {
            ctx->pc = 0x138570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13856Cu;
            // 0x138570: 0x92020264  lbu         $v0, 0x264($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385B0u;
            goto label_1385b0;
        }
    }
    ctx->pc = 0x138574u;
    // 0x138574: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x138574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138578: 0xc6000274  lwc1        $f0, 0x274($s0)
    ctx->pc = 0x138578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13857c: 0xc6020270  lwc1        $f2, 0x270($s0)
    ctx->pc = 0x13857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138580: 0xc603026c  lwc1        $f3, 0x26C($s0)
    ctx->pc = 0x138580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x138584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x138584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x138588: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x138588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x13858c: 0xe6010268  swc1        $f1, 0x268($s0)
    ctx->pc = 0x13858cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x138590: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x138590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x138594: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x138594u;
    SET_GPR_U32(ctx, 31, 0x13859Cu);
    ctx->pc = 0x138598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138594u;
    // 0x138598: 0xe6000274  swc1        $f0, 0x274($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x138594u, 0x13859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13859Cu;
label_13859c:
    // 0x13859c: 0x92020278  lbu         $v0, 0x278($s0)
    ctx->pc = 0x13859cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1385a0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x1385a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x1385a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1385a8: 0xa2020278  sb          $v0, 0x278($s0)
    ctx->pc = 0x1385a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 632), (uint8_t)GPR_U32(ctx, 2));
    // 0x1385ac: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x1385acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
label_1385b0:
    // 0x1385b0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1385B0u;
    {
        const bool branch_taken_0x1385b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1385b0) {
            ctx->pc = 0x1385B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385B0u;
            // 0x1385b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385F4u;
            goto label_1385f4;
        }
    }
    ctx->pc = 0x1385B8u;
    // 0x1385b8: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x1385b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1385bc: 0xc6000260  lwc1        $f0, 0x260($s0)
    ctx->pc = 0x1385bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385c0: 0xc602025c  lwc1        $f2, 0x25C($s0)
    ctx->pc = 0x1385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1385c4: 0xc6030258  lwc1        $f3, 0x258($s0)
    ctx->pc = 0x1385c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1385c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1385c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1385cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1385ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1385d0: 0xe6010254  swc1        $f1, 0x254($s0)
    ctx->pc = 0x1385d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
    // 0x1385d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1385d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1385d8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1385D8u;
    SET_GPR_U32(ctx, 31, 0x1385E0u);
    ctx->pc = 0x1385DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1385D8u;
    // 0x1385dc: 0xe6000260  swc1        $f0, 0x260($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1385D8u, 0x1385E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385E0u;
label_1385e0:
    // 0x1385e0: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x1385e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1385e4: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1385e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1385e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1385e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1385ec: 0xa2020264  sb          $v0, 0x264($s0)
    ctx->pc = 0x1385ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 2));
    // 0x1385f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1385f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1385f4:
    // 0x1385f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1385f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1385f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1385F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385F8u;
        // 0x1385fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1385F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138600u;
}
