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

// Function: Entry_runHookAndDraw
// Address: 0x1f5e90 - 0x1f5ef8
void Entry_runHookAndDraw_0x1f5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Entry_runHookAndDraw_0x1f5e90");
#endif

    switch (ctx->pc) {
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        default: break;
    }

    ctx->pc = 0x1f5e90u;

label_1f5e90:
    // 0x1f5e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f5e94:
    // 0x1f5e94: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1f5e98:
    // 0x1f5e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f5e9c:
    // 0x1f5e9c: 0x2463f0e0  addiu       $v1, $v1, -0xF20
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963424));
label_1f5ea0:
    // 0x1f5ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5ea4:
    // 0x1f5ea4: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1f5ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1f5ea8:
    // 0x1f5ea8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f5ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5eac:
    // 0x1f5eac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f5eb0:
    // 0x1f5eb0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5eb4:
    // 0x1f5eb4: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1f5eb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5eb8:
    // 0x1f5eb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5ebc:
    // 0x1f5ebc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f5ec0:
    // 0x1f5ec0: 0x40f809  jalr        $v0
label_1f5ec4:
    if (ctx->pc == 0x1F5EC4u) {
        ctx->pc = 0x1F5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EC0u;
        // 0x1f5ec4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EC8u;
        goto label_1f5ec8;
    }
    ctx->pc = 0x1F5EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5EC8u);
        ctx->pc = 0x1F5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EC0u;
        // 0x1f5ec4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5EC0u, 0x1F5EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5EC8u;
label_1f5ec8:
    // 0x1f5ec8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1f5ecc:
    // 0x1f5ecc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f5ed0:
    // 0x1f5ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ed4:
    // 0x1f5ed4: 0xc0aaa90  jal         func_2AAA40
label_1f5ed8:
    if (ctx->pc == 0x1F5ED8u) {
        ctx->pc = 0x1F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ED4u;
        // 0x1f5ed8: 0xa462ae40  sh          $v0, -0x51C0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EDCu;
        goto label_1f5edc;
    }
    ctx->pc = 0x1F5ED4u;
    SET_GPR_U32(ctx, 31, 0x1F5EDCu);
    ctx->pc = 0x1F5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED4u;
    // 0x1f5ed8: 0xa462ae40  sh          $v0, -0x51C0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294946368), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1F5ED4u, 0x1F5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EDCu;
label_1f5edc:
    // 0x1f5edc: 0xc0aab0a  jal         func_2AAC28
label_1f5ee0:
    if (ctx->pc == 0x1F5EE0u) {
        ctx->pc = 0x1F5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EDCu;
        // 0x1f5ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EE4u;
        goto label_1f5ee4;
    }
    ctx->pc = 0x1F5EDCu;
    SET_GPR_U32(ctx, 31, 0x1F5EE4u);
    ctx->pc = 0x1F5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5EDCu;
    // 0x1f5ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1F5EDCu, 0x1F5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EE4u;
label_1f5ee4:
    // 0x1f5ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ee8:
    // 0x1f5ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5eec:
    // 0x1f5eec: 0x3e00008  jr          $ra
label_1f5ef0:
    if (ctx->pc == 0x1F5EF0u) {
        ctx->pc = 0x1F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EECu;
        // 0x1f5ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EF4u;
        goto label_1f5ef4;
    }
    ctx->pc = 0x1F5EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EECu;
        // 0x1f5ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5EF4u;
label_1f5ef4:
    // 0x1f5ef4: 0x0  nop
    ctx->pc = 0x1f5ef4u;
    // NOP
    ctx->pc = 0x1f5ef8u;
}
