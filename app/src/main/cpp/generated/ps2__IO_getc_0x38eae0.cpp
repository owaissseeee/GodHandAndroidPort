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

// Function: _IO_getc
// Address: 0x38eae0 - 0x38eb28
void ps2__IO_getc_0x38eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_getc_0x38eae0");
#endif

    switch (ctx->pc) {
        case 0x38eb04u: goto label_38eb04;
        default: break;
    }

    ctx->pc = 0x38eae0u;

    // 0x38eae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38eae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38eae8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x38eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38eaec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38eaf0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38eaf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38eaf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38EAF4u;
    {
        const bool branch_taken_0x38eaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAF4u;
        // 0x38eaf8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eaf4) {
            ctx->pc = 0x38EB0Cu;
            goto label_38eb0c;
        }
    }
    ctx->pc = 0x38EAFCu;
    // 0x38eafc: 0xc0e31a2  jal         func_38C688
    ctx->pc = 0x38EAFCu;
    SET_GPR_U32(ctx, 31, 0x38EB04u);
    ctx->pc = 0x38C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C688u, 0x38EAFCu, 0x38EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB04u;
label_38eb04:
    // 0x38eb04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38EB04u;
    {
        const bool branch_taken_0x38eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB04u;
        // 0x38eb08: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb04) {
            ctx->pc = 0x38EB14u;
            goto label_38eb14;
        }
    }
    ctx->pc = 0x38EB0Cu;
label_38eb0c:
    // 0x38eb0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x38eb0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38eb10: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x38eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_38eb14:
    // 0x38eb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eb18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38eb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x38EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB1Cu;
        // 0x38eb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EB24u;
    // 0x38eb24: 0x0  nop
    ctx->pc = 0x38eb24u;
    // NOP
    ctx->pc = 0x38eb28u;
}
