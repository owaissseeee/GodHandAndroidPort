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

// Function: cIDManager_allocBufRun
// Address: 0x2ace48 - 0x2acf30
void cIDManager_allocBufRun_0x2ace48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_allocBufRun_0x2ace48");
#endif

    switch (ctx->pc) {
        case 0x2acf1cu: goto label_2acf1c;
        default: break;
    }

    ctx->pc = 0x2ace48u;

    // 0x2ace48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ace48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ace4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2ace4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ace50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ace54: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ace54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ace58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ace5c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2ace5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace60: 0x1120002f  beqz        $t1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2ACE60u;
    {
        const bool branch_taken_0x2ace60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE60u;
        // 0x2ace64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace60) {
            ctx->pc = 0x2ACF20u;
            goto label_2acf20;
        }
    }
    ctx->pc = 0x2ACE68u;
    // 0x2ace68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ace6c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x2ace6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2ace70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ace70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ace74: 0x1025021  addu        $t2, $t0, $v0
    ctx->pc = 0x2ace74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ace78: 0x8d503544  lw          $s0, 0x3544($t2)
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13636)));
    // 0x2ace7c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2ace7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ace80: 0x69182a  slt         $v1, $v1, $t1
    ctx->pc = 0x2ace80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2ace84: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2ACE84u;
    {
        const bool branch_taken_0x2ace84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace84) {
            ctx->pc = 0x2ACE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE84u;
            // 0x2ace88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACF20u;
            goto label_2acf20;
        }
    }
    ctx->pc = 0x2ACE8Cu;
    // 0x2ace8c: 0x8d020740  lw          $v0, 0x740($t0)
    ctx->pc = 0x2ace8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2ace90: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x2ace90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2ace94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ace94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ace98: 0x2068018  mult        $s0, $s0, $a2
    ctx->pc = 0x2ace98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2ace9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ace9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2acea0: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x2acea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2acea4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2acea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2acea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aceac: 0xa043010d  sb          $v1, 0x10D($v0)
    ctx->pc = 0x2aceacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 269), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aceb0: 0x26100744  addiu       $s0, $s0, 0x744
    ctx->pc = 0x2aceb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1860));
    // 0x2aceb4: 0x8d030740  lw          $v1, 0x740($t0)
    ctx->pc = 0x2aceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2aceb8: 0x1108021  addu        $s0, $t0, $s0
    ctx->pc = 0x2aceb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2acebc: 0x3012  mflo        $a2
    ctx->pc = 0x2acebcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2acec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acec4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2acec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2acec8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2acec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2acecc: 0xac700108  sw          $s0, 0x108($v1)
    ctx->pc = 0x2aceccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 16));
    // 0x2aced0: 0x8d020740  lw          $v0, 0x740($t0)
    ctx->pc = 0x2aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2aced4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2aced4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2aced8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2aced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2acedc: 0xa049010c  sb          $t1, 0x10C($v0)
    ctx->pc = 0x2acedcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 268), (uint8_t)GPR_U32(ctx, 9));
    // 0x2acee0: 0x8d030740  lw          $v1, 0x740($t0)
    ctx->pc = 0x2acee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2acee4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2acee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2acee8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2acee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2aceec: 0xac6b0100  sw          $t3, 0x100($v1)
    ctx->pc = 0x2aceecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 11));
    // 0x2acef0: 0x8d020740  lw          $v0, 0x740($t0)
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2acef4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2acef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2acef8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2acef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2acefc: 0xac470104  sw          $a3, 0x104($v0)
    ctx->pc = 0x2acefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 7));
    // 0x2acf00: 0x8d030740  lw          $v1, 0x740($t0)
    ctx->pc = 0x2acf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1856)));
    // 0x2acf04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2acf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2acf08: 0xad030740  sw          $v1, 0x740($t0)
    ctx->pc = 0x2acf08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1856), GPR_U32(ctx, 3));
    // 0x2acf0c: 0x8d423544  lw          $v0, 0x3544($t2)
    ctx->pc = 0x2acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13636)));
    // 0x2acf10: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2acf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2acf14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2ACF14u;
    SET_GPR_U32(ctx, 31, 0x2ACF1Cu);
    ctx->pc = 0x2ACF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF14u;
    // 0x2acf18: 0xad423544  sw          $v0, 0x3544($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 13636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2ACF14u, 0x2ACF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF1Cu;
label_2acf1c:
    // 0x2acf1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2acf1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2acf20:
    // 0x2acf20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2acf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acf28: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF28u;
        // 0x2acf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF30u;
}
