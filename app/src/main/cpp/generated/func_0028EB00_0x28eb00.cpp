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

// Function: func_0028EB00
// Address: 0x28eb00 - 0x28eb88
void func_0028EB00_0x28eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EB00_0x28eb00");
#endif

    switch (ctx->pc) {
        case 0x28eb14u: goto label_28eb14;
        case 0x28eb30u: goto label_28eb30;
        default: break;
    }

    ctx->pc = 0x28eb00u;

    // 0x28eb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eb04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28eb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eb0c: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x28EB0Cu;
    SET_GPR_U32(ctx, 31, 0x28EB14u);
    ctx->pc = 0x28EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB0Cu;
    // 0x28eb10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x28EB0Cu, 0x28EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB14u;
label_28eb14:
    // 0x28eb14: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28eb18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28eb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28eb1c: 0x2442a660  addiu       $v0, $v0, -0x59A0
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944352));
    // 0x28eb20: 0x260305c0  addiu       $v1, $s0, 0x5C0
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x28eb24: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x28eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x28eb28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb2c: 0x0  nop
    ctx->pc = 0x28eb2cu;
    // NOP
label_28eb30:
    // 0x28eb30: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x28eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28eb34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28eb38: 0x0  nop
    ctx->pc = 0x28eb38u;
    // NOP
    // 0x28eb3c: 0x0  nop
    ctx->pc = 0x28eb3cu;
    // NOP
    // 0x28eb40: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28EB40u;
    {
        const bool branch_taken_0x28eb40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x28EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB40u;
        // 0x28eb44: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb40) {
            ctx->pc = 0x28EB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28eb30;
        }
    }
    ctx->pc = 0x28EB48u;
    // 0x28eb48: 0xae000610  sw          $zero, 0x610($s0)
    ctx->pc = 0x28eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
    // 0x28eb4c: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x28eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28eb50: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x28eb54: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x28eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x28eb58: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x28eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x28eb5c: 0xa60302ae  sh          $v1, 0x2AE($s0)
    ctx->pc = 0x28eb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 686), (uint16_t)GPR_U32(ctx, 3));
    // 0x28eb60: 0xae0204ac  sw          $v0, 0x4AC($s0)
    ctx->pc = 0x28eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 2));
    // 0x28eb64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28eb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb68: 0xae000610  sw          $zero, 0x610($s0)
    ctx->pc = 0x28eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
    // 0x28eb6c: 0xa600062e  sh          $zero, 0x62E($s0)
    ctx->pc = 0x28eb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1582), (uint16_t)GPR_U32(ctx, 0));
    // 0x28eb70: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x28eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x28eb74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28eb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB7Cu;
        // 0x28eb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB84u;
    // 0x28eb84: 0x0  nop
    ctx->pc = 0x28eb84u;
    // NOP
    ctx->pc = 0x28eb88u;
}
