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

// Function: func_002CB278
// Address: 0x2cb278 - 0x2cb340
void func_002CB278_0x2cb278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CB278_0x2cb278");
#endif

    switch (ctx->pc) {
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb310u: goto label_2cb310;
        default: break;
    }

    ctx->pc = 0x2cb278u;

    // 0x2cb278: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2cb27c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb27cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb280: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2cb280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2cb284: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x2cb284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x2cb288: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cb288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2cb28c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb290: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb294: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cb294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2cb298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cb298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb29c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2cb29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2cb2a0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2cb2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2cb2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb2a8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CB2A8u;
    {
        const bool branch_taken_0x2cb2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2A8u;
        // 0x2cb2ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2a8) {
            ctx->pc = 0x2CB320u;
            goto label_2cb320;
        }
    }
    ctx->pc = 0x2CB2B0u;
    // 0x2cb2b0: 0x2602fe00  addiu       $v0, $s0, -0x200
    ctx->pc = 0x2cb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966784));
    // 0x2cb2b4: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2cb2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2cb2b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CB2B8u;
    {
        const bool branch_taken_0x2cb2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2B8u;
        // 0x2cb2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2b8) {
            ctx->pc = 0x2CB31Cu;
            goto label_2cb31c;
        }
    }
    ctx->pc = 0x2CB2C0u;
    // 0x2cb2c0: 0xc0b2d3a  jal         func_2CB4E8
    ctx->pc = 0x2CB2C0u;
    SET_GPR_U32(ctx, 31, 0x2CB2C8u);
    ctx->pc = 0x2CB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2C0u;
    // 0x2cb2c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB4E8u, 0x2CB2C0u, 0x2CB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2C8u;
label_2cb2c8:
    // 0x2cb2c8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2cb2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb2cc: 0x14530014  bne         $v0, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CB2CCu;
    {
        const bool branch_taken_0x2cb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2CCu;
        // 0x2cb2d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2cc) {
            ctx->pc = 0x2CB320u;
            goto label_2cb320;
        }
    }
    ctx->pc = 0x2CB2D4u;
    // 0x2cb2d4: 0xc0b2d6e  jal         func_2CB5B8
    ctx->pc = 0x2CB2D4u;
    SET_GPR_U32(ctx, 31, 0x2CB2DCu);
    ctx->pc = 0x2CB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2D4u;
    // 0x2cb2d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5B8u, 0x2CB2D4u, 0x2CB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2DCu;
label_2cb2dc:
    // 0x2cb2dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2e0: 0x1233000e  beq         $s1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2CB2E0u;
    {
        const bool branch_taken_0x2cb2e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2E0u;
        // 0x2cb2e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2e0) {
            ctx->pc = 0x2CB31Cu;
            goto label_2cb31c;
        }
    }
    ctx->pc = 0x2CB2E8u;
    // 0x2cb2e8: 0xc0b2cea  jal         func_2CB3A8
    ctx->pc = 0x2CB2E8u;
    SET_GPR_U32(ctx, 31, 0x2CB2F0u);
    ctx->pc = 0x2CB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2E8u;
    // 0x2cb2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3A8u, 0x2CB2E8u, 0x2CB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2F0u;
label_2cb2f0:
    // 0x2cb2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cb2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb2f8: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB2F8u;
    SET_GPR_U32(ctx, 31, 0x2CB300u);
    ctx->pc = 0x2CB2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2F8u;
    // 0x2cb2fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB2F8u, 0x2CB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB300u;
label_2cb300:
    // 0x2cb300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cb304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb308: 0xc0b3dbe  jal         func_2CF6F8
    ctx->pc = 0x2CB308u;
    SET_GPR_U32(ctx, 31, 0x2CB310u);
    ctx->pc = 0x2CB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB308u;
    // 0x2cb30c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6F8u, 0x2CB308u, 0x2CB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB310u;
label_2cb310:
    // 0x2cb310: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x2cb310u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x2cb314: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB314u;
    {
        const bool branch_taken_0x2cb314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB314u;
        // 0x2cb318: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb314) {
            ctx->pc = 0x2CB320u;
            goto label_2cb320;
        }
    }
    ctx->pc = 0x2CB31Cu;
label_2cb31c:
    // 0x2cb31c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb320:
    // 0x2cb320: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cb320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb324: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cb324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb32c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2cb32cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb334: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB334u;
        // 0x2cb338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB33Cu;
    // 0x2cb33c: 0x0  nop
    ctx->pc = 0x2cb33cu;
    // NOP
    ctx->pc = 0x2cb340u;
}
