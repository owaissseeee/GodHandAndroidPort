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

// Function: _$_8stdiobuf
// Address: 0x3935d0 - 0x393628
void ps2____8stdiobuf_0x3935d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____8stdiobuf_0x3935d0");
#endif

    switch (ctx->pc) {
        case 0x393604u: goto label_393604;
        case 0x393610u: goto label_393610;
        default: break;
    }

    ctx->pc = 0x3935d0u;

    // 0x3935d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3935d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3935d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3935d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3935d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3935dc: 0x2442dae8  addiu       $v0, $v0, -0x2518
    ctx->pc = 0x3935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957800));
    // 0x3935e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3935e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3935e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3935e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3935e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3935e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3935ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3935ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3935f0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3935f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3935f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3935f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3935f8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3935f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3935fc: 0xc0e4aa0  jal         func_392A80
    ctx->pc = 0x3935FCu;
    SET_GPR_U32(ctx, 31, 0x393604u);
    ctx->pc = 0x393600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3935FCu;
    // 0x393600: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x3935FCu, 0x393604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393604u;
label_393604:
    // 0x393604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393608: 0xc0e3b50  jal         func_38ED40
    ctx->pc = 0x393608u;
    SET_GPR_U32(ctx, 31, 0x393610u);
    ctx->pc = 0x39360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393608u;
    // 0x39360c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED40u, 0x393608u, 0x393610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393610u;
label_393610:
    // 0x393610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393614: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x393614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39361c: 0x3e00008  jr          $ra
    ctx->pc = 0x39361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39361Cu;
        // 0x393620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393624u;
    // 0x393624: 0x0  nop
    ctx->pc = 0x393624u;
    // NOP
    ctx->pc = 0x393628u;
}
