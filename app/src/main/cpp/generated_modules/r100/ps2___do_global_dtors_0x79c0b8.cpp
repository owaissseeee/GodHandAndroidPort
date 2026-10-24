#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: __do_global_dtors
// Address: 0x79c0b8 - 0x79c110
void ps2___do_global_dtors_0x79c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79c0b8");
#endif

    switch (ctx->pc) {
        case 0x79c0b8u: goto label_79c0b8;
        case 0x79c0bcu: goto label_79c0bc;
        case 0x79c0c0u: goto label_79c0c0;
        case 0x79c0c4u: goto label_79c0c4;
        case 0x79c0c8u: goto label_79c0c8;
        case 0x79c0ccu: goto label_79c0cc;
        case 0x79c0d0u: goto label_79c0d0;
        case 0x79c0d4u: goto label_79c0d4;
        case 0x79c0d8u: goto label_79c0d8;
        case 0x79c0dcu: goto label_79c0dc;
        case 0x79c0e0u: goto label_79c0e0;
        case 0x79c0e4u: goto label_79c0e4;
        case 0x79c0e8u: goto label_79c0e8;
        case 0x79c0ecu: goto label_79c0ec;
        case 0x79c0f0u: goto label_79c0f0;
        case 0x79c0f4u: goto label_79c0f4;
        case 0x79c0f8u: goto label_79c0f8;
        case 0x79c0fcu: goto label_79c0fc;
        case 0x79c100u: goto label_79c100;
        case 0x79c104u: goto label_79c104;
        case 0x79c108u: goto label_79c108;
        case 0x79c10cu: goto label_79c10c;
        default: break;
    }

    ctx->pc = 0x79c0b8u;

label_79c0b8:
    // 0x79c0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79c0bc:
    // 0x79c0bc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79c0c0:
    // 0x79c0c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79c0c4:
    // 0x79c0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79c0c8:
    // 0x79c0c8: 0x8c82c300  lw          $v0, -0x3D00($a0)
    ctx->pc = 0x79c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951680)));
label_79c0cc:
    // 0x79c0cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c0d0:
    // 0x79c0d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79c0d4:
    if (ctx->pc == 0x79C0D4u) {
        ctx->pc = 0x79C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0D0u;
        // 0x79c0d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C0D8u;
        goto label_79c0d8;
    }
    ctx->pc = 0x79C0D0u;
    {
        const bool branch_taken_0x79c0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0D0u;
        // 0x79c0d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0d0) {
            ctx->pc = 0x79C0FCu;
            goto label_79c0fc;
        }
    }
    ctx->pc = 0x79C0D8u;
label_79c0d8:
    // 0x79c0d8: 0x8e02c300  lw          $v0, -0x3D00($s0)
    ctx->pc = 0x79c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951680)));
label_79c0dc:
    // 0x79c0dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79c0e0:
    // 0x79c0e0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79c0e4:
    // 0x79c0e4: 0x60f809  jalr        $v1
label_79c0e8:
    if (ctx->pc == 0x79C0E8u) {
        ctx->pc = 0x79C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0E4u;
        // 0x79c0e8: 0xae02c300  sw          $v0, -0x3D00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C0ECu;
        goto label_79c0ec;
    }
    ctx->pc = 0x79C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79C0ECu);
        ctx->pc = 0x79C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0E4u;
        // 0x79c0e8: 0xae02c300  sw          $v0, -0x3D00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0E4u, 0x79C0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79C0ECu;
label_79c0ec:
    // 0x79c0ec: 0x8e02c300  lw          $v0, -0x3D00($s0)
    ctx->pc = 0x79c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951680)));
label_79c0f0:
    // 0x79c0f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c0f4:
    // 0x79c0f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79c0f8:
    if (ctx->pc == 0x79C0F8u) {
        ctx->pc = 0x79C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0F4u;
        // 0x79c0f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C0FCu;
        goto label_79c0fc;
    }
    ctx->pc = 0x79C0F4u;
    {
        const bool branch_taken_0x79c0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0F4u;
        // 0x79c0f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0f4) {
            ctx->pc = 0x79C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c0e0;
        }
    }
    ctx->pc = 0x79C0FCu;
label_79c0fc:
    // 0x79c0fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79c0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79c100:
    // 0x79c100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79c100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79c104:
    // 0x79c104: 0x3e00008  jr          $ra
label_79c108:
    if (ctx->pc == 0x79C108u) {
        ctx->pc = 0x79C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C104u;
        // 0x79c108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C10Cu;
        goto label_79c10c;
    }
    ctx->pc = 0x79C104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C104u;
        // 0x79c108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C10Cu;
label_79c10c:
    // 0x79c10c: 0x0  nop
    ctx->pc = 0x79c10cu;
    // NOP
    ctx->pc = 0x79c110u;
}
} // namespace gh_r100
