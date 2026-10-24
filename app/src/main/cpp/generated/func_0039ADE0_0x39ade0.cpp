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

// Function: func_0039ADE0
// Address: 0x39ade0 - 0x39ae50
void func_0039ADE0_0x39ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039ADE0_0x39ade0");
#endif

    switch (ctx->pc) {
        case 0x39ae3cu: goto label_39ae3c;
        default: break;
    }

    ctx->pc = 0x39ade0u;

    // 0x39ade0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ade4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x39ade4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ade8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39adec: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39ADECu;
    {
        const bool branch_taken_0x39adec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x39adec) {
            ctx->pc = 0x39ADF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ADECu;
            // 0x39adf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ADF4u;
            goto label_39adf4;
        }
    }
    ctx->pc = 0x39ADF4u;
label_39adf4:
    // 0x39adf4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x39adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x39adf8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x39adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x39adfc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x39adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39ae00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39ae04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39ae08: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x39ae08u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39ae0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39ae10: 0x1012  mflo        $v0
    ctx->pc = 0x39ae10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39ae14: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x39ae14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39ae18: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x39ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39ae1c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x39ae1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x39ae20: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39AE20u;
    {
        const bool branch_taken_0x39ae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ae20) {
            ctx->pc = 0x39AE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AE20u;
            // 0x39ae24: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AE30u;
            goto label_39ae30;
        }
    }
    ctx->pc = 0x39AE28u;
    // 0x39ae28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39AE28u;
    {
        const bool branch_taken_0x39ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE28u;
        // 0x39ae2c: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae28) {
            ctx->pc = 0x39AE40u;
            goto label_39ae40;
        }
    }
    ctx->pc = 0x39AE30u;
label_39ae30:
    // 0x39ae30: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x39ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ae34: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39AE34u;
    SET_GPR_U32(ctx, 31, 0x39AE3Cu);
    ctx->pc = 0x39AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE34u;
    // 0x39ae38: 0x24a5e588  addiu       $a1, $a1, -0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39AE34u, 0x39AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE3Cu;
label_39ae3c:
    // 0x39ae3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ae3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ae40:
    // 0x39ae40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ae44: 0x3e00008  jr          $ra
    ctx->pc = 0x39AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE44u;
        // 0x39ae48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AE4Cu;
    // 0x39ae4c: 0x0  nop
    ctx->pc = 0x39ae4cu;
    // NOP
    ctx->pc = 0x39ae50u;
}
