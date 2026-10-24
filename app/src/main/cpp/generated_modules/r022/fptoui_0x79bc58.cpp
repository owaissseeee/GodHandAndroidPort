#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fptoui
// Address: 0x79bc58 - 0x79bcf0
void fptoui_0x79bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x79bc58");
#endif

    switch (ctx->pc) {
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc88u: goto label_79bc88;
        default: break;
    }

    ctx->pc = 0x79bc58u;

    // 0x79bc58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bc5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79bc60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bc64: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79bc64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79bc68: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BC68u;
    SET_GPR_U32(ctx, 31, 0x79BC70u);
    ctx->pc = 0x79BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC68u;
    // 0x79bc6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BC68u, 0x79BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC70u;
label_79bc70:
    // 0x79bc70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bc74: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79bc78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BC78u;
    {
        const bool branch_taken_0x79bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC78u;
        // 0x79bc7c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc78) {
            ctx->pc = 0x79BC88u;
            goto label_79bc88;
        }
    }
    ctx->pc = 0x79BC80u;
    // 0x79bc80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BC80u;
    {
        const bool branch_taken_0x79bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC80u;
        // 0x79bc84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc80) {
            ctx->pc = 0x79BC90u;
            goto label_79bc90;
        }
    }
    ctx->pc = 0x79BC88u;
label_79bc88:
    // 0x79bc88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x79BC88u;
    {
        const bool branch_taken_0x79bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC88u;
        // 0x79bc8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc88) {
            ctx->pc = 0x79BCE4u;
            goto label_79bce4;
        }
    }
    ctx->pc = 0x79BC90u;
label_79bc90:
    // 0x79bc90: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79BC90u;
    {
        const bool branch_taken_0x79bc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC90u;
        // 0x79bc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc90) {
            ctx->pc = 0x79BCE4u;
            goto label_79bce4;
        }
    }
    ctx->pc = 0x79BC98u;
    // 0x79bc98: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79bc9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BC9Cu;
    {
        const bool branch_taken_0x79bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC9Cu;
        // 0x79bca0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc9c) {
            ctx->pc = 0x79BCB4u;
            goto label_79bcb4;
        }
    }
    ctx->pc = 0x79BCA4u;
    // 0x79bca4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79BCA4u;
    {
        const bool branch_taken_0x79bca4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCA4u;
        // 0x79bca8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bca4) {
            ctx->pc = 0x79BC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc88;
        }
    }
    ctx->pc = 0x79BCACu;
    // 0x79bcac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BCACu;
    {
        const bool branch_taken_0x79bcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bcac) {
            ctx->pc = 0x79BCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCACu;
            // 0x79bcb0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCC0u;
            goto label_79bcc0;
        }
    }
    ctx->pc = 0x79BCB4u;
label_79bcb4:
    // 0x79bcb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79bcb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79BCB8u;
    {
        const bool branch_taken_0x79bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCB8u;
        // 0x79bcbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcb8) {
            ctx->pc = 0x79BCE4u;
            goto label_79bce4;
        }
    }
    ctx->pc = 0x79BCC0u;
label_79bcc0:
    // 0x79bcc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BCC0u;
    {
        const bool branch_taken_0x79bcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bcc0) {
            ctx->pc = 0x79BCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCC0u;
            // 0x79bcc4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCD8u;
            goto label_79bcd8;
        }
    }
    ctx->pc = 0x79BCC8u;
    // 0x79bcc8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79bccc: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x79bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x79bcd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79BCD0u;
    {
        const bool branch_taken_0x79bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD0u;
        // 0x79bcd4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcd0) {
            ctx->pc = 0x79BCE4u;
            goto label_79bce4;
        }
    }
    ctx->pc = 0x79BCD8u;
label_79bcd8:
    // 0x79bcd8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x79bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79bcdc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x79bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x79bce0: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x79bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_79bce4:
    // 0x79bce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE8u;
        // 0x79bcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BCF0u;
}
} // namespace gh_r022
