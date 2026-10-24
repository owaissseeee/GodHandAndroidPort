#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getMotMainPassing__C11cEventActorScUcUcf
// Address: 0x7a9780 - 0x7a97e0
void getMotMainPassing__C11cEventActorScUcUcf_0x7a9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotMainPassing__C11cEventActorScUcUcf_0x7a9780");
#endif

    switch (ctx->pc) {
        case 0x7a97c4u: goto label_7a97c4;
        default: break;
    }

    ctx->pc = 0x7a9780u;

    // 0x7a9780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a9784: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x7a9784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a978c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a978cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9790: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9790u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a9794: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7a9794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7a9798: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7a9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7a979c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7a979cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a97a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A97A0u;
    {
        const bool branch_taken_0x7a97a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A97A0u;
        // 0x7a97a4: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a97a0) {
            ctx->pc = 0x7A97CCu;
            goto label_7a97cc;
        }
    }
    ctx->pc = 0x7A97A8u;
    // 0x7a97a8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x7a97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a97ac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7a97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7a97b0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x7a97b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7a97b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7a97b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a97b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x7a97b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a97bc: 0xc1eadb6  jal         func_7AB6D8
    ctx->pc = 0x7A97BCu;
    SET_GPR_U32(ctx, 31, 0x7A97C4u);
    ctx->pc = 0x7A97C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A97BCu;
    // 0x7a97c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB6D8u, 0x7A97BCu, 0x7A97C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A97C4u;
label_7a97c4:
    // 0x7a97c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7A97C4u;
    {
        const bool branch_taken_0x7a97c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A97C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A97C4u;
        // 0x7a97c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a97c4) {
            ctx->pc = 0x7A97D4u;
            goto label_7a97d4;
        }
    }
    ctx->pc = 0x7A97CCu;
label_7a97cc:
    // 0x7a97cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7a97ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a97d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a97d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a97d4:
    // 0x7a97d4: 0x3e00008  jr          $ra
    ctx->pc = 0x7A97D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A97D4u;
        // 0x7a97d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A97D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A97DCu;
    // 0x7a97dc: 0x0  nop
    ctx->pc = 0x7a97dcu;
    // NOP
    ctx->pc = 0x7a97e0u;
}
} // namespace gh_event
