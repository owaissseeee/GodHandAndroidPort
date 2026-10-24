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
// Function: SetYouWin__12PetitDevilIdb
// Address: 0x799ec8 - 0x799f28
void SetYouWin__12PetitDevilIdb_0x799ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetYouWin__12PetitDevilIdb_0x799ec8");
#endif

    switch (ctx->pc) {
        case 0x799eecu: goto label_799eec;
        default: break;
    }

    ctx->pc = 0x799ec8u;

    // 0x799ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x799ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ee0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799ee4: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x799EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE4u;
    // 0x799ee8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0xae200ec8  sw          $zero, 0xEC8($s1)
    ctx->pc = 0x799eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3784), GPR_U32(ctx, 0));
    // 0x799ef0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EF0u;
    {
        const bool branch_taken_0x799ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF0u;
        // 0x799ef4: 0xae200ecc  sw          $zero, 0xECC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef0) {
            ctx->pc = 0x799F04u;
            goto label_799f04;
        }
    }
    ctx->pc = 0x799EF8u;
    // 0x799ef8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799efc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799EFCu;
    {
        const bool branch_taken_0x799efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EFCu;
        // 0x799f00: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799efc) {
            ctx->pc = 0x799F10u;
            goto label_799f10;
        }
    }
    ctx->pc = 0x799F04u;
label_799f04:
    // 0x799f04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799f08: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x799f0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799f10:
    // 0x799f10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x799f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x799f14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799f20: 0x3e00008  jr          $ra
    ctx->pc = 0x799F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F28u;
}
} // namespace gh_r040
