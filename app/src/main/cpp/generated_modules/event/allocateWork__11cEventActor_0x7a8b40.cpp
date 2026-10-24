#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: allocateWork__11cEventActor
// Address: 0x7a8b40 - 0x7a8c28
void allocateWork__11cEventActor_0x7a8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocateWork__11cEventActor_0x7a8b40");
#endif

    switch (ctx->pc) {
        case 0x7a8b80u: goto label_7a8b80;
        case 0x7a8ba0u: goto label_7a8ba0;
        case 0x7a8bc0u: goto label_7a8bc0;
        default: break;
    }

    ctx->pc = 0x7a8b40u;

    // 0x7a8b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7a8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7a8b44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7a8b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7a8b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7a8b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7a8b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7a8b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a8b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a8b54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x7a8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8b58: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8B58u;
    {
        const bool branch_taken_0x7a8b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8B58u;
        // 0x7a8b5c: 0x24110048  addiu       $s1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8b58) {
            ctx->pc = 0x7A8B68u;
            goto label_7a8b68;
        }
    }
    ctx->pc = 0x7A8B60u;
    // 0x7a8b60: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7A8B60u;
    {
        const bool branch_taken_0x7a8b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8B60u;
        // 0x7a8b64: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8b60) {
            ctx->pc = 0x7A8C0Cu;
            goto label_7a8c0c;
        }
    }
    ctx->pc = 0x7A8B68u;
label_7a8b68:
    // 0x7a8b68: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7a8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7a8b6c: 0x910018  mult        $zero, $a0, $s1
    ctx->pc = 0x7a8b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x7a8b70: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x7a8b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15600)));
    // 0x7a8b74: 0x2012  mflo        $a0
    ctx->pc = 0x7a8b74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x7a8b78: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7A8B78u;
    SET_GPR_U32(ctx, 31, 0x7A8B80u);
    ctx->pc = 0x7A8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8B78u;
    // 0x7a8b7c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7A8B78u, 0x7A8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8B80u;
label_7a8b80:
    // 0x7a8b80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x7A8B80u;
    {
        const bool branch_taken_0x7a8b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8B80u;
        // 0x7a8b84: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8b80) {
            ctx->pc = 0x7A8C04u;
            goto label_7a8c04;
        }
    }
    ctx->pc = 0x7A8B88u;
    // 0x7a8b88: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x7a8b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7a8b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8b90: 0xd10018  mult        $zero, $a2, $s1
    ctx->pc = 0x7a8b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x7a8b94: 0x3012  mflo        $a2
    ctx->pc = 0x7a8b94u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x7a8b98: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7A8B98u;
    SET_GPR_U32(ctx, 31, 0x7A8BA0u);
    ctx->pc = 0x7A8B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8B98u;
    // 0x7a8b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7A8B98u, 0x7A8BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8BA0u;
label_7a8ba0:
    // 0x7a8ba0: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7a8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7a8ba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7a8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8ba8: 0x8c685288  lw          $t0, 0x5288($v1)
    ctx->pc = 0x7a8ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7B5288u));
    // 0x7a8bac: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7A8BACu;
    {
        const bool branch_taken_0x7a8bac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8BACu;
        // 0x7a8bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8bac) {
            ctx->pc = 0x7A8C0Cu;
            goto label_7a8c0c;
        }
    }
    ctx->pc = 0x7A8BB4u;
    // 0x7a8bb4: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x7a8bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a8bb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7a8bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8bbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7a8bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8bc0:
    // 0x7a8bc0: 0xe92018  mult        $a0, $a3, $t1
    ctx->pc = 0x7a8bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7a8bc4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x7a8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7a8bc8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7a8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7a8bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7a8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7a8bd0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x7a8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x7a8bd4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x7a8bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x7a8bd8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x7a8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x7a8bdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7a8be0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x7a8be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x7a8be4: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x7a8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x7a8be8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x7a8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x7a8bec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7a8becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8bf0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7a8bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a8bf4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x7A8BF4u;
    {
        const bool branch_taken_0x7a8bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8BF4u;
        // 0x7a8bf8: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8bf4) {
            ctx->pc = 0x7A8BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8bc0;
        }
    }
    ctx->pc = 0x7A8BFCu;
    // 0x7a8bfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7A8BFCu;
    {
        const bool branch_taken_0x7a8bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8BFCu;
        // 0x7a8c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8bfc) {
            ctx->pc = 0x7A8C10u;
            goto label_7a8c10;
        }
    }
    ctx->pc = 0x7A8C04u;
label_7a8c04:
    // 0x7a8c04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8C04u;
    {
        const bool branch_taken_0x7a8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C04u;
        // 0x7a8c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8c04) {
            ctx->pc = 0x7A8C10u;
            goto label_7a8c10;
        }
    }
    ctx->pc = 0x7A8C0Cu;
label_7a8c0c:
    // 0x7a8c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7a8c10:
    // 0x7a8c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7a8c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a8c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7a8c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a8c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a8c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a8c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8C1Cu;
        // 0x7a8c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8C24u;
    // 0x7a8c24: 0x0  nop
    ctx->pc = 0x7a8c24u;
    // NOP
    ctx->pc = 0x7a8c28u;
}
} // namespace gh_event
