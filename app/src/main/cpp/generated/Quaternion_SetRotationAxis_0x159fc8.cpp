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

// Function: Quaternion_SetRotationAxis
// Address: 0x159fc8 - 0x15a040
void Quaternion_SetRotationAxis_0x159fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_SetRotationAxis_0x159fc8");
#endif

    switch (ctx->pc) {
        case 0x159ff8u: goto label_159ff8;
        case 0x15a024u: goto label_15a024;
        default: break;
    }

    ctx->pc = 0x159fc8u;

    // 0x159fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159fcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x159fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159fd4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x159fd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x159fd8: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x159fd8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x159fdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x159fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x159fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159fe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159ff0: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x159FF0u;
    SET_GPR_U32(ctx, 31, 0x159FF8u);
    ctx->pc = 0x159FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FF0u;
    // 0x159ff4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x159FF0u, 0x159FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FF8u;
label_159ff8:
    // 0x159ff8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x159ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159ffc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x159ffcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15a000: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15a000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15a004: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x15a004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15a008: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x15a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a00c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15a00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a010: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x15a010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15a014: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x15a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a018: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x15a018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15a01c: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x15A01Cu;
    SET_GPR_U32(ctx, 31, 0x15A024u);
    ctx->pc = 0x15A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A01Cu;
    // 0x15a020: 0xe6220008  swc1        $f2, 0x8($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x15A01Cu, 0x15A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A024u;
label_15a024:
    // 0x15a024: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x15a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15a028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15a028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a034: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x15a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a038: 0x3e00008  jr          $ra
    ctx->pc = 0x15A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A038u;
        // 0x15a03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A040u;
}
