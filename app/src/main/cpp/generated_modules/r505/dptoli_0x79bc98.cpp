#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: dptoli
// Address: 0x79bc98 - 0x79bd30
void dptoli_0x79bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x79bc98");
#endif

    switch (ctx->pc) {
        case 0x79bcb0u: goto label_79bcb0;
        case 0x79bcc8u: goto label_79bcc8;
        default: break;
    }

    ctx->pc = 0x79bc98u;

    // 0x79bc98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79bc9c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79bca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79bca8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BCA8u;
    SET_GPR_U32(ctx, 31, 0x79BCB0u);
    ctx->pc = 0x79BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCA8u;
    // 0x79bcac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BCA8u, 0x79BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCB0u;
label_79bcb0:
    // 0x79bcb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bcb4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79bcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79bcb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BCB8u;
    {
        const bool branch_taken_0x79bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCB8u;
        // 0x79bcbc: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcb8) {
            ctx->pc = 0x79BCC8u;
            goto label_79bcc8;
        }
    }
    ctx->pc = 0x79BCC0u;
    // 0x79bcc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BCC0u;
    {
        const bool branch_taken_0x79bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCC0u;
        // 0x79bcc4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcc0) {
            ctx->pc = 0x79BCD0u;
            goto label_79bcd0;
        }
    }
    ctx->pc = 0x79BCC8u;
label_79bcc8:
    // 0x79bcc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79BCC8u;
    {
        const bool branch_taken_0x79bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCC8u;
        // 0x79bccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcc8) {
            ctx->pc = 0x79BD20u;
            goto label_79bd20;
        }
    }
    ctx->pc = 0x79BCD0u;
label_79bcd0:
    // 0x79bcd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BCD0u;
    {
        const bool branch_taken_0x79bcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD0u;
        // 0x79bcd4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcd0) {
            ctx->pc = 0x79BCE8u;
            goto label_79bce8;
        }
    }
    ctx->pc = 0x79BCD8u;
    // 0x79bcd8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79BCD8u;
    {
        const bool branch_taken_0x79bcd8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD8u;
        // 0x79bcdc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcd8) {
            ctx->pc = 0x79BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bcc8;
        }
    }
    ctx->pc = 0x79BCE0u;
    // 0x79bce0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BCE0u;
    {
        const bool branch_taken_0x79bce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE0u;
        // 0x79bce4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bce0) {
            ctx->pc = 0x79BD00u;
            goto label_79bd00;
        }
    }
    ctx->pc = 0x79BCE8u;
label_79bce8:
    // 0x79bce8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bcec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79bcf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bcf4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79bcf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79BCF8u;
    {
        const bool branch_taken_0x79bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF8u;
        // 0x79bcfc: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcf8) {
            ctx->pc = 0x79BD20u;
            goto label_79bd20;
        }
    }
    ctx->pc = 0x79BD00u;
label_79bd00:
    // 0x79bd00: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79bd00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bd04: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79bd08: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x79bd0c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x79bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bd10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79bd14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79bd18: 0x21823  negu        $v1, $v0
    ctx->pc = 0x79bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79bd1c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x79bd1cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_79bd20:
    // 0x79bd20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79bd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD24u;
        // 0x79bd28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD2Cu;
    // 0x79bd2c: 0x0  nop
    ctx->pc = 0x79bd2cu;
    // NOP
    ctx->pc = 0x79bd30u;
}
} // namespace gh_r505
