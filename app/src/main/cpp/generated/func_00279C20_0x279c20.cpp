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

// Function: func_00279C20
// Address: 0x279c20 - 0x279c88
void func_00279C20_0x279c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279C20_0x279c20");
#endif

    switch (ctx->pc) {
        case 0x279c7cu: goto label_279c7c;
        default: break;
    }

    ctx->pc = 0x279c20u;

    // 0x279c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279c24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x279c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279c2c: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x279c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x279c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279C30u;
    {
        const bool branch_taken_0x279c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C30u;
        // 0x279c34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c30) {
            ctx->pc = 0x279C44u;
            goto label_279c44;
        }
    }
    ctx->pc = 0x279C38u;
    // 0x279c38: 0x8ca20278  lw          $v0, 0x278($a1)
    ctx->pc = 0x279c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x279c3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279C3Cu;
    {
        const bool branch_taken_0x279c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C3Cu;
        // 0x279c40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c3c) {
            ctx->pc = 0x279C48u;
            goto label_279c48;
        }
    }
    ctx->pc = 0x279C44u;
label_279c44:
    // 0x279c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x279c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279c48:
    // 0x279c48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x279C48u;
    {
        const bool branch_taken_0x279c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279c48) {
            ctx->pc = 0x279C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C48u;
            // 0x279c4c: 0xac450148  sw          $a1, 0x148($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C50u;
            goto label_279c50;
        }
    }
    ctx->pc = 0x279C50u;
label_279c50:
    // 0x279c50: 0x8ca20250  lw          $v0, 0x250($a1)
    ctx->pc = 0x279c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x279c54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x279c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x279c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x279c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279c60: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x279c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x279c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x279c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x279c68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x279c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c6c: 0xe4a0024c  swc1        $f0, 0x24C($a1)
    ctx->pc = 0x279c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 588), bits); }
    // 0x279c70: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x279c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x279c74: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x279C74u;
    SET_GPR_U32(ctx, 31, 0x279C7Cu);
    ctx->pc = 0x279C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C74u;
    // 0x279c78: 0xaca01580  sw          $zero, 0x1580($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 5504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x279C74u, 0x279C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C7Cu;
label_279c7c:
    // 0x279c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279c80: 0x3e00008  jr          $ra
    ctx->pc = 0x279C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C80u;
        // 0x279c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279C88u;
}
