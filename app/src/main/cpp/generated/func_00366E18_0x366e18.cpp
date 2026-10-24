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

// Function: func_00366E18
// Address: 0x366e18 - 0x366ec0
void func_00366E18_0x366e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366E18_0x366e18");
#endif

    switch (ctx->pc) {
        case 0x366e18u: goto label_366e18;
        case 0x366e1cu: goto label_366e1c;
        case 0x366e20u: goto label_366e20;
        case 0x366e24u: goto label_366e24;
        case 0x366e28u: goto label_366e28;
        case 0x366e2cu: goto label_366e2c;
        case 0x366e30u: goto label_366e30;
        case 0x366e34u: goto label_366e34;
        case 0x366e38u: goto label_366e38;
        case 0x366e3cu: goto label_366e3c;
        case 0x366e40u: goto label_366e40;
        case 0x366e44u: goto label_366e44;
        case 0x366e48u: goto label_366e48;
        case 0x366e4cu: goto label_366e4c;
        case 0x366e50u: goto label_366e50;
        case 0x366e54u: goto label_366e54;
        case 0x366e58u: goto label_366e58;
        case 0x366e5cu: goto label_366e5c;
        case 0x366e60u: goto label_366e60;
        case 0x366e64u: goto label_366e64;
        case 0x366e68u: goto label_366e68;
        case 0x366e6cu: goto label_366e6c;
        case 0x366e70u: goto label_366e70;
        case 0x366e74u: goto label_366e74;
        case 0x366e78u: goto label_366e78;
        case 0x366e7cu: goto label_366e7c;
        case 0x366e80u: goto label_366e80;
        case 0x366e84u: goto label_366e84;
        case 0x366e88u: goto label_366e88;
        case 0x366e8cu: goto label_366e8c;
        case 0x366e90u: goto label_366e90;
        case 0x366e94u: goto label_366e94;
        case 0x366e98u: goto label_366e98;
        case 0x366e9cu: goto label_366e9c;
        case 0x366ea0u: goto label_366ea0;
        case 0x366ea4u: goto label_366ea4;
        case 0x366ea8u: goto label_366ea8;
        case 0x366eacu: goto label_366eac;
        case 0x366eb0u: goto label_366eb0;
        case 0x366eb4u: goto label_366eb4;
        case 0x366eb8u: goto label_366eb8;
        case 0x366ebcu: goto label_366ebc;
        default: break;
    }

    ctx->pc = 0x366e18u;

label_366e18:
    // 0x366e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_366e1c:
    // 0x366e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_366e20:
    // 0x366e20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x366e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_366e24:
    // 0x366e24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_366e28:
    // 0x366e28: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x366e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_366e2c:
    // 0x366e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_366e30:
    // 0x366e30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x366e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_366e34:
    // 0x366e34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_366e38:
    // 0x366e38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x366e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_366e3c:
    // 0x366e3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x366e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_366e40:
    // 0x366e40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x366e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_366e44:
    // 0x366e44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x366e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_366e48:
    // 0x366e48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x366e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_366e4c:
    // 0x366e4c: 0xc0da3f0  jal         func_368FC0
label_366e50:
    if (ctx->pc == 0x366E50u) {
        ctx->pc = 0x366E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E4Cu;
        // 0x366e50: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366E54u;
        goto label_366e54;
    }
    ctx->pc = 0x366E4Cu;
    SET_GPR_U32(ctx, 31, 0x366E54u);
    ctx->pc = 0x366E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E4Cu;
    // 0x366e50: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x366E4Cu, 0x366E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E54u;
label_366e54:
    // 0x366e54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366e58:
    // 0x366e58: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x366e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
label_366e5c:
    // 0x366e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x366e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_366e60:
    // 0x366e60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x366e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366e64:
    // 0x366e64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x366e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_366e68:
    // 0x366e68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_366e6c:
    if (ctx->pc == 0x366E6Cu) {
        ctx->pc = 0x366E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E68u;
        // 0x366e6c: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x366E70u;
        goto label_366e70;
    }
    ctx->pc = 0x366E68u;
    {
        const bool branch_taken_0x366e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E68u;
        // 0x366e6c: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x366e68) {
            ctx->pc = 0x366E90u;
            goto label_366e90;
        }
    }
    ctx->pc = 0x366E70u;
label_366e70:
    // 0x366e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366e74:
    // 0x366e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_366e78:
    // 0x366e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_366e7c:
    // 0x366e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_366e80:
    // 0x366e80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_366e84:
    // 0x366e84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x366e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_366e88:
    // 0x366e88: 0x80da3a4  j           func_368E90
label_366e8c:
    if (ctx->pc == 0x366E8Cu) {
        ctx->pc = 0x366E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E88u;
        // 0x366e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366E90u;
        goto label_366e90;
    }
    ctx->pc = 0x366E88u;
    ctx->pc = 0x366E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366E88u;
    // 0x366e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E90u, 0x366E88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x366E90u;
label_366e90:
    // 0x366e90: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x366e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_366e94:
    // 0x366e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x366e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_366e98:
    // 0x366e98: 0x40f809  jalr        $v0
label_366e9c:
    if (ctx->pc == 0x366E9Cu) {
        ctx->pc = 0x366E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E98u;
        // 0x366e9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366EA0u;
        goto label_366ea0;
    }
    ctx->pc = 0x366E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x366EA0u);
        ctx->pc = 0x366E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E98u;
        // 0x366e9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366E98u, 0x366EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x366EA0u;
label_366ea0:
    // 0x366ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366ea4:
    // 0x366ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_366ea8:
    // 0x366ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_366eac:
    // 0x366eac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_366eb0:
    // 0x366eb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x366eb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_366eb4:
    // 0x366eb4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x366eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_366eb8:
    // 0x366eb8: 0x3e00008  jr          $ra
label_366ebc:
    if (ctx->pc == 0x366EBCu) {
        ctx->pc = 0x366EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EB8u;
        // 0x366ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366EC0u;
        goto label_fallthrough_0x366eb8;
    }
    ctx->pc = 0x366EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366EB8u;
        // 0x366ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x366eb8:
    ctx->pc = 0x366EC0u;
}
