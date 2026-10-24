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
// Function: getMotMainPassing__C11cEventActorSc
// Address: 0x7a97e0 - 0x7a9838
void getMotMainPassing__C11cEventActorSc_0x7a97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotMainPassing__C11cEventActorSc_0x7a97e0");
#endif

    switch (ctx->pc) {
        case 0x7a9820u: goto label_7a9820;
        default: break;
    }

    ctx->pc = 0x7a97e0u;

    // 0x7a97e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a97e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a97e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x7a97e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a97e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a97ec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a97ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a97f0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a97f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a97f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7a97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7a97f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7a97f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a97fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A97FCu;
    {
        const bool branch_taken_0x7a97fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A97FCu;
        // 0x7a9800: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a97fc) {
            ctx->pc = 0x7A9828u;
            goto label_7a9828;
        }
    }
    ctx->pc = 0x7A9804u;
    // 0x7a9804: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7a9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7a9808: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x7a9808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7a980c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x7a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7a9810: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x7a9810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x7a9814: 0x90860009  lbu         $a2, 0x9($a0)
    ctx->pc = 0x7a9814u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x7a9818: 0xc1eadb6  jal         func_7AB6D8
    ctx->pc = 0x7A9818u;
    SET_GPR_U32(ctx, 31, 0x7A9820u);
    ctx->pc = 0x7A981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9818u;
    // 0x7a981c: 0xc48c0010  lwc1        $f12, 0x10($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB6D8u, 0x7A9818u, 0x7A9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9820u;
label_7a9820:
    // 0x7a9820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7A9820u;
    {
        const bool branch_taken_0x7a9820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9820u;
        // 0x7a9824: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9820) {
            ctx->pc = 0x7A9830u;
            goto label_7a9830;
        }
    }
    ctx->pc = 0x7A9828u;
label_7a9828:
    // 0x7a9828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7a9828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7a982c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a9830:
    // 0x7a9830: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9830u;
        // 0x7a9834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9838u;
}
} // namespace gh_event
