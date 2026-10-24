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

// Function: dvci_to_large_to_yen
// Address: 0x3329e8 - 0x332a60
void dvci_to_large_to_yen_0x3329e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dvci_to_large_to_yen_0x3329e8");
#endif

    switch (ctx->pc) {
        case 0x3329fcu: goto label_3329fc;
        case 0x332a18u: goto label_332a18;
        default: break;
    }

    ctx->pc = 0x3329e8u;

    // 0x3329e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3329e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3329ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3329ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3329f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3329f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3329f4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3329F4u;
    SET_GPR_U32(ctx, 31, 0x3329FCu);
    ctx->pc = 0x3329F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3329F4u;
    // 0x3329f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3329F4u, 0x3329FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3329FCu;
label_3329fc:
    // 0x3329fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3329fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a00: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x332A00u;
    {
        const bool branch_taken_0x332a00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A00u;
        // 0x332a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a00) {
            ctx->pc = 0x332A50u;
            goto label_332a50;
        }
    }
    ctx->pc = 0x332A08u;
    // 0x332a08: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x332a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x332a0c: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x332a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x332a10: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x332a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x332a14: 0x0  nop
    ctx->pc = 0x332a14u;
    // NOP
label_332a18:
    // 0x332a18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x332a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x332a1c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x332a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x332a20: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x332a20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x332a24: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332A24u;
    {
        const bool branch_taken_0x332a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x332A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A24u;
        // 0x332a28: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a24) {
            ctx->pc = 0x332A34u;
            goto label_332a34;
        }
    }
    ctx->pc = 0x332A2Cu;
    // 0x332a2c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x332a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x332a30: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x332a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_332a34:
    // 0x332a34: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x332a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x332a38: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x332a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x332a3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x332A3Cu;
    {
        const bool branch_taken_0x332a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A3Cu;
        // 0x332a40: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a3c) {
            ctx->pc = 0x332A48u;
            goto label_332a48;
        }
    }
    ctx->pc = 0x332A44u;
    // 0x332a44: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x332a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_332a48:
    // 0x332a48: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x332A48u;
    {
        const bool branch_taken_0x332a48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x332A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A48u;
        // 0x332a4c: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a48) {
            ctx->pc = 0x332A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332a18;
        }
    }
    ctx->pc = 0x332A50u;
label_332a50:
    // 0x332a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332a58: 0x3e00008  jr          $ra
    ctx->pc = 0x332A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A58u;
        // 0x332a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332A60u;
}
