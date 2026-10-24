#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: __do_global_dtors
// Address: 0x799a68 - 0x799ac0
void ps2___do_global_dtors_0x799a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799a68");
#endif

    switch (ctx->pc) {
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        case 0x799a88u: goto label_799a88;
        case 0x799a8cu: goto label_799a8c;
        case 0x799a90u: goto label_799a90;
        case 0x799a94u: goto label_799a94;
        case 0x799a98u: goto label_799a98;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa0u: goto label_799aa0;
        case 0x799aa4u: goto label_799aa4;
        case 0x799aa8u: goto label_799aa8;
        case 0x799aacu: goto label_799aac;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ab4u: goto label_799ab4;
        case 0x799ab8u: goto label_799ab8;
        case 0x799abcu: goto label_799abc;
        default: break;
    }

    ctx->pc = 0x799a68u;

label_799a68:
    // 0x799a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799a6c:
    // 0x799a6c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799a70:
    // 0x799a70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799a74:
    // 0x799a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799a78:
    // 0x799a78: 0x8c829c00  lw          $v0, -0x6400($a0)
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941696)));
label_799a7c:
    // 0x799a7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799a80:
    // 0x799a80: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799a84:
    if (ctx->pc == 0x799A84u) {
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A88u;
        goto label_799a88;
    }
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799AACu;
            goto label_799aac;
        }
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x8e029c00  lw          $v0, -0x6400($s0)
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941696)));
label_799a8c:
    // 0x799a8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799a90:
    // 0x799a90: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799a94:
    // 0x799a94: 0x60f809  jalr        $v1
label_799a98:
    if (ctx->pc == 0x799A98u) {
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0xae029c00  sw          $v0, -0x6400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A9Cu;
        goto label_799a9c;
    }
    ctx->pc = 0x799A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799A9Cu);
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0xae029c00  sw          $v0, -0x6400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x8e029c00  lw          $v0, -0x6400($s0)
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941696)));
label_799aa0:
    // 0x799aa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799aa4:
    // 0x799aa4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799aa8:
    if (ctx->pc == 0x799AA8u) {
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AACu;
        goto label_799aac;
    }
    ctx->pc = 0x799AA4u;
    {
        const bool branch_taken_0x799aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa4) {
            ctx->pc = 0x799A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a90;
        }
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799ab0:
    // 0x799ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799ab4:
    // 0x799ab4: 0x3e00008  jr          $ra
label_799ab8:
    if (ctx->pc == 0x799AB8u) {
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ABCu;
        goto label_799abc;
    }
    ctx->pc = 0x799AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x0  nop
    ctx->pc = 0x799abcu;
    // NOP
    ctx->pc = 0x799ac0u;
}
} // namespace gh_r506
