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
// Function: dptoul
// Address: 0x79bd30 - 0x79bdd0
void dptoul_0x79bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x79bd30");
#endif

    switch (ctx->pc) {
        case 0x79bd48u: goto label_79bd48;
        case 0x79bd60u: goto label_79bd60;
        default: break;
    }

    ctx->pc = 0x79bd30u;

    // 0x79bd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79bd34: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79bd38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79bd40: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BD40u;
    SET_GPR_U32(ctx, 31, 0x79BD48u);
    ctx->pc = 0x79BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD40u;
    // 0x79bd44: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BD40u, 0x79BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD48u;
label_79bd48:
    // 0x79bd48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bd4c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79bd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79bd50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD50u;
    {
        const bool branch_taken_0x79bd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD50u;
        // 0x79bd54: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd50) {
            ctx->pc = 0x79BD60u;
            goto label_79bd60;
        }
    }
    ctx->pc = 0x79BD58u;
    // 0x79bd58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD58u;
    {
        const bool branch_taken_0x79bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD58u;
        // 0x79bd5c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd58) {
            ctx->pc = 0x79BD68u;
            goto label_79bd68;
        }
    }
    ctx->pc = 0x79BD60u;
label_79bd60:
    // 0x79bd60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79BD60u;
    {
        const bool branch_taken_0x79bd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD60u;
        // 0x79bd64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd60) {
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BD68u;
label_79bd68:
    // 0x79bd68: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79BD68u;
    {
        const bool branch_taken_0x79bd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD68u;
        // 0x79bd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd68) {
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BD70u;
    // 0x79bd70: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79bd74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BD74u;
    {
        const bool branch_taken_0x79bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD74u;
        // 0x79bd78: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd74) {
            ctx->pc = 0x79BD8Cu;
            goto label_79bd8c;
        }
    }
    ctx->pc = 0x79BD7Cu;
    // 0x79bd7c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79BD7Cu;
    {
        const bool branch_taken_0x79bd7c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD7Cu;
        // 0x79bd80: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd7c) {
            ctx->pc = 0x79BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd60;
        }
    }
    ctx->pc = 0x79BD84u;
    // 0x79bd84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BD84u;
    {
        const bool branch_taken_0x79bd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bd84) {
            ctx->pc = 0x79BD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD84u;
            // 0x79bd88: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD98u;
            goto label_79bd98;
        }
    }
    ctx->pc = 0x79BD8Cu;
label_79bd8c:
    // 0x79bd8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79bd90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79BD90u;
    {
        const bool branch_taken_0x79bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD90u;
        // 0x79bd94: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd90) {
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BD98u;
label_79bd98:
    // 0x79bd98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BD98u;
    {
        const bool branch_taken_0x79bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD98u;
        // 0x79bd9c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd98) {
            ctx->pc = 0x79BDB0u;
            goto label_79bdb0;
        }
    }
    ctx->pc = 0x79BDA0u;
    // 0x79bda0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79bda0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bda4: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x79bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x79bda8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79BDA8u;
    {
        const bool branch_taken_0x79bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDA8u;
        // 0x79bdac: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bda8) {
            ctx->pc = 0x79BDBCu;
            goto label_79bdbc;
        }
    }
    ctx->pc = 0x79BDB0u;
label_79bdb0:
    // 0x79bdb0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79bdb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bdb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79bdb8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_79bdbc:
    // 0x79bdbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79bdc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bdc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79bdc4:
    // 0x79bdc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79bdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDC8u;
        // 0x79bdcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDD0u;
}
} // namespace gh_r505
