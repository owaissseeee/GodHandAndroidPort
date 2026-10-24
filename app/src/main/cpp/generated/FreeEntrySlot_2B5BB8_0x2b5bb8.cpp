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

// Function: FreeEntrySlot_2B5BB8
// Address: 0x2b5bb8 - 0x2b5c00
void FreeEntrySlot_2B5BB8_0x2b5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeEntrySlot_2B5BB8_0x2b5bb8");
#endif

    switch (ctx->pc) {
        case 0x2b5bccu: goto label_2b5bcc;
        case 0x2b5be4u: goto label_2b5be4;
        default: break;
    }

    ctx->pc = 0x2b5bb8u;

    // 0x2b5bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5bbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5bc4: 0xc0ad3fa  jal         func_2B4FE8
    ctx->pc = 0x2B5BC4u;
    SET_GPR_U32(ctx, 31, 0x2B5BCCu);
    ctx->pc = 0x2B5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BC4u;
    // 0x2b5bc8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FE8u, 0x2B5BC4u, 0x2B5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BCCu;
label_2b5bcc:
    // 0x2b5bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bd0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2b5bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5bd4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5BD4u;
    {
        const bool branch_taken_0x2b5bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BD4u;
        // 0x2b5bd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bd4) {
            ctx->pc = 0x2B5BE4u;
            goto label_2b5be4;
        }
    }
    ctx->pc = 0x2B5BDCu;
    // 0x2b5bdc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2B5BDCu;
    SET_GPR_U32(ctx, 31, 0x2B5BE4u);
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2B5BDCu, 0x2B5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BE4u;
label_2b5be4:
    // 0x2b5be4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b5be8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b5bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b5becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF4u;
        // 0x2b5bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5BFCu;
    // 0x2b5bfc: 0x0  nop
    ctx->pc = 0x2b5bfcu;
    // NOP
    ctx->pc = 0x2b5c00u;
}
