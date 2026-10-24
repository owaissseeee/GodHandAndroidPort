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

// Function: func_0013CFE0
// Address: 0x13cfe0 - 0x13d048
void func_0013CFE0_0x13cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013CFE0_0x13cfe0");
#endif

    switch (ctx->pc) {
        case 0x13d004u: goto label_13d004;
        case 0x13d01cu: goto label_13d01c;
        default: break;
    }

    ctx->pc = 0x13cfe0u;

    // 0x13cfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cfe4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13cfe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13cfec: 0x8c6255c8  lw          $v0, 0x55C8($v1)
    ctx->pc = 0x13cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7855C8u));
    // 0x13cff0: 0x247055c8  addiu       $s0, $v1, 0x55C8
    ctx->pc = 0x13cff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21960));
    // 0x13cff4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CFF4u;
    {
        const bool branch_taken_0x13cff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFF4u;
        // 0x13cff8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cff4) {
            ctx->pc = 0x13D01Cu;
            goto label_13d01c;
        }
    }
    ctx->pc = 0x13CFFCu;
    // 0x13cffc: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13CFFCu;
    SET_GPR_U32(ctx, 31, 0x13D004u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13CFFCu, 0x13D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D004u;
label_13d004:
    // 0x13d004: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13d008: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13d008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13d00c: 0x24a5de80  addiu       $a1, $a1, -0x2180
    ctx->pc = 0x13d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x13d010: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13d014: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13D014u;
    SET_GPR_U32(ctx, 31, 0x13D01Cu);
    ctx->pc = 0x13D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D014u;
    // 0x13d018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13D014u, 0x13D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D01Cu;
label_13d01c:
    // 0x13d01c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d024: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d028: 0x3e00008  jr          $ra
    ctx->pc = 0x13D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D028u;
        // 0x13d02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D030u;
    // 0x13d030: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x13d030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x13d034: 0x0  nop
    ctx->pc = 0x13d034u;
    // NOP
    // 0x13d038: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x13d038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x13d03c: 0x0  nop
    ctx->pc = 0x13d03cu;
    // NOP
    // 0x13d040: 0x0  nop
    ctx->pc = 0x13d040u;
    // NOP
    // 0x13d044: 0x0  nop
    ctx->pc = 0x13d044u;
    // NOP
    ctx->pc = 0x13d048u;
}
