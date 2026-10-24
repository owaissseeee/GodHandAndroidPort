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

// Function: ulp
// Address: 0x38ffe0 - 0x390078
void ulp_0x38ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ulp_0x38ffe0");
#endif

    ctx->pc = 0x38ffe0u;

    // 0x38ffe0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x38ffe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x38ffe4: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x38ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x38ffe8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x38ffe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38ffec: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x38ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x38fff0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38fff4: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FFF4u;
    {
        const bool branch_taken_0x38fff4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x38FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFF4u;
        // 0x38fff8: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fff4) {
            ctx->pc = 0x390004u;
            goto label_390004;
        }
    }
    ctx->pc = 0x38FFFCu;
    // 0x38fffc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x38FFFCu;
    {
        const bool branch_taken_0x38fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFFCu;
        // 0x390000: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fffc) {
            ctx->pc = 0x39006Cu;
            goto label_39006c;
        }
    }
    ctx->pc = 0x390004u;
label_390004:
    // 0x390004: 0x41023  negu        $v0, $a0
    ctx->pc = 0x390004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x390008: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x390008u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x39000c: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x39000cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x390010: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390010u;
    {
        const bool branch_taken_0x390010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390010u;
        // 0x390014: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390010) {
            ctx->pc = 0x390024u;
            goto label_390024;
        }
    }
    ctx->pc = 0x390018u;
    // 0x390018: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x390018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x39001c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39001Cu;
    {
        const bool branch_taken_0x39001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39001Cu;
        // 0x390020: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39001c) {
            ctx->pc = 0x39006Cu;
            goto label_39006c;
        }
    }
    ctx->pc = 0x390024u;
label_390024:
    // 0x390024: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x390024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x390028: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x390028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39002c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x39002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x390030: 0x2883001f  slti        $v1, $a0, 0x1F
    ctx->pc = 0x390030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x390034: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x390034u;
    {
        const bool branch_taken_0x390034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390034u;
        // 0x390038: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390034) {
            ctx->pc = 0x390050u;
            goto label_390050;
        }
    }
    ctx->pc = 0x39003Cu;
    // 0x39003c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x39003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x390040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390044: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x390044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x390048: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x390048u;
    {
        const bool branch_taken_0x390048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390048u;
        // 0x39004c: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390048) {
            ctx->pc = 0x390054u;
            goto label_390054;
        }
    }
    ctx->pc = 0x390050u;
label_390050:
    // 0x390050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390054:
    // 0x390054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x390054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x390058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x390058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39005c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39005cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390060: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x390060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x390064: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x390064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x390068: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x390068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_39006c:
    // 0x39006c: 0x3e00008  jr          $ra
    ctx->pc = 0x39006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39006Cu;
        // 0x390070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390074u;
    // 0x390074: 0x0  nop
    ctx->pc = 0x390074u;
    // NOP
    ctx->pc = 0x390078u;
}
