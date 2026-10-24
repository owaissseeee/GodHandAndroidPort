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
// Function: SetIdMess__6cMcSysQ26cMcSys11eMcIdMarkNoUi
// Address: 0x7c87d8 - 0x7c8860
void SetIdMess__6cMcSysQ26cMcSys11eMcIdMarkNoUi_0x7c87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdMess__6cMcSysQ26cMcSys11eMcIdMarkNoUi_0x7c87d8");
#endif

    switch (ctx->pc) {
        case 0x7c8810u: goto label_7c8810;
        case 0x7c8820u: goto label_7c8820;
        case 0x7c8844u: goto label_7c8844;
        default: break;
    }

    ctx->pc = 0x7c87d8u;

    // 0x7c87d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c87dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c87e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c87e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c87e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c87e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c87e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c87ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c87f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c87f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c87f4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c87f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c87fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C87FCu;
    {
        const bool branch_taken_0x7c87fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C87FCu;
        // 0x7c8800: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c87fc) {
            ctx->pc = 0x7C8844u;
            goto label_7c8844;
        }
    }
    ctx->pc = 0x7C8804u;
    // 0x7c8804: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x7c8804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7c8808: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8808u;
    SET_GPR_U32(ctx, 31, 0x7C8810u);
    ctx->pc = 0x7C880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8808u;
    // 0x7c880c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8808u, 0x7C8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8810u;
label_7c8810:
    // 0x7c8810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c8814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8818: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8818u;
    SET_GPR_U32(ctx, 31, 0x7C8820u);
    ctx->pc = 0x7C881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8818u;
    // 0x7c881c: 0xa4520090  sh          $s2, 0x90($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8818u, 0x7C8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8820u;
label_7c8820:
    // 0x7c8820: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x7c8820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x7c8824: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x7c8824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x7c8828: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7c8828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7c882c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8830: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x7c8830u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x7c8834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c8834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c8838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c883c: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x7C883Cu;
    SET_GPR_U32(ctx, 31, 0x7C8844u);
    ctx->pc = 0x7C8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C883Cu;
    // 0x7c8840: 0xac47002c  sw          $a3, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x7C883Cu, 0x7C8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8844u;
label_7c8844:
    // 0x7c8844: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c8844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c8848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c884c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c884cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8854: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8854u;
        // 0x7c8858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C885Cu;
    // 0x7c885c: 0x0  nop
    ctx->pc = 0x7c885cu;
    // NOP
    ctx->pc = 0x7c8860u;
}
} // namespace gh_mcport
