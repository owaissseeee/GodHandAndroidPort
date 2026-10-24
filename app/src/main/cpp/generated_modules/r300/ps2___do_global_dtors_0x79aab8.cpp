#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: __do_global_dtors
// Address: 0x79aab8 - 0x79ab10
void ps2___do_global_dtors_0x79aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79aab8");
#endif

    switch (ctx->pc) {
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        default: break;
    }

    ctx->pc = 0x79aab8u;

label_79aab8:
    // 0x79aab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79aabc:
    // 0x79aabc: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79aac0:
    // 0x79aac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79aac4:
    // 0x79aac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79aac8:
    // 0x79aac8: 0x8c82ad00  lw          $v0, -0x5300($a0)
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946048)));
label_79aacc:
    // 0x79aacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aad0:
    // 0x79aad0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79aad4:
    if (ctx->pc == 0x79AAD4u) {
        ctx->pc = 0x79AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAD0u;
        // 0x79aad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAD8u;
        goto label_79aad8;
    }
    ctx->pc = 0x79AAD0u;
    {
        const bool branch_taken_0x79aad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAD0u;
        // 0x79aad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aad0) {
            ctx->pc = 0x79AAFCu;
            goto label_79aafc;
        }
    }
    ctx->pc = 0x79AAD8u;
label_79aad8:
    // 0x79aad8: 0x8e02ad00  lw          $v0, -0x5300($s0)
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_79aadc:
    // 0x79aadc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79aae0:
    // 0x79aae0: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79aae4:
    // 0x79aae4: 0x60f809  jalr        $v1
label_79aae8:
    if (ctx->pc == 0x79AAE8u) {
        ctx->pc = 0x79AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE4u;
        // 0x79aae8: 0xae02ad00  sw          $v0, -0x5300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAECu;
        goto label_79aaec;
    }
    ctx->pc = 0x79AAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79AAECu);
        ctx->pc = 0x79AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE4u;
        // 0x79aae8: 0xae02ad00  sw          $v0, -0x5300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAE4u, 0x79AAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AAECu;
label_79aaec:
    // 0x79aaec: 0x8e02ad00  lw          $v0, -0x5300($s0)
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946048)));
label_79aaf0:
    // 0x79aaf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aaf4:
    // 0x79aaf4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79aaf8:
    if (ctx->pc == 0x79AAF8u) {
        ctx->pc = 0x79AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF4u;
        // 0x79aaf8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAFCu;
        goto label_79aafc;
    }
    ctx->pc = 0x79AAF4u;
    {
        const bool branch_taken_0x79aaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF4u;
        // 0x79aaf8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaf4) {
            ctx->pc = 0x79AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aae0;
        }
    }
    ctx->pc = 0x79AAFCu;
label_79aafc:
    // 0x79aafc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ab00:
    // 0x79ab00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ab00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ab04:
    // 0x79ab04: 0x3e00008  jr          $ra
label_79ab08:
    if (ctx->pc == 0x79AB08u) {
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB0Cu;
        goto label_79ab0c;
    }
    ctx->pc = 0x79AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB0Cu;
label_79ab0c:
    // 0x79ab0c: 0x0  nop
    ctx->pc = 0x79ab0cu;
    // NOP
    ctx->pc = 0x79ab10u;
}
} // namespace gh_r300
