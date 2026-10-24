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

// Function: mwPlyCalcWorkCprmSfd
// Address: 0x342f98 - 0x342ff8
void mwPlyCalcWorkCprmSfd_0x342f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwPlyCalcWorkCprmSfd_0x342f98");
#endif

    switch (ctx->pc) {
        case 0x342fbcu: goto label_342fbc;
        case 0x342fd0u: goto label_342fd0;
        case 0x342fdcu: goto label_342fdc;
        default: break;
    }

    ctx->pc = 0x342f98u;

    // 0x342f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x342f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x342fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x342fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342fa8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x342FA8u;
    {
        const bool branch_taken_0x342fa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x342FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FA8u;
        // 0x342fac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fa8) {
            ctx->pc = 0x342FC8u;
            goto label_342fc8;
        }
    }
    ctx->pc = 0x342FB0u;
    // 0x342fb0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x342fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x342fb4: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x342FB4u;
    SET_GPR_U32(ctx, 31, 0x342FBCu);
    ctx->pc = 0x342FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FB4u;
    // 0x342fb8: 0x248471d8  addiu       $a0, $a0, 0x71D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x342FB4u, 0x342FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FBCu;
label_342fbc:
    // 0x342fbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342FBCu;
    {
        const bool branch_taken_0x342fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FBCu;
        // 0x342fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fbc) {
            ctx->pc = 0x342FE0u;
            goto label_342fe0;
        }
    }
    ctx->pc = 0x342FC4u;
    // 0x342fc4: 0x0  nop
    ctx->pc = 0x342fc4u;
    // NOP
label_342fc8:
    // 0x342fc8: 0xc0d0ba2  jal         func_342E88
    ctx->pc = 0x342FC8u;
    SET_GPR_U32(ctx, 31, 0x342FD0u);
    ctx->pc = 0x342E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E88u, 0x342FC8u, 0x342FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FD0u;
label_342fd0:
    // 0x342fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342fd4: 0xc0d0bd0  jal         func_342F40
    ctx->pc = 0x342FD4u;
    SET_GPR_U32(ctx, 31, 0x342FDCu);
    ctx->pc = 0x342FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342FD4u;
    // 0x342fd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342F40u, 0x342FD4u, 0x342FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342FDCu;
label_342fdc:
    // 0x342fdc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x342fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_342fe0:
    // 0x342fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342fec: 0x3e00008  jr          $ra
    ctx->pc = 0x342FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FECu;
        // 0x342ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342FF4u;
    // 0x342ff4: 0x0  nop
    ctx->pc = 0x342ff4u;
    // NOP
    ctx->pc = 0x342ff8u;
}
