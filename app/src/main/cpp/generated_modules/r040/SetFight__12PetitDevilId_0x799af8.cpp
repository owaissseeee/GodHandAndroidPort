#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: SetFight__12PetitDevilId
// Address: 0x799af8 - 0x799b68
void SetFight__12PetitDevilId_0x799af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFight__12PetitDevilId_0x799af8");
#endif

    switch (ctx->pc) {
        case 0x799b14u: goto label_799b14;
        case 0x799b24u: goto label_799b24;
        case 0x799b34u: goto label_799b34;
        case 0x799b44u: goto label_799b44;
        default: break;
    }

    ctx->pc = 0x799af8u;

    // 0x799af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799afc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799b0c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799B0Cu;
    SET_GPR_U32(ctx, 31, 0x799B14u);
    ctx->pc = 0x799B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B0Cu;
    // 0x799b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799B0Cu, 0x799B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799b1c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799B1Cu;
    SET_GPR_U32(ctx, 31, 0x799B24u);
    ctx->pc = 0x799B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B1Cu;
    // 0x799b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799B1Cu, 0x799B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b2c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799B2Cu;
    SET_GPR_U32(ctx, 31, 0x799B34u);
    ctx->pc = 0x799B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B2Cu;
    // 0x799b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799B2Cu, 0x799B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b3c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799b48: 0xae000ec0  sw          $zero, 0xEC0($s0)
    ctx->pc = 0x799b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3776), GPR_U32(ctx, 0));
    // 0x799b4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799b50: 0xae000ec4  sw          $zero, 0xEC4($s0)
    ctx->pc = 0x799b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3780), GPR_U32(ctx, 0));
    // 0x799b54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x799b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x799b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799b60: 0x3e00008  jr          $ra
    ctx->pc = 0x799B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B60u;
        // 0x799b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B68u;
}
} // namespace gh_r040
