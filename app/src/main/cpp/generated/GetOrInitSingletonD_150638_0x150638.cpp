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

// Function: GetOrInitSingletonD_150638
// Address: 0x150638 - 0x1506c8
void GetOrInitSingletonD_150638_0x150638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingletonD_150638_0x150638");
#endif

    switch (ctx->pc) {
        case 0x150664u: goto label_150664;
        default: break;
    }

    ctx->pc = 0x150638u;

    // 0x150638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15063c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x150640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150644: 0x8c620d30  lw          $v0, 0xD30($v1)
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D30u));
    // 0x150648: 0x24700d30  addiu       $s0, $v1, 0xD30
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x15064c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15064Cu;
    {
        const bool branch_taken_0x15064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15064Cu;
        // 0x150650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15064c) {
            ctx->pc = 0x150664u;
            goto label_150664;
        }
    }
    ctx->pc = 0x150654u;
    // 0x150654: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x150654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x150658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15065c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x15065Cu;
    SET_GPR_U32(ctx, 31, 0x150664u);
    ctx->pc = 0x150660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15065Cu;
    // 0x150660: 0x24a5ecb8  addiu       $a1, $a1, -0x1348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x15065Cu, 0x150664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150664u;
label_150664:
    // 0x150664: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15066c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15066cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150670: 0x3e00008  jr          $ra
    ctx->pc = 0x150670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150670u;
        // 0x150674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150678u;
    // 0x150678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x150678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15067c: 0x0  nop
    ctx->pc = 0x15067cu;
    // NOP
    // 0x150680: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x150680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x150684: 0x0  nop
    ctx->pc = 0x150684u;
    // NOP
    // 0x150688: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x150688u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15068c: 0x0  nop
    ctx->pc = 0x15068cu;
    // NOP
    // 0x150690: 0x0  nop
    ctx->pc = 0x150690u;
    // NOP
    // 0x150694: 0x0  nop
    ctx->pc = 0x150694u;
    // NOP
    // 0x150698: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15069c: 0x0  nop
    ctx->pc = 0x15069cu;
    // NOP
    // 0x1506a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1506a4: 0x0  nop
    ctx->pc = 0x1506a4u;
    // NOP
    // 0x1506a8: 0x0  nop
    ctx->pc = 0x1506a8u;
    // NOP
    // 0x1506ac: 0x0  nop
    ctx->pc = 0x1506acu;
    // NOP
    // 0x1506b0: 0x0  nop
    ctx->pc = 0x1506b0u;
    // NOP
    // 0x1506b4: 0x0  nop
    ctx->pc = 0x1506b4u;
    // NOP
    // 0x1506b8: 0xe48000c8  swc1        $f0, 0xC8($a0)
    ctx->pc = 0x1506b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x1506bc: 0x0  nop
    ctx->pc = 0x1506bcu;
    // NOP
    // 0x1506c0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1506c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1506c4: 0x0  nop
    ctx->pc = 0x1506c4u;
    // NOP
    ctx->pc = 0x1506c8u;
}
