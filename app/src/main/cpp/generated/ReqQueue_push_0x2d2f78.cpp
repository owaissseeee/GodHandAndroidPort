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

// Function: ReqQueue_push
// Address: 0x2d2f78 - 0x2d3020
void ReqQueue_push_0x2d2f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReqQueue_push_0x2d2f78");
#endif

    switch (ctx->pc) {
        case 0x2d2fb4u: goto label_2d2fb4;
        case 0x2d2fc8u: goto label_2d2fc8;
        case 0x2d2fe8u: goto label_2d2fe8;
        default: break;
    }

    ctx->pc = 0x2d2f78u;

    // 0x2d2f78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d2f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d2f7c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d2f80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d2f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d2f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f88: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d2f8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d2f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f90: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d2f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d2f94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d2f94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f98: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2d2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2d2f9c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d2f9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fa0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d2fa4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d2fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2fac: 0xc0b4c44  jal         func_2D3110
    ctx->pc = 0x2D2FACu;
    SET_GPR_U32(ctx, 31, 0x2D2FB4u);
    ctx->pc = 0x2D2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2FACu;
    // 0x2d2fb0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3110u, 0x2D2FACu, 0x2D2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FB4u;
label_2d2fb4:
    // 0x2d2fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fb8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2FB8u;
    {
        const bool branch_taken_0x2d2fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FB8u;
        // 0x2d2fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fb8) {
            ctx->pc = 0x2D2FF8u;
            goto label_2d2ff8;
        }
    }
    ctx->pc = 0x2D2FC0u;
    // 0x2d2fc0: 0xc0b4c64  jal         func_2D3190
    ctx->pc = 0x2D2FC0u;
    SET_GPR_U32(ctx, 31, 0x2D2FC8u);
    ctx->pc = 0x2D2FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2FC0u;
    // 0x2d2fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3190u, 0x2D2FC0u, 0x2D2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FC8u;
label_2d2fc8:
    // 0x2d2fc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d2fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d2fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d2fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fd4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d2fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fd8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d2fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fe0: 0xc0b4c90  jal         func_2D3240
    ctx->pc = 0x2D2FE0u;
    SET_GPR_U32(ctx, 31, 0x2D2FE8u);
    ctx->pc = 0x2D2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2FE0u;
    // 0x2d2fe4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3240u, 0x2D2FE0u, 0x2D2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FE8u;
label_2d2fe8:
    // 0x2d2fe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2fec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2FECu;
    {
        const bool branch_taken_0x2d2fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2fec) {
            ctx->pc = 0x2D2FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2FECu;
            // 0x2d2ff0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2FF4u;
            goto label_2d2ff4;
        }
    }
    ctx->pc = 0x2D2FF4u;
label_2d2ff4:
    // 0x2d2ff4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d2ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ff8:
    // 0x2d2ff8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d2ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2ffc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d2ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3000: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d3000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3004: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d3004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3008: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d3008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d300c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d300cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3010: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2d3010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3018: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3018u;
        // 0x2d301c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3020u;
}
