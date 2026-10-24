#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: __do_global_dtors
// Address: 0x79ba10 - 0x79ba68
void ps2___do_global_dtors_0x79ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79ba10");
#endif

    switch (ctx->pc) {
        case 0x79ba10u: goto label_79ba10;
        case 0x79ba14u: goto label_79ba14;
        case 0x79ba18u: goto label_79ba18;
        case 0x79ba1cu: goto label_79ba1c;
        case 0x79ba20u: goto label_79ba20;
        case 0x79ba24u: goto label_79ba24;
        case 0x79ba28u: goto label_79ba28;
        case 0x79ba2cu: goto label_79ba2c;
        case 0x79ba30u: goto label_79ba30;
        case 0x79ba34u: goto label_79ba34;
        case 0x79ba38u: goto label_79ba38;
        case 0x79ba3cu: goto label_79ba3c;
        case 0x79ba40u: goto label_79ba40;
        case 0x79ba44u: goto label_79ba44;
        case 0x79ba48u: goto label_79ba48;
        case 0x79ba4cu: goto label_79ba4c;
        case 0x79ba50u: goto label_79ba50;
        case 0x79ba54u: goto label_79ba54;
        case 0x79ba58u: goto label_79ba58;
        case 0x79ba5cu: goto label_79ba5c;
        case 0x79ba60u: goto label_79ba60;
        case 0x79ba64u: goto label_79ba64;
        default: break;
    }

    ctx->pc = 0x79ba10u;

label_79ba10:
    // 0x79ba10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79ba14:
    // 0x79ba14: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79ba18:
    // 0x79ba18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79ba1c:
    // 0x79ba1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79ba20:
    // 0x79ba20: 0x8c82bc04  lw          $v0, -0x43FC($a0)
    ctx->pc = 0x79ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949892)));
label_79ba24:
    // 0x79ba24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ba28:
    // 0x79ba28: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79ba2c:
    if (ctx->pc == 0x79BA2Cu) {
        ctx->pc = 0x79BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA28u;
        // 0x79ba2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA30u;
        goto label_79ba30;
    }
    ctx->pc = 0x79BA28u;
    {
        const bool branch_taken_0x79ba28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA28u;
        // 0x79ba2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba28) {
            ctx->pc = 0x79BA54u;
            goto label_79ba54;
        }
    }
    ctx->pc = 0x79BA30u;
label_79ba30:
    // 0x79ba30: 0x8e02bc04  lw          $v0, -0x43FC($s0)
    ctx->pc = 0x79ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949892)));
label_79ba34:
    // 0x79ba34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79ba38:
    // 0x79ba38: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79ba3c:
    // 0x79ba3c: 0x60f809  jalr        $v1
label_79ba40:
    if (ctx->pc == 0x79BA40u) {
        ctx->pc = 0x79BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA3Cu;
        // 0x79ba40: 0xae02bc04  sw          $v0, -0x43FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA44u;
        goto label_79ba44;
    }
    ctx->pc = 0x79BA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79BA44u);
        ctx->pc = 0x79BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA3Cu;
        // 0x79ba40: 0xae02bc04  sw          $v0, -0x43FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA3Cu, 0x79BA44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BA44u;
label_79ba44:
    // 0x79ba44: 0x8e02bc04  lw          $v0, -0x43FC($s0)
    ctx->pc = 0x79ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949892)));
label_79ba48:
    // 0x79ba48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ba4c:
    // 0x79ba4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79ba50:
    if (ctx->pc == 0x79BA50u) {
        ctx->pc = 0x79BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA4Cu;
        // 0x79ba50: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA54u;
        goto label_79ba54;
    }
    ctx->pc = 0x79BA4Cu;
    {
        const bool branch_taken_0x79ba4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA4Cu;
        // 0x79ba50: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba4c) {
            ctx->pc = 0x79BA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba38;
        }
    }
    ctx->pc = 0x79BA54u;
label_79ba54:
    // 0x79ba54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79ba54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ba58:
    // 0x79ba58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ba58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ba5c:
    // 0x79ba5c: 0x3e00008  jr          $ra
label_79ba60:
    if (ctx->pc == 0x79BA60u) {
        ctx->pc = 0x79BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA5Cu;
        // 0x79ba60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA64u;
        goto label_79ba64;
    }
    ctx->pc = 0x79BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA5Cu;
        // 0x79ba60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA64u;
label_79ba64:
    // 0x79ba64: 0x0  nop
    ctx->pc = 0x79ba64u;
    // NOP
    ctx->pc = 0x79ba68u;
}
} // namespace gh_r201
