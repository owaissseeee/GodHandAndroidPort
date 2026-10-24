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
// Function: fptosi
// Address: 0x79afc8 - 0x79b058
void fptosi_0x79afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptosi_0x79afc8");
#endif

    switch (ctx->pc) {
        case 0x79afe0u: goto label_79afe0;
        case 0x79aff8u: goto label_79aff8;
        default: break;
    }

    ctx->pc = 0x79afc8u;

    // 0x79afc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79afcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79afd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79afd4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79afd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79afd8: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AFD8u;
    SET_GPR_U32(ctx, 31, 0x79AFE0u);
    ctx->pc = 0x79AFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFD8u;
    // 0x79afdc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AFD8u, 0x79AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFE0u;
label_79afe0:
    // 0x79afe0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79afe4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79afe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AFE8u;
    {
        const bool branch_taken_0x79afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE8u;
        // 0x79afec: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afe8) {
            ctx->pc = 0x79AFF8u;
            goto label_79aff8;
        }
    }
    ctx->pc = 0x79AFF0u;
    // 0x79aff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AFF0u;
    {
        const bool branch_taken_0x79aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFF0u;
        // 0x79aff4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aff0) {
            ctx->pc = 0x79B000u;
            goto label_79b000;
        }
    }
    ctx->pc = 0x79AFF8u;
label_79aff8:
    // 0x79aff8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79AFF8u;
    {
        const bool branch_taken_0x79aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFF8u;
        // 0x79affc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aff8) {
            ctx->pc = 0x79B048u;
            goto label_79b048;
        }
    }
    ctx->pc = 0x79B000u;
label_79b000:
    // 0x79b000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B000u;
    {
        const bool branch_taken_0x79b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B000u;
        // 0x79b004: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b000) {
            ctx->pc = 0x79B018u;
            goto label_79b018;
        }
    }
    ctx->pc = 0x79B008u;
    // 0x79b008: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B008u;
    {
        const bool branch_taken_0x79b008 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B008u;
        // 0x79b00c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b008) {
            ctx->pc = 0x79AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aff8;
        }
    }
    ctx->pc = 0x79B010u;
    // 0x79b010: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B010u;
    {
        const bool branch_taken_0x79b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b010) {
            ctx->pc = 0x79B030u;
            goto label_79b030;
        }
    }
    ctx->pc = 0x79B018u;
label_79b018:
    // 0x79b018: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b01c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79b020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b024: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79b024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79b028: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B028u;
    {
        const bool branch_taken_0x79b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B028u;
        // 0x79b02c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b028) {
            ctx->pc = 0x79B048u;
            goto label_79b048;
        }
    }
    ctx->pc = 0x79B030u;
label_79b030:
    // 0x79b030: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79b034: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79b034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79b038: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79b038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b03c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x79b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x79b040: 0x22023  negu        $a0, $v0
    ctx->pc = 0x79b040u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79b044: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x79b044u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_79b048:
    // 0x79b048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b04c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B04Cu;
        // 0x79b050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B054u;
    // 0x79b054: 0x0  nop
    ctx->pc = 0x79b054u;
    // NOP
    ctx->pc = 0x79b058u;
}
} // namespace gh_r505
