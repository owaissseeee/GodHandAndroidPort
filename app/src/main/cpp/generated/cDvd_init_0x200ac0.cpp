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

// Function: cDvd_init
// Address: 0x200ac0 - 0x200b20
void cDvd_init_0x200ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_init_0x200ac0");
#endif

    switch (ctx->pc) {
        case 0x200ae0u: goto label_200ae0;
        case 0x200aecu: goto label_200aec;
        default: break;
    }

    ctx->pc = 0x200ac0u;

    // 0x200ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200ac4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200ac8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x200ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x200acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ad0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x200ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x200ad4: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x200ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x200ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200adc: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x200adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_200ae0:
    // 0x200ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ae4: 0xc08048a  jal         func_201228
    ctx->pc = 0x200AE4u;
    SET_GPR_U32(ctx, 31, 0x200AECu);
    ctx->pc = 0x200AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AE4u;
    // 0x200ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x200AE4u, 0x200AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AECu;
label_200aec:
    // 0x200aec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x200af0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200AF0u;
    {
        const bool branch_taken_0x200af0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x200AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF0u;
        // 0x200af4: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200af0) {
            ctx->pc = 0x200AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200ae0;
        }
    }
    ctx->pc = 0x200AF8u;
    // 0x200af8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x200af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x200afc: 0xae201104  sw          $zero, 0x1104($s1)
    ctx->pc = 0x200afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4356), GPR_U32(ctx, 0));
    // 0x200b00: 0xae201108  sw          $zero, 0x1108($s1)
    ctx->pc = 0x200b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 0));
    // 0x200b04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x200b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200b08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200b0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x200b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b14: 0x3e00008  jr          $ra
    ctx->pc = 0x200B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B14u;
        // 0x200b18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B1Cu;
    // 0x200b1c: 0x0  nop
    ctx->pc = 0x200b1cu;
    // NOP
    ctx->pc = 0x200b20u;
}
