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

// Function: func_0032E720
// Address: 0x32e720 - 0x32e770
void func_0032E720_0x32e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E720_0x32e720");
#endif

    switch (ctx->pc) {
        case 0x32e744u: goto label_32e744;
        case 0x32e754u: goto label_32e754;
        default: break;
    }

    ctx->pc = 0x32e720u;

    // 0x32e720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e724: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32e728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32e72c: 0x2451147c  addiu       $s1, $v0, 0x147C
    ctx->pc = 0x32e72cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5244));
    // 0x32e730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e73c: 0xc0cefc6  jal         func_33BF18
    ctx->pc = 0x32E73Cu;
    SET_GPR_U32(ctx, 31, 0x32E744u);
    ctx->pc = 0x32E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E73Cu;
    // 0x32e740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x32E73Cu, 0x32E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E744u;
label_32e744:
    // 0x32e744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32E744u;
    {
        const bool branch_taken_0x32e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E744u;
        // 0x32e748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e744) {
            ctx->pc = 0x32E758u;
            goto label_32e758;
        }
    }
    ctx->pc = 0x32E74Cu;
    // 0x32e74c: 0xc0cb9dc  jal         func_32E770
    ctx->pc = 0x32E74Cu;
    SET_GPR_U32(ctx, 31, 0x32E754u);
    ctx->pc = 0x32E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E770u, 0x32E74Cu, 0x32E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E754u;
label_32e754:
    // 0x32e754: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x32e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_32e758:
    // 0x32e758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e764: 0x3e00008  jr          $ra
    ctx->pc = 0x32E764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E764u;
        // 0x32e768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E76Cu;
    // 0x32e76c: 0x0  nop
    ctx->pc = 0x32e76cu;
    // NOP
    ctx->pc = 0x32e770u;
}
