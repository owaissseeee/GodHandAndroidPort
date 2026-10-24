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

// Function: func_00357068
// Address: 0x357068 - 0x3570d0
void func_00357068_0x357068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357068_0x357068");
#endif

    switch (ctx->pc) {
        case 0x35709cu: goto label_35709c;
        default: break;
    }

    ctx->pc = 0x357068u;

    // 0x357068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35706c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35706cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35707c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357080: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x357080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x357084: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x357084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x357088: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x357088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35708c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x35708Cu;
    {
        const bool branch_taken_0x35708c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35708Cu;
        // 0x357090: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35708c) {
            ctx->pc = 0x3570B8u;
            goto label_3570b8;
        }
    }
    ctx->pc = 0x357094u;
    // 0x357094: 0xc0d6d28  jal         func_35B4A0
    ctx->pc = 0x357094u;
    SET_GPR_U32(ctx, 31, 0x35709Cu);
    ctx->pc = 0x35B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4A0u, 0x357094u, 0x35709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35709Cu;
label_35709c:
    // 0x35709c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3570a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3570a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3570a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3570a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3570ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3570acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3570b0: 0x80d5c34  j           func_3570D0
    ctx->pc = 0x3570B0u;
    ctx->pc = 0x3570B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570B0u;
    // 0x3570b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570D0u, 0x3570B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3570B8u;
label_3570b8:
    // 0x3570b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3570b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3570bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3570bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3570c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3570c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3570c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3570C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570C4u;
        // 0x3570c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570CCu;
    // 0x3570cc: 0x0  nop
    ctx->pc = 0x3570ccu;
    // NOP
    ctx->pc = 0x3570d0u;
}
