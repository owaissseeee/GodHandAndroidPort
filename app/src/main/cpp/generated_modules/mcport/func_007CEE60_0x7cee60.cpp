#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CEE60
// Address: 0x7cee60 - 0x7ceee8
void func_007CEE60_0x7cee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CEE60_0x7cee60");
#endif

    switch (ctx->pc) {
        case 0x7ceea0u: goto label_7ceea0;
        case 0x7ceeacu: goto label_7ceeac;
        default: break;
    }

    ctx->pc = 0x7cee60u;

    // 0x7cee60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7cee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7cee64: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cee64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cee68: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x7cee68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7cee6c: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x7cee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x7cee70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7cee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x7cee74: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7cee74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7cee78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cee7c: 0x399c3  sra         $s3, $v1, 7
    ctx->pc = 0x7cee7cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 7));
    // 0x7cee80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cee84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7cee84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cee88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cee8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7cee8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cee90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cee94: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x7CEE94u;
    {
        const bool branch_taken_0x7cee94 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7CEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEE94u;
        // 0x7cee98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cee94) {
            ctx->pc = 0x7CEEC4u;
            goto label_7ceec4;
        }
    }
    ctx->pc = 0x7CEE9Cu;
    // 0x7cee9c: 0x0  nop
    ctx->pc = 0x7cee9cu;
    // NOP
label_7ceea0:
    // 0x7ceea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ceea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ceea4: 0xc1f3b52  jal         func_7CED48
    ctx->pc = 0x7CEEA4u;
    SET_GPR_U32(ctx, 31, 0x7CEEACu);
    ctx->pc = 0x7CEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEEA4u;
    // 0x7ceea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CED48u, 0x7CEEA4u, 0x7CEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEEACu;
label_7ceeac:
    // 0x7ceeac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CEEACu;
    {
        const bool branch_taken_0x7ceeac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEEACu;
        // 0x7ceeb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceeac) {
            ctx->pc = 0x7CEEC8u;
            goto label_7ceec8;
        }
    }
    ctx->pc = 0x7CEEB4u;
    // 0x7ceeb4: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x7ceeb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x7ceeb8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x7ceeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7ceebc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7CEEBCu;
    {
        const bool branch_taken_0x7ceebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEEBCu;
        // 0x7ceec0: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceebc) {
            ctx->pc = 0x7CEEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ceea0;
        }
    }
    ctx->pc = 0x7CEEC4u;
label_7ceec4:
    // 0x7ceec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ceec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ceec8:
    // 0x7ceec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7ceec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ceecc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7ceeccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ceed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7ceed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ceed4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7ceed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ceed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ceed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ceedc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CEEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEEDCu;
        // 0x7ceee0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CEEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CEEE4u;
    // 0x7ceee4: 0x0  nop
    ctx->pc = 0x7ceee4u;
    // NOP
    ctx->pc = 0x7ceee8u;
}
} // namespace gh_mcport
