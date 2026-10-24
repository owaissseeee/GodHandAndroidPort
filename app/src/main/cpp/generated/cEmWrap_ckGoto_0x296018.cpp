#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cEmWrap_ckGoto
// Address: 0x296018 - 0x296070
void cEmWrap_ckGoto_0x296018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_ckGoto_0x296018");
#endif

    switch (ctx->pc) {
        case 0x29602cu: goto label_29602c;
        case 0x296044u: goto label_296044;
        case 0x29605cu: goto label_29605c;
        default: break;
    }

    ctx->pc = 0x296018u;

    // 0x296018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29601c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296024: 0xc0a565e  jal         func_295978
    ctx->pc = 0x296024u;
    SET_GPR_U32(ctx, 31, 0x29602Cu);
    ctx->pc = 0x296028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296024u;
    // 0x296028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x296024u, 0x29602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29602Cu;
label_29602c:
    // 0x29602c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29602Cu;
    {
        const bool branch_taken_0x29602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29602Cu;
        // 0x296030: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29602c) {
            ctx->pc = 0x29604Cu;
            goto label_29604c;
        }
    }
    ctx->pc = 0x296034u;
    // 0x296034: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x296034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296038: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x296038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x29603c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x29603Cu;
    SET_GPR_U32(ctx, 31, 0x296044u);
    ctx->pc = 0x296040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29603Cu;
    // 0x296040: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x29603Cu, 0x296044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296044u;
label_296044:
    // 0x296044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296044u;
    {
        const bool branch_taken_0x296044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296044) {
            ctx->pc = 0x296054u;
            goto label_296054;
        }
    }
    ctx->pc = 0x29604Cu;
label_29604c:
    // 0x29604c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29604Cu;
    {
        const bool branch_taken_0x29604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29604Cu;
        // 0x296050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29604c) {
            ctx->pc = 0x29605Cu;
            goto label_29605c;
        }
    }
    ctx->pc = 0x296054u;
label_296054:
    // 0x296054: 0xc09ba8a  jal         func_26EA28
    ctx->pc = 0x296054u;
    SET_GPR_U32(ctx, 31, 0x29605Cu);
    ctx->pc = 0x296058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296054u;
    // 0x296058: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA28u, 0x296054u, 0x29605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29605Cu;
label_29605c:
    // 0x29605c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29605cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296064: 0x3e00008  jr          $ra
    ctx->pc = 0x296064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296064u;
        // 0x296068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29606Cu;
    // 0x29606c: 0x0  nop
    ctx->pc = 0x29606cu;
    // NOP
    ctx->pc = 0x296070u;
}
