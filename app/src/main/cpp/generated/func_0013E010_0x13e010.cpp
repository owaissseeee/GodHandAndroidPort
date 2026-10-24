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

// Function: func_0013E010
// Address: 0x13e010 - 0x13e0b0
void func_0013E010_0x13e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E010_0x13e010");
#endif

    switch (ctx->pc) {
        case 0x13e040u: goto label_13e040;
        case 0x13e050u: goto label_13e050;
        case 0x13e078u: goto label_13e078;
        default: break;
    }

    ctx->pc = 0x13e010u;

    // 0x13e010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13e014: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13e018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13e01c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e020: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13e024: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e028: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13e02c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e030: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13e034: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13e038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e03c: 0x0  nop
    ctx->pc = 0x13e03cu;
    // NOP
label_13e040:
    // 0x13e040: 0x2348018  mult        $s0, $s1, $s4
    ctx->pc = 0x13e040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13e044: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13e048: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13E048u;
    SET_GPR_U32(ctx, 31, 0x13E050u);
    ctx->pc = 0x13E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E048u;
    // 0x13e04c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13E048u, 0x13E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E050u;
label_13e050:
    // 0x13e050: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13e054: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x13e058: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x13e058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e05c: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x13e05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e060: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E060u;
    {
        const bool branch_taken_0x13e060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E060u;
        // 0x13e064: 0xa21300ac  sb          $s3, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e060) {
            ctx->pc = 0x13E040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e040;
        }
    }
    ctx->pc = 0x13E068u;
    // 0x13e068: 0x2644033c  addiu       $a0, $s2, 0x33C
    ctx->pc = 0x13e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 828));
    // 0x13e06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e070: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e074: 0x0  nop
    ctx->pc = 0x13e074u;
    // NOP
label_13e078:
    // 0x13e078: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13e07c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x13e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e080: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x13e080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13e084: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x13e084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e088: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13E088u;
    {
        const bool branch_taken_0x13e088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E088u;
        // 0x13e08c: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e088) {
            ctx->pc = 0x13E078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e078;
        }
    }
    ctx->pc = 0x13E090u;
    // 0x13e090: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13e090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e094: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13e094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e098: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e09c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13e09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e0a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13e0a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0A8u;
        // 0x13e0ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E0B0u;
}
