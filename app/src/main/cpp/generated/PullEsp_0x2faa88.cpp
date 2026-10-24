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

// Function: PullEsp
// Address: 0x2faa88 - 0x2fab88
void PullEsp_0x2faa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PullEsp_0x2faa88");
#endif

    switch (ctx->pc) {
        case 0x2faad8u: goto label_2faad8;
        case 0x2fab08u: goto label_2fab08;
        case 0x2fab14u: goto label_2fab14;
        default: break;
    }

    ctx->pc = 0x2faa88u;

    // 0x2faa88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2faa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2faa8c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2faa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2faa90: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2faa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2faa94: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2faa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2faa98: 0x2466b7c0  addiu       $a2, $v1, -0x4840
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2faa9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2faa9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaa0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2faaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2faaa4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2faaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2faaa8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2faaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2faaac: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2faaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2faab0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2faab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2faab4: 0x24a4b7c0  addiu       $a0, $a1, -0x4840
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
    // 0x2faab8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2faab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2faabc: 0x2456b840  addiu       $s6, $v0, -0x47C0
    ctx->pc = 0x2faabcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x2faac0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2faac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2faac4: 0x2475b8c0  addiu       $s5, $v1, -0x4740
    ctx->pc = 0x2faac4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
    // 0x2faac8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2faac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2faacc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2faaccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2faad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2faad4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2faad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2faad8:
    // 0x2faad8: 0x131142  srl         $v0, $s3, 5
    ctx->pc = 0x2faad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
    // 0x2faadc: 0x3263001f  andi        $v1, $s3, 0x1F
    ctx->pc = 0x2faadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x2faae0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2faae4: 0x658806  srlv        $s1, $a1, $v1
    ctx->pc = 0x2faae4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x2faae8: 0x2069021  addu        $s2, $s0, $a2
    ctx->pc = 0x2faae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2faaec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2faaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2faaf0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2faaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2faaf4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FAAF4u;
    {
        const bool branch_taken_0x2faaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faaf4) {
            ctx->pc = 0x2FAAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAAF4u;
            // 0x2faaf8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAB4Cu;
            goto label_2fab4c;
        }
    }
    ctx->pc = 0x2FAAFCu;
    // 0x2faafc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2FAB00u;
    SET_GPR_U32(ctx, 31, 0x2FAB08u);
    ctx->pc = 0x2FAB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB00u;
    // 0x2fab04: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2FAB00u, 0x2FAB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB08u;
label_2fab08:
    // 0x2fab08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab0c: 0xc0beb2a  jal         func_2FACA8
    ctx->pc = 0x2FAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2FAB14u);
    ctx->pc = 0x2FAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB0Cu;
    // 0x2fab10: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACA8u, 0x2FAB0Cu, 0x2FAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB14u;
label_2fab14:
    // 0x2fab14: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FAB14u;
    {
        const bool branch_taken_0x2fab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB14u;
        // 0x2fab18: 0x2163821  addu        $a3, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab14) {
            ctx->pc = 0x2FAB58u;
            goto label_2fab58;
        }
    }
    ctx->pc = 0x2FAB1Cu;
    // 0x2fab1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2fab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fab20: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2fab20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fab24: 0x2154021  addu        $t0, $s0, $s5
    ctx->pc = 0x2fab24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2fab28: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fab2c: 0x113027  nor         $a2, $zero, $s1
    ctx->pc = 0x2fab2cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x2fab30: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x2fab30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x2fab34: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x2fab34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2fab38: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2fab38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x2fab3c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2fab3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2fab40: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2fab40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2fab44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAB44u;
    {
        const bool branch_taken_0x2fab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB44u;
        // 0x2fab48: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab44) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FAB4Cu;
label_2fab4c:
    // 0x2fab4c: 0x2a620400  slti        $v0, $s3, 0x400
    ctx->pc = 0x2fab4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fab50: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2FAB50u;
    {
        const bool branch_taken_0x2fab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB50u;
        // 0x2fab54: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab50) {
            ctx->pc = 0x2FAAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2faad8;
        }
    }
    ctx->pc = 0x2FAB58u;
label_2fab58:
    // 0x2fab58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fab5c:
    // 0x2fab5c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2fab5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fab60: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2fab60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fab64: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2fab64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fab68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fab68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fab6c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2fab6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fab70: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2fab70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fab74: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2fab74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fab7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB7Cu;
        // 0x2fab80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAB84u;
    // 0x2fab84: 0x0  nop
    ctx->pc = 0x2fab84u;
    // NOP
    ctx->pc = 0x2fab88u;
}
