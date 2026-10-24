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
// Function: sitofp
// Address: 0x79af10 - 0x79afc8
void sitofp_0x79af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x79af10");
#endif

    switch (ctx->pc) {
        case 0x79af90u: goto label_79af90;
        case 0x79afbcu: goto label_79afbc;
        default: break;
    }

    ctx->pc = 0x79af10u;

    // 0x79af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79af14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79af18: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x79af1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79af1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79af20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79af20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79af24: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF24u;
    {
        const bool branch_taken_0x79af24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF24u;
        // 0x79af28: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af24) {
            ctx->pc = 0x79AF38u;
            goto label_79af38;
        }
    }
    ctx->pc = 0x79AF2Cu;
    // 0x79af2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79af30: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79AF30u;
    {
        const bool branch_taken_0x79af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF30u;
        // 0x79af34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af30) {
            ctx->pc = 0x79AFB4u;
            goto label_79afb4;
        }
    }
    ctx->pc = 0x79AF38u;
label_79af38:
    // 0x79af38: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79af3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79AF3Cu;
    {
        const bool branch_taken_0x79af3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF3Cu;
        // 0x79af40: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af3c) {
            ctx->pc = 0x79AF68u;
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF44u;
    // 0x79af44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79af48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AF48u;
    {
        const bool branch_taken_0x79af48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF48u;
        // 0x79af4c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af48) {
            ctx->pc = 0x79AF60u;
            goto label_79af60;
        }
    }
    ctx->pc = 0x79AF50u;
    // 0x79af50: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x79af50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x79af54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79af54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79af58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79AF58u;
    {
        const bool branch_taken_0x79af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF58u;
        // 0x79af5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af58) {
            ctx->pc = 0x79AFC0u;
            goto label_79afc0;
        }
    }
    ctx->pc = 0x79AF60u;
label_79af60:
    // 0x79af60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AF60u;
    {
        const bool branch_taken_0x79af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF60u;
        // 0x79af64: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af60) {
            ctx->pc = 0x79AF6Cu;
            goto label_79af6c;
        }
    }
    ctx->pc = 0x79AF68u;
label_79af68:
    // 0x79af68: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x79af68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_79af6c:
    // 0x79af6c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79af70: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79af74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79af78: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x79af78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x79af7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79AF7Cu;
    {
        const bool branch_taken_0x79af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF7Cu;
        // 0x79af80: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af7c) {
            ctx->pc = 0x79AFB4u;
            goto label_79afb4;
        }
    }
    ctx->pc = 0x79AF84u;
    // 0x79af84: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x79af84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79af88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79af88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79af8c: 0x0  nop
    ctx->pc = 0x79af8cu;
    // NOP
label_79af90:
    // 0x79af90: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x79af90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x79af94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79af98: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79af98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af9c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x79af9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79afa0: 0x0  nop
    ctx->pc = 0x79afa0u;
    // NOP
    // 0x79afa4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79AFA4u;
    {
        const bool branch_taken_0x79afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79afa4) {
            ctx->pc = 0x79AF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af90;
        }
    }
    ctx->pc = 0x79AFACu;
    // 0x79afac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x79afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x79afb0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x79afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_79afb4:
    // 0x79afb4: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79AFB4u;
    SET_GPR_U32(ctx, 31, 0x79AFBCu);
    ctx->pc = 0x79AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB4u;
    // 0x79afb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79AFB4u, 0x79AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFBCu;
label_79afbc:
    // 0x79afbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79afc0:
    // 0x79afc0: 0x3e00008  jr          $ra
    ctx->pc = 0x79AFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC0u;
        // 0x79afc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AFC8u;
}
} // namespace gh_r505
