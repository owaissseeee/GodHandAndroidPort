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

// Function: cCollisionSolidManage_CreateSphere
// Address: 0x134880 - 0x1348e8
void cCollisionSolidManage_CreateSphere_0x134880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_CreateSphere_0x134880");
#endif

    switch (ctx->pc) {
        case 0x1348a4u: goto label_1348a4;
        case 0x1348bcu: goto label_1348bc;
        default: break;
    }

    ctx->pc = 0x134880u;

    // 0x134880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x134884: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x134884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x134888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13488c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13488cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134890: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x134890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x134894: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x134894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13489c: 0xc04d1b2  jal         func_1346C8
    ctx->pc = 0x13489Cu;
    SET_GPR_U32(ctx, 31, 0x1348A4u);
    ctx->pc = 0x1348A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13489Cu;
    // 0x1348a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346C8u, 0x13489Cu, 0x1348A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348A4u;
label_1348a4:
    // 0x1348a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1348A4u;
    {
        const bool branch_taken_0x1348a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348A4u;
        // 0x1348a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348a4) {
            ctx->pc = 0x1348BCu;
            goto label_1348bc;
        }
    }
    ctx->pc = 0x1348ACu;
    // 0x1348ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1348acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348b4: 0xc04d148  jal         func_134520
    ctx->pc = 0x1348B4u;
    SET_GPR_U32(ctx, 31, 0x1348BCu);
    ctx->pc = 0x1348B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348B4u;
    // 0x1348b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x134520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134520u, 0x1348B4u, 0x1348BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348BCu;
label_1348bc:
    // 0x1348bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1348bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1348c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1348c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1348c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1348c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1348c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1348c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1348cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1348CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348CCu;
        // 0x1348d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1348CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1348D4u;
    // 0x1348d4: 0x0  nop
    ctx->pc = 0x1348d4u;
    // NOP
    // 0x1348d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1348dc: 0x0  nop
    ctx->pc = 0x1348dcu;
    // NOP
    // 0x1348e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1348e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1348e4: 0x0  nop
    ctx->pc = 0x1348e4u;
    // NOP
    ctx->pc = 0x1348e8u;
}
