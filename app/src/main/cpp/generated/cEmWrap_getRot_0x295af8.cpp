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

// Function: cEmWrap_getRot
// Address: 0x295af8 - 0x295b38
void cEmWrap_getRot_0x295af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_getRot_0x295af8");
#endif

    switch (ctx->pc) {
        case 0x295b0cu: goto label_295b0c;
        default: break;
    }

    ctx->pc = 0x295af8u;

    // 0x295af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295afc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295b04: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295B04u;
    SET_GPR_U32(ctx, 31, 0x295B0Cu);
    ctx->pc = 0x295B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B04u;
    // 0x295b08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295B04u, 0x295B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B0Cu;
label_295b0c:
    // 0x295b0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295B0Cu;
    {
        const bool branch_taken_0x295b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b0c) {
            ctx->pc = 0x295B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295B0Cu;
            // 0x295b10: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295B20u;
            goto label_295b20;
        }
    }
    ctx->pc = 0x295B14u;
    // 0x295b14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295B18u;
    {
        const bool branch_taken_0x295b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B18u;
        // 0x295b1c: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b18) {
            ctx->pc = 0x295B24u;
            goto label_295b24;
        }
    }
    ctx->pc = 0x295B20u;
label_295b20:
    // 0x295b20: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x295b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
label_295b24:
    // 0x295b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x295B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B2Cu;
        // 0x295b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295B34u;
    // 0x295b34: 0x0  nop
    ctx->pc = 0x295b34u;
    // NOP
    ctx->pc = 0x295b38u;
}
