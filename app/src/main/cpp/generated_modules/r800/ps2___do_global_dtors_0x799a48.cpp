#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r800_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r800
{
// Function: __do_global_dtors
// Address: 0x799a48 - 0x799aa0
void ps2___do_global_dtors_0x799a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799a48");
#endif

    switch (ctx->pc) {
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
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
        default: break;
    }

    ctx->pc = 0x799a48u;

label_799a48:
    // 0x799a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799a4c:
    // 0x799a4c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799a50:
    // 0x799a50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799a54:
    // 0x799a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x799a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799a58:
    // 0x799a58: 0x8c829c80  lw          $v0, -0x6380($a0)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941824)));
label_799a5c:
    // 0x799a5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799a60:
    // 0x799a60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_799a64:
    if (ctx->pc == 0x799A64u) {
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A68u;
        goto label_799a68;
    }
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799A8Cu;
            goto label_799a8c;
        }
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x8e029c80  lw          $v0, -0x6380($s0)
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941824)));
label_799a6c:
    // 0x799a6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799a70:
    // 0x799a70: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799a74:
    // 0x799a74: 0x60f809  jalr        $v1
label_799a78:
    if (ctx->pc == 0x799A78u) {
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0xae029c80  sw          $v0, -0x6380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A7Cu;
        goto label_799a7c;
    }
    ctx->pc = 0x799A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799A7Cu);
        ctx->pc = 0x799A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A74u;
        // 0x799a78: 0xae029c80  sw          $v0, -0x6380($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A74u, 0x799A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x8e029c80  lw          $v0, -0x6380($s0)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941824)));
label_799a80:
    // 0x799a80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799a84:
    // 0x799a84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799a88:
    if (ctx->pc == 0x799A88u) {
        ctx->pc = 0x799A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A84u;
        // 0x799a88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A8Cu;
        goto label_799a8c;
    }
    ctx->pc = 0x799A84u;
    {
        const bool branch_taken_0x799a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A84u;
        // 0x799a88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a84) {
            ctx->pc = 0x799A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a70;
        }
    }
    ctx->pc = 0x799A8Cu;
label_799a8c:
    // 0x799a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799a90:
    // 0x799a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799a94:
    // 0x799a94: 0x3e00008  jr          $ra
label_799a98:
    if (ctx->pc == 0x799A98u) {
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A9Cu;
        goto label_799a9c;
    }
    ctx->pc = 0x799A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A94u;
        // 0x799a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x0  nop
    ctx->pc = 0x799a9cu;
    // NOP
    ctx->pc = 0x799aa0u;
}
} // namespace gh_r800
