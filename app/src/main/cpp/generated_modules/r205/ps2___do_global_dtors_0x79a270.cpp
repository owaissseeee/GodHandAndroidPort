#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: __do_global_dtors
// Address: 0x79a270 - 0x79a2c8
void ps2___do_global_dtors_0x79a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a270");
#endif

    switch (ctx->pc) {
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        default: break;
    }

    ctx->pc = 0x79a270u;

label_79a270:
    // 0x79a270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a274:
    // 0x79a274: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a278:
    // 0x79a278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a27c:
    // 0x79a27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a280:
    // 0x79a280: 0x8c82a500  lw          $v0, -0x5B00($a0)
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944000)));
label_79a284:
    // 0x79a284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a288:
    // 0x79a288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a28c:
    if (ctx->pc == 0x79A28Cu) {
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A290u;
        goto label_79a290;
    }
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A2B4u;
            goto label_79a2b4;
        }
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0x8e02a500  lw          $v0, -0x5B00($s0)
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944000)));
label_79a294:
    // 0x79a294: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a298:
    // 0x79a298: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a29c:
    // 0x79a29c: 0x60f809  jalr        $v1
label_79a2a0:
    if (ctx->pc == 0x79A2A0u) {
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0xae02a500  sw          $v0, -0x5B00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A4u;
        goto label_79a2a4;
    }
    ctx->pc = 0x79A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A2A4u);
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0xae02a500  sw          $v0, -0x5B00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A29Cu, 0x79A2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A2A4u;
label_79a2a4:
    // 0x79a2a4: 0x8e02a500  lw          $v0, -0x5B00($s0)
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944000)));
label_79a2a8:
    // 0x79a2a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a2ac:
    // 0x79a2ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a2b0:
    if (ctx->pc == 0x79A2B0u) {
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2B4u;
        goto label_79a2b4;
    }
    ctx->pc = 0x79A2ACu;
    {
        const bool branch_taken_0x79a2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ACu;
        // 0x79a2b0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2ac) {
            ctx->pc = 0x79A298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a298;
        }
    }
    ctx->pc = 0x79A2B4u;
label_79a2b4:
    // 0x79a2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a2b8:
    // 0x79a2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a2bc:
    // 0x79a2bc: 0x3e00008  jr          $ra
label_79a2c0:
    if (ctx->pc == 0x79A2C0u) {
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2C4u;
        goto label_79a2c4;
    }
    ctx->pc = 0x79A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2BCu;
        // 0x79a2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x0  nop
    ctx->pc = 0x79a2c4u;
    // NOP
    ctx->pc = 0x79a2c8u;
}
} // namespace gh_r205
