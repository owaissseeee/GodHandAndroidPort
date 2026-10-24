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
// Function: modeFadeOutWait__7cMcSave
// Address: 0x7c3f48 - 0x7c3fa0
void modeFadeOutWait__7cMcSave_0x7c3f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeFadeOutWait__7cMcSave_0x7c3f48");
#endif

    switch (ctx->pc) {
        case 0x7c3f7cu: goto label_7c3f7c;
        case 0x7c3f84u: goto label_7c3f84;
        default: break;
    }

    ctx->pc = 0x7c3f48u;

    // 0x7c3f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3f4c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3f50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c3f54: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x7c3f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c3f58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c3f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3F5Cu;
    {
        const bool branch_taken_0x7c3f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3F5Cu;
        // 0x7c3f60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3f5c) {
            ctx->pc = 0x7C3F74u;
            goto label_7c3f74;
        }
    }
    ctx->pc = 0x7C3F64u;
    // 0x7c3f64: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c3f68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c3f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c3f6c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C3F6Cu;
    {
        const bool branch_taken_0x7c3f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3f6c) {
            ctx->pc = 0x7C3F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3F6Cu;
            // 0x7c3f70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3F90u;
            goto label_7c3f90;
        }
    }
    ctx->pc = 0x7C3F74u;
label_7c3f74:
    // 0x7c3f74: 0xc1f22c4  jal         func_7C8B10
    ctx->pc = 0x7C3F74u;
    SET_GPR_U32(ctx, 31, 0x7C3F7Cu);
    ctx->pc = 0x7C3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3F74u;
    // 0x7c3f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B10u, 0x7C3F74u, 0x7C3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3F7Cu;
label_7c3f7c:
    // 0x7c3f7c: 0xc1f0e98  jal         func_7C3A60
    ctx->pc = 0x7C3F7Cu;
    SET_GPR_U32(ctx, 31, 0x7C3F84u);
    ctx->pc = 0x7C3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3F7Cu;
    // 0x7c3f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3A60u, 0x7C3F7Cu, 0x7C3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3F84u;
label_7c3f84:
    // 0x7c3f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c3f88: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x7c3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x7c3f8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c3f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c3f90:
    // 0x7c3f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3f94: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3F94u;
        // 0x7c3f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3F9Cu;
    // 0x7c3f9c: 0x0  nop
    ctx->pc = 0x7c3f9cu;
    // NOP
    ctx->pc = 0x7c3fa0u;
}
} // namespace gh_mcport
