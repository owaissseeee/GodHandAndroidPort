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
// Function: Move__6cMcSys
// Address: 0x7c8bb8 - 0x7c8c18
void Move__6cMcSys_0x7c8bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__6cMcSys_0x7c8bb8");
#endif

    switch (ctx->pc) {
        case 0x7c8be4u: goto label_7c8be4;
        case 0x7c8c04u: goto label_7c8c04;
        default: break;
    }

    ctx->pc = 0x7c8bb8u;

    // 0x7c8bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c8bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c8bbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8bc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c8bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c8bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8bcc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c8bd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8bd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C8BD4u;
    {
        const bool branch_taken_0x7c8bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c8bd4) {
            ctx->pc = 0x7C8BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C8BD4u;
            // 0x7c8bd8: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8BE8u;
            goto label_7c8be8;
        }
    }
    ctx->pc = 0x7C8BDCu;
    // 0x7c8bdc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x7C8BDCu;
    SET_GPR_U32(ctx, 31, 0x7C8BE4u);
    ctx->pc = 0x7C8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8BDCu;
    // 0x7c8be0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x7C8BDCu, 0x7C8BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8BE4u;
label_7c8be4:
    // 0x7c8be4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_7c8be8:
    // 0x7c8be8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7c8bec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C8BF0u;
    {
        const bool branch_taken_0x7c8bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8BF0u;
        // 0x7c8bf4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8bf0) {
            ctx->pc = 0x7C8C08u;
            goto label_7c8c08;
        }
    }
    ctx->pc = 0x7C8BF8u;
    // 0x7c8bf8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x7c8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x7c8bfc: 0xc0ab994  jal         func_2AE650
    ctx->pc = 0x7C8BFCu;
    SET_GPR_U32(ctx, 31, 0x7C8C04u);
    ctx->pc = 0x7C8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8BFCu;
    // 0x7c8c00: 0x24846900  addiu       $a0, $a0, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE650u, 0x7C8BFCu, 0x7C8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8C04u;
label_7c8c04:
    // 0x7c8c04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c8c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c8c08:
    // 0x7c8c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8C0Cu;
        // 0x7c8c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8C14u;
    // 0x7c8c14: 0x0  nop
    ctx->pc = 0x7c8c14u;
    // NOP
    ctx->pc = 0x7c8c18u;
}
} // namespace gh_mcport
