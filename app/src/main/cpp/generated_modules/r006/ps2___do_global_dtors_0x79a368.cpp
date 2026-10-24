#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: __do_global_dtors
// Address: 0x79a368 - 0x79a3c0
void ps2___do_global_dtors_0x79a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a368");
#endif

    switch (ctx->pc) {
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        default: break;
    }

    ctx->pc = 0x79a368u;

label_79a368:
    // 0x79a368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a36c:
    // 0x79a36c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a370:
    // 0x79a370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a374:
    // 0x79a374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a378:
    // 0x79a378: 0x8c82a580  lw          $v0, -0x5A80($a0)
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944128)));
label_79a37c:
    // 0x79a37c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a380:
    // 0x79a380: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a384:
    if (ctx->pc == 0x79A384u) {
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A388u;
        goto label_79a388;
    }
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A3ACu;
            goto label_79a3ac;
        }
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x8e02a580  lw          $v0, -0x5A80($s0)
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944128)));
label_79a38c:
    // 0x79a38c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a390:
    // 0x79a390: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a394:
    // 0x79a394: 0x60f809  jalr        $v1
label_79a398:
    if (ctx->pc == 0x79A398u) {
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0xae02a580  sw          $v0, -0x5A80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A39Cu;
        goto label_79a39c;
    }
    ctx->pc = 0x79A394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A39Cu);
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0xae02a580  sw          $v0, -0x5A80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294944128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A394u, 0x79A39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A39Cu;
label_79a39c:
    // 0x79a39c: 0x8e02a580  lw          $v0, -0x5A80($s0)
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944128)));
label_79a3a0:
    // 0x79a3a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a3a4:
    // 0x79a3a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a3a8:
    if (ctx->pc == 0x79A3A8u) {
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3ACu;
        goto label_79a3ac;
    }
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A3ACu;
label_79a3ac:
    // 0x79a3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a3b0:
    // 0x79a3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a3b4:
    // 0x79a3b4: 0x3e00008  jr          $ra
label_79a3b8:
    if (ctx->pc == 0x79A3B8u) {
        ctx->pc = 0x79A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B4u;
        // 0x79a3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3BCu;
        goto label_79a3bc;
    }
    ctx->pc = 0x79A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B4u;
        // 0x79a3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3BCu;
label_79a3bc:
    // 0x79a3bc: 0x0  nop
    ctx->pc = 0x79a3bcu;
    // NOP
    ctx->pc = 0x79a3c0u;
}
} // namespace gh_r006
