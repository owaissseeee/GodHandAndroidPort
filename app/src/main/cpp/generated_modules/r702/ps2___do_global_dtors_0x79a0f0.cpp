#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: __do_global_dtors
// Address: 0x79a0f0 - 0x79a148
void ps2___do_global_dtors_0x79a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a0f0");
#endif

    switch (ctx->pc) {
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        default: break;
    }

    ctx->pc = 0x79a0f0u;

label_79a0f0:
    // 0x79a0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a0f4:
    // 0x79a0f4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a0f8:
    // 0x79a0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a0fc:
    // 0x79a0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a100:
    // 0x79a100: 0x8c82a280  lw          $v0, -0x5D80($a0)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943360)));
label_79a104:
    // 0x79a104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a108:
    // 0x79a108: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a10c:
    if (ctx->pc == 0x79A10Cu) {
        ctx->pc = 0x79A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A108u;
        // 0x79a10c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A110u;
        goto label_79a110;
    }
    ctx->pc = 0x79A108u;
    {
        const bool branch_taken_0x79a108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A108u;
        // 0x79a10c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a108) {
            ctx->pc = 0x79A134u;
            goto label_79a134;
        }
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x8e02a280  lw          $v0, -0x5D80($s0)
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943360)));
label_79a114:
    // 0x79a114: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a118:
    // 0x79a118: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a11c:
    // 0x79a11c: 0x60f809  jalr        $v1
label_79a120:
    if (ctx->pc == 0x79A120u) {
        ctx->pc = 0x79A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A11Cu;
        // 0x79a120: 0xae02a280  sw          $v0, -0x5D80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A124u;
        goto label_79a124;
    }
    ctx->pc = 0x79A11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A124u);
        ctx->pc = 0x79A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A11Cu;
        // 0x79a120: 0xae02a280  sw          $v0, -0x5D80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x8e02a280  lw          $v0, -0x5D80($s0)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943360)));
label_79a128:
    // 0x79a128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a12c:
    // 0x79a12c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a130:
    if (ctx->pc == 0x79A130u) {
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A134u;
        goto label_79a134;
    }
    ctx->pc = 0x79A12Cu;
    {
        const bool branch_taken_0x79a12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a12c) {
            ctx->pc = 0x79A118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a118;
        }
    }
    ctx->pc = 0x79A134u;
label_79a134:
    // 0x79a134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a138:
    // 0x79a138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a13c:
    // 0x79a13c: 0x3e00008  jr          $ra
label_79a140:
    if (ctx->pc == 0x79A140u) {
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A144u;
        goto label_79a144;
    }
    ctx->pc = 0x79A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0x0  nop
    ctx->pc = 0x79a144u;
    // NOP
    ctx->pc = 0x79a148u;
}
} // namespace gh_r702
