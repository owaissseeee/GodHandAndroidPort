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

// Function: func_0016F350
// Address: 0x16f350 - 0x16f3b0
void func_0016F350_0x16f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F350_0x16f350");
#endif

    switch (ctx->pc) {
        case 0x16f374u: goto label_16f374;
        case 0x16f38cu: goto label_16f38c;
        default: break;
    }

    ctx->pc = 0x16f350u;

    // 0x16f350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f354: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16f358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f35c: 0x8c625778  lw          $v0, 0x5778($v1)
    ctx->pc = 0x16f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785778u));
    // 0x16f360: 0x24705778  addiu       $s0, $v1, 0x5778
    ctx->pc = 0x16f360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22392));
    // 0x16f364: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F364u;
    {
        const bool branch_taken_0x16f364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F364u;
        // 0x16f368: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f364) {
            ctx->pc = 0x16F38Cu;
            goto label_16f38c;
        }
    }
    ctx->pc = 0x16F36Cu;
    // 0x16f36c: 0xc05858a  jal         func_161628
    ctx->pc = 0x16F36Cu;
    SET_GPR_U32(ctx, 31, 0x16F374u);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x16F36Cu, 0x16F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f378: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x16f378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x16f37c: 0x24a5ff70  addiu       $a1, $a1, -0x90
    ctx->pc = 0x16f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967152));
    // 0x16f380: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x16f384: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16F384u;
    SET_GPR_U32(ctx, 31, 0x16F38Cu);
    ctx->pc = 0x16F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F384u;
    // 0x16f388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16F384u, 0x16F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F38Cu;
label_16f38c:
    // 0x16f38c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f398: 0x3e00008  jr          $ra
    ctx->pc = 0x16F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F398u;
        // 0x16f39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F3A0u;
    // 0x16f3a0: 0xac830308  sw          $v1, 0x308($a0)
    ctx->pc = 0x16f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 776), GPR_U32(ctx, 3));
    // 0x16f3a4: 0x0  nop
    ctx->pc = 0x16f3a4u;
    // NOP
    // 0x16f3a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16f3ac: 0x0  nop
    ctx->pc = 0x16f3acu;
    // NOP
    ctx->pc = 0x16f3b0u;
}
