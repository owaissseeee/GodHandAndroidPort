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
// Function: sitofp
// Address: 0x79bb10 - 0x79bbc8
void sitofp_0x79bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x79bb10");
#endif

    switch (ctx->pc) {
        case 0x79bb90u: goto label_79bb90;
        case 0x79bbbcu: goto label_79bbbc;
        default: break;
    }

    ctx->pc = 0x79bb10u;

    // 0x79bb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79bb14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79bb18: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x79bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x79bb1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79bb20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x79bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x79bb24: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BB24u;
    {
        const bool branch_taken_0x79bb24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB24u;
        // 0x79bb28: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb24) {
            ctx->pc = 0x79BB38u;
            goto label_79bb38;
        }
    }
    ctx->pc = 0x79BB2Cu;
    // 0x79bb2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bb30: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79BB30u;
    {
        const bool branch_taken_0x79bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB30u;
        // 0x79bb34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb30) {
            ctx->pc = 0x79BBB4u;
            goto label_79bbb4;
        }
    }
    ctx->pc = 0x79BB38u;
label_79bb38:
    // 0x79bb38: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79bb3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79BB3Cu;
    {
        const bool branch_taken_0x79bb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB3Cu;
        // 0x79bb40: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb3c) {
            ctx->pc = 0x79BB68u;
            goto label_79bb68;
        }
    }
    ctx->pc = 0x79BB44u;
    // 0x79bb44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79bb48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BB48u;
    {
        const bool branch_taken_0x79bb48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB48u;
        // 0x79bb4c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb48) {
            ctx->pc = 0x79BB60u;
            goto label_79bb60;
        }
    }
    ctx->pc = 0x79BB50u;
    // 0x79bb50: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x79bb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x79bb54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79BB58u;
    {
        const bool branch_taken_0x79bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB58u;
        // 0x79bb5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb58) {
            ctx->pc = 0x79BBC0u;
            goto label_79bbc0;
        }
    }
    ctx->pc = 0x79BB60u;
label_79bb60:
    // 0x79bb60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79BB60u;
    {
        const bool branch_taken_0x79bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB60u;
        // 0x79bb64: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb60) {
            ctx->pc = 0x79BB6Cu;
            goto label_79bb6c;
        }
    }
    ctx->pc = 0x79BB68u;
label_79bb68:
    // 0x79bb68: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x79bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_79bb6c:
    // 0x79bb6c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x79bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79bb70: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79bb74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bb78: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x79bb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x79bb7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79BB7Cu;
    {
        const bool branch_taken_0x79bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB7Cu;
        // 0x79bb80: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb7c) {
            ctx->pc = 0x79BBB4u;
            goto label_79bbb4;
        }
    }
    ctx->pc = 0x79BB84u;
    // 0x79bb84: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x79bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79bb88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79bb88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79bb8c: 0x0  nop
    ctx->pc = 0x79bb8cu;
    // NOP
label_79bb90:
    // 0x79bb90: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x79bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x79bb94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x79bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x79bb98: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79bb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb9c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x79bb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79bba0: 0x0  nop
    ctx->pc = 0x79bba0u;
    // NOP
    // 0x79bba4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79BBA4u;
    {
        const bool branch_taken_0x79bba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bba4) {
            ctx->pc = 0x79BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb90;
        }
    }
    ctx->pc = 0x79BBACu;
    // 0x79bbac: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x79bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x79bbb0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x79bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_79bbb4:
    // 0x79bbb4: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79BBB4u;
    SET_GPR_U32(ctx, 31, 0x79BBBCu);
    ctx->pc = 0x79BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBB4u;
    // 0x79bbb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79BBB4u, 0x79BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBBCu;
label_79bbbc:
    // 0x79bbbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bbc0:
    // 0x79bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBC0u;
        // 0x79bbc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BBC8u;
}
} // namespace gh_r022
