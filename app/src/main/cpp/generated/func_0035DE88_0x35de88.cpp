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

// Function: func_0035DE88
// Address: 0x35de88 - 0x35ded8
void func_0035DE88_0x35de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DE88_0x35de88");
#endif

    switch (ctx->pc) {
        case 0x35deacu: goto label_35deac;
        default: break;
    }

    ctx->pc = 0x35de88u;

    // 0x35de88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35de88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35de8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35de90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35de94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35de94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35de9c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x35dea0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35dea4: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DEA4u;
    SET_GPR_U32(ctx, 31, 0x35DEACu);
    ctx->pc = 0x35DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEA4u;
    // 0x35dea8: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DEA4u, 0x35DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEACu;
label_35deac:
    // 0x35deac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DEACu;
    {
        const bool branch_taken_0x35deac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35deac) {
            ctx->pc = 0x35DEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DEACu;
            // 0x35deb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DEC4u;
            goto label_35dec4;
        }
    }
    ctx->pc = 0x35DEB4u;
    // 0x35deb4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x35deb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35deb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35debc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35debcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35dec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dec4:
    // 0x35dec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35dec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35decc: 0x3e00008  jr          $ra
    ctx->pc = 0x35DECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DECCu;
        // 0x35ded0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DED4u;
    // 0x35ded4: 0x0  nop
    ctx->pc = 0x35ded4u;
    // NOP
    ctx->pc = 0x35ded8u;
}
