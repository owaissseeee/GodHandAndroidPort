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

// Function: func_0034FC28
// Address: 0x34fc28 - 0x34fce0
void func_0034FC28_0x34fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FC28_0x34fc28");
#endif

    switch (ctx->pc) {
        case 0x34fc50u: goto label_34fc50;
        case 0x34fc74u: goto label_34fc74;
        case 0x34fcc4u: goto label_34fcc4;
        default: break;
    }

    ctx->pc = 0x34fc28u;

    // 0x34fc28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34fc2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34fc30: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34fc34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34fc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34fc3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34fc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc40: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34fc44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34fc48: 0xc0d403a  jal         func_3500E8
    ctx->pc = 0x34FC48u;
    SET_GPR_U32(ctx, 31, 0x34FC50u);
    ctx->pc = 0x34FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC48u;
    // 0x34fc4c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3500E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3500E8u, 0x34FC48u, 0x34FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC50u;
label_34fc50:
    // 0x34fc50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34fc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc54: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x34FC54u;
    {
        const bool branch_taken_0x34fc54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fc54) {
            ctx->pc = 0x34FC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FC54u;
            // 0x34fc58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FCC8u;
            goto label_34fcc8;
        }
    }
    ctx->pc = 0x34FC5Cu;
    // 0x34fc5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34fc60: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x34FC60u;
    {
        const bool branch_taken_0x34fc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fc60) {
            ctx->pc = 0x34FC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FC60u;
            // 0x34fc64: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FCC8u;
            goto label_34fcc8;
        }
    }
    ctx->pc = 0x34FC68u;
    // 0x34fc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc6c: 0xc0da2f2  jal         func_368BC8
    ctx->pc = 0x34FC6Cu;
    SET_GPR_U32(ctx, 31, 0x34FC74u);
    ctx->pc = 0x34FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC6Cu;
    // 0x34fc70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368BC8u, 0x34FC6Cu, 0x34FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC74u;
label_34fc74:
    // 0x34fc74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc78: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x34fc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc7c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x34fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x34fc80: 0x28e300b1  slti        $v1, $a3, 0xB1
    ctx->pc = 0x34fc80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x34fc84: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34fc88: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x34fc88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x34fc8c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x34fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x34fc90: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x34fc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc94: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FC94u;
    {
        const bool branch_taken_0x34fc94 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x34FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC94u;
        // 0x34fc98: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc94) {
            ctx->pc = 0x34FCA8u;
            goto label_34fca8;
        }
    }
    ctx->pc = 0x34FC9Cu;
    // 0x34fc9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34FC9Cu;
    {
        const bool branch_taken_0x34fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC9Cu;
        // 0x34fca0: 0xac670160  sw          $a3, 0x160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc9c) {
            ctx->pc = 0x34FCBCu;
            goto label_34fcbc;
        }
    }
    ctx->pc = 0x34FCA4u;
    // 0x34fca4: 0x0  nop
    ctx->pc = 0x34fca4u;
    // NOP
label_34fca8:
    // 0x34fca8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fcac: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34FCACu;
    {
        const bool branch_taken_0x34fcac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x34fcac) {
            ctx->pc = 0x34FCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FCACu;
            // 0x34fcb0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FCC8u;
            goto label_34fcc8;
        }
    }
    ctx->pc = 0x34FCB4u;
    // 0x34fcb4: 0xac670164  sw          $a3, 0x164($v1)
    ctx->pc = 0x34fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 7));
    // 0x34fcb8: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x34fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_34fcbc:
    // 0x34fcbc: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x34FCBCu;
    SET_GPR_U32(ctx, 31, 0x34FCC4u);
    ctx->pc = 0x34FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FCBCu;
    // 0x34fcc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x34FCBCu, 0x34FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCC4u;
label_34fcc4:
    // 0x34fcc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34fcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34fcc8:
    // 0x34fcc8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34fcc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34fccc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34fcccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fcd0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34fcd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34fcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FCD8u;
        // 0x34fcdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FCE0u;
}
