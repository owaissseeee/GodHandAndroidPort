#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: __do_global_dtors
// Address: 0x79a8c8 - 0x79a920
void ps2___do_global_dtors_0x79a8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a8c8");
#endif

    switch (ctx->pc) {
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        default: break;
    }

    ctx->pc = 0x79a8c8u;

label_79a8c8:
    // 0x79a8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a8cc:
    // 0x79a8cc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a8d0:
    // 0x79a8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a8d4:
    // 0x79a8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a8d8:
    // 0x79a8d8: 0x8c82ab00  lw          $v0, -0x5500($a0)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945536)));
label_79a8dc:
    // 0x79a8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a8e0:
    // 0x79a8e0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a8e4:
    if (ctx->pc == 0x79A8E4u) {
        ctx->pc = 0x79A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E0u;
        // 0x79a8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8E8u;
        goto label_79a8e8;
    }
    ctx->pc = 0x79A8E0u;
    {
        const bool branch_taken_0x79a8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E0u;
        // 0x79a8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e0) {
            ctx->pc = 0x79A90Cu;
            goto label_79a90c;
        }
    }
    ctx->pc = 0x79A8E8u;
label_79a8e8:
    // 0x79a8e8: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
label_79a8ec:
    // 0x79a8ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a8f0:
    // 0x79a8f0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a8f4:
    // 0x79a8f4: 0x60f809  jalr        $v1
label_79a8f8:
    if (ctx->pc == 0x79A8F8u) {
        ctx->pc = 0x79A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F4u;
        // 0x79a8f8: 0xae02ab00  sw          $v0, -0x5500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8FCu;
        goto label_79a8fc;
    }
    ctx->pc = 0x79A8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A8FCu);
        ctx->pc = 0x79A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F4u;
        // 0x79a8f8: 0xae02ab00  sw          $v0, -0x5500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A8F4u, 0x79A8FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A8FCu;
label_79a8fc:
    // 0x79a8fc: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
label_79a900:
    // 0x79a900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a904:
    // 0x79a904: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a908:
    if (ctx->pc == 0x79A908u) {
        ctx->pc = 0x79A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A904u;
        // 0x79a908: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A90Cu;
        goto label_79a90c;
    }
    ctx->pc = 0x79A904u;
    {
        const bool branch_taken_0x79a904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A904u;
        // 0x79a908: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a904) {
            ctx->pc = 0x79A8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A90Cu;
label_79a90c:
    // 0x79a90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a910:
    // 0x79a910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a914:
    // 0x79a914: 0x3e00008  jr          $ra
label_79a918:
    if (ctx->pc == 0x79A918u) {
        ctx->pc = 0x79A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A914u;
        // 0x79a918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A91Cu;
        goto label_79a91c;
    }
    ctx->pc = 0x79A914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A914u;
        // 0x79a918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A91Cu;
label_79a91c:
    // 0x79a91c: 0x0  nop
    ctx->pc = 0x79a91cu;
    // NOP
    ctx->pc = 0x79a920u;
}
} // namespace gh_r404
