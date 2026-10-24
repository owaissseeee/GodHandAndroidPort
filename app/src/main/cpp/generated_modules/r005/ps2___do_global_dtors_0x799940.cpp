#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: __do_global_dtors
// Address: 0x799940 - 0x799998
void ps2___do_global_dtors_0x799940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x799940");
#endif

    switch (ctx->pc) {
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        default: break;
    }

    ctx->pc = 0x799940u;

label_799940:
    // 0x799940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799944:
    // 0x799944: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799948:
    // 0x799948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79994c:
    // 0x79994c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_799950:
    // 0x799950: 0x8c829b80  lw          $v0, -0x6480($a0)
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941568)));
label_799954:
    // 0x799954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799958:
    // 0x799958: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79995c:
    if (ctx->pc == 0x79995Cu) {
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799960u;
        goto label_799960;
    }
    ctx->pc = 0x799958u;
    {
        const bool branch_taken_0x799958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799958) {
            ctx->pc = 0x799984u;
            goto label_799984;
        }
    }
    ctx->pc = 0x799960u;
label_799960:
    // 0x799960: 0x8e029b80  lw          $v0, -0x6480($s0)
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941568)));
label_799964:
    // 0x799964: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_799968:
    // 0x799968: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79996c:
    // 0x79996c: 0x60f809  jalr        $v1
label_799970:
    if (ctx->pc == 0x799970u) {
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0xae029b80  sw          $v0, -0x6480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799974u;
        goto label_799974;
    }
    ctx->pc = 0x79996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799974u);
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0xae029b80  sw          $v0, -0x6480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79996Cu, 0x799974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799974u;
label_799974:
    // 0x799974: 0x8e029b80  lw          $v0, -0x6480($s0)
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941568)));
label_799978:
    // 0x799978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79997c:
    // 0x79997c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_799980:
    if (ctx->pc == 0x799980u) {
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799984u;
        goto label_799984;
    }
    ctx->pc = 0x79997Cu;
    {
        const bool branch_taken_0x79997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79997c) {
            ctx->pc = 0x799968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799968;
        }
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799988:
    // 0x799988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79998c:
    // 0x79998c: 0x3e00008  jr          $ra
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x0  nop
    ctx->pc = 0x799994u;
    // NOP
    ctx->pc = 0x799998u;
}
} // namespace gh_r005
