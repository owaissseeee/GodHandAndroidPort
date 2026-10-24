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

// Function: setg__9streambufPcT1T1
// Address: 0x38bcd8 - 0x38bd40
void setg__9streambufPcT1T1_0x38bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setg__9streambufPcT1T1_0x38bcd8");
#endif

    switch (ctx->pc) {
        case 0x38bd14u: goto label_38bd14;
        default: break;
    }

    ctx->pc = 0x38bcd8u;

    // 0x38bcd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38bcdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38bce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38bce4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38bce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bce8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38bcec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38bcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38bcf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38bcf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38bcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38bd00: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38bd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38bd04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BD04u;
    {
        const bool branch_taken_0x38bd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD04u;
        // 0x38bd08: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd04) {
            ctx->pc = 0x38BD14u;
            goto label_38bd14;
        }
    }
    ctx->pc = 0x38BD0Cu;
    // 0x38bd0c: 0xc0e30e8  jal         func_38C3A0
    ctx->pc = 0x38BD0Cu;
    SET_GPR_U32(ctx, 31, 0x38BD14u);
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38BD0Cu, 0x38BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD14u;
label_38bd14:
    // 0x38bd14: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x38bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x38bd18: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x38bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x38bd1c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x38bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x38bd20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38bd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38bd24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38bd24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38bd28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38bd28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38bd2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38bd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38bd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bd34: 0x3e00008  jr          $ra
    ctx->pc = 0x38BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD34u;
        // 0x38bd38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BD3Cu;
    // 0x38bd3c: 0x0  nop
    ctx->pc = 0x38bd3cu;
    // NOP
    ctx->pc = 0x38bd40u;
}
