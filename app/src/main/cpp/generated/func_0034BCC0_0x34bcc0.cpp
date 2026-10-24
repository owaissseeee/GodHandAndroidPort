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

// Function: func_0034BCC0
// Address: 0x34bcc0 - 0x34bd58
void func_0034BCC0_0x34bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BCC0_0x34bcc0");
#endif

    switch (ctx->pc) {
        case 0x34bd1cu: goto label_34bd1c;
        default: break;
    }

    ctx->pc = 0x34bcc0u;

    // 0x34bcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34bcc4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34bcc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bcc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34bccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bcd0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x34bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x34bcd4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x34bcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bcd8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34bcdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34bce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bce4: 0x34a5040c  ori         $a1, $a1, 0x40C
    ctx->pc = 0x34bce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1036);
    // 0x34bce8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x34bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34bcec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x34bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x34bcf0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34BCF0u;
    {
        const bool branch_taken_0x34bcf0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x34BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCF0u;
        // 0x34bcf4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bcf0) {
            ctx->pc = 0x34BD08u;
            goto label_34bd08;
        }
    }
    ctx->pc = 0x34BCF8u;
    // 0x34bcf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bcfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bd00: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34BD00u;
    ctx->pc = 0x34BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD00u;
    // 0x34bd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34BD00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34BD08u;
label_34bd08:
    // 0x34bd08: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x34bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x34bd0c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34bd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x34bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x34bd14: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x34BD14u;
    SET_GPR_U32(ctx, 31, 0x34BD1Cu);
    ctx->pc = 0x34BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD14u;
    // 0x34bd18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x34BD14u, 0x34BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BD1Cu;
label_34bd1c:
    // 0x34bd1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34bd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd20: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34bd24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x34bd28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34BD28u;
    {
        const bool branch_taken_0x34bd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD28u;
        // 0x34bd2c: 0x34a5040a  ori         $a1, $a1, 0x40A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1034);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bd28) {
            ctx->pc = 0x34BD40u;
            goto label_34bd40;
        }
    }
    ctx->pc = 0x34BD30u;
    // 0x34bd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bd34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bd38: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34BD38u;
    ctx->pc = 0x34BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BD38u;
    // 0x34bd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34BD38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34BD40u;
label_34bd40:
    // 0x34bd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bd44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bd48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BD4Cu;
        // 0x34bd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BD54u;
    // 0x34bd54: 0x0  nop
    ctx->pc = 0x34bd54u;
    // NOP
    ctx->pc = 0x34bd58u;
}
