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

// Function: sceMpegReset
// Address: 0x39aa48 - 0x39aad8
void sceMpegReset_0x39aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegReset_0x39aa48");
#endif

    switch (ctx->pc) {
        case 0x39aa84u: goto label_39aa84;
        default: break;
    }

    ctx->pc = 0x39aa48u;

    // 0x39aa48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39aa4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39aa4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39aa54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39aa58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39aa5c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x39aa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x39aa60: 0xae000878  sw          $zero, 0x878($s0)
    ctx->pc = 0x39aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2168), GPR_U32(ctx, 0));
    // 0x39aa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x39aa6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x39aa70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x39aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x39aa74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x39aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x39aa78: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x39aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x39aa7c: 0xc0e681e  jal         func_39A078
    ctx->pc = 0x39AA7Cu;
    SET_GPR_U32(ctx, 31, 0x39AA84u);
    ctx->pc = 0x39AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA7Cu;
    // 0x39aa80: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A078u, 0x39AA7Cu, 0x39AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA84u;
label_39aa84:
    // 0x39aa84: 0xae000858  sw          $zero, 0x858($s0)
    ctx->pc = 0x39aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 0));
    // 0x39aa88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39aa8c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x39aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x39aa90: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x39aa90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x39aa94: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x39aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x39aa98: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x39aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x39aa9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x39aaa0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x39aaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x39aaa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39aaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39aaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39aaac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39aab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39aab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aab4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x39aab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x39aab8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x39aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x39AABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AABCu;
        // 0x39aac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AAC4u;
    // 0x39aac4: 0x0  nop
    ctx->pc = 0x39aac4u;
    // NOP
    // 0x39aac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39aacc: 0x0  nop
    ctx->pc = 0x39aaccu;
    // NOP
    // 0x39aad0: 0xac4600ac  sw          $a2, 0xAC($v0)
    ctx->pc = 0x39aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
    // 0x39aad4: 0x0  nop
    ctx->pc = 0x39aad4u;
    // NOP
    ctx->pc = 0x39aad8u;
}
