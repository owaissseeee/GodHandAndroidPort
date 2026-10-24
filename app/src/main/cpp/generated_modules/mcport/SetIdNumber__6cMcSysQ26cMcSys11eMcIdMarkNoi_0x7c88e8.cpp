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
// Function: SetIdNumber__6cMcSysQ26cMcSys11eMcIdMarkNoi
// Address: 0x7c88e8 - 0x7c8950
void SetIdNumber__6cMcSysQ26cMcSys11eMcIdMarkNoi_0x7c88e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdNumber__6cMcSysQ26cMcSys11eMcIdMarkNoi_0x7c88e8");
#endif

    switch (ctx->pc) {
        case 0x7c8920u: goto label_7c8920;
        case 0x7c8934u: goto label_7c8934;
        default: break;
    }

    ctx->pc = 0x7c88e8u;

    // 0x7c88e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c88e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c88ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c88f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c88f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c88f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c88f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c88f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c88f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c88fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c8900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8904: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c8908: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c890c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C890Cu;
    {
        const bool branch_taken_0x7c890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C890Cu;
        // 0x7c8910: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c890c) {
            ctx->pc = 0x7C8934u;
            goto label_7c8934;
        }
    }
    ctx->pc = 0x7C8914u;
    // 0x7c8914: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x7c8914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7c8918: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8918u;
    SET_GPR_U32(ctx, 31, 0x7C8920u);
    ctx->pc = 0x7C891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8918u;
    // 0x7c891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8918u, 0x7C8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8920u;
label_7c8920:
    // 0x7c8920: 0xac520084  sw          $s2, 0x84($v0)
    ctx->pc = 0x7c8920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 18));
    // 0x7c8924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c8928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c892c: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x7C892Cu;
    SET_GPR_U32(ctx, 31, 0x7C8934u);
    ctx->pc = 0x7C8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C892Cu;
    // 0x7c8930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x7C892Cu, 0x7C8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8934u;
label_7c8934:
    // 0x7c8934: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c8934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8938: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c8938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c893c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c893cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8944: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8944u;
        // 0x7c8948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C894Cu;
    // 0x7c894c: 0x0  nop
    ctx->pc = 0x7c894cu;
    // NOP
    ctx->pc = 0x7c8950u;
}
} // namespace gh_mcport
