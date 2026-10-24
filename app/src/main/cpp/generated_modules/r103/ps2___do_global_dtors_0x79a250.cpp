#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: __do_global_dtors
// Address: 0x79a250 - 0x79a2a8
void ps2___do_global_dtors_0x79a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a250");
#endif

    switch (ctx->pc) {
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
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
        default: break;
    }

    ctx->pc = 0x79a250u;

label_79a250:
    // 0x79a250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a254:
    // 0x79a254: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a258:
    // 0x79a258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a25c:
    // 0x79a25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a260:
    // 0x79a260: 0x8c82a480  lw          $v0, -0x5B80($a0)
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
label_79a264:
    // 0x79a264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a268:
    // 0x79a268: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a26c:
    if (ctx->pc == 0x79A26Cu) {
        ctx->pc = 0x79A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A268u;
        // 0x79a26c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A270u;
        goto label_79a270;
    }
    ctx->pc = 0x79A268u;
    {
        const bool branch_taken_0x79a268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A268u;
        // 0x79a26c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a268) {
            ctx->pc = 0x79A294u;
            goto label_79a294;
        }
    }
    ctx->pc = 0x79A270u;
label_79a270:
    // 0x79a270: 0x8e02a480  lw          $v0, -0x5B80($s0)
    ctx->pc = 0x79a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943872)));
label_79a274:
    // 0x79a274: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a278:
    // 0x79a278: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a27c:
    // 0x79a27c: 0x60f809  jalr        $v1
label_79a280:
    if (ctx->pc == 0x79A280u) {
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0xae02a480  sw          $v0, -0x5B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A284u;
        goto label_79a284;
    }
    ctx->pc = 0x79A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A284u);
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0xae02a480  sw          $v0, -0x5B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A27Cu, 0x79A284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x8e02a480  lw          $v0, -0x5B80($s0)
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943872)));
label_79a288:
    // 0x79a288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a28c:
    // 0x79a28c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a290:
    if (ctx->pc == 0x79A290u) {
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A294u;
        goto label_79a294;
    }
    ctx->pc = 0x79A28Cu;
    {
        const bool branch_taken_0x79a28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a28c) {
            ctx->pc = 0x79A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a278;
        }
    }
    ctx->pc = 0x79A294u;
label_79a294:
    // 0x79a294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a298:
    // 0x79a298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a29c:
    // 0x79a29c: 0x3e00008  jr          $ra
label_79a2a0:
    if (ctx->pc == 0x79A2A0u) {
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A4u;
        goto label_79a2a4;
    }
    ctx->pc = 0x79A29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2A4u;
label_79a2a4:
    // 0x79a2a4: 0x0  nop
    ctx->pc = 0x79a2a4u;
    // NOP
    ctx->pc = 0x79a2a8u;
}
} // namespace gh_r103
