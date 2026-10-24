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

// Function: IdScreen_refillEntries
// Address: 0x13bcc0 - 0x13bd40
void IdScreen_refillEntries_0x13bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdScreen_refillEntries_0x13bcc0");
#endif

    switch (ctx->pc) {
        case 0x13bce8u: goto label_13bce8;
        case 0x13bcf8u: goto label_13bcf8;
        case 0x13bd00u: goto label_13bd00;
        default: break;
    }

    ctx->pc = 0x13bcc0u;

    // 0x13bcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bcc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13bcc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13bcd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13bcd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bcd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13bcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcdc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x13bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x13bce0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13BCE0u;
    SET_GPR_U32(ctx, 31, 0x13BCE8u);
    ctx->pc = 0x13BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCE0u;
    // 0x13bce4: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13BCE0u, 0x13BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BCE8u;
label_13bce8:
    // 0x13bce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bcec: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x13bcecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x13bcf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcf4: 0x0  nop
    ctx->pc = 0x13bcf4u;
    // NOP
label_13bcf8:
    // 0x13bcf8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13BCF8u;
    SET_GPR_U32(ctx, 31, 0x13BD00u);
    ctx->pc = 0x13BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BCF8u;
    // 0x13bcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13BCF8u, 0x13BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD00u;
label_13bd00:
    // 0x13bd00: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x13bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13bd04: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13bd08: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13bd0c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13bd0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13bd10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13bd14: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x13bd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x13bd18: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13BD18u;
    {
        const bool branch_taken_0x13bd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD18u;
        // 0x13bd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bd18) {
            ctx->pc = 0x13BCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bcf8;
        }
    }
    ctx->pc = 0x13BD20u;
    // 0x13bd20: 0xa2000095  sb          $zero, 0x95($s0)
    ctx->pc = 0x13bd20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bd24: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x13bd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bd28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13bd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bd2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13bd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13bd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd38: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD38u;
        // 0x13bd3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD40u;
}
