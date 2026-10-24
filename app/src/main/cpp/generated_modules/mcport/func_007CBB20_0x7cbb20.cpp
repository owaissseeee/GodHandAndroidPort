#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CBB20
// Address: 0x7cbb20 - 0x7cbbb0
void func_007CBB20_0x7cbb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CBB20_0x7cbb20");
#endif

    switch (ctx->pc) {
        case 0x7cbb3cu: goto label_7cbb3c;
        case 0x7cbb68u: goto label_7cbb68;
        default: break;
    }

    ctx->pc = 0x7cbb20u;

    // 0x7cbb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7cbb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7cbb24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cbb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cbb28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cbb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cbb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cbb30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7cbb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7cbb34: 0xc1f33e4  jal         func_7CCF90
    ctx->pc = 0x7CBB34u;
    SET_GPR_U32(ctx, 31, 0x7CBB3Cu);
    ctx->pc = 0x7CBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBB34u;
    // 0x7cbb38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCF90u, 0x7CBB34u, 0x7CBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBB3Cu;
label_7cbb3c:
    // 0x7cbb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cbb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbb40: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBB40u;
    {
        const bool branch_taken_0x7cbb40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cbb40) {
            ctx->pc = 0x7CBB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBB40u;
            // 0x7cbb44: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBB50u;
            goto label_7cbb50;
        }
    }
    ctx->pc = 0x7CBB48u;
    // 0x7cbb48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7CBB48u;
    {
        const bool branch_taken_0x7cbb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBB48u;
        // 0x7cbb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbb48) {
            ctx->pc = 0x7CBB98u;
            goto label_7cbb98;
        }
    }
    ctx->pc = 0x7CBB50u;
label_7cbb50:
    // 0x7cbb50: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x7cbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x7cbb54: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x7cbb54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x7cbb58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CBB58u;
    {
        const bool branch_taken_0x7cbb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBB58u;
        // 0x7cbb5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbb58) {
            ctx->pc = 0x7CBB7Cu;
            goto label_7cbb7c;
        }
    }
    ctx->pc = 0x7CBB60u;
    // 0x7cbb60: 0xc1f2e86  jal         func_7CBA18
    ctx->pc = 0x7CBB60u;
    SET_GPR_U32(ctx, 31, 0x7CBB68u);
    ctx->pc = 0x7CBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBB60u;
    // 0x7cbb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBA18u, 0x7CBB60u, 0x7CBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBB68u;
label_7cbb68:
    // 0x7cbb68: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x7cbb68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbb6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x7cbb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x7cbb70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x7cbb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x7cbb74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBB74u;
    {
        const bool branch_taken_0x7cbb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBB74u;
        // 0x7cbb78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbb74) {
            ctx->pc = 0x7CBB84u;
            goto label_7cbb84;
        }
    }
    ctx->pc = 0x7CBB7Cu;
label_7cbb7c:
    // 0x7cbb7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7cbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cbb80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x7cbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_7cbb84:
    // 0x7cbb84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7cbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cbb88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cbb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbb8c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x7cbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7cbb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7cbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7cbb94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x7cbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_7cbb98:
    // 0x7cbb98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7cbb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cbb9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cbb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cbba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cbba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cbba4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CBBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBBA4u;
        // 0x7cbba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CBBACu;
    // 0x7cbbac: 0x0  nop
    ctx->pc = 0x7cbbacu;
    // NOP
    ctx->pc = 0x7cbbb0u;
}
} // namespace gh_mcport
