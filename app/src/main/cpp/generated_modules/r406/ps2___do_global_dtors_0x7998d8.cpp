#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: __do_global_dtors
// Address: 0x7998d8 - 0x799930
void ps2___do_global_dtors_0x7998d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x7998d8");
#endif

    switch (ctx->pc) {
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        default: break;
    }

    ctx->pc = 0x7998d8u;

label_7998d8:
    // 0x7998d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7998dc:
    // 0x7998dc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_7998e0:
    // 0x7998e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7998e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7998e4:
    // 0x7998e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7998e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7998e8:
    // 0x7998e8: 0x8c829b00  lw          $v0, -0x6500($a0)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941440)));
label_7998ec:
    // 0x7998ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7998f0:
    // 0x7998f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_7998f4:
    if (ctx->pc == 0x7998F4u) {
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998F8u;
        goto label_7998f8;
    }
    ctx->pc = 0x7998F0u;
    {
        const bool branch_taken_0x7998f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f0) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x8e029b00  lw          $v0, -0x6500($s0)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
label_7998fc:
    // 0x7998fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799900:
    // 0x799900: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_799904:
    // 0x799904: 0x60f809  jalr        $v1
label_799908:
    if (ctx->pc == 0x799908u) {
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0xae029b00  sw          $v0, -0x6500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79990Cu;
        goto label_79990c;
    }
    ctx->pc = 0x799904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79990Cu);
        ctx->pc = 0x799908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799904u;
        // 0x799908: 0xae029b00  sw          $v0, -0x6500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799904u, 0x79990Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79990Cu;
label_79990c:
    // 0x79990c: 0x8e029b00  lw          $v0, -0x6500($s0)
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941440)));
label_799910:
    // 0x799910: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799914:
    // 0x799914: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799918:
    if (ctx->pc == 0x799918u) {
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79991Cu;
        goto label_79991c;
    }
    ctx->pc = 0x799914u;
    {
        const bool branch_taken_0x799914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799914) {
            ctx->pc = 0x799900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799900;
        }
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799920:
    // 0x799920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799924:
    // 0x799924: 0x3e00008  jr          $ra
label_799928:
    if (ctx->pc == 0x799928u) {
        ctx->pc = 0x799928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799924u;
        // 0x799928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79992Cu;
        goto label_79992c;
    }
    ctx->pc = 0x799924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799924u;
        // 0x799928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79992Cu;
label_79992c:
    // 0x79992c: 0x0  nop
    ctx->pc = 0x79992cu;
    // NOP
    ctx->pc = 0x799930u;
}
} // namespace gh_r406
