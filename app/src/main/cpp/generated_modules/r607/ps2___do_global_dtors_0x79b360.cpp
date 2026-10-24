#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: __do_global_dtors
// Address: 0x79b360 - 0x79b3b8
void ps2___do_global_dtors_0x79b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b360");
#endif

    switch (ctx->pc) {
        case 0x79b360u: goto label_79b360;
        case 0x79b364u: goto label_79b364;
        case 0x79b368u: goto label_79b368;
        case 0x79b36cu: goto label_79b36c;
        case 0x79b370u: goto label_79b370;
        case 0x79b374u: goto label_79b374;
        case 0x79b378u: goto label_79b378;
        case 0x79b37cu: goto label_79b37c;
        case 0x79b380u: goto label_79b380;
        case 0x79b384u: goto label_79b384;
        case 0x79b388u: goto label_79b388;
        case 0x79b38cu: goto label_79b38c;
        case 0x79b390u: goto label_79b390;
        case 0x79b394u: goto label_79b394;
        case 0x79b398u: goto label_79b398;
        case 0x79b39cu: goto label_79b39c;
        case 0x79b3a0u: goto label_79b3a0;
        case 0x79b3a4u: goto label_79b3a4;
        case 0x79b3a8u: goto label_79b3a8;
        case 0x79b3acu: goto label_79b3ac;
        case 0x79b3b0u: goto label_79b3b0;
        case 0x79b3b4u: goto label_79b3b4;
        default: break;
    }

    ctx->pc = 0x79b360u;

label_79b360:
    // 0x79b360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b364:
    // 0x79b364: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b368:
    // 0x79b368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b36c:
    // 0x79b36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b370:
    // 0x79b370: 0x8c82b590  lw          $v0, -0x4A70($a0)
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948240)));
label_79b374:
    // 0x79b374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b378:
    // 0x79b378: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b37c:
    if (ctx->pc == 0x79B37Cu) {
        ctx->pc = 0x79B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B378u;
        // 0x79b37c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B380u;
        goto label_79b380;
    }
    ctx->pc = 0x79B378u;
    {
        const bool branch_taken_0x79b378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B378u;
        // 0x79b37c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b378) {
            ctx->pc = 0x79B3A4u;
            goto label_79b3a4;
        }
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x8e02b590  lw          $v0, -0x4A70($s0)
    ctx->pc = 0x79b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948240)));
label_79b384:
    // 0x79b384: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b388:
    // 0x79b388: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b38c:
    // 0x79b38c: 0x60f809  jalr        $v1
label_79b390:
    if (ctx->pc == 0x79B390u) {
        ctx->pc = 0x79B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B38Cu;
        // 0x79b390: 0xae02b590  sw          $v0, -0x4A70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294948240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B394u;
        goto label_79b394;
    }
    ctx->pc = 0x79B38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B394u);
        ctx->pc = 0x79B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B38Cu;
        // 0x79b390: 0xae02b590  sw          $v0, -0x4A70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294948240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B38Cu, 0x79B394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B394u;
label_79b394:
    // 0x79b394: 0x8e02b590  lw          $v0, -0x4A70($s0)
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948240)));
label_79b398:
    // 0x79b398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b39c:
    // 0x79b39c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b3a0:
    if (ctx->pc == 0x79B3A0u) {
        ctx->pc = 0x79B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B39Cu;
        // 0x79b3a0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3A4u;
        goto label_79b3a4;
    }
    ctx->pc = 0x79B39Cu;
    {
        const bool branch_taken_0x79b39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B39Cu;
        // 0x79b3a0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b39c) {
            ctx->pc = 0x79B388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b388;
        }
    }
    ctx->pc = 0x79B3A4u;
label_79b3a4:
    // 0x79b3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b3a8:
    // 0x79b3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b3ac:
    // 0x79b3ac: 0x3e00008  jr          $ra
label_79b3b0:
    if (ctx->pc == 0x79B3B0u) {
        ctx->pc = 0x79B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3ACu;
        // 0x79b3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B3B4u;
        goto label_79b3b4;
    }
    ctx->pc = 0x79B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3ACu;
        // 0x79b3b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3B4u;
label_79b3b4:
    // 0x79b3b4: 0x0  nop
    ctx->pc = 0x79b3b4u;
    // NOP
    ctx->pc = 0x79b3b8u;
}
} // namespace gh_r607
