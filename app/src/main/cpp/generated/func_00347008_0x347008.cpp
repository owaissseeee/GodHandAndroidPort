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

// Function: func_00347008
// Address: 0x347008 - 0x347080
void func_00347008_0x347008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347008_0x347008");
#endif

    switch (ctx->pc) {
        case 0x347024u: goto label_347024;
        case 0x347034u: goto label_347034;
        case 0x347058u: goto label_347058;
        case 0x347064u: goto label_347064;
        default: break;
    }

    ctx->pc = 0x347008u;

    // 0x347008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34700c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34701c: 0xc0d1c20  jal         func_347080
    ctx->pc = 0x34701Cu;
    SET_GPR_U32(ctx, 31, 0x347024u);
    ctx->pc = 0x347020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34701Cu;
    // 0x347020: 0x24b10060  addiu       $s1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347080u, 0x34701Cu, 0x347024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347024u;
label_347024:
    // 0x347024: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x347024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x347028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34702c: 0xc0d1c3c  jal         func_3470F0
    ctx->pc = 0x34702Cu;
    SET_GPR_U32(ctx, 31, 0x347034u);
    ctx->pc = 0x347030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34702Cu;
    // 0x347030: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3470F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3470F0u, 0x34702Cu, 0x347034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347034u;
label_347034:
    // 0x347034: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x347034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x347038: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x347038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x34703c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x34703cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x347040: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x347040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x347044: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x347044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x347048: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x347048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x34704c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x34704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x347050: 0xc0d1c58  jal         func_347160
    ctx->pc = 0x347050u;
    SET_GPR_U32(ctx, 31, 0x347058u);
    ctx->pc = 0x347054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347050u;
    // 0x347054: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347160u, 0x347050u, 0x347058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347058u;
label_347058:
    // 0x347058: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x347058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34705c: 0xc0d1c58  jal         func_347160
    ctx->pc = 0x34705Cu;
    SET_GPR_U32(ctx, 31, 0x347064u);
    ctx->pc = 0x347060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34705Cu;
    // 0x347060: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347160u, 0x34705Cu, 0x347064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347064u;
label_347064:
    // 0x347064: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x347064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x347068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34706c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34706cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347074: 0x3e00008  jr          $ra
    ctx->pc = 0x347074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347074u;
        // 0x347078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34707Cu;
    // 0x34707c: 0x0  nop
    ctx->pc = 0x34707cu;
    // NOP
    ctx->pc = 0x347080u;
}
