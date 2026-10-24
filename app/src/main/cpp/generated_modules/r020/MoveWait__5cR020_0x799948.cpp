#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: MoveWait__5cR020
// Address: 0x799948 - 0x7999f0
void MoveWait__5cR020_0x799948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveWait__5cR020_0x799948");
#endif

    switch (ctx->pc) {
        case 0x799960u: goto label_799960;
        default: break;
    }

    ctx->pc = 0x799948u;

    // 0x799948: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x79994cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x799950: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799950u;
        // 0x799954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799950) {
            ctx->pc = 0x799968u;
            goto label_799968;
        }
    }
    ctx->pc = 0x799958u;
    // 0x799958: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x799958u;
    {
        const bool branch_taken_0x799958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799958) {
            ctx->pc = 0x79995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799958u;
            // 0x79995c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999C4u;
            goto label_7999c4;
        }
    }
    ctx->pc = 0x799960u;
label_799960:
    // 0x799960: 0x3e00008  jr          $ra
    ctx->pc = 0x799960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79996c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x799970: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x799974: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799974) {
            ctx->pc = 0x799978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799974u;
            // 0x799978: 0x90a20001  lbu         $v0, 0x1($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999A0u;
            goto label_7999a0;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799980: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x799980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x799984: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x799984u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799988: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x799988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79998c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x79998cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x799990: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x799994: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x799998: 0x3e00008  jr          $ra
    ctx->pc = 0x799998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x7999a4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x7999a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7999a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7999ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x7999acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x7999b0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x7999b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x7999b4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x7999b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x7999b8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x7999b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999bc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x7999bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999c0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_7999c4:
    // 0x7999c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7999c8: 0x441ffe5  bgez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x7999C8u;
    {
        const bool branch_taken_0x7999c8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C8u;
        // 0x7999cc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c8) {
            ctx->pc = 0x799960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799960;
        }
    }
    ctx->pc = 0x7999D0u;
    // 0x7999d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7999d4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x7999d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x7999d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7999dc: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x7999dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999e0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x7999e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7999E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999ECu;
    // 0x7999ec: 0x0  nop
    ctx->pc = 0x7999ecu;
    // NOP
    ctx->pc = 0x7999f0u;
}
} // namespace gh_r020
