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

// Function: func_002DC420
// Address: 0x2dc420 - 0x2dc4b8
void func_002DC420_0x2dc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC420_0x2dc420");
#endif

    switch (ctx->pc) {
        case 0x2dc438u: goto label_2dc438;
        case 0x2dc450u: goto label_2dc450;
        case 0x2dc474u: goto label_2dc474;
        case 0x2dc4a4u: goto label_2dc4a4;
        default: break;
    }

    ctx->pc = 0x2dc420u;

    // 0x2dc420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc430: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC430u;
    SET_GPR_U32(ctx, 31, 0x2DC438u);
    ctx->pc = 0x2DC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC430u;
    // 0x2dc434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC430u, 0x2DC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC438u;
label_2dc438:
    // 0x2dc438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dc438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc43c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2dc43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2dc440: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC440u;
    {
        const bool branch_taken_0x2dc440 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc440) {
            ctx->pc = 0x2DC444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC440u;
            // 0x2dc444: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4A8u;
            goto label_2dc4a8;
        }
    }
    ctx->pc = 0x2DC448u;
    // 0x2dc448: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC448u;
    SET_GPR_U32(ctx, 31, 0x2DC450u);
    ctx->pc = 0x2DC44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC448u;
    // 0x2dc44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC448u, 0x2DC450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC450u;
label_2dc450:
    // 0x2dc450: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC450u;
    {
        const bool branch_taken_0x2dc450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc450) {
            ctx->pc = 0x2DC454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC450u;
            // 0x2dc454: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4A8u;
            goto label_2dc4a8;
        }
    }
    ctx->pc = 0x2DC458u;
    // 0x2dc458: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc45c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc460: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc464: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC464u;
    {
        const bool branch_taken_0x2dc464 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc464) {
            ctx->pc = 0x2DC468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC464u;
            // 0x2dc468: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4A8u;
            goto label_2dc4a8;
        }
    }
    ctx->pc = 0x2DC46Cu;
    // 0x2dc46c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC46Cu;
    SET_GPR_U32(ctx, 31, 0x2DC474u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC46Cu, 0x2DC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC474u;
label_2dc474:
    // 0x2dc474: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC474u;
    {
        const bool branch_taken_0x2dc474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc474) {
            ctx->pc = 0x2DC478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC474u;
            // 0x2dc478: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4A8u;
            goto label_2dc4a8;
        }
    }
    ctx->pc = 0x2DC47Cu;
    // 0x2dc47c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x2dc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2dc480: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dc480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc484: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc48c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc48cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dc490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc494: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc498: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2dc498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2dc49c: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DC49Cu;
    SET_GPR_U32(ctx, 31, 0x2DC4A4u);
    ctx->pc = 0x2DC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC49Cu;
    // 0x2dc4a0: 0xa20302f6  sb          $v1, 0x2F6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DC49Cu, 0x2DC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A4u;
label_2dc4a4:
    // 0x2dc4a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc4a8:
    // 0x2dc4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4B0u;
        // 0x2dc4b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4B8u;
}
