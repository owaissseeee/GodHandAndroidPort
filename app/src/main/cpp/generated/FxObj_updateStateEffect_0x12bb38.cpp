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

// Function: FxObj_updateStateEffect
// Address: 0x12bb38 - 0x12bbe0
void FxObj_updateStateEffect_0x12bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FxObj_updateStateEffect_0x12bb38");
#endif

    switch (ctx->pc) {
        case 0x12bba4u: goto label_12bba4;
        case 0x12bbd0u: goto label_12bbd0;
        default: break;
    }

    ctx->pc = 0x12bb38u;

    // 0x12bb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bb3c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12bb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bb44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12bb48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12bb4c: 0x3404c020  ori         $a0, $zero, 0xC020
    ctx->pc = 0x12bb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x12bb50: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x12bb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x12bb54: 0xdce302f0  ld          $v1, 0x2F0($a3)
    ctx->pc = 0x12bb54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 752)));
    // 0x12bb58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12bb5c: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12BB5Cu;
    {
        const bool branch_taken_0x12bb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB5Cu;
        // 0x12bb60: 0x8ce315f4  lw          $v1, 0x15F4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 5620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb5c) {
            ctx->pc = 0x12BBACu;
            goto label_12bbac;
        }
    }
    ctx->pc = 0x12BB64u;
    // 0x12bb64: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x12bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12bb68: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12BB68u;
    {
        const bool branch_taken_0x12bb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB68u;
        // 0x12bb6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb68) {
            ctx->pc = 0x12BBD4u;
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BB70u;
    // 0x12bb70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12bb70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bb74: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x12bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x12bb78: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12bb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb7c: 0xace215f4  sw          $v0, 0x15F4($a3)
    ctx->pc = 0x12bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5620), GPR_U32(ctx, 2));
    // 0x12bb80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12bb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12bb84: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x12bb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x12bb88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bb90: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x12bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bb94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x12bb94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x12bb98: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x12bb98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x12bb9c: 0xc0c1a40  jal         func_306900
    ctx->pc = 0x12BB9Cu;
    SET_GPR_U32(ctx, 31, 0x12BBA4u);
    ctx->pc = 0x12BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB9Cu;
    // 0x12bba0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306900u, 0x12BB9Cu, 0x12BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBA4u;
label_12bba4:
    // 0x12bba4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12BBA4u;
    {
        const bool branch_taken_0x12bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBA4u;
        // 0x12bba8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba4) {
            ctx->pc = 0x12BBD4u;
            goto label_12bbd4;
        }
    }
    ctx->pc = 0x12BBACu;
label_12bbac:
    // 0x12bbac: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x12bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12bbb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBB0u;
    {
        const bool branch_taken_0x12bbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBB0u;
        // 0x12bbb4: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbb0) {
            ctx->pc = 0x12BBD0u;
            goto label_12bbd0;
        }
    }
    ctx->pc = 0x12BBB8u;
    // 0x12bbb8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x12bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12bbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12bbc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x12bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12bbc4: 0xace215f4  sw          $v0, 0x15F4($a3)
    ctx->pc = 0x12bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5620), GPR_U32(ctx, 2));
    // 0x12bbc8: 0xc0c1880  jal         func_306200
    ctx->pc = 0x12BBC8u;
    SET_GPR_U32(ctx, 31, 0x12BBD0u);
    ctx->pc = 0x12BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBC8u;
    // 0x12bbcc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x12BBC8u, 0x12BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBD0u;
label_12bbd0:
    // 0x12bbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bbd4:
    // 0x12bbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD4u;
        // 0x12bbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BBDCu;
    // 0x12bbdc: 0x0  nop
    ctx->pc = 0x12bbdcu;
    // NOP
    ctx->pc = 0x12bbe0u;
}
