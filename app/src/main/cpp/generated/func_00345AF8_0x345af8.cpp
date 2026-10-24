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

// Function: func_00345AF8
// Address: 0x345af8 - 0x345b38
void func_00345AF8_0x345af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345AF8_0x345af8");
#endif

    switch (ctx->pc) {
        case 0x345b08u: goto label_345b08;
        case 0x345b18u: goto label_345b18;
        case 0x345b24u: goto label_345b24;
        default: break;
    }

    ctx->pc = 0x345af8u;

    // 0x345af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345b00: 0xc0d5c3e  jal         func_3570F8
    ctx->pc = 0x345B00u;
    SET_GPR_U32(ctx, 31, 0x345B08u);
    ctx->pc = 0x345B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B00u;
    // 0x345b04: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570F8u, 0x345B00u, 0x345B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B08u;
label_345b08:
    // 0x345b08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x345B08u;
    {
        const bool branch_taken_0x345b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B08u;
        // 0x345b0c: 0x2404fec9  addiu       $a0, $zero, -0x137 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b08) {
            ctx->pc = 0x345B28u;
            goto label_345b28;
        }
    }
    ctx->pc = 0x345B10u;
    // 0x345b10: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x345B10u;
    SET_GPR_U32(ctx, 31, 0x345B18u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x345B10u, 0x345B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B18u;
label_345b18:
    // 0x345b18: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x345b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x345b1c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345B1Cu;
    SET_GPR_U32(ctx, 31, 0x345B24u);
    ctx->pc = 0x345B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B1Cu;
    // 0x345b20: 0x24847e88  addiu       $a0, $a0, 0x7E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345B1Cu, 0x345B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B24u;
label_345b24:
    // 0x345b24: 0x2402fec9  addiu       $v0, $zero, -0x137
    ctx->pc = 0x345b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966985));
label_345b28:
    // 0x345b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x345B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B2Cu;
        // 0x345b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345B34u;
    // 0x345b34: 0x0  nop
    ctx->pc = 0x345b34u;
    // NOP
    ctx->pc = 0x345b38u;
}
