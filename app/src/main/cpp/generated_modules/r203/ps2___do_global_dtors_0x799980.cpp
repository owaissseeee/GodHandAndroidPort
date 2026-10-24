#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: __do_global_dtors
// Address: 0x799980 - 0x7999d8
void ps2___do_global_dtors_0x799980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799980");
#endif

    switch (ctx->pc) {
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        default: break;
    }

    ctx->pc = 0x799980u;

label_799980:
    // 0x799980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799984:
    // 0x799984: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799988:
    // 0x799988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79998c:
    // 0x79998c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799990:
    // 0x799990: 0x8c829b80  lw          $v0, -0x6480($a0)
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941568)));
label_799994:
    // 0x799994: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799998:
    // 0x799998: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79999c:
    if (ctx->pc == 0x79999Cu) {
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999A0u;
        goto label_7999a0;
    }
    ctx->pc = 0x799998u;
    {
        const bool branch_taken_0x799998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799998) {
            ctx->pc = 0x7999C4u;
            goto label_7999c4;
        }
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x8e029b80  lw          $v0, -0x6480($s0)
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941568)));
label_7999a4:
    // 0x7999a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7999a8:
    // 0x7999a8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_7999ac:
    // 0x7999ac: 0x60f809  jalr        $v1
label_7999b0:
    if (ctx->pc == 0x7999B0u) {
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0xae029b80  sw          $v0, -0x6480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999B4u;
        goto label_7999b4;
    }
    ctx->pc = 0x7999ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7999B4u);
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0xae029b80  sw          $v0, -0x6480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x8e029b80  lw          $v0, -0x6480($s0)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941568)));
label_7999b8:
    // 0x7999b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7999bc:
    // 0x7999bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_7999c0:
    if (ctx->pc == 0x7999C0u) {
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C4u;
        goto label_7999c4;
    }
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x7999A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999a8;
        }
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7999c8:
    // 0x7999c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7999c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7999cc:
    // 0x7999cc: 0x3e00008  jr          $ra
label_7999d0:
    if (ctx->pc == 0x7999D0u) {
        ctx->pc = 0x7999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999CCu;
        // 0x7999d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999D4u;
        goto label_7999d4;
    }
    ctx->pc = 0x7999CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999CCu;
        // 0x7999d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999D4u;
label_7999d4:
    // 0x7999d4: 0x0  nop
    ctx->pc = 0x7999d4u;
    // NOP
    ctx->pc = 0x7999d8u;
}
} // namespace gh_r203
