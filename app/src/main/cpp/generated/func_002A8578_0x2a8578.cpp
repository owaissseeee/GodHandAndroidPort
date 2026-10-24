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

// Function: func_002A8578
// Address: 0x2a8578 - 0x2a8608
void func_002A8578_0x2a8578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A8578_0x2a8578");
#endif

    switch (ctx->pc) {
        case 0x2a85c0u: goto label_2a85c0;
        case 0x2a85e0u: goto label_2a85e0;
        default: break;
    }

    ctx->pc = 0x2a8578u;

    // 0x2a8578: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a8578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a857c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2a857cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2a8580: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a8580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a8584: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a8584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a8588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a858c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a8590: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8594: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a8594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a8598: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a8598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a859c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2a859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2a85a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a85a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85a4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2a85a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a85a8: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x2a85a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2a85ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a85b0: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A85B0u;
    {
        const bool branch_taken_0x2a85b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85B0u;
        // 0x2a85b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a85b0) {
            ctx->pc = 0x2A85C0u;
            goto label_2a85c0;
        }
    }
    ctx->pc = 0x2A85B8u;
    // 0x2a85b8: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x2A85B8u;
    SET_GPR_U32(ctx, 31, 0x2A85C0u);
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x2A85B8u, 0x2A85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85C0u;
label_2a85c0:
    // 0x2a85c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a85c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a85c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85c8: 0xc48c05a8  lwc1        $f12, 0x5A8($a0)
    ctx->pc = 0x2a85c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a85cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a85ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a85d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a85d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2a85d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a85d8: 0xc055d5a  jal         func_157568
    ctx->pc = 0x2A85D8u;
    SET_GPR_U32(ctx, 31, 0x2A85E0u);
    ctx->pc = 0x2A85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A85D8u;
    // 0x2a85dc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x2A85D8u, 0x2A85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A85E0u;
label_2a85e0:
    // 0x2a85e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a85e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a85e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a85e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a85e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a85e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a85ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a85ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a85f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2a85f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a85f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a85f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a85f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2a85f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a85fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A85FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A85FCu;
        // 0x2a8600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A85FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8604u;
    // 0x2a8604: 0x0  nop
    ctx->pc = 0x2a8604u;
    // NOP
    ctx->pc = 0x2a8608u;
}
