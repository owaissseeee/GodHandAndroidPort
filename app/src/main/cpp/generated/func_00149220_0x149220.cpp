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

// Function: func_00149220
// Address: 0x149220 - 0x1492c8
void func_00149220_0x149220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00149220_0x149220");
#endif

    switch (ctx->pc) {
        case 0x149250u: goto label_149250;
        case 0x149260u: goto label_149260;
        default: break;
    }

    ctx->pc = 0x149220u;

    // 0x149220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149228: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x149228u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14922c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149234: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x149234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x149238: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x14923c: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14923Cu;
    {
        const bool branch_taken_0x14923c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x149240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14923Cu;
        // 0x149240: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14923c) {
            ctx->pc = 0x1492A8u;
            goto label_1492a8;
        }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x8e020414  lw          $v0, 0x414($s0)
    ctx->pc = 0x149244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x149248: 0xc055922  jal         func_156488
    ctx->pc = 0x149248u;
    SET_GPR_U32(ctx, 31, 0x149250u);
    ctx->pc = 0x14924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149248u;
    // 0x14924c: 0x9444003e  lhu         $a0, 0x3E($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x149248u, 0x149250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149250u;
label_149250:
    // 0x149250: 0x8e020414  lw          $v0, 0x414($s0)
    ctx->pc = 0x149250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x149254: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x149254u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x149258: 0xc055922  jal         func_156488
    ctx->pc = 0x149258u;
    SET_GPR_U32(ctx, 31, 0x149260u);
    ctx->pc = 0x14925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149258u;
    // 0x14925c: 0x94440040  lhu         $a0, 0x40($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x149258u, 0x149260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149260u;
label_149260:
    // 0x149260: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x149260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x149264: 0xc603038c  lwc1        $f3, 0x38C($s0)
    ctx->pc = 0x149264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149268: 0xc6010390  lwc1        $f1, 0x390($s0)
    ctx->pc = 0x149268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14926c: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x14926cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x149270: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x149270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149274: 0xe603038c  swc1        $f3, 0x38C($s0)
    ctx->pc = 0x149274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x149278: 0xe6010390  swc1        $f1, 0x390($s0)
    ctx->pc = 0x149278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x14927c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14927cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x149280: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x149280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x149284: 0xc601038c  lwc1        $f1, 0x38C($s0)
    ctx->pc = 0x149284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149288: 0xc6020390  lwc1        $f2, 0x390($s0)
    ctx->pc = 0x149288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14928c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x14928cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x149290: 0xe601038c  swc1        $f1, 0x38C($s0)
    ctx->pc = 0x149290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x149294: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x149298: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x149298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14929c: 0xc6010390  lwc1        $f1, 0x390($s0)
    ctx->pc = 0x14929cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1492a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1492a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1492a4: 0xe6010390  swc1        $f1, 0x390($s0)
    ctx->pc = 0x1492a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
label_1492a8:
    // 0x1492a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1492a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1492ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1492acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1492b0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1492b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1492b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1492b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1492b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1492B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1492BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492B8u;
        // 0x1492bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1492B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1492C0u;
    // 0x1492c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1492c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1492c4: 0x0  nop
    ctx->pc = 0x1492c4u;
    // NOP
    ctx->pc = 0x1492c8u;
}
