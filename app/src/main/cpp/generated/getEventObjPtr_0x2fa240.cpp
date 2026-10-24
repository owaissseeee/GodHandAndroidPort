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

// Function: getEventObjPtr
// Address: 0x2fa240 - 0x2fa310
void getEventObjPtr_0x2fa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEventObjPtr_0x2fa240");
#endif

    switch (ctx->pc) {
        case 0x2fa288u: goto label_2fa288;
        case 0x2fa2a0u: goto label_2fa2a0;
        case 0x2fa2ccu: goto label_2fa2cc;
        case 0x2fa2e4u: goto label_2fa2e4;
        case 0x2fa2f8u: goto label_2fa2f8;
        default: break;
    }

    ctx->pc = 0x2fa240u;

    // 0x2fa240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fa244: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fa244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fa248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fa24c: 0x62c02  srl         $a1, $a2, 16
    ctx->pc = 0x2fa24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2fa250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa258: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2FA258u;
    {
        const bool branch_taken_0x2fa258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA258u;
        // 0x2fa25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa258) {
            ctx->pc = 0x2FA2F8u;
            goto label_2fa2f8;
        }
    }
    ctx->pc = 0x2FA260u;
    // 0x2fa260: 0x24020605  addiu       $v0, $zero, 0x605
    ctx->pc = 0x2fa260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x2fa264: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FA264u;
    {
        const bool branch_taken_0x2fa264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA264u;
        // 0x2fa268: 0x240203d6  addiu       $v0, $zero, 0x3D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 982));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa264) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA26Cu;
    // 0x2fa26c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2fa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2fa270: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2fa270u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2fa274: 0x24516af0  addiu       $s1, $v0, 0x6AF0
    ctx->pc = 0x2fa274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x2fa278: 0x24050605  addiu       $a1, $zero, 0x605
    ctx->pc = 0x2fa278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x2fa27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa280: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x2FA280u;
    SET_GPR_U32(ctx, 31, 0x2FA288u);
    ctx->pc = 0x2FA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA280u;
    // 0x2fa284: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x2FA280u, 0x2FA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA288u;
label_2fa288:
    // 0x2fa288: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FA288u;
    {
        const bool branch_taken_0x2fa288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa288) {
            ctx->pc = 0x2FA28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA288u;
            // 0x2fa28c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA290u;
    // 0x2fa290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa294: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fa294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa298: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x2FA298u;
    SET_GPR_U32(ctx, 31, 0x2FA2A0u);
    ctx->pc = 0x2FA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA298u;
    // 0x2fa29c: 0x24050600  addiu       $a1, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x2FA298u, 0x2FA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2A0u;
label_2fa2a0:
    // 0x2fa2a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA2A0u;
    {
        const bool branch_taken_0x2fa2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2A0u;
        // 0x2fa2a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2a0) {
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA2A8u;
label_2fa2a8:
    // 0x2fa2a8: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FA2A8u;
    {
        const bool branch_taken_0x2fa2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2A8u;
        // 0x2fa2ac: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2a8) {
            ctx->pc = 0x2FA2ECu;
            goto label_2fa2ec;
        }
    }
    ctx->pc = 0x2FA2B0u;
    // 0x2fa2b0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2fa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2fa2b4: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2fa2b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2fa2b8: 0x24516af0  addiu       $s1, $v0, 0x6AF0
    ctx->pc = 0x2fa2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x2fa2bc: 0x240503d6  addiu       $a1, $zero, 0x3D6
    ctx->pc = 0x2fa2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 982));
    // 0x2fa2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2c4: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x2FA2C4u;
    SET_GPR_U32(ctx, 31, 0x2FA2CCu);
    ctx->pc = 0x2FA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2C4u;
    // 0x2fa2c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x2FA2C4u, 0x2FA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2CCu;
label_2fa2cc:
    // 0x2fa2cc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA2CCu;
    {
        const bool branch_taken_0x2fa2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2cc) {
            ctx->pc = 0x2FA2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA2CCu;
            // 0x2fa2d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA2D4u;
    // 0x2fa2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa2dc: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x2FA2DCu;
    SET_GPR_U32(ctx, 31, 0x2FA2E4u);
    ctx->pc = 0x2FA2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2DCu;
    // 0x2fa2e0: 0x24050668  addiu       $a1, $zero, 0x668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x2FA2DCu, 0x2FA2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2E4u;
label_2fa2e4:
    // 0x2fa2e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA2E4u;
    {
        const bool branch_taken_0x2fa2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2E4u;
        // 0x2fa2e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2e4) {
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA2ECu;
label_2fa2ec:
    // 0x2fa2ec: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2fa2ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2fa2f0: 0xc0a5f14  jal         func_297C50
    ctx->pc = 0x2FA2F0u;
    SET_GPR_U32(ctx, 31, 0x2FA2F8u);
    ctx->pc = 0x2FA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2F0u;
    // 0x2fa2f4: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C50u, 0x2FA2F0u, 0x2FA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2F8u;
label_2fa2f8:
    // 0x2fa2f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fa2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fa2fc:
    // 0x2fa2fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa304: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA304u;
        // 0x2fa308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA30Cu;
    // 0x2fa30c: 0x0  nop
    ctx->pc = 0x2fa30cu;
    // NOP
    ctx->pc = 0x2fa310u;
}
