#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: __do_global_dtors
// Address: 0x79b998 - 0x79b9f0
void ps2___do_global_dtors_0x79b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b998");
#endif

    switch (ctx->pc) {
        case 0x79b998u: goto label_79b998;
        case 0x79b99cu: goto label_79b99c;
        case 0x79b9a0u: goto label_79b9a0;
        case 0x79b9a4u: goto label_79b9a4;
        case 0x79b9a8u: goto label_79b9a8;
        case 0x79b9acu: goto label_79b9ac;
        case 0x79b9b0u: goto label_79b9b0;
        case 0x79b9b4u: goto label_79b9b4;
        case 0x79b9b8u: goto label_79b9b8;
        case 0x79b9bcu: goto label_79b9bc;
        case 0x79b9c0u: goto label_79b9c0;
        case 0x79b9c4u: goto label_79b9c4;
        case 0x79b9c8u: goto label_79b9c8;
        case 0x79b9ccu: goto label_79b9cc;
        case 0x79b9d0u: goto label_79b9d0;
        case 0x79b9d4u: goto label_79b9d4;
        case 0x79b9d8u: goto label_79b9d8;
        case 0x79b9dcu: goto label_79b9dc;
        case 0x79b9e0u: goto label_79b9e0;
        case 0x79b9e4u: goto label_79b9e4;
        case 0x79b9e8u: goto label_79b9e8;
        case 0x79b9ecu: goto label_79b9ec;
        default: break;
    }

    ctx->pc = 0x79b998u;

label_79b998:
    // 0x79b998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b99c:
    // 0x79b99c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b9a0:
    // 0x79b9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b9a4:
    // 0x79b9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b9a8:
    // 0x79b9a8: 0x8c82bbb0  lw          $v0, -0x4450($a0)
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949808)));
label_79b9ac:
    // 0x79b9ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b9b0:
    // 0x79b9b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b9b4:
    if (ctx->pc == 0x79B9B4u) {
        ctx->pc = 0x79B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9B0u;
        // 0x79b9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9B8u;
        goto label_79b9b8;
    }
    ctx->pc = 0x79B9B0u;
    {
        const bool branch_taken_0x79b9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9B0u;
        // 0x79b9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9b0) {
            ctx->pc = 0x79B9DCu;
            goto label_79b9dc;
        }
    }
    ctx->pc = 0x79B9B8u;
label_79b9b8:
    // 0x79b9b8: 0x8e02bbb0  lw          $v0, -0x4450($s0)
    ctx->pc = 0x79b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949808)));
label_79b9bc:
    // 0x79b9bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b9c0:
    // 0x79b9c0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b9c4:
    // 0x79b9c4: 0x60f809  jalr        $v1
label_79b9c8:
    if (ctx->pc == 0x79B9C8u) {
        ctx->pc = 0x79B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9C4u;
        // 0x79b9c8: 0xae02bbb0  sw          $v0, -0x4450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9CCu;
        goto label_79b9cc;
    }
    ctx->pc = 0x79B9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B9CCu);
        ctx->pc = 0x79B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9C4u;
        // 0x79b9c8: 0xae02bbb0  sw          $v0, -0x4450($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9C4u, 0x79B9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B9CCu;
label_79b9cc:
    // 0x79b9cc: 0x8e02bbb0  lw          $v0, -0x4450($s0)
    ctx->pc = 0x79b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949808)));
label_79b9d0:
    // 0x79b9d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b9d4:
    // 0x79b9d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b9d8:
    if (ctx->pc == 0x79B9D8u) {
        ctx->pc = 0x79B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9D4u;
        // 0x79b9d8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9DCu;
        goto label_79b9dc;
    }
    ctx->pc = 0x79B9D4u;
    {
        const bool branch_taken_0x79b9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9D4u;
        // 0x79b9d8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9d4) {
            ctx->pc = 0x79B9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b9c0;
        }
    }
    ctx->pc = 0x79B9DCu;
label_79b9dc:
    // 0x79b9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b9e0:
    // 0x79b9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b9e4:
    // 0x79b9e4: 0x3e00008  jr          $ra
label_79b9e8:
    if (ctx->pc == 0x79B9E8u) {
        ctx->pc = 0x79B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E4u;
        // 0x79b9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9ECu;
        goto label_79b9ec;
    }
    ctx->pc = 0x79B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E4u;
        // 0x79b9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9ECu;
label_79b9ec:
    // 0x79b9ec: 0x0  nop
    ctx->pc = 0x79b9ecu;
    // NOP
    ctx->pc = 0x79b9f0u;
}
} // namespace gh_r021
