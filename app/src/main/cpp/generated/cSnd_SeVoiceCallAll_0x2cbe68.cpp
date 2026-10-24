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

// Function: cSnd_SeVoiceCallAll
// Address: 0x2cbe68 - 0x2cbec0
void cSnd_SeVoiceCallAll_0x2cbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeVoiceCallAll_0x2cbe68");
#endif

    switch (ctx->pc) {
        case 0x2cbe90u: goto label_2cbe90;
        case 0x2cbe9cu: goto label_2cbe9c;
        default: break;
    }

    ctx->pc = 0x2cbe68u;

    // 0x2cbe68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cbe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cbe6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cbe70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cbe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cbe74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbe78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cbe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cbe7c: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x2cbe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cbe80: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBE80u;
    {
        const bool branch_taken_0x2cbe80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE80u;
        // 0x2cbe84: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe80) {
            ctx->pc = 0x2CBEA8u;
            goto label_2cbea8;
        }
    }
    ctx->pc = 0x2CBE88u;
    // 0x2cbe88: 0x58c00  sll         $s1, $a1, 16
    ctx->pc = 0x2cbe88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cbe8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe90:
    // 0x2cbe90: 0x112c03  sra         $a1, $s1, 16
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2cbe94: 0xc0b3944  jal         func_2CE510
    ctx->pc = 0x2CBE94u;
    SET_GPR_U32(ctx, 31, 0x2CBE9Cu);
    ctx->pc = 0x2CBE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE94u;
    // 0x2cbe98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE510u, 0x2CBE94u, 0x2CBE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE9Cu;
label_2cbe9c:
    // 0x2cbe9c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2cbe9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cbea0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CBEA0u;
    {
        const bool branch_taken_0x2cbea0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEA0u;
        // 0x2cbea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbea0) {
            ctx->pc = 0x2CBE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbe90;
        }
    }
    ctx->pc = 0x2CBEA8u;
label_2cbea8:
    // 0x2cbea8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cbea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbeac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cbeacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbeb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cbeb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEB8u;
        // 0x2cbebc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBEC0u;
}
