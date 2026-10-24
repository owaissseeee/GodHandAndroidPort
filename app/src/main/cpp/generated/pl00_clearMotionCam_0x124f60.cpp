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

// Function: pl00_clearMotionCam
// Address: 0x124f60 - 0x124fc8
void pl00_clearMotionCam_0x124f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_clearMotionCam_0x124f60");
#endif

    switch (ctx->pc) {
        case 0x124fa8u: goto label_124fa8;
        case 0x124fb4u: goto label_124fb4;
        default: break;
    }

    ctx->pc = 0x124f60u;

    // 0x124f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124f64: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x124f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x124f68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x124f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x124f6c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x124f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x124f70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x124F70u;
    {
        const bool branch_taken_0x124f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F70u;
        // 0x124f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f70) {
            ctx->pc = 0x124F90u;
            goto label_124f90;
        }
    }
    ctx->pc = 0x124F78u;
    // 0x124f78: 0x8c8315f4  lw          $v1, 0x15F4($a0)
    ctx->pc = 0x124f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x124f7c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x124f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x124f80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x124F80u;
    {
        const bool branch_taken_0x124f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F80u;
        // 0x124f84: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f80) {
            ctx->pc = 0x124FB4u;
            goto label_124fb4;
        }
    }
    ctx->pc = 0x124F88u;
    // 0x124f88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x124f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x124f8c: 0xac8215f4  sw          $v0, 0x15F4($a0)
    ctx->pc = 0x124f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5620), GPR_U32(ctx, 2));
label_124f90:
    // 0x124f90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x124f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x124f94: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x124f98: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124F98u;
    {
        const bool branch_taken_0x124f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F98u;
        // 0x124f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f98) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124FA0u;
    // 0x124fa0: 0xc04ee6e  jal         func_13B9B8
    ctx->pc = 0x124FA0u;
    SET_GPR_U32(ctx, 31, 0x124FA8u);
    ctx->pc = 0x124FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FA0u;
    // 0x124fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9B8u, 0x124FA0u, 0x124FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FA8u;
label_124fa8:
    // 0x124fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124fac:
    // 0x124fac: 0xc04e350  jal         func_138D40
    ctx->pc = 0x124FACu;
    SET_GPR_U32(ctx, 31, 0x124FB4u);
    ctx->pc = 0x124FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FACu;
    // 0x124fb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x124FACu, 0x124FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FB4u;
label_124fb4:
    // 0x124fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x124fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x124FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FBCu;
        // 0x124fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124FC4u;
    // 0x124fc4: 0x0  nop
    ctx->pc = 0x124fc4u;
    // NOP
    ctx->pc = 0x124fc8u;
}
